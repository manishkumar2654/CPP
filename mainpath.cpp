#include <iostream>
using namespace std;

int main() {

    cout<<"enter path";
    int a;
    cin>>a;
    if(a=1){
        cout<<"enter path 2 3 4";
        cin>>a;
        if(a==3){
            cout<<"enter 4";
            cin>>a;
            if(a==3) {
                cout<<"Enter 4";
                cin>>a;
                if(a==4) {cout<<"reach";}
                else{cout<<"!!";}
            }
            else if(a==4) {cout<<"!!";}
            else{cout<<"!!";}
            }
            else if(a==4) {cout<<"!!";}
            else{cout<<"!!";}
        }
        else {
            cout<<"!!";
}
    return 0;
}