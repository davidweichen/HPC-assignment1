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
        int j = lrand48() % N;
        A[i] = j;
    }
   printf(" inside sum_indirect problem_setup, N=%lld \n", N);
}

int64_t
sum(int64_t N, uint64_t A[])
{
    printf(" inside sum_indirect perform_sum, N=%lld \n", N);
    int64_t sum = 0;
    int count = 0;
    int indx = 0;
    for(int i=0;i<N;i++){
      sum+=A[indx];
      indx = A[indx];
    }
   
   return sum;
   
}

