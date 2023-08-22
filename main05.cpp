#include "BinModel01.hpp"
#include "Options01.hpp"
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double S0, U, R, D;
    if (GetInputData(S0, U, R, D) == 1) return 1;
    double K; //strike price
    int N; //steps to expiry
    cout << "Enter call option data:" << endl;
    GetInputData(N, K);
    cout << "European call option price = "
        << PriceByCRR(S0, U, D, R, N, K) << endl << endl;
    
    return 0;
}