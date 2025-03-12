#include <iostream>

using namespace std;

Function to read an integer from the user
int readNumber() {
  int number;
  cout << "Enter an integer: ";
  cin >> number;
  return number;
}

Function to write the answer to the console
void writeAnswer(int answer) {
  cout << "The sum is: " << answer << endl;
}

int main() {
Read the first number
  int num1 = readNumber();

  Read the second number
  int num2 = readNumber();

  Calculate the sum
  int sum = num1 + num2;

  Write the answer
  writeAnswer(sum);

  return 0;
}
