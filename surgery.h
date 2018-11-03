#ifndef Surgery_H
#define Surgery_H
#include <iostream>
using namespace std;

class Surgery {
  private:
    int appendectomy_charge = 2500;
    int cataract_charge = 1200;
    int tonsillectomy_charge = 1800;
    int cholecystectomy_charge = 3000;
    int hemorrhoidectomy_charge = 2000;

  public:
  int get_appendectomy_charge(){
    return appendectomy_charge;
  }

  int get_cataract_charge(){
    return cataract_charge;
  }

  int get_tonsillectomy_charge(){
    return tonsillectomy_charge;
  }

  int get_cholecystectomy_charge(){
    return cholecystectomy_charge;
  }

  int get_hemorrhoidectomy_charge(){
    return hemorrhoidectomy_charge;
  }

};

#endif