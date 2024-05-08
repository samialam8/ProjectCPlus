/*Suppose you are helping the university registrar office with the registration process.
 *You are to send students to six different halls depending on the first letter of their last names
 *and the balance that has appeared on their bills.  Here are the criteria you will use to separate them:
 *Students with balance zero, Letters:
 *A-E in Hall 3, F-J in Hall 2, L-O in Hall 8, P-R in Hall 10, and S-Z in Hall 12.
 *Students with a non-zero balance go to Hall 18. These students can go back to register once they have a zero balance on their bills.*/

#include <iostream>
using namespace std;

int main()
{
  int balance;
  char firstLetter;
  cout << "Enter the balance:\n";
  cin >> balance;

  if (balance != 0)
  {
    cout << "Go to Hall 18\n";
  }
  else
  {
    cout << "Since balance is zero, so now enter the first letter of last name:\n";
    cin >> firstLetter;
  }

  if (firstLetter >= 'a' && firstLetter <= 'z')
  {
    firstLetter -= 32; // convert to uppercase
  }

  if (balance == 0)
  {
    if (firstLetter >= 'A' && firstLetter <= 'E')
    {
      cout << "Go to Hall 3\n";
    }
    else if (firstLetter >= 'F' && firstLetter <= 'J')
    {
      cout << "Go to Hall 2\n";
    }
    else if (firstLetter >= 'L' && firstLetter <= 'O')
    {
      cout << "Go to Hall 8\n";
    }
    else if (firstLetter >= 'P' && firstLetter <= 'R')
    {
      cout << "Go to Hall 10\n";
    }
    else
    {
      cout << "Go to Hall 12\n";
    }
  }

  return 0;
}
