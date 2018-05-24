#include "./Msg.h"
#include <iostream>

class LocationMsg : public Msg
{
public:
  LocationMsg(int _x, int _y) : x(_x), y(_y) {}
  int x, y;
};

class NothingMsg : public Msg
{
};


void printMsg( Msg* msg )
{
  std::cout << ((NothingMsg *)msg)->x << std::endl;
}

int main()
{
  Msg* m = new NothingMsg();
  printMsg(m);
  return 0;
}
