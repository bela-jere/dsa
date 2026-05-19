class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> index; 
        for (int i = 0; i < logs.size(); i++) {
            if (logs[i] != "./" && logs[i] != "../") {
                index.push(logs[i]);
            }
            if (logs[i] == "../" && !index.empty()) {
                index.pop();
            }
        }
        int count = 0;
        while(!index.empty()) {
            index.pop();
            count++;
        }
        return count;
    }
};