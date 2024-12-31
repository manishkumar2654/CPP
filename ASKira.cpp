#include <iostream>
using namespace std;

int main() {
    string a;  // To store chatbot name or input
    cout << "Enter Chat bot Name: ";
    cin >> a;  

    if (a == "Askira") {  // Check if chatbot name matches "Askira"
        cout << "Enter product or service: ";
        cin >> a;

        if (a == "product") {
            cout << "Enter home loan or personal loan: ";
            cin >> a;

            if (a == "homeloan") {
                cout << "5 lakh" << endl;
            } else if (a == "personalloan") {
                cout << "2 lakh" << endl;
            } else {
                cout << "Invalid loan type!" << endl;
            }
        } else if (a == "service") {
            cout << "Not available" << endl;
        } else {
            cout << "Invalid input!" << endl;
        }
    } else {
        cout << "Invalid Chat bot Name!" << endl;
    }

    return 0;
}