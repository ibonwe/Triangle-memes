#include <iostream>
#include <limits>

#include "ibonwe/factory/abstract_polygon_factory.h"

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

    cout << "Welcome to iBonWe Polygon Memes Generator." << endl;
    cout << "This is an awesome Polygon Memes generator." << endl;
    cout << "You can create as many polygon memes as you want but if" << endl;
    cout << "you want to stop at any time enter (-1) for height." << endl;

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

        cout << "Enter a height for your shape (Type -1 to exit): " << endl;
        cin  >> height;

        if (!validateInput()) {
            cout << "You entered an invalid height please try again." << endl;

            continue;
        }

        ibonwe::shape::abstract::abstract_polygon * polygon = ibonwe::factory::abstract_polygon_factory::create(shape, character, height);
        polygon->draw();
    } while (height != -1);

    return 0;
}
