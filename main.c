#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, *arrayPtr, evenNum;

    arrayPtr = populateArray(&size);

    for (int i = 0; i < size; i++) {
        printf("%d ", &arrayPtr[i]);
    }

    evenNum = processArray(arrayPt, size);
    printf("\nTotal number of even numbers is: %d", evenNum);

    free(arrayPtr);

    return 0;
}
