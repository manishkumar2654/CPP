#include <iostream>
using namespace std;

int main(){

    int num=153;
    int b=num;
    int ans=0;
    while(num>0){

        int digit=num%10;
        ans=ans+digit*digit*digit;
        num=num/10;
    }

    if(ans==b){
        cout<<"Amstrong Number";
    }

    else{
        cout<<"Not an Amstrong number";
    }

}