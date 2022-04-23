#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"


int main(void)
{
  int p1, p2, p3, p4, x, y;
    while(cin >> p1 >> p2 >> p3 >> p4 >> x >> y){
      if(p1 != p3 || p2 != p4){
        Ponto p (x,y);
        Ponto ie (p1, p2);
        Ponto sd (p3, p4);
        location_t loc;
        if(p1 <= p3 && p2 <= p4){
          loc = pt_in_rect(ie, sd, p);
        } else {
          loc = pt_in_rect(ie, sd, p);
        }
        switch(loc){
          case location_t::OUTSIDE: cout << "outside" << endl; break;
          case location_t::INSIDE: cout << "inside" << endl; break;
          case location_t::BORDER: cout << "border" << endl; break;
        }
      } else {
        cout << "invalid" << endl;
      }
    }

    return 0;
}