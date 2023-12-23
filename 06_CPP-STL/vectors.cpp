#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vp;
    vp.push_back({1,2});
    vp.emplace_back(3,4);

    // iterator
    vector<int>::iterator itl = v.begin();
    itl++;
    cout << *(itl) << endl;

    // vector<int>::iterator it = v.end(); -> another use case

    cout << v[0] << " " << v.back() << endl;

    // printing vector
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << endl;
    }

    // another printing method
    for (auto it : v) {
        cout << it << endl;
    }

    // deletion in vector
    v.erase(v.begin()+1);

    // insertion in vector
    v.insert(v.begin()+1, 10);

    // size of vector
    cout << v.size() << endl;

    // clear a vector
    cout << v.empty() << endl;

    return 0;
}