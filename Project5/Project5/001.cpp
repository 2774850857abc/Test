//#include<iostream>
//#include<map>
//#include<queue>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class Solution {
//public:
//    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
//        multimap<int, vector<string>> m;
//        multimap<int, vector<string>>::iterator itt;
//        vector<vector<string>> vv;
//        int id, front = 0;
//        vector<string> back;
//        vector<vector<string>> temp;
//        bool isno = false, is = false;
//        for (int i = 0; i < accounts.size(); i++) {
//            id = hash(accounts[i][0]);
//            initialize(accounts[i]);
//            m.insert(pair<int, vector<string>>(id, accounts[i]));
//        }
//        for (itt=m.begin(); itt != m.end();itt++) {
//            isno = false;
//            if (itt == m.begin()) {
//                back = itt->second;
//                front = itt->first;
//                continue;
//            }
//            if (itt->first == front) {
//                if (!conbine(back, itt->second)) {
//                    for (int i = 0; i < temp.size(); i++) {
//                        if (conbine(temp[i], itt->second)) {
//                            isno = true;
//                        }
//                    }
//                    if (!isno||temp.size()==0) {
//                        temp.push_back(itt->second);
//                    }
//                }
//                front = itt->first;
//            }
//            else {
//                for (int i = 0; i < temp.size()-1; i++) {
//                    is = false;
//                    for (int j = i+1; j < temp.size(); j++) {
//                        if (conbine(temp[j], temp[i])) {
//                            is = true;
//                        }
//                    }
//                        if (is) {
//                            temp.erase(temp.begin() + i); i--;
//                        }
//                }
//                for (int i = 0; i < temp.size(); i++) {
//                    if (!conbine(back, temp[i])) {
//                        vv.push_back(temp[i]);
//                    }
//                    
//                    temp.erase(temp.begin() + i); i--;
//                    
//                }
//                vv.push_back(back);
//                front = itt->first;
//                back = itt->second;
//            }
//        }
//        for (int i = 0; i < temp.size() - 1; i++) {
//            is = false;
//            for (int j = i + 1; j < temp.size(); j++) {
//                if (conbine(temp[j], temp[i])) {
//                    is = true;
//                }
//            }
//            if (is) {
//                temp.erase(temp.begin() + i); i--;
//            }
//        }
//        for (int i = 0; i < temp.size(); i++) {
//            if (!conbine(back, temp[i])) {
//                vv.push_back(temp[i]);
//            }
//            
//                temp.erase(temp.begin() + i); i--;
//            
//        }
//        vv.push_back(back);
//        for (int i = 0; i < vv.size(); i++) {
//            sort(vv[i].begin() + 1, vv[i].end());
//        }
//        return vv;
//    }
//    bool conbine(vector<string> &a, vector<string> b) {
//        queue<int> q;
//        bool isok = false;        
//        for (int i = 1; i < b.size(); i++) {
//            for (int j = 1; j < a.size(); j++) {
//                if (b[i] == a[j]) {
//                    q.push(i); isok = true;
//                    break;
//                }
//            }
//        }
//        if (isok) {
//            for (int i = 1; i < b.size(); i++) {
//                if (!q.empty() && q.front() == i) {
//                    q.pop(); continue;
//                }
//                a.push_back(b[i]);
//            }
//        }
//        return isok;
//    }
//    
//    void output(vector<string> s) {
//        for (int i = 0; i < s.size(); i++) {
//            cout << s[i] << " ";
//        }
//    }
//    int hash(string s) {
//        int value = 0;
//        int l = s.length();
//        for (int i = 0; i < l; i++) {
//            value = value * 5 + s.at(i);
//        }
//        return value;
//    }
//    void initialize(vector<string>& v) {
//        for (int i = 1; i < v.size()-1; i++) {
//            for (int j = i + 1; j < v.size(); j++) {
//                if (v[i] == v[j]) {
//                    v.erase(v.begin() + j);
//                }
//            }
//        }
//    }
//};
////int main() {
////    vector<vector<string>> vv;
////    vv.push_back({ "Hanzo", "Hanzo2@m.co", "Hanzo3@m.co" });
////    vv.push_back({ "Hanzo", "Hanzo4@m.co", "Hanzo5@m.co" });
////    vv.push_back({ "Hanzo", "Hanzo0@m.co", "Hanzo1@m.co" });
////    vv.push_back({ "Hanzo", "Hanzo3@m.co", "Hanzo4@m.co" });
////    vv.push_back({ "Hanzo", "Hanzo7@m.co", "Hanzo8@m.co" });
////    vv.push_back({ "Hanzo", "Hanzo1@m.co", "Hanzo2@m.co" });
////    vv.push_back({ "Hanzo", "Hanzo6@m.co", "Hanzo7@m.co" });
////    vv.push_back({ "Hanzo", "Hanzo5@m.co", "Hanzo6@m.co" });
////    Solution s;
////    vector<vector<string>> v=s.accountsMerge(vv);
////    for (int j = 0; j < v.size(); j++) {
////        for (int i = 0; i < v[j].size(); i++) {
////            cout << v[j][i] << " ";
////        }cout << endl;
////    }
////}
////["Hanzo", "Hanzo2@m.co", "Hanzo3@m.co"], ["Hanzo", "Hanzo4@m.co", "Hanzo5@m.co"], 
////["Hanzo", "Hanzo0@m.co", "Hanzo1@m.co"], ["Hanzo", "Hanzo3@m.co", "Hanzo4@m.co"], 
////["Hanzo", "Hanzo7@m.co", "Hanzo8@m.co"], ["Hanzo", "Hanzo1@m.co", "Hanzo2@m.co"], 
////["Hanzo", "Hanzo6@m.co", "Hanzo7@m.co"], ["Hanzo", "Hanzo5@m.co", "Hanzo6@m.co"],
////2 3 4 1
////4 5 6 
////0 1
////7 8 6 5 


  