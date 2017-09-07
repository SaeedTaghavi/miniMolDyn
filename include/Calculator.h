#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <omp.h>

#include <Eigen/Dense>
#include <Atoms.h>


//
// Calculates properties of the system
//

class Calculator
{

public:
    //Empty constructor just in case
    Calculator();

    //Destructor, so far not neede
    ~Calculator();

    //Calculate forces and energies on Atoms
    virtual void calculate(Atoms* atoms) = 0;
    
};