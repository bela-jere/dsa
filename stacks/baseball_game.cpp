class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> record; 
        for (int i=0; i < operations.size(); i++) {
            if (operations[i] == "D"){
                record.push(record.top()*2);
            }
            else if(operations[i] == "C") {
                record.pop();
            }
            else if(operations[i] == "+"){
                int temp1 = record.top();
                record.pop();
                int temp2 = record.top();
                record.push(temp1);
                record.push(temp1+temp2);
            }
            else {;
                record.push(stoi(operations[i]));
            };
        }
        int sum = 0;
        while(!record.empty()) {
            sum += record.top(); 
            record.pop();
        }
        return sum;
    }
};