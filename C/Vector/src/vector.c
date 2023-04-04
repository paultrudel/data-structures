#include <stdbool.h>
#include <stdlib.h>
#include "vector.h"

static Vector *resize(Vector *old, int newCapacity);

bool initialize(Vector *vector, int initialCapacity) {
    *vector = (Vector) {
        .size = 0,
        .capacity = (initialCapacity > 0) ? initialCapacity : 10,
        .items = malloc(sizeof(int) * vector->capacity)
    };

    return vector->items != NULL;
}
