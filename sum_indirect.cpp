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
   for (int64_t i = 0; i < N; ++i) {
        A[i] = i;
    }
   for (int i = 0; i < N; ++i) {
        int j = lrand48() % N;
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
   printf(" inside sum_indirect problem_setup, N=%lld \n", N);
}

int64_t
sum(int64_t N, uint64_t A[])
{
    int64_t sum = 0;
    for(int i=0;i<N;i++){
         int j = A[i];
         sum+=A[j];
    }
   printf(" inside sum_indirect perform_sum, N=%lld \n", N);
   return sum;
}

