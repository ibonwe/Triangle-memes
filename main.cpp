#include <iostream>

using namespace std;

/**
 * The purpose of this function is to generate an equilateral triangle
 *
 * @param char character A triangle character
 * @param int  height    A triangle height
 */
void generateEquilateralTriangle(char character, int height)
{
     for (int i = 0; i < height; i++) {

        for (int j = 0; j < (2*height + 1); j++) {
            cout << (((height + i) >= j && (height - i) <= j) ? character: ' ');
        }

        cout << endl;
     }
}

/**
 * The purpose of this function is to validate the user's input
 *
 * @return bool True if validation is a success
 */
bool validateInput()
{
    if (cin.fail()) {
        cin.clear();
        cin.ignore();

        return false;
    }

    return true;
}

/**
 * The purpose of this method is to capture user input
 *
 * @return int The status code
 */
int main()
{
    char character;
    int height;

    do {
        cout << "Enter a character for your triangle: " << endl;
        cin  >> character;
        cout << "Enter a height for your triangle: " << endl;
        cin  >> height;

        if (validateInput())
            generateEquilateralTriangle(character, height);
        else
            cout << "You entered invalid values, please try again?" << endl;

    } while (height != -1);

    return 0;
}
