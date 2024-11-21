#ifndef VEHICLE_H
#define VEHICLE_H
class Vehicle
{
  public:
    virtual void fillUp(int e) {
      std::cout << "Filling with " << e << " generic units of energy fuel." << endl;
    }
};

#endif
