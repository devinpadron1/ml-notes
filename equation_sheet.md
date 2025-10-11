## Model
$$f_{\mathbf{w}, b}(\mathbf{x}^{(i)}) = \mathbf{w}^\top \mathbf{x}^{(i)} + b$$
$$\hat{y}^{(i)} = f_{\mathbf{w}, b}(\mathbf{x}^{(i)})$$
## Cost function
$$J(\mathbf{w}, b) = \frac{1}{2m} \sum_{i=1}^{m} \left(\hat{y}^{(i)} - y^{(i)}\right)^2$$
## Loss function
$$L\!\left(\hat{y}^{(i)}, y^{(i)}\right) = \frac{1}{2} \left(\hat{y}^{(i)} - y^{(i)}\right)^2$$
## Gradient
$$\frac{\partial J(\mathbf{w}, b)}{\partial w_j} = \frac{1}{m} \sum_{i=1}^{m} \left(\hat{y}^{(i)} - y^{(i)}\right) x_j^{(i)}$$
$$\frac{\partial J(\mathbf{w}, b)}{\partial b} = \frac{1}{m} \sum_{i=1}^{m} \left(\hat{y}^{(i)} - y^{(i)}\right)$$
## Gradient Descent
$$w_j := w_j - \alpha \frac{\partial J(\mathbf{w}, b)}{\partial w_j}$$
$$b := b - \alpha \frac{\partial J(\mathbf{w}, b)}{\partial b}$$
