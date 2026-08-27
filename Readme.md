# OR Perceptron

C++ implementation of a single-neuron perceptron trained from scratch to learn the OR logic gate.

## Method

- **Architecture:** 2:1
- **Activation:** Step function
- **Initial weights:** \(w1=0, w2=0\)
- **Initial bias:** \(b=0\)
- **Learning rate:** \(n=0.1\)
- **Learning rule:** Perceptron learning rule
- **Stopping criterion:** Zero classification errors

For each training sample:

$$
z = w_1x_1 + w_2x_2 + b
$$

$$
\hat{y} =
\begin{cases}
1, & z \geq 0 \\
0, & z < 0
\end{cases}
$$

$$
e = y - \hat{y}
$$

Weights and bias are updated using:

$$
w_i \leftarrow w_i + \eta e x_i
$$

$$
b \leftarrow b + \eta e
$$

## Dataset

| \(x1\) | \(x2\) | Target |
|:---:|:---:|:---:|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

## Results

The perceptron successfully learned the OR logic gate with **100% classification accuracy**.

| Input | Target | Prediction |
|:---:|---:|---:|
| (0, 0) | 0 | 0 |
| (0, 1) | 1 | 1 |
| (1, 0) | 1 | 1 |
| (1, 1) | 1 | 1 |

**Accuracy: 100%**

## Technologies

- C++
- STL `vector`
- Perceptron learning algorithm
