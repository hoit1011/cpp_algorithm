//
// Created by 박성민 on 4/5/24.
// 한줄평 : 구현 방법은어떻게하는지 알았는데 구현 하는데 어렵다

//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//queue<int> q;
//
//int main(){
//    int N,K;
//    cin >> N >> K;
//    for(int i = 1 ; i <= N; i++){
//        q.push(i);
//    }
//    cout << "<";
//    while(!q.empty()){
//        for(int i = 0; i < K - 1; i++){
//            int a = q.front();
//            q.pop();
//            q.push(a);
//        }
//        cout << q.front();
//        q.pop();
//        if(!q.empty())
//            cout << ',' << ' ';
//    }
//    cout << '>';
//}