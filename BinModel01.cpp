#include <iostream>
#include <cmath>
using namespace std;

double RiskNeutProb(double U, double D, double R) {
    return (R - D) / (U - D);
}
double S(double S0, double U, double D, int n, int i) {
    return S0 * pow(1 + U, i) * pow(1 + D, n - i);
}
int GetInputData(double& S0, double& U, double& R, double& D) {
    //entering the data
    cout << "Enter S0: "; cin >> S0;
    cout << "Enter U: "; cin >> U;
    cout << "Enter R: "; cin >> R;
    cout << "Enter D: "; cin >> D;
    //check value ranges
    if (S0 <= 0.0 || U <= -1.0 || D <= -1.0 || U <= D || R <= -1.0) {
        cout << "Illegal data ranges" << endl;
        cout << "Terminating program" << endl;
        return 1;
    }
    //no arbitrage condition
    if (R >= U || R <= D) {
        cout << "Arbitrage exists" << endl;
        cout << "Terminating program" << endl;
        return 1;
    }
    cout << "Input data checked" << endl;
    cout << "There is no arbitrage" << endl << endl;
    return 0;
}
