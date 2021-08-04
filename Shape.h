//
//  Shape.h
//  areaCalculator
//
//  Created by Diego Acuna on 6/10/21.
//

#ifndef Shape_h
#define Shape_h
#include <iostream>

//define  abstract class "Shape" containing a virtual function named get_area() that returns a double type.

class Shape {
    // make get area function public so that it may be accesed by other classes and files within code
public:
    virtual double calc_area() = 0;
};

#endif /* Shape_h */
