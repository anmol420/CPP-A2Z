#include <iostream>
using namespace std;

bool reverse(int i, string &s) {
	if (i>=s.size()/2) {
		return true;
	}
	if (s[i]!=s[s.size()-1-i]) {
		return false;
	}
	return reverse(i+1,s);
}

int main(int argc, char const *argv[])
{
	string s="madam";
	cout << reverse(0,s);
	return 0;
}
