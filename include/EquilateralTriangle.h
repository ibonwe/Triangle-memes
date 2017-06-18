#ifndef EQUILATERALTRIANGLE_H
#define EQUILATERALTRIANGLE_H

#include <AbstractPolygon.h>

/**
 * This is an equilateral triangle class definition
 */
class EquilateralTriangle: public AbstractPolygon
{
    public:
        /**
         * The default equilateral triangle constructor
         */
        EquilateralTriangle();

        /**
         * The parameterised equilateral triangle constructor
         *
         * @param char aCharacter A equilateral triangle character
         * @param int  aHeight    A equilateral triangle height
         */
        EquilateralTriangle(const char aCharacter, const int aHeight);

        /**
         * The purpose of this method is to draw an equilateral triangle
         */
        void draw();
};

#endif
