import tensorflow as tf
import numpy as np
import matplotlib.pyplot as plt
import serial

path_to_datasets = "../neural_network/dataset_publications/MLP/data/data"

# Training data
train_X_val = np.load(f"{path_to_datasets}/X_val.npy")
train_X_signal = train_X_val[::,:-2] # remove frequency at the end to get a good looking signal
train_X_freq = train_X_val[::,-2:] # frequency handled separately
train_X_PCA = np.load(f"{path_to_datasets}/X_train.npy")

train_Y_temp = np.load(f"{path_to_datasets}/y_train.npy")

# Test data
test_X_PCA = np.load(f"{path_to_datasets}/X_test.npy")
test_Y_temp = np.load(f"{path_to_datasets}/y_test.npy")

# Vectorize Y for training and test
# Classes :
# - [0] : 'A' (Atrial premature contraction)
# - [1] : 'L' (Left bundle branch block fluctuation)
# - [2] : 'N' (Normal)
# - [3] : 'R' (Right bundle branch block fluctuation)
# - [4] : 'V' (premature ventricular contraction)

def vectorize_Y(arr):
    mapping = {'A': [1, 0, 0, 0, 0],
               'L': [0, 1, 0, 0, 0],
               'N': [0, 0, 1, 0, 0],
               'R': [0, 0, 0, 1, 0],
               'V': [0, 0, 0, 0, 1]}
    
    res = np.array([mapping[val] for val in arr])
    return res

def devectorize_Y(vectorized_arr):
    mapping = {(1, 0, 0, 0, 0): 'A',
                       (0, 1, 0, 0, 0): 'L',
                       (0, 0, 1, 0, 0): 'N',
                       (0, 0, 0, 1, 0): 'R',
                       (0, 0, 0, 0, 1): 'V'}
    res = np.array([mapping[tuple(vec)] for vec in vectorized_arr])
    return res

# Vectorize train and test data
train_Y = vectorize_Y(train_Y_temp)
test_Y = vectorize_Y(test_Y_temp)

print(f"Input shape (PCA) : {train_X_PCA.shape}")
print(f"Output shape : {train_Y.shape}")

# Comptage des différentes classifications

def count_occurrences(arr):
    unique, counts = np.unique(arr, return_counts=True)
    return dict(zip(unique, counts))

count_occurrences(train_Y_temp)

##################################### MLP Start #####################################

# MLP Layers - post PCA NN

input_layer = tf.keras.Input(shape=(train_X_PCA.shape[1],))
hidden1 = tf.keras.layers.Dense(64, activation='relu')(input_layer)
hidden2 = tf.keras.layers.Dense(64, activation='relu')(hidden1)
output_layer = tf.keras.layers.Dense(5, activation='softmax')(hidden2)

model = tf.keras.models.Model(inputs=input_layer, outputs=output_layer, name="MLP-cardIAc-V1")

model.summary()

# Compile and train the model

model.compile(optimizer='adam', loss='categorical_crossentropy', metrics=['accuracy'])

history = model.fit(
    train_X_PCA, 
    train_Y, 
    epochs = 15, 
    batch_size=50,
    validation_split=0.2
)

# Plot the accuracy over epochs

plt.plot(history.history['accuracy'], label='Training Accuracy')
plt.plot(history.history['val_accuracy'], label='Validation Accuracy')
plt.title('Model Accuracy')
plt.xlabel('Epoch')
plt.ylabel('Accuracy')
plt.legend()
plt.show()

model.save("MLP_cardIAc.keras")