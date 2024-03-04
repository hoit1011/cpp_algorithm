//
// Created by 박성민 on 3/4/24.
// 한줄평 : 비응신같이 스택인데 큐로쓰고있었던거뺴면 그냥 쉬운문제

//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//int main(){
//    int N;
//    cin >> N;
//    stack<int> q;
//    for(int i = 0; i < N; i++){
//        string str;
//        cin >> str;
//        if(str == "push"){
//            int x;
//            cin >> x;
//            q.push(x);
//        }
//        if(str == "pop"){
//            if(q.size() == 0){
//                cout << "-1" << "\n";
//            }else{
//                int x;
//                cout << q.top() << '\n';
//                q.pop();
//            }
//        }
//        if(str == "size"){
//            cout << q.size() << '\n';
//        }
//        if(str == "empty"){
//            if(q.size() == 0)
//                cout << 1 << '\n';
//            else
//                cout << 0 << '\n';
//        }
//        if(str == "top"){
//            if(q.empty()){
//                cout << -1 << '\n';
//            }
//            else
//                cout << q.top() << '\n';
//        }
//    }
//}