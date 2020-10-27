#include <iostream>
#include "date.hpp"
using namespace std;


int main() {
  
  const int array_size=3;
  int dno[array_size];
  int ya[array_size],ma[array_size],da[array_size];
  int d,m,y;

 for(int i =0;i<array_size;i++){
  cout << "Enter the date as year month day on one line, e.g. 2020 10 23" << endl;
  cout << "Enter year first dog " <<endl;
  cin >>ya[i];
  ya[i]=y
   cout << "Enter month  " <<endl;
  cin >>ma[i];
  ma[i]=m;
   cout << "Enter day " <<endl;
  cin >>da[i];
  
 
  
  date da(y,m,d);
  //da.print_diagnostics();

  int dn= da.get_date_number();
  dno[i]=dn;
  cout << "The day number is " << dn << "." <<endl;
    
   }
   for(int i=0;i<array_size;i++){
   cout <<"Day no for input "<<i<< " is "<<dno[i]<<endl;
   }
}
// while (x=0)
//each time it goes around the counter adds up but when it reaches 000 set counter to the no to exit the while loop