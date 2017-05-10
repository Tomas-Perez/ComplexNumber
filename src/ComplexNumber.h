/**
 * Represents a complex number, with a real and imaginary part. Includes functions for sum, subtraction, product,
 * absolute value and equals.
 */

#ifndef COMPLEXNUMBER_COMPLEXNUMBER_H
#define COMPLEXNUMBER_COMPLEXNUMBER_H

typedef struct ComplexNumber{

    int realNumber;
    int imaginaryNumber;

} ComplexNumber;

//Functions
ComplexNumber* createComplexNumber(int realNumber, int imaginaryNumber);
ComplexNumber* sum(ComplexNumber* z1, ComplexNumber* z2);
ComplexNumber* subtract(ComplexNumber* z1, ComplexNumber* z2);
ComplexNumber* product(ComplexNumber* z1, ComplexNumber* z2);
double absoluteValue(ComplexNumber* z);
int equals(ComplexNumber* z1, ComplexNumber* z2);
void destroyComplexNumber(ComplexNumber* z);

#endif //COMPLEXNUMBER_COMPLEXNUMBER_H
