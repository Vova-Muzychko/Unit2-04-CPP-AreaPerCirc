// Copyright 2026 Vova-Muzychko
// Created by: VovaM
// Date: Sep 22th, 2026
// calculates the area and perimeter of a circle
#include <iostream>
#include <cmath>
#include <iomanip>  // Needed for std::fixed and std::setprecision

int main() {
    double radius = 0.0;

    std::cout << "Enter the radius of the circle: ";
    if (!(std::cin >> radius)) {
        std::cout << "Invalid input! Please enter a numerical "
                 "value." << std::endl;
        return 1;
    }

    double area = M_PI * std::pow(radius, 2);
    double perimeter = 2 * M_PI * radius;

    // Set output formatting to fixed-point with 2 decimal places
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "\nFor a circle with radius " << radius << ":" << std::endl;
    std::cout << "Area = " << area << std::endl;
    std::cout << "Perimeter (Circumference) = " << perimeter << std::endl;

    return 0;
}
