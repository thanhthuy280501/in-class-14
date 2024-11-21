#include <iostream>
using namespace std;

#include "vehicle.h"
#include "ic.h"			// You must build this.
#include "ev.h"			// You must build this.

int main() {
  Vehicle *transportationThing = new Vehicle;
  Vehicle *model3 = new EV;
  Vehicle *mustang = new IC;

  //****************************************
  // Demonstrates different transportation
  // objects being filled with their fuel.
  //****************************************
  transportationThing->fillUp(20);
  model3->fillUp(20);
  mustang -> fillUp(20);

  return 0;
}
