#include <iostream>
#include <set>

using namespace std;

int main() {
    // stores in sorted order

    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);

    auto it = s.find(2);

    s.erase(it);

    // 1 if present else 0
    int cnt = s.count(1);

    return 0;
}