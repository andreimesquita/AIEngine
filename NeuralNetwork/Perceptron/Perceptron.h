#ifndef NEURALNETWORK_PERCEPTRON_H
#define NEURALNETWORK_PERCEPTRON_H
#include "../Common/Neuron.h"

class Perceptron
{
private:
    std::unique_ptr<Neuron> _neuron;
    const float _learningRate = 0.1;
    FloatFunction _activationFunction;

public:
    Perceptron(int weightsLength);
    ~Perceptron();
    void print(std::ostream& stream);
    void recover(std::istream& stream);
    void setActivationFunction(FloatFunction activationFunction);
    float feedforward(const Matrix& inputs);
    void train(const Matrix& inputs, const float output);
    Neuron& getNeuron();
};
#endif //NEURALNETWORK_PERCEPTRON_H
