#include <iostream>
using namespace std;

#include "student.h"
#define N 3

int main(int argc, char* argv[]) {
  student s1,s2;
  student a[N];
  //s1.name="PUN";  // ERROR, it is in private

  a[0].set_name("DERP");
  a[0].set_age();
  a[1].set_name("Bruh");
  a[1].set_name("40");

  int i, age;
  string name;
  for(i=0;i<N;i++){
    cout<<"what is your name? ";
    cin>>name; 
      a[i].set_name(name);
    cout<<"what is your age? ";
    cin>>age;
      a[i].set_age(age);
  }

  for(i=0;i<N;i++){
    cout<<"Student "<<i+1<<endl;
    /*a[i].print_name();
    cout<<"Age: "<<a[i].get_age()<<endl;*/
    a[i].print_all();
  }

  int young=a[0].get_age();
  for(i=1;i<N;i++){
    if(a[i].get_age()<young) young= a[i].get_age();
  }
  cout<<"Youngest ppl:"<<endl;
  for(i=0;i<N;i++){
    if(a[i].get_age()==young) a[i].print_all();
  }

    
  
  
   s1.set_name();   s1.set_age(20); //make a default value 	//s1.set_age(20); 
		s2.set_name("Joe"); s2.set_age(17);
		
    
   if(s1.get_age()>s2.get_age())
   {s1.print_name(); cout <<"is older";}
  else
   {s2.print_name(); cout <<"is older";};
  


    
  }



