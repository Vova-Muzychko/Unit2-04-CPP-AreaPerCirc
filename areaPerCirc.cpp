// Copyright 2026 Vova-Muzychko
// Created by: VovaM
// Date: Sep 22th, 2026
// calculates the area and perimeter of a circle
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double radius = 0.0;

    // Get input from the user
    std::cout << "Enter the radius of the circle (in cm): ";
    std::cin >> radius;

    // Calculations using M_PI
    double area = M_PI * std::pow(radius, 2);
    double circumference = 2 * M_PI * radius;

    // Display results formatted to 2 decimal places with cm units
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nRadius: " << radius << " cm" << std::endl;
    std::cout << "Area: " << area << " cm²" << std::endl;
    std::cout << "Circumference: " << circumference << " cm" << std::endl;

    return 0;
}
