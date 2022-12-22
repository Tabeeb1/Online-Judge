#include <bits/stdc++.h>
using namespace std;

int main() {
    int sour,oven;
    cin >> sour >> oven;
    int sour_vol[sour];
    int oven_vol[oven];
    for(int i =
            0;i<sour;i++){
        int vol_of_sour;
        cin >> vol_of_sour;
        sour_vol[i] = vol_of_sour;
    }
    for(int i = 0;i<oven;i++){
        int vol_of_oven;
        cin >> vol_of_oven;
        oven_vol[i] = vol_of_oven;
    }
    int total = 0;
    for(int i = 0;i<oven;i++){
        if(i<sour){
            total += oven_vol[i] - sour_vol[i];
        }
        else{
            total += oven_vol[i];
        }
    }
    cout << total;

}
