#include <iostream>
using namespace std;
#include "patient_account.h"
#include "pharmacy.h"
#include "surgery.h"

int menu(){
  cout << "***Patient Menu: ***" << endl;
  cout << "1: Set number of days stayed at hospital" << endl;
  cout << "2: Get Surgery" << endl;
  cout << "3: Get Presciption" << endl;
  cout << "4: Checkout" << endl;
  cout << "5: Exit" << endl;
  cout << endl;
  cout << "Enter an Option";
  int option;
  cin >> option;
  return option;
}

int surgery_action(int opt){
  Surgery current_surgery;
  int charge;
  if(opt == 1){
    charge = current_surgery.get_appendectomy_charge();
  }else if(opt == 2){
    charge = current_surgery.get_cataract_charge();
  }else if(opt == 3){
    charge = current_surgery.get_tonsillectomy_charge();
  }else if(opt == 4){
    charge = current_surgery.get_cholecystectomy_charge();
  }else if(opt == 5){
    charge = current_surgery.get_hemorrhoidectomy_charge();
  }
  return charge;
}

int pharmacy_action(int opt){
  Pharmacy current_prescription;
  int charge = 0;
  if(opt == 1){
    charge = current_prescription.get_lipitor_charge();
  }else if(opt == 2){
    charge = current_prescription.get_lisinopril_charge();
  }else if(opt == 3){
    charge = current_prescription.get_metformin_charge();
  }else if(opt == 4){
    charge = current_prescription.get_amoxicillin_charge();
  }else if(opt == 5){
    charge = current_prescription.get_prednisone_charge();
  }
  return charge;
}

int surgery_menu(){
  cout << "Surgery Menu: " << endl;
  cout << "1: Appendectomy" << endl;
  cout << "2: Cataract" << endl;
  cout << "3: Tonsillectomy" << endl;
  cout << "4: Cholecystectomy" << endl;
  cout << "5: Hemorrhoidectomy" << endl;
  int option;
  cin >> option;
  return option;
}

int pharmacy_menu(){
  cout << "Pharmacy Menu: " << endl;
  cout << "1: Lipitor" << endl;
  cout << "2: Lisinopril" << endl;
  cout << "3: Metformin" << endl;
  cout << "4: Amoxicillin" << endl;
  cout << "5: Prednisone" << endl;
  int option;
  cin >> option;
  return option;
}

void select_action(int opt, Patient_Account pa){
  if(opt == 1){
    int days;
    cout << "Enter Number of Days: ";
    cin >> days;
    pa.add_days(days);
    select_action(menu(), pa);
  }else if(opt == 2){
    int surgery_charge = surgery_action(surgery_menu());
    pa.set_surgery(surgery_charge);
    select_action(menu(), pa);
  }else if(opt == 3){
    int pharmacy_charge = pharmacy_action(pharmacy_menu());
    pa.set_prescription(pharmacy_charge);
    select_action(menu(), pa);
  }else if(opt == 4){
    pa.checkout();
    select_action(menu(), pa);
  }else if(opt == 5){
    exit(0);
  }else{
    menu();
  }
}






int main() {
  Patient_Account patient;
  int option = menu();
  select_action(option, patient);

}