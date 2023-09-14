#include<iostream>
using namespace std;
class Hai


 {        
  public:            
    void add(int a,int b) {  
      cout<<"the addition of two numbers by void:"<<a+b<<'\n';

      
    }
    int add1(){
      int x,y;
      cout<<"addition of two numbers without arguments using int returntype is:"<<'\n';
      cin>>x>>y;
      cout<< x+y<<'\n';
      
    }
    int add3(int x,int y){
      
      cout<<'\n'<<"addition of two numbers with arguments is:"<<'\n';
      return x+y;
      
    }
    void add2() {
      int d,h  ;
      cout<<'\n'<<"addition of two numbers without arguments is:";
      cout<<"enter the elements;";
      cin>>d>>h;
      cout<<d+h;

      
    }
};

int main() {
  Hai myObj;
     
  myObj.add(3,4); 
  myObj.add1();
  myObj.add2();
  cout<<'\n'<<myObj.add3(4,7);
  return 0;
}




