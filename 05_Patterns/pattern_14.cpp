#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ch=65;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            cout << (char)ch;
            ch++;
        }
        cout << "" << endl;
        ch=65;
    }
    return 0;
}