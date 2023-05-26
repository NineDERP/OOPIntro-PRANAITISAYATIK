#include <iostream>
using namespace std;

#include "student.h"

int main(int argc, char* argv[]) {
  student s1,s2;
  student a[10];
  //s1.name="PUN";  // ERROR, it is in private
   s1.set_name();   s1.set_age(20); //make a default value 	//s1.set_age(20); 
		s2.set_name("Joe"); s2.set_age(17);
		
    
   if(s1.get_age()>s2.get_age())
   {s1.print_name(); cout <<"is older";}
  else
   {s2.print_name(); cout <<"is older";};
  


    
  }



