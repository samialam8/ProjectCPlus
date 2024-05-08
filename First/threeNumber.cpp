#include <iostream>

using namespace std;

int main()
{
  int a, b, c;
  cout << "Enter First number:";
  cin >> a;
  cout << "Enter Second number:";
  cin >> b;
  cout << "Enter Third number:";
  cin >> c;

  if ((a >= b) && (a >= c))
  {
    cout << a << " is the greatest.\n";
    if ((b >= c))
    {
      cout << b << " is the middle.\n";
      cout << c << " is the smallest.\n";
    }
    else
    {
      cout << c << " is the middle.\n";
      cout << b << " is the smallest.\n";
    }
  }

  else if ((b >= a) && (b >= c))
  {
    cout << b << " is the greatest.\n";
    if ((a >= c))
    {
      cout << a << " is the middle.\n";
      cout << c << " is the smallest.\n";
    }
    else
    {
      cout << c << " is the middle.\n";
      cout << a << " is the smallest.\n";
    }
  }

  else
  {
    cout << c << " is the greatest.\n";
    if (a >= b)
    {
      cout << a << " is the middle.\n";
      cout << b << " is the smallest.\n";
    }

    else
    {
      cout << b << " is the middle.\n";
      cout << a << " is the smallest.\n";
    }
  }

  return 0;
}
