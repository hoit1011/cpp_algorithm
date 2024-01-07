//
//  1920 S4.cpp
//  c++study
//
//  Created by 박성민 on 12/30/23.
//  한줄평 : 이젠 코드의 길이를 줄이는 방법을 알아야 할 때가 온거같다 그냥 코드 구현은 할수있었지만 시간 제한이 걸리고
//  결국 binary_search라는 것을 검색해가며 구현했다 알고리즘 힘드네 더 열심히 공부해야겠다

//#include <stdio.h>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//bool binary_search(int arr[],int left, int right, int target){
//    while(left <= right){
//        int mid = (left + right) / 2;
//        if(arr[mid] == target){
//            return true;
//        } else if (arr[mid] > target){
//            right = mid - 1;
//        } else{
//            left = mid + 1;
//        }
//    }
//    return false;
//}
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    int a;
//    int arr1[100005] = {0,};
//    int b;
//    int arr2[100005] = {0,};
//    
//    cin >> a;
//    for(int i = 0; i < a; i++){
//        cin >> arr1[i];
//    }
//        
//    sort(arr1, arr1+a);
//    
//    cin >> b;
//    for(int i = 0; i < b; i++){
//        cin >> arr2[i];
//    }
//    
//    for(int i = 0; i < b; i++){
//        if(binary_search(arr1,0,a-1,arr2[i])){
//            cout << "1" <<'\n';
//        }else {
//            cout << "0" << '\n';
//        }
//    }
//    return 0;
//}
