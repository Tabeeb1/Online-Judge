#include <bits/stdc++.h>
using namespace std;

int main() {
    int total;
    int a,b,c;
    cin >> total;
    for(int i = 1;i<=total;i++) {
        cin >> a >> b >> c;
        int arr[3];
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
        sort(arr, arr + 3);
        cout << arr[1] << endl;
    }

}
