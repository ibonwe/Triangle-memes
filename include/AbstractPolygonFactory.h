#ifndef ABSTRACTPOLYGONFACTORY_H
#define ABSTRACTPOLYGONFACTORY_H

#include <EquilateralTriangle.h>

using namespace std;

/**
 * This is an abstract polygon service factory
 */
class AbstractPolygonFactory
{
    public:
        /**
         * The purpose of this method is to create a polygon
         *
         * @param  name      The polygon name for which to create
         * @param  character A polygon character
         * @param  height    A polygon height
         * @return           A polygon
         */
        static AbstractPolygon* create(string name, char character, int height)
        {
            if (name == "equilateral-triangle")
                return new EquilateralTriangle(character, height);

            return NULL;
        }
};

#endif
