//
// Created by 박성민 on 1/23/24.
//
// 한줄평 : 그냥 간단한 수학 문제인데 왜 45678로 나누라는지 모르겠다
#include <iostream>

using namespace std;

int main(){

    int n;
    int num = 7;
    int sum = 5;

    cin >> n;

    for (int i = 2; i <= n; i++) {
        sum += num;
        num += 3;

        sum %= 45678;
        num %= 45678;
    }

    cout << sum;

    return 0;
}