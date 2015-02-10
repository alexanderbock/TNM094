#ifndef __EFFECT_H__
#define __EFFECT_H__

#include "particle.h"
#include <glm/glm.hpp>
#include <vector>

class Effect {
public:
    virtual void applyToParticles(std::vector<Particle*>& particles, float dt) = 0;
};

#endif __EFFECT_H__
