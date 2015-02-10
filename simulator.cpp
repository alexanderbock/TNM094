#include "simulator.h"

Simulator::Simulator(float particleLifetime)
    : _maxParticleLifetime(particleLifetime)
    , _particles()
    , _effects()
    , _sources()
{}

void Simulator::update(float dt) {
}

void Simulator::addSource(Source* source) {
}

void Simulator::addEffect(Effect* effect) {
}

void Simulator::getParticlePositions(std::vector<glm::vec3>& particleData) const {
}

void Simulator::removeAll() {
}

