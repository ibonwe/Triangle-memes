#include <iostream>

#include "ibonwe/shape/right_angled_triangle.h"

namespace ibonwe {
namespace shape {

/**
 * The default right-angled triangle constructor
 */
ibonwe::shape::right_angled_triangle::right_angled_triangle()
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
ibonwe::shape::right_angled_triangle::right_angled_triangle(const char aCharacter, const int aHeight)
{
    character = aCharacter;
    width     = aHeight;
    height    = aHeight;
}

/**
 * The purpose of this method is to draw a right-angled triangle
 */
void ibonwe::shape::right_angled_triangle::draw()
{
    for (int i = 0; i < height; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << character;
        }

        std::cout << std::endl;
     }
}

} // namespace shape
} // namespace ibonwe
