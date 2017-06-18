#ifndef SQUARE_H
#define SQUARE_H

#include <AbstractPolygon.h>

/**
 * This is a square class definition
 */
class Square: public AbstractPolygon
{
    public:
        /**
         * The default square constructor
         */
        Square();

        /**
         * The parameterised square constructor
         *
         * @param char aCharacter A square character
         * @param int  aHeight    A square height
         */
        Square(const char aCharacter, const int aHeight);

        /**
         * The purpose of this method is to draw a square
         */
        void draw();
};

#endif
