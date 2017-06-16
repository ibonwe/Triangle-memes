#include <iostream>

using namespace std;

/**
 * The purpose of this function is to generate a right-angled triangle
 *
 * @param char character A triangle character
 * @param int  height    A triangle height
 */
void generateRightAngledTriangle(char character, int height)
{
     for (int i = 0; i < height; i++) {
        for (int j = 0; j < i; j++) {
            cout << character;
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

        cout << "Welcome to iBonWe Triangle Memes Generator!\n"
                "This is an awesome Triangle Memes generator."
                "You can create as many triangle memes as you want but if "
                "you want to stop at any time, enter (-1) for height." << endl;

    do {
        cout << "Enter a character for your triangle: " << endl;
        cin  >> character;
        cout << "Enter a height for your triangle. Type -1 to exit: " << endl;
        cin  >> height;

        if (validateInput())
            generateRightAngledTriangle(character, height);
        else
            cout << "You entered invalid values, please try again?" << endl;

    } while (height != -1);

    return 0;
}
