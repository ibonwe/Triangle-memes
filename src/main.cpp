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
    string shape;
    char character;
    int height;

    do {
        cout << "Enter a shape name you want to generate: ";
        cin >> shape;

        if (!validateInput()) {
            cout << "You entered an invalid shape name please try again." << endl;

            continue;
        }

        cout << "Enter a character for your shape (only the first character will be used): ";
        cin  >> character;

        if (!validateInput()) {
            cout << "You entered an invalid character please try again." << endl;

            continue;
        }

        cout << "Enter a height for your shape: ";
        cin  >> height;

        if (!validateInput()) {
            cout << "You entered an invalid height please try again." << endl;

            continue;
        }

        AbstractPolygon * polygon = AbstractPolygonFactory::create(shape, character, height);
        polygon->draw();
    } while (height != -1);

    return 0;
}
