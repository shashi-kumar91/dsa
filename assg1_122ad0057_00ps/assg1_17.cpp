#include<iostream>
using namespace std;
class pattern{
    public:
    void ptn(){
        cout<<" *****                    "<<'\n';
        cout<<"*     *      *        *   "<<'\n';
        cout<<"*            *        *   "<<'\n';
        cout<<"*         *******  *******"<<'\n';
        cout<<"*            *        *   "<<'\n';
        cout<<"*     *      *        *   "<<'\n';
        cout<<" *****                    ";

    }
};
int main(){
    pattern obj;
    obj.ptn();
    return 0;

}