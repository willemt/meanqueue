

/* This is auto-generated code. Edit at your own peril. */
#include <stdio.h>
#include "CuTest.h"


extern void Testmeanqueue_init_is_zero(CuTest*);
extern void Testmeanqueue_offer_populates_correct_mean(CuTest*);
extern void Testmeanqueue_offer_populates_correct_mean2(CuTest*);
extern void Testmeanqueue_offer_circles_around_array_size(CuTest*);


void RunAllTests(void) 
{
    CuString *output = CuStringNew();
    CuSuite* suite = CuSuiteNew();


    SUITE_ADD_TEST(suite, Testmeanqueue_init_is_zero);
    SUITE_ADD_TEST(suite, Testmeanqueue_offer_populates_correct_mean);
    SUITE_ADD_TEST(suite, Testmeanqueue_offer_populates_correct_mean2);
    SUITE_ADD_TEST(suite, Testmeanqueue_offer_circles_around_array_size);

    CuSuiteRun(suite);
    CuSuiteSummary(suite, output);
    CuSuiteDetails(suite, output);
    printf("%s\\n", output->buffer);
}

int main()
{
    RunAllTests();
    return 0;
}

