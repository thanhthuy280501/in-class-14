#ifndef VEHICLE_H
#define VEHICLE_H
class Vehicle
{
  public:
    virtual void fillUp(int e) {
      std::cout << "Filling with " << e << " generic units of energy fuel." << endl;
    virtual void fillUp(int e)=0;
      
    }
private:
int gasCapacity;
int no_seats;
int oil_capacity;

};

#endif
