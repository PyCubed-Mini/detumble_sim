#include <iostream>
#include "eigen/Eigen/Dense"
#include "dynamics.h"
#include "spacecraft.h"

using Eigen::MatrixXd;
using Eigen::VectorXd;

int main() {

    // initialize the spacecraft
    MatrixXd I(3,3);
    I(0,0) = 2e-4;
    I(1,1) = 2e-4;
    I(2,2) = 2e-4;
    float mass = .25;
    spacecraft sat(I,mass);

    // create the initial state
    VectorXd state_0(7);
    state_0 << 6878, 0, 0, 0, -7.7, 0, 0;

    // initialize the sim
    float t_f = 100;
    float t_step = 1;
    //sim run(sat, state_0, t_f, t_step);

    return 0;
}
