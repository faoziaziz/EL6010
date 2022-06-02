#include<eigen3/Eigen/Eigen>
#include<iostream>
#include<vector>


typedef float Scalar;
typedef Eigen::MatrixXf Matrix;
typedef Eigen::RowVectorXf RowVector;
typedef Eigen::VectorXf colVector;

/* neural network implementation class */
class NeuralNetwork {
  public NeuralNetwork(std::vector<uint> topology, Scalar learningRate=Scallar(0.005));

  void propagateForward(RowVector& input);
  void propageteBackward(RowVector& output);
  void calcErrors(RowVector& output);
  void updateWeight();
  void train(std::vector<RowVector*> data);

  std::vector<RowVector*> neuronLayers;
  std::vector<RowVector*> cacheLayers;
  std::vector<RowVector*> deltas;
  std::vector<Matrix*> weights;
  Scalar learningRates;
  
}
