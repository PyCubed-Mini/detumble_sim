//
// Created by Andrew Gatherer on 6/13/20.
//
#include "eigen/Eigen/Dense"

using Eigen::MatrixXd;
using Eigen::VectorXd;
using Eigen::seq;

#ifndef DETUMBLE_SIM_SPACECRAFT_H
#define DETUMBLE_SIM_SPACECRAFT_H

// first create the spacecraft class
class spacecraft {
public:
    MatrixXd I; // moment of inertia
    float mass; // mass

    spacecraft(MatrixXd I, float mass);

};

#endif //DETUMBLE_SIM_SPACECRAFT_H
