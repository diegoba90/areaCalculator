//
//  Square.cpp
//  areaCalculator
//
//  Created by Diego Acuna on 6/11/21.
//

#include "Square.h"
#include <math.h>
#include <stdio.h>

//this cpp file will initialize all functions in the Square.h file
//constructor function
Square::Square(double w){
    width = w;
}

//apply setter function
void Square::set_width(double w){
    width = w;
}

//apply setter function
double Square::get_width(){
    return width;
}

//calculate area function
double Square::calc_area(){
    return pow(width, 2); //width ^ 2
}






