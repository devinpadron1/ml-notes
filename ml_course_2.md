## Course 2: Advanced Learning Algorithms

## Nomenclature
- activation

## Neural Networks

### Adam Algorithm
- dynamic learning rate (alpha)
- faster than gradient descent
- requires initial learning rate

### Types of Layers
- Dense: activation in a neuron is a function of every input of prev layer
- Convolutional: activation in neuron is a function of a fraction input of prev layer
    - computes faster (why?)
    - less prone to overfitting

### Type of Classification
Binary: a feature can have one of two labels
Multi-class: a feature can have one of multiple labels
Multi-label: a feature can have multiple labels

## Activation functions
- Sigmoid
- Softmax
    - Used in multi-class classification problems
    - Commonly used in the output layer of a neural network
    - Output is a vector of probabilities
    - Loss function associated is cross-entropy loss
- ReLU (Rectified Linear Unit)
    - Used for every layer except last (in general)

## Questions for me
- What is an activation function?
- Why is Relu generally used for neural networks?
- Why not use Sigmoid?
- If neural networks can be used to classify things, how does this differ from Deep Learning?
- When should you use Relu vs Softmax in the output layer?

### Other topics
#### Computation Graphs
- show how cost is computed step by step
- simplifies the computation of derivatives, breaking them into smaller steps
- backprop is an efficient way to compute derivatives
    - Why? Efficient for computers?
