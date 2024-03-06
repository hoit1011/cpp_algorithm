//
// Created by 박성민 on 3/6/24.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    if(N == 0){
        cout << 0;
        return 0;
    }
    int x = round(N * 0.15);
    int cnt = N-(x * 2);
    double hap = 0;
    vector<int> v;
    for(int i = 0 ; i < N; i++){
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    for(int i = 0 ; i < x; i++){
        v.pop_back();
    }
    for(int i = 0; i < cnt; i++){
        hap += v.back();
        v.pop_back();
    }
    hap = hap / cnt;
    cout << round(hap);
    return 0;
}