#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<unordered_map>
int main() {
	unordered_map<string, string> m;
	m.insert({ "aa","bb" });
	m.insert({ "aa","cc" });
	m.insert({ "bb","cc" });
	m.insert({ "aa","dd" });
	auto k=m.find("aa");
	while (k != m.end()) {
        cout << k->second;
		k++;
	}
}
	
