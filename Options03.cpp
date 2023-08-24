#include "Options03.hpp"
#include "BinModel01.hpp"
#include <iostream>
#include <cmath>
using namespace std;

int GetInputData(int& N, double& K) {
    cout << "Enter steps to expiry N: "; cin >> N;
    cout << "Enter strike price K: "; cin >> K;
    cout << endl;
    //check value ranges
    if (N <= 0 || K <= 0) {
        cout << "Illegal data ranges" << endl;
        cout << "Terminating program" << endl;
        return 1;
    }
    return 0;
}

int fact(int n){

     return (n==0) || (n==1) ? 1 : n* fact(n-1);
}

double PriceByCRR(double S0, double U, double D, double R, int N, double K, double (*Payoff) (double z, double K)) {
    double q = RiskNeutProb(U, D, R);
    int i = 0;
    double p = 0.0;
    while (i <= N) {
        p += fact(N) / (fact(i) * fact(N - i)) * pow(q, i) * pow(1 - q, N - i) * Payoff(S(S0, U, D, N, i), K);
        i++;
    }
    return p / pow(R, N);
}

double CallPayoff(double z, double K) {
    if (z > K) return z - K;
    return 0.0;
}

double PutPayoff(double z, double K) {
    if (K > z) return K - z;
    return 0.0;
}
