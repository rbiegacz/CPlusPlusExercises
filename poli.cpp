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
