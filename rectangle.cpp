#include <iostream>

class Rectangle {
private:
    // Private data members
    double width;
    double length;

public:
    // Constructor to initialize default values
    Rectangle() {
        width = 1.0;
        length = 1.0;
    }

    // Setter for width
    void setWidth(double w) {
        if (w > 0) {
            width = w;
        } else {
            std::cout << "Width must be positive!\n";
        }
    }

    // Getter for width
    double getWidth() const {
        return width;
    }

    // Setter for length
    void setLength(double l) {
        if (l > 0) {
            length = l;
        } else {
            std::cout << "Length must be positive!\n";
        }
    }

    // Getter for length
    double getLength() const {
        return length;
    }

    // Function to calculate area
    double calculateArea() const {
        return width * length;
    }

    // Function to calculate perimeter
    double calculatePerimeter() const {
        return 2 * (width + length);
    }
};

int main() {
    //  Create a Rectangle object
    Rectangle rect;

    // 2. Set the dimensions using setters
    rect.setWidth(5.5);
    rect.setLength(10.0);

    // 3. Retrieve and print dimensions using getters
    std::cout << "--- Rectangle Dimensions ---" << std::endl;
    std::cout << "Width: " << rect.getWidth() << std::endl;
    std::cout << "Length: " << rect.getLength() << std::endl;

    // 4. Calculate and print area and perimeter
    std::cout << "\n--- Calculations ---" << std::endl;
    std::cout << "Area: " << rect.calculateArea() << std::endl;
    std::cout << "Perimeter: " << rect.calculatePerimeter() << std::endl;

    return 0;
}