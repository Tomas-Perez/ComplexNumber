#include <stdio.h>
#include <malloc.h>
#include <math.h>
#include "ComplexNumber.h"

/**
 * Creates a new ComplexNumber.
 *
 * @param realNumber: the real part of the complex number
 * @param imaginaryNumber, the imaginary part of the complex number.
 * @return ComplexNumber pointer with the parameters given.
 */

ComplexNumber* createComplexNumber(int realNumber, int imaginaryNumber){
    ComplexNumber* result = malloc(sizeof(ComplexNumber));
    result -> realNumber = realNumber;
    result -> imaginaryNumber = imaginaryNumber;
    return result;
}

/**
 * Takes two complex numbers and returns their sum.
 *
 * @param z1 ComplexNumber1
 * @param z2 ComplexNumber2
 * @return z1 + z2
 */

ComplexNumber* sum(ComplexNumber* z1, ComplexNumber* z2){
    int realResult = z1 -> realNumber + z2 -> realNumber;
    int imaginaryResult = z1 -> imaginaryNumber + z2 -> imaginaryNumber;
    return createComplexNumber(realResult, imaginaryResult);
}

/**
 * Takes two complex numbers and returns the result of substracting the second one from the first one
 *
 * @param z1 ComplexNumber1
 * @param z2 ComplexNumber2
 * @return z1 - z2
 */

ComplexNumber* subtract(ComplexNumber* z1, ComplexNumber* z2){
    int realResult = z1 -> realNumber - z2 -> realNumber;
    int imaginaryResult = z1 -> imaginaryNumber - z2 -> imaginaryNumber;
    return createComplexNumber(realResult, imaginaryResult);
}

/**
 * Takes two complex numbers and returns their product
 *
 * @param z1 ComplexNumber1
 * @param z2 ComplexNumber2
 * @return z1 * z2
 */

ComplexNumber* product(ComplexNumber* z1, ComplexNumber* z2){
    int realResult = (z1 -> realNumber * z2 -> realNumber) - (z1 -> imaginaryNumber * z2 -> imaginaryNumber);
    int imaginaryResult = (z1 -> realNumber * z2 -> imaginaryNumber) + (z2 -> realNumber * z1 -> imaginaryNumber);
    return createComplexNumber(realResult, imaginaryResult);
}

/**
 * Takes a complex number and returns its absolute value.
 *
 * @param z
 * @return absolute value of z
 */

double absoluteValue(ComplexNumber* z){
    return sqrt(pow(z->realNumber, 2) + pow(z->imaginaryNumber,2));
}

/**
 * Takes two complex numbers and checks if they are equal
 *
 * @param z1 ComplexNumber1
 * @param z2 ComplexNumber2
 * @return 1 if z1 equals z2, 0 if z1 and z2 are different
 */

int equals(ComplexNumber* z1, ComplexNumber* z2){
    return (z1->realNumber == z2->realNumber && z1->imaginaryNumber == z2->imaginaryNumber);
}

/**
 * Takes a complex number and frees the memory it was using
 *
 * @param z
 */

void destroyComplexNumber(ComplexNumber* z){
    free(z->realNumber);
    free(z->imaginaryNumber);
    free(z);
}
