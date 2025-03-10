#include <stdio.h>

#include "algorithms/algorithms.h"
#include "arrays/arrays.h"
#include "utils/utils.h"

int main(void) {
    //
    /**
     * TODO: read n from console - number of elements
     * TODO: declare an arrays (no dynamic memory allocation needed)
     * TODO: fill the arrays with random values between [1, 10]
     * TODO: print the arrays
     * TODO: calculate and print the number of prime numbers
     */
int n,db=0;
    scanf("%i",&n);
    int t[n];
    fillWithRandom(t,n,1,10);
    printArray(t,n);
    printf("\n");
    for (int i = 0; i < n; ++i) {
        if(isPrime(t[i])) {
            db++;
        }
    }
    printf("%i",db);


    return 0;
}
