//
//  Rectangle.cpp
//  areaCalculator
//
//  Created by Diego Acuna on 6/11/21.
//

#include "Rectangle.h"
#include <math.h>
#include <stdio.h>

//utilize functions from Rectangle.h
//constructor
Rectangle::Rectangle(double l, double w){
    length = l;
    width = w;
}

//setter function for width
void Rectangle::set_width(double w){
    width = w;
}
//getter function for width
double Rectangle::get_width(){
    return width;
}

//setter function for length
void Rectangle::set_length(double l){
    length = l;
}

//getter function for length
double Rectangle::get_length(){
    return length;
}

//calculate area function
double Rectangle::calc_area(){
    return length * width;
}
