#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Accept Age:";
    cin >> x;
    if (x>=18) {
        cout << "Eligible" << endl;
    } else {
        cout << "Not Eligible" << endl;
    }
    return 0;
}