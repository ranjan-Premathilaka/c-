#include <iostream>
#include <cmath> // for M_PI

using namespace std;

int main() {
    double radius, height, volume, surfaceArea;

    // Asking for radius and height
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    // Calculating volume and surface area
    volume = M_PI * radius * radius * height; // Volume = π * r^2 * h
    surfaceArea = 2 * M_PI * radius * (radius + height); // Surface Area = 2 * π * r * (r + h)

    // Printing the results
    cout << "Volume of the cylinder: " << volume << endl;
    cout << "Surface area of the cylinder: " << surfaceArea << endl;

    return 0;
}

