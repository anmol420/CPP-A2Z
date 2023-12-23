#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=0;i<n;i++) {
        //space
        int j;
        for (j=0;j<(n-i-1);j++) {
            cout << " ";
        }
        //character
        char ch = 'A';
        for (j=1;j<=(2*i+1);j++) {
            cout << ch;
            if (j<=((2*i+1)/2)) {
                ch++;
            } else {
                ch--;
            }
        }
        //space
        for (j=0;j<(n-i-1);j++) {
            cout << " ";
        }
        cout << "" << endl;
    }
    return 0;
}