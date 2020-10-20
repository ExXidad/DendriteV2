//
// Created by mi on 20.10.2020.
//

#ifndef DENDRITEV2_DENDRITE_H
#define DENDRITEV2_DENDRITE_H

#include <vector>
#include "Particle.h"
#include "MyTypedefs.h"

class Dendrite
{
private:
	std::vector<Particle> dendrite;

public:
	Dendrite();

	void addParticleToDendrite(const Particle &particle);

	void step();
};


#endif //DENDRITEV2_DENDRITE_H
