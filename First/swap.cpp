#include <iostream>
using namespace std;

int main()
{
  int num1 = 5, num2 = 7;
  int temp;

  temp = num2;
  num2 = num1;
  num1 = temp;

  cout << num1 << "\n";
  cout << num2;
  cout << "\n";

  return 0;
}