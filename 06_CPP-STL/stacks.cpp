#include <iostream>
#include <stack>

using namespace std;

int main() {
    // works on LIFO
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.top() << endl;

    st.pop();

    cout << st.size() << endl;

    cout << st.empty();

    return 0;
}