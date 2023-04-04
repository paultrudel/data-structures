#include <stdio.h>
#include <vector.h>

int main(void) {
    Vector vector;

    if(!initialize(&vector, 15)) {
        printf("Failed to initialize vector!!!\n");
        return 1;
    } else {
        printf("Initialize vector with size: %ld and capacity: %ld\n", vector.size, vector.capacity);
    }
}
