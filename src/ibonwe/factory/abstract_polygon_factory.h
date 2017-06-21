#ifndef IBONWE_FACTORY_ABSTRACT_POLYGON_FACTORY_H
#define IBONWE_FACTORY_ABSTRACT_POLYGON_FACTORY_H

#include "ibonwe/shape/equilateral_triangle.h"
#include "ibonwe/shape/right_angled_triangle.h"
#include "ibonwe/shape/square.h"

namespace ibonwe {
namespace factory {

/**
 * This is an abstract polygon service factory
 */
class abstract_polygon_factory
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
        static ibonwe::shape::abstract::abstract_polygon* create(std::string name, char character, int height)
        {
            if (name == "equilateral-triangle")
                return new ibonwe::shape::equilateral_triangle(character, height);
            if (name == "right-angled-triangle")
                return new ibonwe::shape::right_angled_triangle(character, height);
            if (name == "square")
                return new ibonwe::shape::square(character, height);

            return NULL;
        }
};

} // namespace factory
} // namespace ibonwe

#endif
