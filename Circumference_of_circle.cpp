#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double r) {
        if (r < 0) {
            cerr << "Radius cannot be negative. Setting to 0." <<endl;
            radius = 0;
        } else {
            radius = r;
        }
    }

    // Function to calculate area
    double getArea() const {
        return M_PI * radius * radius;
    }

    // Function to calculate circumference
    double getCircumference() const {
        return 2 * M_PI * radius;
    }

    // Function to display the details
    void display() const {
        cout << "Circle with radius: " << radius << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Circumference: " << getCircumference() <<endl;
    }
};

int main() {
    double r;
   cout << "Enter the radius of the circle: ";
   cin >> r;

    Circle circle(r);
    circle.display();

    return 0;
}
