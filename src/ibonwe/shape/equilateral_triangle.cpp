#include <iostream>

#include "ibonwe/shape/equilateral_triangle.h"

namespace ibonwe {
namespace shape {

/**
 * The default equilateral triangle constructor
 */
ibonwe::shape::equilateral_triangle::equilateral_triangle()
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
ibonwe::shape::equilateral_triangle::equilateral_triangle(const char aCharacter, const int aHeight)
{
    character = aCharacter;
    width     = aHeight;
    height    = aHeight;
}

/**
 * The purpose of this method is to draw an equilateral triangle
 */
void ibonwe::shape::equilateral_triangle::draw()
{
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < (2*height + 1); j++) {
            std::cout << (((height + i) >= j && (height - i) <= j) ? character: ' ');
        }

        std::cout << std::endl;
     }
}

} // namespace shape
} // namespace ibonwe
