#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double S0, U, R, D;
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
    //compute risk-neutral probability
    double q = (R - D) / (U - D);
    //input n and i
    int n, i;
    cout << "Enter n: "; cin >> n;
    cout << "Enter i: "; cin >> i;
    //check n and i ranges
    if (n < 0 || i < 0 || i > n) {
        cout << "Illegal data ranges" << endl;
        cout << "Terminating program" << endl;
        return 1;
    }
    //compute stock price at node n,i
    double price = S0 * pow(1 + U, i) * pow(1 + D, n - i);
    cout << "Stock price at node n,i is " << price << endl;
    return 0;
}