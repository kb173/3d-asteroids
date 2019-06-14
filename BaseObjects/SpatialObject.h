//
// Created by karl on 01.06.19.
//

#ifndef ASTEROID_SPATIALOBJECT_H
#define ASTEROID_SPATIALOBJECT_H

#include <vector>
#include "../Eigen/Geometry"
#include "Object.h"


class SpatialObject : public Object {

public:
    SpatialObject(std::string name, Eigen::Vector3d angularAccel, Eigen::Vector3d linearAccel) : Object(name),
                                                                                                 angularAccel(
                                                                                                         angularAccel),
                                                                                                 linearAccel(
                                                                                                         linearAccel) {};

    virtual void update(float delta);

    Eigen::Vector3d angularVelocity;
    Eigen::Vector3d angularAccel;
    Eigen::Vector3d linearVelocity;
    Eigen::Vector3d linearAccel;
    Eigen::Vector3d position;
    Eigen::Vector3d angularThrust;
    Eigen::Vector3d linearThrust;

    Eigen::Matrix3d basis = Eigen::Matrix3d::Identity();
};


#endif //ASTEROID_SPATIALOBJECT_H
