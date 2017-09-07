#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <omp.h>

#include <Eigen/Dense>
#include <Atoms.h>
#include <Calculator.h>


//
// Calculates properties of the system
//

class LJCalculator : public Calculator
{
    static const int nDim = 3;
    double sigma, epsilon, rCut;
    
    //Declare openmp locks for assigning forces and energies
    omp_lock_t energyLock;
    omp_lock_t forceXLock;
    omp_lock_t forceYLock;
    omp_lock_t forceZLock;

public:
    //Standard constructor
    LJCalculator(double sigma, double epsilon, double rCutoff);

    //Calculate forces and energies on Atoms
    void calculate(Atoms* atoms);
    
};