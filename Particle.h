//
// Created by mi on 20.10.2020.
//

#ifndef DENDRITEV2_PARTICLE_H
#define DENDRITEV2_PARTICLE_H

#include "MyTypedefs.h"

using namespace myTypedefs;

class Particle
{
public:
	vec2d r, v;
	double R;

public:
	Particle(const vec2d &r, const vec2d &v, const double &R);
};


#endif //DENDRITEV2_PARTICLE_H
