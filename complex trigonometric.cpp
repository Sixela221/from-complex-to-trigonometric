#include <iostream>
#include <cmath>

struct ComplexNumber {
    double real;
    double imag;
};

ComplexNumber toTrigonometricForm(const ComplexNumber& complex) {
    ComplexNumber trigonometric;
    trigonometric.real = std::sqrt(complex.real * complex.real + complex.imag * complex.imag);
    trigonometric.imag = std::atan2(complex.imag, complex.real);
    return trigonometric;
}

int main() {
    // Ask the user to enter the real and imaginary parts
    std::cout << "Enter the real part of the complex number: ";
    double realPart;
    std::cin >> realPart;

    std::cout << "Enter the imaginary part of the complex number: ";
    double imagPart;
    std::cin >> imagPart;

    // Create a structure representing the complex number
    ComplexNumber complex;
    complex.real = realPart;
    complex.imag = imagPart;

    // Calculate the trigonometric form of the complex number
    ComplexNumber trigonometric = toTrigonometricForm(complex);

    // Display the trigonometric form
    std::cout << "The trigonometric form of the complex number is: ";
    std::cout << trigonometric.real << " * (cos(" << trigonometric.imag << ") + i * sin(" << trigonometric.imag << "))" << std::endl;

    return 0;
}

