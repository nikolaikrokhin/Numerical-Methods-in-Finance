#ifndef BinModel01_hpp
#define BinModel01_hpp

// compute risk-neutral probability
double RiskNeutProb(double U, double D, double R);

// compute the stock price at node n,i
double S(double S0, double U, double D, int n, int i);

// input, display and check model data
int GetInputData(double& S0, double& U, double& R, double& D);

#endif /* BinModel01_hpp */