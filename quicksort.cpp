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

struct Sum
{
  Sum(): sum{0} { }
  void operator()(int n) { sum += n; }
  int sum;
};

int main()
{
  std::vector<int> nums{300, 400, 500, 3123, 24, 132, 118, 111565, 267};

  /* example of lambda function */
  auto display = [](const int& n) { std::cout << " " << n; };

  std::cout << "before sorting..";
  std::for_each(nums.begin(), nums.end(), display);
  std::cout << '\n';

  std::cout << "after sorting... ";
  std::for_each(nums.begin(), nums.end(), display);
  std::cout << '\n';
}
