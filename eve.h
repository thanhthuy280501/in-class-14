#ifndef EVE_H
#define EVE_H
class EV: public Vehicle
{
  public:
EV(int cc =10) : currCharge(cc){          //A zero and one paramater constructor
}
  
    virtual void fillUp(int e) {
      std::cout << "Filling with " << e << " generic units of energy fuel." << endl;
      currCharge += e;
    }
  private :
int currCharge;

};

#endif
