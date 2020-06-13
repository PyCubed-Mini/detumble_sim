//
// Created by Andrew Gatherer on 6/12/20.
//
#include <iostream>

#include "eigen/Eigen/Dense"
#include "dynamics.h"
#include "spacecraft.h"

using Eigen::MatrixXd;
using Eigen::VectorXd;
using Eigen::seq;


sim::sim(spacecraft sat, VectorXd state_0, float t_f, float t_step) {
    satellite = sat;
    state_0 = state_0;
    t_0 = state_0(6);
    t_f = t_f;
    t_step = t_step;
}

VectorXd sim::step(VectorXd state) {
    return state;
}

VectorXd sim::statedot(VectorXd state,VectorXd cmd) {
    VectorXd r = state(seq(0,3));
    VectorXd q = state(seq(3,7));
    VectorXd v = state(seq(7,10));
    VectorXd w = state(seq(10,13));

    VectorXd torque;
    torque << 0,0,0;
    VectorXd accel;
    accel << 0,0,0;

    return r;
}