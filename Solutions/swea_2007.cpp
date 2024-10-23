// SWEA 2007 - 패턴 마디의 길이

#include <iostream>
#include <string>

// macros
#define FASTIO std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
// types
// constants
// variables


int solution(const std::string& S){
   for(int n = 1; n <= S.size(); ++n){
      if(S.compare(0, n, S.substr(n, n)) == 0){
         return n;
      }
   }
   return S.size();
}

int main(int argc, char **argv) {
   FASTIO

   int T;
   std::cin >> T;
   for(int t = 1; t <= T; ++t){
      std::string S;
      std::cin >> S;
      std::cout <<  '#' << t << ' ' << solution(S) << '\n';
   }

   return 0;
}