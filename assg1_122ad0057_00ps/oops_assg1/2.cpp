#include<iostream>
using namespace std;
class Car{
    public:
    string brand;
    string model;
    int mfgd;

    
};
int main(){
    Car Obj1;
    Car Obj2;
     cout<<"enter the brand of the car1 and car2:"<<"\n";
     cin>>Obj1.brand>>Obj2.brand;
     cout<<"enter the model of the car1 and car2:"<<"\n";
     cin>>Obj1.brand>>Obj2.model;
     cout<<"enter the year of manufactured of the car1 and car2:"<<"\n";
     cin>>Obj1.mfgd>>Obj2.mfgd;
     cout<<"the details of car1:"<<"\n";
     cout<<Obj1.brand<<" "<<Obj1.model<<" "<<" "<<Obj1.mfgd<<"\n";
     
     cout<<Obj2.brand<<" "<<Obj2.model<<" "<<" "<<Obj2.mfgd<<"\n";
    return 0;

}
