/* This program calculates the area for the following shapes:
       Square, Circle and Rectangle
   It will use several diffrent classes, inheretance, abstract classes and functions*/

/* Created by Diego Acuna
   Homework Assignment 1
   CSCI 4100 Dr. Patton, AUM*/

#include <iostream>
#include <string>
#include "console.h"
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"

using namespace std;

void display_area(Shape& shape) {
    cout << "Area: " << shape.calc_area() << "\n\n";
}

int main() {
    cout << "The Area Calculator\n\n";

    char choice = 'y';
    while (choice == 'y') {
        char shape;
        cout << "Circle, square, or rectangle? (c/s/r): ";
        cin >> shape;

        if (shape == 'c') {
            double radius = console::get_double("Enter radius (0-100): ", 0, 100);
            Circle circle(radius);
            display_area(circle);
        }
        
        else if (shape == 's') {
            double width = console::get_double("Enter width (0-100): ", 0, 100);
            Square square(width);
            display_area(square);
        }
        
        else if (shape == 'r') {
            double width = console::get_double("Enter width:  (0-100): ", 0, 100);
            double height = console::get_double("Enter height: (0-100): ", 0, 100);
            Rectangle rectangle(width, height);
            display_area(rectangle);
        }
        else {
            cout << "Invalid shape type.\n\n";
        }

        cout << "Continue? (y/n): ";
        cin >> choice;
        cout << endl;
    }
    cout << "Bye!\n\n";

    return 0;
}

