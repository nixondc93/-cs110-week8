#ifndef Pharmacy_H
#define Pharmacy_H
#include <iostream>
using namespace std;

class Pharmacy {
  private:
    int lipitor_charge = 40;
    int lisinopril_charge = 80;
    int metformin_charge = 70;
    int amoxicillin_charge = 20;
    int prednisone_charge = 30;

  public:
  int get_lipitor_charge(){
    return lipitor_charge;
  }

  int get_lisinopril_charge(){
    return lisinopril_charge;
  }

  int get_metformin_charge(){
    return metformin_charge;
  }

  int get_amoxicillin_charge(){
    return amoxicillin_charge;
  }

  int get_prednisone_charge(){
    return prednisone_charge;
  }
};

#endif