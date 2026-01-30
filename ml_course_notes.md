# Machine Learning Specialization

## General Notes
### Nomenclature
- model -> function
- features -> inputs
- targets -> results

### Traditional Programming vs ML
1. Traditional
input -> code -> output
- every single instruction is explicitly declared

2. ML
input (feature) -> model (function) -> output (target)
- ML is fundamentally about approximating a function
- its a prediction mechanism
- "statistical approximation of reality"

### Types
1. Supervised Learning
    - most common
    - involves labeling, answer bank
2. Unsupervised Learning
    - groups data without knowing its categories
3. Reinforcement Learning
    - involves reward loop

### Applications
- recommendation feeds
- self-driving
- photo identification
- voice transcription
- medical diagnoses
- LLMs


Underfitting versus overfitting

## Course 1: Regression and Clasification
- linear regression
- logistic regression
- cost / loss function
- gradient descent

- Linear Regression: Predicts a value, given a value
    - Cost Function -> calculates variance between model and targets
- Logistic Regression: Predicts a label / category
- Gradient Descent - An algorithm for minimizing the cost function.

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

## Diagnostics
Ways to quickly test if we're using an adequate model / algorithim.

### Evaluating a model
- when you have multiple features its more difficult to plot
- Split your training data into 2
    - 70% train, 30% test
- Test as you go

### Automate model selection
Example: If you're predicting housing prices, what order polynomial should one use?
- calculate test set of each order?
    - overly optimistic, not the best approach  
- split data into 3 sets
    - training (60%), cross-validation (20%) (validation, development, dev set), test (20%)
    - compute error on each 

? what is the generalization error?

### Bias and variance
J_cv = cross validation error
J_train = training error

High bias (underfit) => J_train is high (around equal to J_cv)
- not doing well on the training set
High variance (overfit) => J_cv is much higher that J_train
- does better on cv
High bias and high variance

Regularization