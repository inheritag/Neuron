#include "../include/Neuron.h"
#include<iostream>
using namespace std;
int main(){
  Neuron *nr = new Neuron(0.4);
	cout<<"Activated value  : "<<nr->getActVal()<<"\n";
  cout<<"Derived value after activation : "<<nr->getDerVal()<<"\n";

}
