#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x=1;
    for (int i=0;i<n+1;i++) {
        for (int j=0;j<i;j++) {
            cout << x;
            x++;
        }
        cout << "" << endl;
    }
    return 0;
}