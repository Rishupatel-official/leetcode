
#include <stdlib.h>
#include <stdio.h>

int compare(const void* a, const void* b) {
    int* x = *(int**)a;
    int* y = *(int**)b;

    return (x[0] > y[0]) - (x[0] < y[0]);
}

int** merge(int** intervals, int intervalsSize,
            int* intervalsColSize,
            int* returnSize,
            int** returnColumnSizes) {

    *returnSize = 0;

    if (intervalsSize == 0) {
        *returnColumnSizes = NULL;
        return NULL;
    }

    qsort(intervals, intervalsSize, sizeof(int*), compare);

    int** result = malloc(sizeof(int*) * intervalsSize);
    *returnColumnSizes = malloc(sizeof(int) * intervalsSize);

    int start = intervals[0][0];
    int end = intervals[0][1];

    for (int i = 1; i < intervalsSize; i++) {

        if (intervals[i][0] <= end) {
            if (intervals[i][1] > end) {
                end = intervals[i][1];
            }
        }
        else {
            result[*returnSize] = malloc(sizeof(int) * 2);
            result[*returnSize][0] = start;
            result[*returnSize][1] = end;
            (*returnColumnSizes)[*returnSize] = 2;
            (*returnSize)++;

            start = intervals[i][0];
            end = intervals[i][1];
        }
    }


    result[*returnSize] = malloc(sizeof(int) * 2);
    result[*returnSize][0] = start;
    result[*returnSize][1] = end;
    (*returnColumnSizes)[*returnSize] = 2;
    (*returnSize)++;

    return result;
}
