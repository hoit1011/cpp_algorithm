//
// Created by 박성민 on 3/14/24.
// 한줄평 : 전역변수를 사용하는 방법을 알았고 함수로 코드를 깔끔하게 짜버리는 방법을 알아버림

//#include <iostream>
//
//using namespace std;
//
//int a[5];
//
//void printarr(int a[]){
//    for(int i = 0 ; i < 5; i++){
//        cout << a[i] << " ";
//    }
//    cout << '\n';
//}
//
//int change(int a1, int b){
//    int temp;
//    temp = a[a1];
//    a[a1] = a[b];
//    a[b] = temp;
//    return 0;
//}
//
//int main(){
//    for(int i = 0 ; i < 5; i++) {
//        cin >> a[i];
//    }
//    while(1){
//        if(a[0] > a[1]){
//            change(0,1);
//            printarr(a);
//        }
//        if(a[1] > a[2]){
//            change(1,2);
//            printarr(a);
//        }
//        if(a[2] > a[3]){
//            change(2,3);
//            printarr(a);
//        }
//        if(a[3] > a[4]){
//            change(3,4);
//            printarr(a);
//        }
//        if(a[0] == 1 && a[1] == 2 && a[2] == 3 && a[3] == 4 && a[4] == 5)
//            break;
//    }
//    return 0;
//}