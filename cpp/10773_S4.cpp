//
// Created by 박성민 on 1/8/24.
// 한줄평 : stack과 queue의 차이를 알아버렸다 처음에는 그냥 큐 써서 풀면 쉬운거 아니야 ? 라고 생각했는데 아니었다
// queue는 FIFO구조고 stack은 LIFO구조라는걸 알아서 요 두개를 번갈아서 쓰면 될거같다. 그리고 스택에 대헤서도 알게되었다.

//#include <iostream>
//#include <stack>
//
//using namespace std;
//stack<int> q;
//
//int main(){
//    int a;
//    cin >> a;
//    int cnt = 0;
//    for(int i = 0 ; i < a; i++){
//        int b = 0;
//        cin >> b;
//        if(b == 0) {
//            q.pop();
//        }else {
//            q.push(b);
//        }
//    }
//    while(!q.empty()){
//        cnt += q.top();
//        q.pop();
//    }
//    cout << cnt;
//}