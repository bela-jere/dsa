class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> m; 
        queue<int> q; 
        
        for(int i = 0; i < s.size(); i++) {
            char c = s[i];
            if(m.find(c) == m.end()) {
                q.push(i);
                m.insert({c, 1});
            }
            else {
                m[c]++;
            }
        }
        while (!q.empty()) {
            auto it = m.find(s[q.front()]);
            if (it != m.end() && it->second > 1) {
                q.pop();
            }
            else{
                break;
            }
        }
        if(q.empty()) {
            return -1;
        }
        else{
            return q.front();
        }
    }
};