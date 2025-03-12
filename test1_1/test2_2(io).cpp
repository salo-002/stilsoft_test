#include <iostream>
using namespace std;

void readNumber(int& num) {
    cout << "Enter an integer: ";
    cin >> num;
}

void writeAnswer(int sum, int difference) {
    cout << "The sum is: " << sum << "." << endl;
    cout << "The difference is: " << difference << "." << endl;
}
