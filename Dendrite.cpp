//
// Created by mi on 20.10.2020.
//

#include "Dendrite.h"

Dendrite::Dendrite()
{

}

void Dendrite::step()
{

}

void Dendrite::addParticleToDendrite(const Particle &particle)
{
	dendrite.emplace_back(particle);
}
