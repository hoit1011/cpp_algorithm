//
// Created by 박성민 on 3/19/24.
// 한줄평 : 그냥 줫 밥 문제

//#include <iostream>
//
//using namespace std;
//
//int arr[50000] = {0,};
//int main(){
//    int S1,S2,S3;
//    cin >> S1 >> S2 >> S3;
//    for(int i = 1; i <= S1; i++){
//        for(int j = 1; j <= S2; j++){
//            for(int k = 1; k <= S3; k++){
//                int tmp = 0;
//                tmp += i+j+k;
//                arr[tmp -1]++;
//            }
//        }
//    }
//    int max = -999;
//    for(int i = 3; i <= S1+S2+S3; i++){
//        if(arr[i] > max)
//            max = arr[i];
//    }
//    for(int i = 3; i <= S1+S2+S3; i++){
//        if(arr[i] == max){
//            cout << i + 1;
//            break;
//        }
//    }
//}