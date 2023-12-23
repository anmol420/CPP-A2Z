#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x=n;
    for (int i=1;i<=n;i++) {
        if (i!=n) {
            for (int j=1;j<=i;j++) {
                cout << "*";
            }
            for (int j=1;j<=(2*n-2*i);j++) {
                cout << " ";
            }
            for (int j=i;j>=1;j--) {
                cout << "*";
            }
            cout << "" << endl;
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<x;j++) {
            cout << "*";
        }
        for (int j=0;j<(2*i);j++) {
            cout << " ";
        }
        for (int j=0;j<x;j++) {
            cout << "*";
        }
        cout << "" << endl;
        x--;
    }
    return 0;
}