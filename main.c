#include <stdio.h>
#include <stdlib.h>

int *populateArray(int *size);
int processArray(int *leArr, int size);

int main() {
    int size, *arrayPtr, evenNum;

    arrayPtr = populateArray(&size);

    for (int i = 0; i < size; i++) {
        printf("%ls ", &arrayPtr[i]);
    }

    printf("\n");

    evenNum = processArray(arrayPtr, size);
    printf("\nTotal number of even numbers is: %d\n", evenNum);

    free(arrayPtr);

    return 0;
}
