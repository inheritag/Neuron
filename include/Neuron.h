#ifndef _NEURON_H_
#define _NEURON_H_

#include<iostream>
using namespace std;

class Neuron{

public:

  Neuron(double val);
  void activate();
  void derivative();

  double getVal() { return this->val; }
  double getActVal() { return this->actVal; }
  double getDerVal() { return this->derVal; }

private:
  double val;
  double actVal;
  double derVal;

};






#endif
