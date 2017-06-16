#include <iostream>

 using namespace std;

/** 
* The purpose of this function is to displays an equilateral
* triangle based on the user's input.
* The user decides on its size and the character that it may consist of.
* The triangle increases by three characters each time and is based on the
* T(n)=2n+1 equation.
* @param char character The character that the user enters.
* @param int size The size of the triangle.
*/

void generateEquilateralTriangle(char character, int size)
{

     for (int i = 0; i < size; i++) {

        for (int j = 0; j < (2*size + 1); j++) {

            cout << (((size + i) >= j && (size - i) <= j) ? character: ' ');

        }

        cout << endl;

     }
}

/**
* The purpose of this function is to validate the user's input.
* @param char character The character that the user enters.
* @param int size The size of the triangle.
* @return True if input is invalid.
*/

bool validateInput(char character,int size)
{
    if (cin.fail()) {

        cin.clear();
        cin.ignore();
    }
    else
        generateEquilateralTriangle(character,size);

}

/**
 * The purpose of this method is to manage user input in order to
 * correctly display the triangle.
 *
 * @author Chad Petersen
 * @return The valid input and display the triangle.
 */

int main()
{
int size;
char character;

    do {

        cout << "Enter a size for your triangle: " << endl;
        cin  >> size;
        cout << "Enter a character for your triangle: " << endl;
        cin  >> character;

    } while(validateInput(character,size)!=0);

    return 0;

 }
