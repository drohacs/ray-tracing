#ifndef RAY_HPP
#define RAY_HPP

#include "vec3.hpp"

class ray {
    public:
        ray() {}
        ray(const color& origin, const color& direction)
            : orig(origin), dir(direction)
        {}

        color origin() const  { return orig; }
        color direction() const { return dir; }

        color at(double t) const {
            return orig + t*dir;
        }
    public:
        point3 orig;
        color dir;
};

#endif