#ifndef Patient_Account_H
#define Patient_Account_H
#include <iostream>
#include <string>
#include "pharmacy.h"
#include "surgery.h"
using namespace std;

class Patient_Account {
  public:
    int daily_rate = 100;
    int days_in_hosptial = 1;
    int surgeries[10] = {0};
    int prescriptions[10] = {0};

    void add_days(int days){
      days_in_hosptial += days;
    }

    void set_surgery(int charge){
      for(int i = 0; i <= 10; i++){
        if(surgeries[i] == 0){
          surgeries[i] = charge;
          break;
        }
      }
    }

    void set_prescription(int charge){
      for(int i = 0; i <= 10; i++){
        if(prescriptions[i] == 0){
          prescriptions[i] = charge;
          break;
        }
      }
    }

    int surgeries_sum(){
      int sum = 0;
      for(int i = 0; i <= 10; i++){
        if(surgeries[i] == 0){
          break;
        }
        sum += surgeries[i];
      }
      return sum;
    }

    int pharmacy_sum(){
      int sum = 0;
      for(int i = 0; i <= 10; i++){
        if(prescriptions[i] == 0){
          break;
        }
        sum += prescriptions[i];
      }
      return sum;
    }

    void total_charge(){

    }

    void checkout(){
      int hospital_charge = daily_rate * days_in_hosptial;
      int surgery_sum = surgeries_sum();
      int prescription_sum = pharmacy_sum();
      int total = hospital_charge + surgery_sum + prescription_sum;
      cout << "***Your Hospital Bill:***" << endl;
      cout << "Hospital Charge: " << hospital_charge << endl;
      cout << "Surgery Charge: " << surgery_sum << endl;
      cout << "Pharmacy Charge " << prescription_sum << endl;
      cout << "Total: " << total;
      exit(0);
    }
};

#endif