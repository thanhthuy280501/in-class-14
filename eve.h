#ifndef EVE_H
#define EVE_H
class EV: public Vehicle
{
  public:
    virtual void fillUp(int e) {
      std::cout << "Filling with " << e << " generic units of energy fuel." << endl;
    }

};

#endif
