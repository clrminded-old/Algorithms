/* The goal of this class will be to
 * define what a point particle is 
 * that can be used in the Physics 
 * class to make the calculations.
 * Lastly I might templatize this.
 */

#ifndef PARTICLE.H
#define PARTICLE.H

#include <iostream>
#include <cmath>

class Particle {

/* What I think we will need are the 
 * variables for the newtonian 
 * mechanics. Mass, acceleration, force
 * and whether they are known or
 * unknown.
 */
private:
    int x0; // inital x position
    int x;   // final x position
    int y0; // inital y position
    int y;   // final y position
    int v0; // initial velocity
    int v;    // final velocity
    int a0; // inital acceleration
    int a;   // final acceleration
    /* True if variables are known, 
       false if unknown, which 
       calculations are required to
       solve for unknowns */
    bool x0Known;
    bool xKnown;
    bool y0Known;
    bool yKnown;
    bool v0Known;
    bool vKnown;
    bool a0Known;
    bool aKnown;
    
public:
    Particle();
    
    // accessors
    int getX0();
    int getX();
    int getY0();
    int getY();
    int getV0();
    int getV();
    int getA0();
    int getA();
    
    
    // modifiers
    void setX0(int x0);
    void setX(int x);
    void setY0(int y0);
    void setV0(int v0);
    void setV(int v);
    void setA0(int a0);
    void setA(int a);
    
    // class methods
    void printVariables();
    int solveForX0();
    int solveForX();
    int solveForY0();
    int solveForY();
    int solveForV0();
    int solveForV();
    int solveForA0();
    int solveForA();
    
};


#endif //:PARTICLE.H