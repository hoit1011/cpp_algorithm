//
// Created by 박성민 on 1/8/24.
// 한줄평 : dp를 처음 접해본 문제였다. dp에 관한 기본적인 의미는 알았지만
// 구현하는것이 좀 어려운것 같다. dp많이 공부해야겠다 .

//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main(){
//    int a;
//    cin >> a;
//    vector<int> dp(a+1);
//
//    dp[1] = 0;
//    for(int i = 2; i <= a; i++){
//        dp[i] = dp[i-1] + 1;
//        if(!(i%3)) dp[i] = min(dp[i],dp[i/3]+1);
//        if(!(i%2)) dp[i] = min(dp[i],dp[i/2]+1);
//    }
//
//    cout << dp[a];
//}