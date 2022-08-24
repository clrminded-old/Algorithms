#include "Physics.h"
#include <iostream>

Physics::Physics() {
    this.mass = 0;
    this.force = 0;
    this.acceleration = 0;
    this.velocity = 0;
    this.positionX = 0;
    this.positionY = 0;
} 
    
// accessors
double Physics::getMass() {
    return this.mass;
}

 
double Physics::getAcceleration() {
    return this.acceleration;
}
 
double Physics::getForce() {
    return this.force;
}
 
double Physics::getVelocity() {
    return this.velocity;
}
 
double Physics::getPositionX() {
    return this.positionX;
}

double Physics::getPositionY() {
    return this.positionY;
}  
    
// modifiers
void Physics::setForce(double force) {
    this.force = force;
}
  
void Physics::setMass(double mass) {
    this.mass = mass;
}
 
void Physics::setAcceleration(double acceleration) {
    this.acceleration = acceleration;
}

void Physics::setVelocity(double velocity) {
    this.velocity = velocity;
}

void Physics::setPositionX(double positionX) {
    this.positionX = positionX;
}

void Physics::setPositionY(double positionY) {
    this.positionY = positionY;
}
    
// class methods
    
double Physics::calculateForce(double mass, double acceleration) {
    return mass * acceleration;
}

double Physics::calculateMass(double force, double acceleration) {
    return force / acceleration;
}
    
double Physics::calculateAcceleration(double velocityBefore, double velocityAfter) {
    return velocityAfter - velocityBefore;
}
    
double Physics::calculateVelocity(double positionXBefore, double positionYBefore, double positionXAfter, double positionYAfter) {
    double xDiff = positionXAfter - positionYBefore;
    double yDiff = positionYAfter - positionYBefore;
    return xDiff / yDiff;
}
    
    
    