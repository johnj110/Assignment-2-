#include <iostream>
#include "date.hpp"
using namespace std;

int main() {
  int y,m,d;
  cout << "Enter the date as year month day on one line, e.g. 2020 10 23" << endl;
  cout << "Enter year first dog " <<endl;
  cin >>y;
   cout << "Enter month  " <<endl;
  cin >>m;
   cout << "Enter day " <<endl;
  cin >>d;
  
  date da(y,m,d);
  da.print_diagnostics();
  int dn = da.get_date_number();
  cout << "The day number is " << dn << "." <<endl;
  

}