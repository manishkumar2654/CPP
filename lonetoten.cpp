#include<iostream>
using namespace std;
int main(){
int n = 14;
bool is prime = true;

for (int i = 2; i<=n-1; i++) {
  if (n%i==0) {
    is prime = false;
    break;
  }
}
if (is prime == true){
  cout << "non prime no/n";
}
else {
  cout <<" non prime no/n";
}




return 0;
 }