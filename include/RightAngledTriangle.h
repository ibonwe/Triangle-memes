#ifndef RIGHTANGLEDTRIANGLE_H
#define RIGHTANGLEDTRIANGLE_H

#include <AbstractPolygon.h>

/**
 * This is an right-angled triangle class definition
 */
class RightAngledTriangle: public AbstractPolygon
{
    public:
        /**
         * The default right-angled triangle constructor
         */
        RightAngledTriangle();

        /**
         * The parameterised right-angled triangle constructor
         *
         * @param char aCharacter A right-angled triangle character
         * @param int  aHeight    A right-angled triangle height
         */
        RightAngledTriangle(const char aCharacter, const int aHeight);

        /**
         * The purpose of this method is to draw a right-angled triangle
         */
        void draw();
};

#endif
