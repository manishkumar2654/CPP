#include <iostream>
using namespace std; 

int main() {
    int marks;
    cout << "Enter marks (out of 100):";
    cin >> marks;
    
    if (marks > 100 || marks < 0){
        cout << "invalid marks enterd. please enter a value between 0 and 100." <<endl;
    }
    else if (marks >=90) {
        cout << "grade: A" <<endl;
    }
      else if (marks >=75) {
        cout << "grade: B" <<endl;

    }  else if (marks >=50) {
        cout << "grade: C" <<endl;

    }  else if (marks >=40) {
        cout << "grade: D" <<endl;
    }
      else {
        cout << "grade: Fail" <<endl;
    }

    return 0;

}



