#ifndef Options01_hpp
#define Options01_hpp

// input, display and check option data
int GetInputData(int& N, double& K);

// pricing European option
double PriceByCRR(double S0, double U, double D, double R, int N, double K);

// compute call payoff
double CallPayoff(double z, double K);

#endif /* Options01_hpp */