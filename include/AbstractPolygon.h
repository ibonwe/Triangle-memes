#ifndef ABSTRACTPOLYGON_H
#define ABSTRACTPOLYGON_H

/**
 * This is an abstract polygon class definition
 */
class AbstractPolygon
{
    protected:
        char character;
        int width;
        int height;

    public:
        /**
         * The purpose of this method is to abstract the drawing of polygons
         */
        virtual void draw() = 0;
};

#endif
