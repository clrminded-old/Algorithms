#ifndef PHYSICS.H
#define PHYSICS.H

#include <iostream>

class Physics
{
private:
    double mass;
    double acceleration;
    double velocity;
    double positionX;
    double positionY;
    double force;
    
public:
    Physics();
    
    // accessors
    double getMass();
    double getAcceleration(); 
    double getForce();
    double getVelocity();
    double getPositionX();
    double getPositionY();
    
    // modifiers
    void setForce(double force);
    void setMass(double mass);
    void setAcceleration(double acceleration);
    void setVelocity(double velocity);
    void setPosition(double position);
    
    // class methods
    double calculateForce(double mass, double acceleration);
    double calculateMass(double force, double acceleration);
    double calculateAcceleration(double velocityBefore, double velocityAfter);
    double calculateVelocity(double positionXBefore, double positionYBefore double positionXAfter, double positionYAfter);
    
}

#endif