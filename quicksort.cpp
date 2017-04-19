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

int partition(std::vector<int> *nums, int p, int r) // dzielimy tablice na dwie czesci, w pierwszej wszystkie liczby sa mniejsze badz rowne x, w drugiej wieksze lub rowne od x
{
  int x = nums->at(p); /* let's choose the partition point in the vector */
  int i = p, j = r, w; // i, j - indices in vector
  
  while (true) 
    {
      while (nums->at(j) > x) // decrement until we find an element smaller than x
	j--;
      while (nums->at(i) < x) // increment until we find an element greater than x
	i++;
      if (i < j) // let's swap the numbers i < j
	{
	  w = nums->at(i);
	  nums->at(i) = nums->at(j);
	  nums->at(j) = w;
	  i++;
	  j--;
	}
      else // if i >= j then we return j as partition point 
	return j;
    }
}

void quicksort(std::vector<int> *nums, int p, int r)
{
  if (p < r)
    {
      auto q = partition(nums,p,r); 
      quicksort(nums, p, q); 
      quicksort(nums, q+1, r);
    }
}
 
int main()
{
  std::vector<int> nums{-2, 99, 0, -743, 2, 4, 300, 400, 500, 3123, 24, 132, 118, 111565, 267, 201, 999, 998, 997, 996, 995, 994, 993, 992, 991, 1002, -348};
  
  /* example of lambda function */
  auto display = [](const int& n) { std::cout << " " << n; };

  std::cout << "before sorting...";
  std::for_each(nums.begin(), nums.end(), display);
  std::cout << '\n';

  quicksort(&nums, 0, nums.size()-1);
  
  std::cout << "after sorting... ";
  std::for_each(nums.begin(), nums.end(), display);
  std::cout << '\n';
}
