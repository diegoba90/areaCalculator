//
//  Circle.cpp
//  areaCalculator
//
//  Created by Diego Acuna on 6/10/21.
//

#include "Circle.h"
#include <math.h>
#include <stdio.h>

//this cpp file will initialize all functions in the Circle.h file
//constructor function
Circle::Circle(double r){
    radius = r;
}

//set the initial values
void Circle::set_radius(double r){
    radius = r;
}

//getter function
double Circle::get_radius(){
    //return value
    return radius;
}

//calcualate area function
double Circle::calc_area(){
    //return area
    return 3.14 * pow(radius, 2); // pi * radius ^ 2
}
