//
// Created by 박성민 on 2/25/24.
// 한줄평: 부루트포스 문제를 풀어보았는데 브론즈 2 문제라 그런가 굉장히 쉬웠다. 다른 문제들도 풀어봐여겠다 재미있는것 같다
#include <iostream>

using namespace std;

int main(){
    int N;
    int result = 0;
    cin >> N;
    for(int i = 1; i < N; i++){
        int sum = 0;
        int num = i;
        while(num!= 0){
            sum += num % 10;
            num /= 10;
        }
        if(sum + i == N){
            result = i;
            break;
        }
    }
    cout << result;

    return 0;
}