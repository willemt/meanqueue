
typedef struct
{
    int *vals;
    int size;
    int idxCur;
    int valSum;
    float mean;
} meanqueue_t;

void *meanqueue_new(
    const int size
);

void meanqueue_free(
    meanqueue_t * qu
);

void meanqueue_offer(
    meanqueue_t * qu,
    const int val
);

float meanqueue_get_value(
    meanqueue_t * qu
);
