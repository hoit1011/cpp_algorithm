//
// Created by 박성민 on 3/1/24.
// 한줄평 : 원래 스택을 쓰지않고 문자열로만 풀수 있을줄 알았지만 아니었다
// string도[i]를 쓸수있다는 점을 알고 다른 문제를 풀면 더 쉽게 풀수 있을것 같다

//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    for(int i = 0 ; i < n; i++){
//        string input;
//        cin >> input;
//
//        stack<char> st;
//        string ans = "YES";
//        for (int j = 0; j < input.length(); j++) {
//            if (input[j] == '(') {
//                st.push(input[j]);
//            }
//            else if (!st.empty() && input[j] == ')' && st.top() == '(') {
//                st.pop();
//            }
//            else {
//                ans = "NO";
//                break;
//            }
//        }
//        if (!st.empty())
//            ans = "NO";
//
//        cout << ans << '\n';
//    }
//    return 0;
//}
