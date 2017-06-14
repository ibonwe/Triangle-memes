#include <iostream>
#include <iomanip>   // format manipulation

using namespace std;
/**This program displays an equilateral triangle based on the user's input.
 * The user decides on its size and the character that it may consist of.
 * The triangle increases by three characters each time and is based on the 
 * T(n)=2n+1 equation.*/
void inputCheck(int & size)//Still trying to figure our cin.fail() and cin.good()
{
 bool isdigit();
    if(size.isdigit()==true)
        
        cin.good();
    cout<<endl;
        
    else
        cin.fail();
        cout << "Please re-enter a size. ";
        cin.clear();
        cin>>size;
}
void generateEquilateralTriangle(char character, int size)
{
     for (int i = 0; i < size; i++)
    {
        
        for (int j = 0; j < (2*size+1); j++)
        {
            
            if ((size+i) >= j && (size-i) <= j)
             
                cout << character;
            
            else
              
                cout << " ";
            
        } 
        cout << endl;
    }
}
/**The user inputs their request in the main function.*/
int main()
{
int size;
char character;

    cout << "Enter a size for your triangle: " << endl;
    cin  >> size;
    cout << "Enter a character for your triangle: " << endl;
    cin  >> character;
    
    inputCheck();
    generateEquilateralTriangle(character, size);
      
    return 0;
}
