class student{
private: 
  long id;
  string name;
  int age;
public:
    void set_name(string="Yme");
     void print_name();
      void set_age(int=1);
      int get_age();
    void print_all();
};

void student::set_name(string n){
  name=n;
  
}

void student::print_name(){
  cout<<"Name:"<<name<<endl;
}

void student::set_age(int n){
  age=n;
}

int student::get_age(){
  return age;
}

void student::print_all(){
print_name();
    cout<<"Age: "<<age<<endl;
  
}