#include <iostream>
using namespace std;

// integer type function returning a integer back to the caller function
int backTo(int x) {
    return x+1;
}

int main() {
    int x= backTo(5);
    cout << x << endl;
    return 0;
}