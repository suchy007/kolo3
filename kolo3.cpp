// pawel jalocha infotmatyka 94007

#include <iostream>
using namespace std;

class Kolo {
  public:
    Kolo(float r=1.0) : r_(r) {}
    float pole() { return 3.14159*r_*r_; }
  private:
    float r_;
};

int main(int argc, char **argv) {
  Kolo k(2.5);
  cout<<"Pole kola o promieniu 2.5 wynosi "<<k.pole()<<endl;
  return 0;
}


