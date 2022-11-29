#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> alphabet = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int total;
    cin >> total;
    for(int i = 1;i<=total;i++){
        int size;
        cin >> size;
        string a;
        cin >> a;
        int max = 0;
        for(int j = 0;j<a.size();j++){
            char target = char(a[j]);
            auto it = find(alphabet.begin(), alphabet.end(), target);
            int index = (it - alphabet.begin()) + 1;
            if(index > max){
                max = index;
            }
        }
        cout << max << endl;


    }

}
