//
// Created by 박성민 on 3/16/24.
// 한줄평 : 그냥 문제 이해가 어려웠고 문제 이해하고나니깐 쉬웠따.
//
//#include <iostream>
//
//using namespace std;
//
//bool check[10010] = {0,};
//int a;
//int sum = 0;
//
//int main(){
//    for(int i = 1 ; i < 10001; i++ ){
//        sum = 0;
//        a = i;
//        while(a!= 0){
//            sum += a % 10;
//            a /= 10;
//        }
//        if(i + sum < 10001){
//            check[i + sum] = true;
//        }
//    }
//    for(int i = 1; i < 10001; i++){
//        if(check[i] == false)
//            cout << i << '\n';
//    }
//}