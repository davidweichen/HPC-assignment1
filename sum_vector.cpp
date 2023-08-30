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
   for(int i=0;i<N;i++){
      std::cout << "Please enter element "<< i+1 << ": ";
      std::cin >> A[i];
   }
   std::cout <<" inside direct_sum problem_setup, N = " << N << std::endl;
}
int64_t
sum(int64_t N, uint64_t A[])
{
   int64_t sum=0;
   for(int i=0;i<N;i++){
      sum+=A[i];
   }
   std::cout << "sum is " << sum << std::endl;
   std::cout <<" inside direct_sum perform_sum, N = " << N << std::endl;
   return sum;
}

