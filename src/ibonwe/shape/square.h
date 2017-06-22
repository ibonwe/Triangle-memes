#ifndef IBONWE_SHAPE_SQUARE_H
#define IBONWE_SHAPE_SQUARE_H

#include "ibonwe/shape/abstract/abstract_polygon.h"

namespace ibonwe {
namespace shape {

/**
 * This is a square class definition
 */
class square: public ibonwe::shape::abstract::abstract_polygon
{
    public:
        /**
         * The default square constructor
         */
        square();

        /**
         * The parameterised square constructor
         *
         * @param char aCharacter A square character
         * @param int  aHeight    A square height
         */
        square(const char aCharacter, const int aHeight);

        /**
         * The purpose of this method is to draw a square
         */
        void draw();
};

} // namespace shape
} // namespace ibonwe

#endif
