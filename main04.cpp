#include <iostream>
#include <cmath>
#include "BinModel01.hpp"
using namespace std;

int main(){
    double S0, U, R, D;
    if (GetInputData(S0, U, R, D) == 1) return 1;
    // compute risk-neutral probability
    double q = RiskNeutProb(U, D, R);
    cout << "q = " << q << endl;
    // compute stock price at node n,i
    int n, i;
    cout << "Enter n: "; cin >> n;
    cout << "n = " << n << endl;
    cout << "Enter i: "; cin >> i;
    cout << "i = " << i << endl;
    cout << "S(n,i) = " << S(S0, U, D, n, i) << endl;
    return 0;

}