#include <iostream>

#include "ibonwe/shape/diamond.h"

namespace ibonwe {
namespace shape {

/**
 * The default diamond constructor
 */
ibonwe::shape::diamond::diamond()
{
    character = ' ';
    width     = 0;
    height    = 0;
}

/**
 * The parameterised diamond constructor
 *
 * @param char aCharacter A diamond character
 * @param int  aHeight    A diamond height
 */
ibonwe::shape::diamond::diamond(const char aCharacter, const int aHeight)
{
    character = aCharacter;
    width     = aHeight;
    height    = aHeight;
}

/**
 * The purpose of this method is to draw a diamond
 */
void ibonwe::shape::diamond::draw()
{
    for (int i = 0; i < (height * 0.5); i++) {
        for (int j = 0; j <= height; j++) {
            cout << (((height*0.5) + i >= j) && ((height * 0.5) - i <= j) ? character: ' ');
        }
        
        cout<<endl;
    }
    for (int i = ((height * 0.5) - 1); i >= 0 ; i--) {
        for (int j = height ; j > 0; j--) {
            cout << (((height * 0.5) + i >= j) && ((height * 0.5) - i <= j) ? character: ' ');
        }
        
        cout << endl;
    }
}

} // namespace shape
} // namespace ibonwe
