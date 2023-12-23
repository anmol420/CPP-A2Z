#include <iostream>
#include <queue>

using namespace std;

int main() {
    // same as queue but here the element with maximum value stays on the top -> MAX HEAP
    priority_queue<int> pq;

    pq.push(1);
    pq.push(2);
    pq.push(3);

    cout << pq.top() << endl;

    pq.pop();

    cout << pq.size() << endl;

    cout << pq.empty();

    // for printing -> MIN HEAP (minimum element on top)
    priority_queue<int, vector<int>, greater<>> pqm;
    pqm.push(1);
    pqm.push(2);
    pqm.push(3);

    cout << pqm.top() << endl;

    return 0;
}