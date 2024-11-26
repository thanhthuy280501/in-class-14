#include "vehicle.h"
class EV: public Vehicle{
public:
EV(int cc=20, int r =150)
:currCharge , range(r){
make="Chevrolet"
model="Bolt"
}
void fillUp(int e){
std::cout << "Filling with" << e << " gallons of gasoline." << endl;
currGallons +=e;
}
void print(){
  cout << "Make: " << make << endl;
  cout << "Model: " << model << endl;
  cout << "Fuel: " << currGallons << endl;
  cout << "Engine Displacement: " << displacement << endl;
}
private:
int currGallons;
int 
