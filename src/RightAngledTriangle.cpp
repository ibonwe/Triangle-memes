#include <iostream>
#include <RightAngledTriangle.h>

using namespace std;

/**
 * The default right-angled triangle constructor
 */
RightAngledTriangle::RightAngledTriangle()
{
    character = ' ';
    width     = 0;
    height    = 0;
}

/**
 * The parameterised right-angled triangle constructor
 *
 * @param char aCharacter A right-angled triangle character
 * @param int  aHeight    A right-angled triangle height
 */
RightAngledTriangle::RightAngledTriangle(const char aCharacter, const int aHeight)
{
    character = aCharacter;
    width     = aHeight;
    height    = aHeight;
}

/**
 * The purpose of this method is to draw a right-angled triangle
 */
void RightAngledTriangle::draw()
{
    for (int i = 0; i < height; i++) {
        for (int j = 0; j <= i; j++) {
            cout << character;
        }

        cout << endl;
     }
}
