#ifndef __SOURCE_H__
#define __SOURCE_H__

#include <glm/glm.hpp>
#include "particle.h"
#include <random>
#include <vector>

class Source {
public:
    virtual std::vector<Particle*> createParticles(float dt) = 0;
};

#endif // __SOURCE_H__ 