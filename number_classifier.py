'''
Numeric classification task.
Given the images of handwritten digits, classify values from 0 to 9 
'''

import numpy as np
import torch.nn as nn
import matplotlib.pyplot as plt

# Get the data
X, y = np.load("data/X.npy"), np.load("data/y.npy")  # Uppercase denotes a matrix
X, y = X[0:1000], y[0:1000]  # Slice of 0 and 1 digits 
# row = entry, col = pixels / contents

m, n = X.shape
fig, axes = plt.subplots(8,8, figsize=(8,8))
fig.tight_layout(pad=0.3)


def show_numbers():
    ''' Visualize random entries of numbers ''' 
    for _, ax in enumerate(axes.flat):
        random_idx = np.random.randint(m)

        X_random_reshaped = X[random_idx].reshape((20,20)).T  # transpose
        ax.imshow(X_random_reshaped, cmap='gray')

        ax.set_title(y[random_idx, 0])
        ax.set_axis_off()

    plt.show()

# show_numbers()

# Neural Network
model = nn.Sequential(
    nn.Linear(400, 25),
    nn.Sigmoid(),
    nn.Linear(25, 15),
    nn.Sigmoid(),
    nn.Linear(15, 1),
    nn.Sigmoid()
)

for layer in model:
    print(layer)

'''
A neural network is a type of ML model.
Tensors are data structures similar to arrays and matrices. Tensors can run on GPUs unlike numpy's ndarrays.

TODO: Understand every single parameter in the nn.
What is Linear, Sigmoid, Sequential. Why are we using these?
What even is a neural network.
'''