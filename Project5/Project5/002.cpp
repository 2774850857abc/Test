#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<unordered_map>
class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        unordered_map<string,string> m;
        vector<vector<string>> v;
        for (int i = 0; i < accounts.size(); i++) {
            for (int j = 1; j < accounts[i].size(); j++) {
                m.insert({ accounts[i][j],accounts[i][0] });
            }
        }
        
    }
};