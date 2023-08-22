#include <iostream>
#include <vector>
using namespace std;


int main() {
    //define user input array to sort
    vector<int> vec;
    int input;
    cout << "Enter a list of integers to sort, separated by spaces. Enter a non-integer to stop." << endl;
    while (cin >> input) {
        vec.push_back(input);
    }
    //sort array
    int n = vec.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (vec[j] < vec[j - 1]) {
                int temp = vec[j];
                vec[j] = vec[j - 1];
                vec[j - 1] = temp;
            }
        }
    }

}