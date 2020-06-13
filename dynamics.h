//
// Created by Andrew Gatherer on 6/13/20.
//
#include "eigen/Eigen/Dense"
#include "spacecraft.h"

using Eigen::MatrixXd;
using Eigen::VectorXd;
using Eigen::seq;


#ifndef DETUMBLE_SIM_DYNAMICS_H
#define DETUMBLE_SIM_DYNAMICS_H

// create an Earth class
class Earth {
public:
    float R = 6371.009;
    float mu = 3.986E5;
};

// now create the sim class
class sim {
public:

    Earth earth;
    spacecraft satellite;
    float t_0;
    float t_f;
    float t_step;
    VectorXd state_0;

    sim(spacecraft sat, VectorXd state_0, float t_f, float t_step);
    VectorXd step(VectorXd state);
    VectorXd statedot(VectorXd state, VectorXd cmd);
};


#endif //DETUMBLE_SIM_DYNAMICS_H
