/* All variables must be declared before they are used in a C++ program.
 * The syntax for variable declaration is: Type_name Variable_Name_1, Variable_Name_2:
 */

#include <iostream>
using namespace std;

int main()
{
  int a = 3, b = 4, c = 5;

  a -= b * c;

  cout << a << "\n";

  return 0;
}