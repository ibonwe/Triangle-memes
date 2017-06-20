#include <iostream>
#include <Square.h>

using namespace std;

/**
 * The default square constructor
 */
Square::Square()
{
    character = ' ';
    width     = 0;
    height    = 0;
}

/**
 * The parameterised square constructor
 *
 * @param char aCharacter A square character
 * @param int  aHeight    A square height
 */
Square::Square(const char aCharacter, const int aHeight)
{
    character = aCharacter;
    width     = aHeight;
    height    = aHeight;
}

/**
 * The purpose of this method is to draw a square
 */
void Square::draw()
{
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height; j++) {
            cout << character << ' ';
        }

        cout << endl;
     }
}
