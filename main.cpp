#include <iostream>

using namespace std;

int main()
{
  int size;
  char character;
  cout << "Enter a size for your triangle";
  cin  >>  size;
  cout << "Enter a character: ";
  cin  >>  character;
  for(int i = 0; i < size; i++)
  {
    for(int j = size; j > i; j--)
    {
      cout << character;
    }
    cout << endl;
  }
  
  return 0;
}
