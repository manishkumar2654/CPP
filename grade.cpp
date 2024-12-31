#include<iostream>
using namespace std;
int main(){

int a;
cout<<"enter marks" <<endl;
cin>> a;

if (a>=90) {
    cout<<"pass" <<endl;
}
else if((a>=80 && a<=90) ) {
    cout<<"okya" <<endl;
}
else if(a>=60 && a<80) {
    cout<<"fail" <<endl;
}
else{
    cout<<"jai mata di" <<endl;
}


return 0;
 }