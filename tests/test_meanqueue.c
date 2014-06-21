
#include <stdbool.h>
#include <assert.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "CuTest.h"

#include "meanqueue.h"

void Testmeanqueue_init_is_zero(
    CuTest * tc
)
{
    void *qu;

    qu = meanqueue_new(5);

    CuAssertTrue(tc, 0 == meanqueue_get_value(qu));

    meanqueue_free(qu);
}

void Testmeanqueue_offer_populates_correct_mean(
    CuTest * tc
)
{
    void *qu;

    qu = meanqueue_new(5);

    meanqueue_offer(qu, 5);
    CuAssertTrue(tc, 1 == meanqueue_get_value(qu));

    meanqueue_free(qu);
}

void Testmeanqueue_offer_populates_correct_mean2(
    CuTest * tc
)
{
    void *qu;

    qu = meanqueue_new(5);

    meanqueue_offer(qu, 5);
    meanqueue_offer(qu, 1);
    meanqueue_offer(qu, 2);
    meanqueue_offer(qu, 4);
    meanqueue_offer(qu, 3);
    CuAssertTrue(tc, 3 == (int) meanqueue_get_value(qu));

    meanqueue_free(qu);
}

void Testmeanqueue_offer_circles_around_array_size(
    CuTest * tc
)
{
    void *qu;

    qu = meanqueue_new(5);

    meanqueue_offer(qu, 5);
    meanqueue_offer(qu, 0);
    meanqueue_offer(qu, 0);
    meanqueue_offer(qu, 0);
    meanqueue_offer(qu, 0);
    meanqueue_offer(qu, 0);
    CuAssertTrue(tc, 0 == meanqueue_get_value(qu));

    meanqueue_free(qu);
}
