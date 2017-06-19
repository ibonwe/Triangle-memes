#include <iostream>
#include <EquilateralTriangle.h>

using namespace std;

/**
 * The default equilateral triangle constructor
 */
EquilateralTriangle::EquilateralTriangle()
{
    character = ' ';
    width     = 0;
    height    = 0;
}

/**
 * The parameterised equilateral triangle constructor
 *
 * @param char aCharacter A triangle character
 * @param int  aHeight    A triangle height
 */
EquilateralTriangle::EquilateralTriangle(const char aCharacter, const int aHeight)
{
    character = aCharacter;
    width     = aHeight;
    height    = aHeight;
}

/**
 * The purpose of this method is to draw an equilateral triangle
 */
void EquilateralTriangle::draw()
{
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < (2*height + 1); j++) {
            cout << (((height + i) >= j && (height - i) <= j) ? character: ' ');
        }

        cout << endl;
     }
}
