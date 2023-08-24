#ifndef Options02_hpp
#define Options02_hpp

//inputting and displaying option data
int GetInputData(int* PtrN, double* PtrK);

// ricing European option
double PriceByCRR(double S0, double U, double D, double R, int N, double K);

//computing call payoff
double CallPayoff(double z, double k);
