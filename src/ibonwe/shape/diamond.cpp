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
    for (int i = -height; i <= height; i++) {
        for (int j = -height; j <= height; j++) {
            std::cout << ((abs(i) + abs(j) <= height) ? character : ' ');
        }

        std::cout << std::endl;
    }
}

} // namespace shape
} // namespace ibonwe
