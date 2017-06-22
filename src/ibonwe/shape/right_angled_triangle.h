#ifndef IBONWE_SHAPE_RIGHT_ANGLED_TRIANGLE_H
#define IBONWE_SHAPE_RIGHT_ANGLED_TRIANGLE_H

#include "ibonwe/shape/abstract/abstract_polygon.h"

namespace ibonwe {
namespace shape {

/**
 * This is an right-angled triangle class definition
 */
class right_angled_triangle: public ibonwe::shape::abstract::abstract_polygon
{
    public:
        /**
         * The default right-angled triangle constructor
         */
        right_angled_triangle();

        /**
         * The parameterised right-angled triangle constructor
         *
         * @param char aCharacter A right-angled triangle character
         * @param int  aHeight    A right-angled triangle height
         */
        right_angled_triangle(const char aCharacter, const int aHeight);

        /**
         * The purpose of this method is to draw a right-angled triangle
         */
        void draw();
};

} // namespace shape
} // namespace ibonwe

#endif
