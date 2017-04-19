/**
 Copyright (c) 2017 Rafal Biegacz

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/

#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
  int a[] = {-2, 99, 0, -743, 2, 4, 300, 400, 500, 3123, 24, 132, 118, 111565, 267, 201, 999, 998, 997, 996, 995, 994, 993, 992, 991, 1002, -348};

  constexpr std::size_t size = sizeof a / sizeof *a;

  std::cout << "Inspired by http://en.cppreference.com/w/cpp/algorithm/qsort \n";
  std::cout << "before sorting...\n";
  for(int ai : a) {std::cout << ai << ' ';}

  std::qsort(a, size, sizeof *a, [](const void* a, const void* b) {
      int arg1 = *static_cast<const int*>(a);
      int arg2 = *static_cast<const int*>(b);
      
      if(arg1 < arg2) return -1;
      if(arg1 > arg2) return 1;
      return 0;
      //  return (arg1 > arg2) - (arg1 < arg2); // possible shortcut
      //  return arg1 - arg2; // erroneous shortcut (fails if INT_MIN is present)
    }
    );
  std::cout << "\nafter sorting...\n";
  for(int ai : a) {std::cout << ai << ' ';}
  std::cout << "\n";
}
