#ifndef VECTOR_H
#define VECTOR_H

#include <stdbool.h>

typedef struct Vector {
    size_t size;
    size_t capacity;
    int *items;
} Vector;

bool initialize(Vector *vector, int initialCapacity);
size_t size(Vector *vector);
size_t capacity(Vector *vector);
bool isEmpty(Vector *vector);
int get(Vector *vector, int index);
Vector *push(Vector *vector, int item);
bool insert(Vector *vector, int item, int index);
int pop(Vector *vector);
bool removeItem(int item);
bool removeAt(int index);
int indexOf(int item);

#endif
