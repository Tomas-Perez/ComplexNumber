#include <afxres.h>
#include "CUTest/CuTest.h"
#include "../src/ComplexNumber.h"

/**
 * Test for complex number sum function
 * @param tc CuTest struct, don't worry about it
 */

void TestSum(CuTest *tc){
    ComplexNumber complexNumber1 = {5, -2};
    ComplexNumber complexNumber2 = {7, 6};
    ComplexNumber actual = *sum(&complexNumber1, &complexNumber2);
    ComplexNumber expected = {12, 4};

    CuAssertIntEquals(tc, expected.realNumber, actual.realNumber);
}

/**
 * Test for complex number subtract function
 * @param tc CuTest struct, don't worry about it
 */

void TestSubtract(CuTest *tc){
    ComplexNumber complexNumber1 = {5, -2};
    ComplexNumber complexNumber2 = {7, 6};
    ComplexNumber actual = *subtract(&complexNumber1, &complexNumber2);
    ComplexNumber expected = {-2, -8};

    CuAssertIntEquals(tc, expected.realNumber, actual.realNumber);
}

/**
 * Takes all the tests and saves them in a test suite, then returns it
 * @return test suite containing all tests, ready for executing
 */

CuSuite* getComplexNumberTestSuite(){
    CuSuite* suite = CuSuiteNew();
    SUITE_ADD_TEST(suite, TestSum);
    SUITE_ADD_TEST(suite, TestSubtract);
    return suite;
}