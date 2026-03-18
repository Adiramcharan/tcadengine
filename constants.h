#ifndef CONSTANTS_H
#define CONSTANTS_H
// Fundamental constants
const double q=1.602e-19;       //Elementary charge(C)
const double k=1.380649e-23;    //Boltzmann constant (k)
const double eps0=8.854e-12;    //permittivity fo free space(F/m)

// Silicon constants
const double eps_si=11.7*eps0;  //permittivity of silicon(F/m)
const double T=300.0;           //Temperature(K)(Room Temperature condition)
const double Vt=k*T/q;          //Thermal voltage(V)
#endif