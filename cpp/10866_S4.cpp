//
// Created by 박성민 on 4/1/24.
//한줄평 : deque이란게 있는지 모르고 스택이나 큐로 구현해야하나 싶었는데 deque라는 것이 있어서 편하게 풀수 있었다.

//#include <iostream>
//#include <deque>
//
//using namespace std;
//
//deque<int> d;
//
//int push_front(int n){
//    d.push_front(n);
//    return 0;
//}
//
//int push_back(int n){
//    d.push_back(n);
//    return 0;
//}
//void pop_front(){
//    if(d.empty())
//        cout << "-1" <<'\n';
//    else{
//        cout << d.front() <<'\n';
//        d.pop_front();
//    }
//}
//void pop_back(){
//    if(d.empty())
//        cout << "-1" <<'\n';
//    else{
//        cout << d.back() <<'\n';
//        d.pop_back();
//    }
//}
//void size(){
//    cout << d.size() << '\n';
//}
//void empty(){
//    if(d.empty())
//        cout << "1" << '\n';
//    else
//        cout << "0" << '\n';
//}
//void front(){
//    if(d.empty())
//        cout << "-1" << '\n';
//    else
//        cout << d.front() << '\n';
//}
//void back(){
//    if(d.empty())
//        cout << "-1" << '\n';
//    else
//        cout << d.back() << '\n';
//}
//
//int main(){
//    int n;
//    cin >> n;
//    for(int i = 0 ; i < n; i++){
//        string s;
//        cin >> s;
//        int N;
//        if(s == "push_front"){
//            cin >> N;
//            push_front(N);
//        }
//        if(s == "push_back") {
//            cin >> N;
//            push_back(N);
//        }
//        if(s == "pop_front")
//            pop_front();
//        if(s == "pop_back")
//            pop_back();
//        if(s == "size")
//            size();
//        if(s == "empty")
//            empty();
//        if(s == "front")
//            front();
//        if(s == "back")
//            back();
//    }
//}
