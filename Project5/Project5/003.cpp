/*include<iostream>
#include<map>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
class Union {
public: 

	int* parent;
	Union(int l) {
		parent = new int[l+1];
		for (int i = 1; i <= l; i++) {
			parent[i] = i - 1;;
		}
	}
	Union() {

	}
	int find(int i) {
		return parent[i];
	}
};
class Solution {
public:
	vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
		Union *u = new Union[accounts.size()]();
		map<string, int>* m = new map<string,int>[accounts.size()];
		for (int i = 0; i < accounts.size(); i++) {
			for (int j = 0; j < accounts[j].size(); j++) {
				m[i].insert({ accounts[i][j] ,j+1});
			}
			u[i] = Union(m[i].size());
		}
		for (int i = 0; i < accounts.size(); i++) {
			for (int j = 0; j < m[i].size(); j++) {
				
			}
		}
	}
};*/#

