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

using namespace std;

#include <vector>
#include <iostream>
#include <algorithm>

void sum (int i) {  // function:
  std::cout << ' ' << i;
}

int main () {
  std::vector<int> v;
  std::vector<int>::iterator vIterator;

  // Add some elements to v
  v.push_back(1);
  v.push_back(4);
  v.push_back(8);
  v.push_back(18);
  v.push_back(200);
  v.push_back(-8);
  v.push_back(-2);
  v.push_back(8);
  v.push_back(4);
  v.push_back(5);
  
  //for(v = begin(v); v<= end(v); 
  //    myIntVectorIterator != myIntVector.end();
  //    myIntVectorIterator++)
  //  {
  //    cout<<*myIntVectorIterator<<" ";
  //    //Should output 1 4 8
  //  }

  auto odds = std::count_if(begin(v), end(v), [](auto elem) {return elem % 2 != 0;});
  auto evens = std::count_if(begin(v), end(v), [](auto elem) {return elem % 2 == 0;});

  cout << "Vector contains: " << v << "\n";
  cout << "#Odds: " << odds << "\n";
  cout << "#Evens: " << evens << "\n";
}
