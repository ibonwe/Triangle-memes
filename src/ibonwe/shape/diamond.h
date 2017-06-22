#ifndef IBONWE_SHAPE_DIAMOND_H
#define IBONWE_SHAPE_DIAMOND_H

#include "ibonwe/shape/abstract/abstract_polygon.h"

namespace ibonwe {
namespace shape {

/**
 * This is an diamond class definition
 */
class diamond: public ibonwe::shape::abstract::abstract_polygon
{
    public:
        /**
         * The default diamond constructor
         */
        diamond();

        /**
         * The parameterised diamond constructor
         *
         * @param char aCharacter A diamond character
         * @param int  aHeight    A diamond height
         */
        diamond(const char aCharacter, const int aHeight);

        /**
         * The purpose of this method is to draw a diamond shape
         */
        void draw();
};

} // namespace shape
} // namespace ibonwe

#endif
