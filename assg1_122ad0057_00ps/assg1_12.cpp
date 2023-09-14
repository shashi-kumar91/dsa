#include<iostream>
using namespace std;
class digit{
    public:
    int num;
};
int main(){
    digit obj;
    int row=6,col=4;
    cout<<"enter the number:";
    cin>>obj.num;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<obj.num;

        }
        cout<<'\n';
    }

return 0;

}

