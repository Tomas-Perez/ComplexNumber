#include <stdio.h>
#include "ComplexNumber.h"

int main() {
    ComplexNumber complexNumber1 = {5, -2};
    ComplexNumber complexNumber2 = {7, 6};

    ComplexNumber complexNumber3 = *sum(&complexNumber1, &complexNumber2);
    printf("%d + %di \n", complexNumber3.realNumber, complexNumber3.imaginaryNumber);

    complexNumber3 = *subtract(&complexNumber1, &complexNumber2);
    printf("%d %di \n", complexNumber3.realNumber, complexNumber3.imaginaryNumber);

    complexNumber3 = *product(&complexNumber1, &complexNumber2);
    printf("%d + %di \n", complexNumber3.realNumber, complexNumber3.imaginaryNumber);

    double abs = absoluteValue(&complexNumber1);
    printf("%lf \n", abs);

    int equal = equals(&complexNumber1, &complexNumber2);
    printf("%d \n", equal);
    return 0;
}