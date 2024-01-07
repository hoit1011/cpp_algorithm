//
//  11866 S5.cpp
//  c++study
//
//  Created by 박성민 on 1/3/24.
//  한줄평: 큐라는것을 모르고 구현해볼려 했지만 큐라는것을 알게된 뒤 검색하여 코드를 이해했다
//  간단하게 앞에 변수를 뒤로 보내고 변수를 지우며 계속 반복하는 것이다.

//#include<iostream>
//#include<queue>
//using namespace std;
//
//int N, K;
//queue<int> q;
//
//int main()
//{
//    cin >> N >> K;
//    for (int i = 1; i <= N; i++) q.push(i);
//
//    cout << "<";
//
//    while (q.size() != 0)
//    {
//        for (int i = 1; i < K; i++)
//        {
//            q.push(q.front());
//            q.pop();
//        }
//        cout << q.front();
//        if (q.size() != 1) cout << ", ";
//        q.pop();
//    }
//    cout << ">";
//
//    return 0;
//}
