//	THIS FILE CONTAINS THE DEFINITION OF THE MATH EXTENDED LIBRARY
//	MathExtended is a library that contains some useful mathematical functions
//	unavailable in the standard C++ library. 
//
//		Whole library is divided into two classes:
// 		- MATH_EXTENDED: containing some useful mathematical formulas, constants and functions.
//		- MATH_EXTENDED_PHYSICS: containing some useful physics formulas.
// 
//
//
// Written and copyrighted by: Jakub Kopiszka (c) 2025

#pragma once

#ifdef _MATH_EXTENDED_EXPORTS
#define MATH_EXTENDED_API __declspec(dllexport)
#else
#define MATH_EXTENDED_API __declspec(dllimport)
#endif

#ifndef MATH_EXTENDED_H
#define MATH_EXTENDED_H

// Math_extended class definition
extern "C" MATH_EXTENDED_API static class MATH_EXTENDED {
public:

	// VARIABLES DEFINITION
	static const double PI; // PI constant
	static const double E; // Euler's number
	static const double PHI; // Golden ratio
	static const double SQRT2; // Square root of 2
	static const double SQRT3; // Square root of 3
	static const double SQRT5; // Square root of 5

	// FUNCTIONS DEFINITION
	static unsigned long long factorial(unsigned long long n); // Factorial function
	static unsigned int lcm(unsigned int a, unsigned int b); // Least common multiple function
	static unsigned int gcd(unsigned int a, unsigned int b); // Greatest common divisor function
};

// Initialization of static constants


// Math_extended_physics class definition
extern "C" MATH_EXTENDED_API static class MATH_EXTENDED_PHYSICS {
public:
	// VARIABLES DEFINITION
	static const double G; // Gravitational constant
	static const double e; // Elementary charge
	static const double ep0; // Vacuum permittivity
	static const double mu0; // Vacuum permeability

	// FUNCTIONS DEFINITION
	static double ndNewtonLaw(double m, double a); // Newton's second law of motion (Force)
	static double ohmLaw(double I, double R); // Ohm's law (Voltage)
};

#endif
