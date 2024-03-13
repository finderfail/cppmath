#include <iostream>
using namespace std;
int main() {
    int s, k, a, b, ans, answ;
    cout << "Enter 1st number\n";
    cin >> s;
    cout << "Enter 2nd number\n";
    cin >> k;
    
    cout << "Now enter parameters in question\n";

    cout << "Enter 1st parameter number\n";
    cin >> a;
    cout << "Enter 2nd parameter number\n";
    cin >> b;
    
    cout << "Now enter operator\n";
    cout << "Type 1 for || OR 0 for &&\n";
    cin >> ans;
    
    cout << "Now enter operator\n";
    cout << "Type 1 for < OR 0 for >\n";
    cin >> answ;

    if (answ == 1) {
        if (ans == 1){
            if (s < a || k < b){
                cout << "s < a || k < b\n";
                cout << "YES\n";
                return 0;
            } else {
                cout << "s < a || k < b\n";
                cout << "NO\n";
                return 0;
                }
        } else if (ans == 0) {
            if (s < a && k < b){
                cout << "s < a && k < b\n";
                cout << "YES\n";
                return 0;
            } else {
                cout << "s < a && k < b\n";
                cout << "NO\n";
                return 0;
                }
        } else {
            return 1;
        }
        
    } else if (answ == 0) {
        if (ans == 1){
            if (s > a || k > b){
                cout << "s > a || k > b\n";
                cout << "YES\n";
                return 0;
            } else {
                cout << "s > a || k > b\n";
                cout << "NO\n";
                return 0;
                }
        } else if (ans == 0) {
            if (s > a && k > b){
                cout << "s > a && k > b\n";
                cout << "YES\n";
                return 0;
            } else {
                cout << "s > a && k > b\n";
                cout << "NO\n";
                return 0;
                }
        } else {
            return 1;
        }
    } else {
        return 1;
    }
}



