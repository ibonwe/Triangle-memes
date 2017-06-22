#ifndef IBONWE_SHAPE_ABSTRACT_ABSTRACT_POLYGON_H
#define IBONWE_SHAPE_ABSTRACT_ABSTRACT_POLYGON_H

namespace ibonwe {
namespace shape {
namespace abstract {

/**
 * This is an abstract polygon class definition
 */
class abstract_polygon
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

} // namespace abstract
} // namespace shape
} // namespace ibonwe

#endif
