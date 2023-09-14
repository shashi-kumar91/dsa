#include <iostream>
using namespace std;

class digit{
    public:
    int num(){
        
        for(int i=0;i<6;i++){
            for(int j=0;j<4;j++){
                if(i==0&&j<4){
                    cout<<"*";
                }
                else if((i==1&&j==0)||(i==1&&j==3)){
                    cout<<"*";
                }
                else if(i==1&&1<=j<=2){
                    cout<<"*";
                }
                else if(i==2&&j<4){
                    cout<<"*";
                }
                else if(i==3&&j<3){
                    cout<<" ";

                }
                else if(i==3&&j==3){
                    cout<<" *";

                }
                else if(i==4&&j<3){
                    cout<<" ";

                }
                else if(i==4&&j==3){
                    cout<<"*";

                }
                 else if(i==5&&j<3){
                    cout<<" ";

                }
                else if(i==5&&j==3){
                    cout<<"*";

                }
                else if(i==6&&j<4){
                    cout<<"*";
                }

                
                    
                }
                cout<<'\n';
            }
        }
    }; 


int main(){
    
    digit gk;
    gk.num();
    return 0;
}