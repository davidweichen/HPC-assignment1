#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>
#include <stdlib.h>


void 
setup(int64_t N, uint64_t A[])
{
   for (int i = 0; i < N; ++i) {
        A[i] = lrand48() % N;
    }
   printf(" inside sum_indirect problem_setup, N=%lld \n", N);
}

int64_t
sum(int64_t N, uint64_t A[])
{
    int64_t sum = 0;
    int indx = 0;
    int count = 0;
    while (count< N) {
            sum += A[indx];
            indx = A[indx];
            count++;  
    }
   printf(" inside sum_indirect perform_sum, N=%lld \n", N);

   return sum;
}

