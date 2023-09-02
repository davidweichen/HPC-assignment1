#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>



void 
setup(int64_t N, uint64_t A[])
{
   std::srand(std::time(nullptr));
   for (int i = 0; i < N; ++i) {
        A[i] = std::rand() % N;
    }
   printf(" inside sum_indirect problem_setup, N=%lld \n", N);
}

int64_t
sum(int64_t N, uint64_t A[])
{
    int sum = 0;
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

