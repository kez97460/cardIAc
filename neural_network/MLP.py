# TensorFlow and tf.keras
import tensorflow as tf

# Helper libraries
import numpy as np
import matplotlib.pyplot as plt

train_dataset = np.load("./neural_network/dataset_publications/MLP/data/data/X_test.npy", 'r')
print(train_dataset.shape)

