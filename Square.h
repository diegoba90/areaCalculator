//
//  Square.hpp
//  areaCalculator
//
//  Created by Diego Acuna on 6/11/21.
//

#ifndef Square_hpp
#define Square_hpp

#include <stdio.h>
//inheret the shape class
#include "Shape.h"

//this header file will declare all members and functions used in Square.cpp file
//Define Circle class
class Square: public Shape {
    //private members
private:
    double width;
    double w;
    //public members
public:
    Square(double w); //constructor function
    void set_width(double w); //sets initial width value
    double get_width(); //gets width value from user
    double calc_area(); //inheret function from Shape class
};

#endif /* Square_hpp */
