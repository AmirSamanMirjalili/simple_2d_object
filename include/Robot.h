#pragma once
#include <cmath> // For sqrt function
#include "Vec3.h"


class Robot
{
public:
    Robot(const Vec3& initialPosition, int maxVelocity,double timeStep);  //constructor
    
    //Getter Methods
    Vec3 getPosition() const;
    int getmaxVelocity() const;
    double getTimeStep() const;

    //Setter Methods
    void setTargetPosition(Vec3& targetPosition);
    
    // utility Methods
    void updatePosition();
    bool isAtTarget() ;
    void printPosition() const;


private:
    Vec3 position;
    Vec3 initialPosition;
    Vec3 targetPosition;
    Vec3 unitDirection;
    int maxVelocity;
    double timeStep;
    bool atTarget;
    
};



