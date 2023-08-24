#ifndef Options03_hpp
#define Options03_hpp

//inputting and displaying option data
int GetInputData(int& N, double &K);

// ricing European option
double PriceByCRR(double S0, double U, double D, double R, int N, double K, double(*Payoff)(double z, double K));

//computing call payoff
double CallPayoff(double z, double K);

//computing put payoff
double PutPayoff(double z, double K);

#endif

