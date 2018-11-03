#ifndef Patient_Account_H
#define Patient_Account_H
#include <iostream>
using namespace std;

class Patient_Account {
  public:
    int daily_rate = 100;
    int days_in_hosptial = 0;

    float total_charge;

    void checkout(){
      int hospital_charge = daily_rate * days_in_hosptial;
      cout << "Your Hospital Bill:" << endl;
      cout << "Hospital Charge: " + hospital_charge << endl;
    }
};

#endif