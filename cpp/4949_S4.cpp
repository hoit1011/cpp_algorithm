//
// Created by 박성민 on 4/4/24.
// 한줄평 : 한줄 입력받는 방법을 알았고 stack이 비어있을때 s.top을 호출해버리면 오버플로우가 걸린다는 사실을 알았다

//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//int main(){
//    string arr;
//    while(1){
//        getline(cin , arr);
//        int check = 0;
//        stack<char> s;
//        if(arr[0] == '.')
//            break;
//        for(int i = 0; i < arr.length(); i++){
//            if(arr[i] == '(')
//                s.push('(');
//            if(arr[i] == '[')
//                s.push('[');
//            if(arr[i] == ')') {
//                if (!s.empty() && s.top() == '(')
//                    s.pop();
//                else
//                    check = 1;
//            }
//            if(arr[i] == ']') {
//                if (!s.empty() && s.top() == '[')
//                    s.pop();
//                else
//                    check = 1;
//            }
//        }
//        if(!s.empty() || check == 1)
//            cout << "no" << '\n';
//        else
//            cout << "yes" << '\n';
//    }
//    return 0;
//}