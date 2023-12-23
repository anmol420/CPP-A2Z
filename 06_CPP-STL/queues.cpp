#include <iostream>
#include <queue>

using namespace std;

int main() {
    // works on FIFO
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout << q.back() << " " << q.front() << endl;

    q.pop();

    cout << q.size() << endl;

    cout << q.empty();

    return 0;
}