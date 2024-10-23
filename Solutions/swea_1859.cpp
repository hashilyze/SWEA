// SWEA 1859 - 백만 장자 프로젝트

#include <iostream>

// macros
#define FASTIO std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
// types
using ll = long long;
// constants
const int MAX_N = 1'000'000;
// variables
int N;
int arr[MAX_N];


ll maxSelling(){
   ll sum = 0;
   int max = 0;
   for(int i = N - 1; i >= 0; --i){
      max = std::max(max, arr[i]);
      sum += max - arr[i];
   }
   return sum;
}


int main(int argc, char **argv) {
   FASTIO

   int T;
   std::cin >> T;
   for(int t = 1; t <= T; ++t){
      std::cin >> N;
      for(int i = 0; i < N; ++i) std::cin >> arr[i];
      std::cout << '#' << t << ' ' << maxSelling() << '\n';
   }

   return 0;
}