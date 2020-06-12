#include <iostream>
#include "eigen/Eigen/Dense"

using Eigen::MatrixXd;

// first create the spacecraft class
class spacecraft {
    MatrixXd I; // moment of inertia
    float mass; // mass

public:
    spacecraft(MatrixXd I, float mass) {
        I = I;
        mass = mass;
    }

};

// now create the sim class
class sim {

public:
    sim(state init) {
        earth = Earth();
    }

};

// create a state class
class state {
public:
    MatrixXd r;
    MatrixXd v;
    float t;

    state(MatrixXd r, MatrixXd v, float t) {
        r = r;
        v = v;
        t = t;
    }
} state;

class Earth {
public:
    float R = 6371.009;
};

int main() {
    std::cout << "Hello, World!" << std::endl;

    // initialize the spacecraft
    MatrixXd I(3,3);
    I(0,0) = 2e-4;
    I(1,1) = 2e-4;
    I(2,2) = 2e-4;
    float mass = .25;
    spacecraft(I,mass);

    // create the initial state
    MatrixXd r_0(3,1);
    r_0 << 6878, 0, 0;
    MatrixXd v_0(3,1);
    v_0 << 0, -7.7, 0;
    float t_0 = 0;

    state(r_0,v_0,t_0);

    // initialize the sim

    return 0;
}
