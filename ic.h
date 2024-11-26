#ifndef IC_H
#define IC_H
class EV: public Vehicle
{
  public:
IC(int cg =10) : currGallons(cg){          //A zero and one paramater constructor
}
  
    virtual void fillUp(int e) {
      std::cout << "Filling with " << e << " generic units of energy fuel." << endl;
      currGallons += e;
    }
  private :
int currGallons;

};

#endif
