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

void display (int i) {  // function:
  std::cout << ' ' << i;
}

void bubblesort(std::vector<int> *v) {
  std::vector<int>::iterator vIterator;
  std::vector<int>::iterator vIterInnerLoop;
  std::vector<int>::iterator vEnd;
  
  for (vIterator = v->end(); vIterator > v->begin()+1; vIterator--) {
    vEnd = vIterator;
    for (vIterInnerLoop = v->begin(); vIterInnerLoop < vEnd - 1; vIterInnerLoop++) {
      if (*vIterInnerLoop > *(vIterInnerLoop + 1)) {
	auto v_temp = *vIterInnerLoop;
	*vIterInnerLoop = *(vIterInnerLoop + 1);
	*(vIterInnerLoop + 1) = v_temp;
      }
    }
  }
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
  v.push_back(5);
  v.push_back(31);
  v.push_back(34);
  v.push_back(38);
  v.push_back(318);
  v.push_back(3200);
  v.push_back(-38);
  v.push_back(-32);
  v.push_back(38);
  v.push_back(34);
  v.push_back(35);
  v.push_back(35);

  std::cout << "unsorted vector contains:";
  for_each (v.begin(), v.end(), display);
  std::cout << '\n';
  bubblesort(&v);
  std::cout << "sorted vector contains:";
  for_each (v.begin(), v.end(), display);
  std::cout << '\n';
}
