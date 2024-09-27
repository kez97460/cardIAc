# TensorFlow and tf.keras
import tensorflow as tf

# Helper libraries
import numpy as np
import matplotlib.pyplot as plt


train_dataset = np.load("./neural_network/dataset_publications/MLP/data/data/X.npy")
print("Training Dataset Shape :", train_dataset.shape)
train_dataset = train_dataset[::,:-2]

result_dataset = np.load("./neural_network/dataset_publications/MLP/data/data/y.npy")
print("Test Dataset Shape :", result_dataset.shape)

# Print the whole dataset in one graph to see the global shape
for i in range(5000) :
    plt.plot(np.arange(0, (train_dataset.shape[1])), train_dataset[i])
    plt.subplot()

plt.show()

model = tf.keras.Sequential([
    tf.keras.layers.Flatten(input_shape=(181)),
    tf.keras.layers.Dense(128, activation='relu'),
    tf.keras.layers.Dense(128)
])

model.compile(optimizer='adam',
              loss=tf.keras.losses.SparseCategoricalCrossentropy(from_logits=True),
              metrics=['accuracy'])

model.fit(train_dataset, result_dataset, epochs=20)
