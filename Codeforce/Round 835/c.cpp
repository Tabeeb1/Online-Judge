#include <bits/stdc++.h>
using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    for(int i = 1;i<=testcase;i++) {
        int total;
        cin >> total;
        vector<int> strength;
        vector<int> strength1;
        for(int j = 1;j<=total;j++) {
            int a;
            cin >> a;
            strength.push_back(a);
            strength1.push_back(a);
        }
        sort(strength.begin(), strength.end());
        int max = strength[strength.size()-1];
        int second_max = strength[strength.size()-2];
        for(int j = 0;j<strength1.size();j++){
           if(strength1[j] != max && strength1[j] != second_max){
               cout << strength1[j] - max << " ";
           }
           else if(strength1[j] == max){
               cout << strength1[j] - second_max << " ";
           }
           else if(strength1[j] == second_max){
               cout << strength1[j] - max << " ";
           }
       }
    cout << endl;
    }
}
