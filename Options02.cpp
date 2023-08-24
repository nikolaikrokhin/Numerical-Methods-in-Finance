#include "Options02.hpp"
#include "BinModel01.hpp"
#include <iostream>
#include <cmath>
using namespace std;

int GetInputData(int* PtrN, double* PtrK)
{
    cout << "Enter steps to expiry N: "; cin >> *PtrN;
    cout << "Enter strike price K: "; cin >> *PtrK;
    cout << endl;
    return 0;
}

int fact(int n){

     return (n==0) || (n==1) ? 1 : n* fact(n-1);
}

double PriceByCRR(double S0, double U, double D, double R, int N, double K)
{
    double q = RiskNeutProb(U, D, R);
    int i = 0;
    double p = 0.0;
    while (i <= N)
    {
        p += fact(N) / (fact(i) * fact(N - i)) * pow(q, i) * pow(1 - q, N - i) * CallPayoff(S(S0, U, D, N, i), K);
        i++;
    }
    return p / pow(R, N);
}