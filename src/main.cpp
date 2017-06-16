#include <iostream>
#include <limits>
#include <AbstractPolygonFactory.h>

using namespace std;

/**
 * The purpose of this function is to validate the user's input
 *
 * @return bool True if validation is a success
 */
bool validateInput()
{
    bool isValid = cin.good();

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return isValid;
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

    cout << "Welcome to iBonWe Triangle Memes Generator.\n"
            "This is an awesome Triangle Memes generator.\n"
            "You can create as many triangle memes as you want but if"
            "you want to stop at any time enter (-1) for height." << endl;

    do {
        cout << "Enter a character for your shape (only the first character will be used): " << endl;
        cin  >> character;

        if (!validateInput()) {
            cout << "You entered invalid values please try again." << endl;

            continue;
        }

        cout << "Enter a height for your shape (Type -1 to exit): " << endl;
        cin  >> height;

        if (!validateInput()) {
            cout << "You entered invalid values please try again." << endl;

            continue;
        }

        AbstractPolygon * polygon = AbstractPolygonFactory::create("equilateral-triangle", character, height);
        polygon->draw();
    } while (height != -1);

    return 0;
}
