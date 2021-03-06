#ifndef MATERIALH
#define MATERIALH

#include "hitable.h"
#include "ray.h"
#include <string>
#include <vector>

class material {
public:
  virtual bool scatter(const ray &r_in, const hit_record &rec,
                       vec3 &attenuation, ray &scattered) const = 0;
  virtual color emitted() const { return color(0, 0, 0); }
  std::string name;
};

#endif
