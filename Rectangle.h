//
//  Rectangle.hpp
//  areaCalculator
//
//  Created by Diego Acuna on 6/11/21.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp
//include Shape.h
#include "Shape.h"
#include <stdio.h>

//this header file will initialize all members and functinos that Rectangle.cpp will use

class Rectangle:public Shape{
    //private members
private:
    double length, width, l, h;
    
//public members
public:
    Rectangle(double l, double w); //constructor function
    void set_width(double w); //set intial width value
    double get_width();//get width from user
    void set_length(double l);//set initial length value
    double get_length();//get length value from user
    double calc_area();//calculate area function
};

#endif /* Rectangle_hpp */
