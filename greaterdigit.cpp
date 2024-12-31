#include <iostream>
using namespace std;

int main(){

    int num=2587;
    int ans=1;

    while(num>0){

        int digit=num%10;
        
        if(digit<ans){
            ans=digit;
        }

        num=num/10;
    }

    cout<<ans;

}