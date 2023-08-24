#ifndef Options04_hpp
#define Options04_hpp

#include "BinModel02.hpp"

//inputting and displaying option data
int GetInputData(int& N, double &K);

// ricing European option
double PriceByCRR(BinModel Model, int N, double K, double(*Payoff)(double z, double K));

//computing call payoff
double CallPayoff(double z, double K);

//computing put payoff
double PutPayoff(double z, double K);

#endif