#include "../include/Neuron.h"
#include<cmath>

Neuron::Neuron(double val){
  this->val = val;
  activate();
  derivative();
}

void Neuron::activate(){
  this->actVal = this->val / (1 + abs(this->val));
}

void Neuron::derivative(){
  this->derVal = this->actVal * (1 - this->actVal);
}

