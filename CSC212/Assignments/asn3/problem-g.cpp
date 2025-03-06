#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    map<int, int> pairs;
    stack<int> idx;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            idx.push(i);
        }
        if (s[i] == ')') {
            pairs[idx.top()] = i;
            idx.pop();
        }
    }

    vector<pair<int, int>> pairs2;
    for (auto i : pairs) {
        pairs2.push_back(i);
    }

    set<string> ans;
    int m = 1 << pairs.size();
    for (int i = 1; i < m; i++) {
        vector<bool> print(s.size(), true);

        for (int j = 0; j < pairs.size(); j++) {
            if (i & (1 << j)) {
                print[pairs2[j].first] = false;
                print[pairs2[j].second] = false;
            }
        }

        string t = "";
        for (int j = 0; j < s.size(); j++) {
            if (print[j]) {
                t += s[j];
            }
        }
        ans.insert(t);
    }
    for (const auto &i : ans) {
        cout << i << endl;
    }

    return 0;
}
