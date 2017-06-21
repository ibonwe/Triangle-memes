#include <iostream>

#include "ibonwe/shape/square.h"

namespace ibonwe {
namespace shape {

/**
 * The default square constructor
 */
ibonwe::shape::square::square()
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
ibonwe::shape::square::square(const char aCharacter, const int aHeight)
{
    character = aCharacter;
    width     = aHeight;
    height    = aHeight;
}

/**
 * The purpose of this method is to draw a square
 */
void ibonwe::shape::square::draw()
{
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height; j++) {
            std::cout << character << ' ';
        }

        std::cout << std::endl;
     }
}

} // namespace shape
} // namespace ibonwe
