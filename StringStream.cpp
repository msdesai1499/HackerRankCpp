#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss;
    ss<<str;
    int temp;
    char a;
    vector<int> m;
    while(ss>>temp)
    {
        m.push_back(temp);
        ss>>a;
    }
    return m;
	// Complete this function
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
