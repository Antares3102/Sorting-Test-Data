#include <stdio.h>     
#include <stdlib.h>     
#include <time.h>
#include <math.h>

int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int n = pow(10, 6);
    int** values = new int* [n];
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        values[i] = rand() % 2000010 - 900000;
    qsort(values, 6, sizeof(int), compare);
    for (n = 0; n < 6; n++)
        printf("%d ", values[n]);
    return 0;
}