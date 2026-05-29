#include <iostream>
#include <map>
using namespace std;


int main() {
    map<string,int> m;
    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    m.insert({"camera", 25});

    m.erase("tv");

    for(auto p: m) {
        cout << p.first << " " << p.second << endl;
    }
    cout << "count of laptops: " << m.count("laptop") << endl;
    cout << "number of laptops: " << m["laptop"] << endl; 
    if(m.find("tablet") != m.end()) {
        cout << "found" << endl;
    }
    else {
        cout << "not found" << endl;
    }
    return 0;
}