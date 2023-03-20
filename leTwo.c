// khan59@uoguelph.ca
#include <stdio.h>
#include <stdlib.h>

int *populateArray(int *size);
int processArray(int *leArr, int size);

int *populateArray(int *size) {
    // Ask the size of array
    printf("Enter size of array: ");
    scanf("%d", size);

    // Dynamically allocate according to user input
    int *arrayPtr = (int *) malloc((*size) * sizeof(int));

    // Get array elements
    printf("Enter %d integers: ", *size);
    for (int i = 0; i < *size; i++) {
        scanf("%d", &arrayPtr[i]);
    }

    printf("Size of array: %d\n", *size);
    return arrayPtr;
}

int processArray(int *leArr, int size) {
    int evenNum = 0;

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", leArr[i]);
        // Check if even
        if (leArr[i] % 2 == 0) {
            evenNum++;
            leArr[i]++;
        }
    }

    // Print the updated array
    printf("\nUpdated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", leArr[i]);
    }

    return evenNum;
}
