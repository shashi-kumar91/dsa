#include<iostream>
using namespace std;
class MyClass {        
  public:
  void myMethod();            
};


void MyClass::myMethod() {
  cout << "hai surendra!";
}

int main() {
  MyClass myObj;     
  myObj.myMethod();  
  return 0;
}