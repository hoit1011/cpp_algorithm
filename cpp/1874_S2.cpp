//
// Created by 박성민 on 2/29/24.
// 한줄평 : 다시 감을 잡고 있는거 같긴하지만 아직은 좀 어려운거같다 벡터를 어떻게 쓰는지 다시 알았고 스택과 벡터를 같이 쓸수있는것을 많이 해봐야 할것 같다

//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//int main(){
//    int N;
//    stack<int> s;
//    int cnt = 1;
//    vector<char> res;
//
//    cin >> N;
//    for(int i = 0; i < N; i++){
//        int x;
//        cin >> x;
//        while(cnt <= x){
//            s.push(cnt);
//            cnt += 1;
//            res.push_back('+');
//        }
//        if(s.top() == x){
//            s.pop();
//            res.push_back('-');
//        }
//        else{
//            cout << "NO";
//            return 0;
//        }
//    }
//    for(int i = 0; i < res.size(); i++){
//        cout << res[i] << '\n';
//    }
//    return 0;
//}