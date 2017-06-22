#ifndef IBONWE_SHAPE_EQUILATERAL_TRIANGLE_H
#define IBONWE_SHAPE_EQUILATERAL_TRIANGLE_H

#include "ibonwe/shape/abstract/abstract_polygon.h"

namespace ibonwe {
namespace shape {

/**
 * This is an equilateral triangle class definition
 */
class equilateral_triangle: public ibonwe::shape::abstract::abstract_polygon
{
    public:
        /**
         * The default equilateral triangle constructor
         */
        equilateral_triangle();

        /**
         * The parameterised equilateral triangle constructor
         *
         * @param char aCharacter A equilateral triangle character
         * @param int  aHeight    A equilateral triangle height
         */
        equilateral_triangle(const char aCharacter, const int aHeight);

        /**
         * The purpose of this method is to draw an equilateral triangle
         */
        void draw();
};

} // namespace shape
} // namespace ibonwe

#endif
