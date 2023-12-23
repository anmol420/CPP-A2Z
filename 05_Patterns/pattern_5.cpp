#include <iostream>
using namespace std;

int main() {
    int x=1;
    for (int i=5;i>=1;i--) {
        for (int j=1;j<=i;j++) {
            cout << x << " ";
            x++;
        }
        cout << "" << endl;
        x=1;
    }
    return 0;
}