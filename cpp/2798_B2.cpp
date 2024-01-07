
//  2798 B2.cpp
//  c++study

//  Created by 박성민 on 12/27/23.
//  한줄평: 확실히 브2라 쉬웠다 for문에서 제한시간 초과가 걸리지 않을까 생각했는데 내가 c++을 너무 만만하게 본거같다
//  if문으로 i == j 식으로 걸러주니 굉장히 쉬운 문제였다

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
   int a,b;
   int max = 0;
   cin >> a >> b;
   int arr[101] = {0,};
   for(int i = 0; i < a; i++){
       cin >> arr[i];
   }
   
   for(int i = 0; i < a; i++){
       for(int j = 0; j < a; j++){
           for (int k = 0; k < a; k++){
               if((i == j) || (j == k) || (i == k)){
                   continue;
               }
               if((arr[i] + arr[j] + arr[k]) == b){
                   max = b;
                   break;
               }
               if(((arr[i] + arr[j] + arr[k]) > max) && (( arr[i] + arr[j] + arr[k] ) < b))
                   max = (arr[i]+arr[j]+arr[k]);
           }
       }
   }
   cout << max;
}
