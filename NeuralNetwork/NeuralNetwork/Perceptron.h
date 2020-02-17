#ifndef NEURALNETWORK_PERCEPTRON_H
#define NEURALNETWORK_PERCEPTRON_H
#include "Neuron.h"

class Perceptron
{
private:
    Neuron* _neuron = nullptr;
    const float _learningRate = 0.1;

public:
    Perceptron(int weightsLength);
    ~Perceptron();
    float feedforward(const Matrix& inputs);
    void train(const Matrix& inputs, const float output);
    Neuron* getNeuron() const;
};
#endif //NEURALNETWORK_PERCEPTRON_H
