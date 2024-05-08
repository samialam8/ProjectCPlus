#include <iostream>
using namespace std;

int main()
{
  int casesPerDay, bottlesPerDay;
  int bottlesPerCase = 12;
  double profitPerBottle = 0.2; // 20 cents per bottle profit
  double profitPerDay, profitPerYear;

  cout << "Press enter after entering each number \n";
  cout << "Enter number of cases: \n";
  cin >> casesPerDay;

  profitPerDay = casesPerDay * bottlesPerCase * profitPerBottle;
  profitPerYear = 365 * profitPerDay;

  cout << "The store has made: ";
  cout << profitPerDay;
  cout << " per day.\n";
  cout << "That means the profit for one year will be: ";
  cout << profitPerYear << "\n";

  cout << "Good Bussiness?!\n";

  return 0;
}