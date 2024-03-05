//
// Created by 박성민 on 3/5/24.
// 한줄평 : 개 노 가 다 문 제

//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int main(){
//    int N;
//    cin >> N;
//    queue<int> q;
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
//                cout << -1 << "\n";
//            }else{
//                cout << q.front() <<'\n';
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
//        if(str == "front"){
//            if(q.size() == 0)
//                cout << -1 << '\n';
//            else
//                cout << q.front() << '\n';
//        }
//        if(str == "back"){
//            if(q.size() == 0)
//                cout << -1 <<'\n';
//            else
//                cout << q.back() << '\n';
//        }
//    }
//    return 0;
//}