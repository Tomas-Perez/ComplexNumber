#include <stdio.h>
#include "CUTest/CuTest.h"

// Reference to complex number test suite function, needed because there is no header file
CuSuite* getComplexNumberTestSuite();

/**
 * Test setup
 */

void RunAllTests(void) {
    CuString *output = CuStringNew();
    CuSuite* suite = CuSuiteNew();

    CuSuiteAddSuite(suite, getComplexNumberTestSuite());

    CuSuiteRun(suite);
    CuSuiteSummary(suite, output);
    CuSuiteDetails(suite, output);
    printf("%s\n", output->buffer);
}

int main(void) {
    RunAllTests();
}
