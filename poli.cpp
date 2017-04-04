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

#include <iostream>
using namespace std;

class pojazd {
public:
  pojazd () {};
  ~pojazd() {};
  /* comment out virtual keyword */
  virtual void Name();
};

void pojazd::Name() 
{
  cout << "generic" << "\n";
};


class autobus : public pojazd
{
public:
  autobus() {};
  ~autobus() {};
  void Name();
};

void autobus:: Name() 
{
  cout << "autobus" << "\n";
};

class motor : public pojazd
{
public:
  motor() {};
  ~motor() {};
  void Name();
};

void motor::Name() 
{
  cout << "motor" << "\n";
};

int main ()
{
  autobus *A = new autobus();
  motor *M = new motor();
  pojazd *P = A;
  A->Name();
  M->Name();
  P->Name();
  ((pojazd *)M)->Name();
  delete A;
  delete M;
  delete P;
  return 0;
}
