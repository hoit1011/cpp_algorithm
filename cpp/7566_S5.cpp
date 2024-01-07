
//  7566 S5.cpp
//  c++study

//  Created by 박성민 on 1/4/24.
// 한줄평 : 밑에 있는 코드가 원래 내가 짠 코든데 3시간동안 오류를 고치다가 결국 정답을 봤는데 코드와 비슷하긴한데 디테일한부분에서 좀 틀렸었던거같다

// #include <stdio.h>
// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main() {
//    int a;
//    cin >> a;
//    int arr1[205] = {0,};
//    int arr2[205] = {0,};
   
//    for(int i = 0; i < a; i++){
//        cin >> arr1[i] >> arr2[i];
//    }
   
//    int rank[205];
   
//    for(int i = 0; i < a; i++){
//        rank[i] = 1;
//        for(int j = 0; j < a; j++){
//            if(i == j)
//                continue;
//            if(arr1[i] < arr1[j] && arr2[i] < arr2[j]){
//                rank[i]++;
//            }
//        }
//    }
   
//    for(int i = 0; i < a; i++){
//        cout << rank[i] << " ";
//    }
   
//    return 0;
// }

// 원래코드

// #include <stdio.h>
// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main() {
//    int a;
//    cin >> a;
//    int arr1[205] = {0,};
//    int arr2[205] = {0,};
   
//    for(int i = 0; i < a; i++){
//        cin >> arr1[i] >> arr2[i];
//    }
   
//    int winner[205] = {0,};
   
//    for(int i = 0; i < a; i++){
//        for(int j = 0; j < a; j++){
//            if(i == j)
//                continue;
//            if(arr1[i] > arr1[j] && arr2[i] > arr2[j]){
//                winner[i]++;
//            }
//        }
//    }
   
//    int arr[205] = {0,};
   
//    for(int i = 0; i < a; i++){
//        int cnt = 0;
//        for(int j = 0; j < a; j++){
//            if(winner[i] < winner[j]){
//                cnt++;
//            }
//        }
//        arr[i] = cnt + 1;
//    }
   
//    for(int i = 0; i < a; i++){
//        cout << arr[i] << " ";
//    }
   
//    return 0;
// }
