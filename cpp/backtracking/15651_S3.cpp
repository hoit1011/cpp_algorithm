//한줄평 : 이제 진짜 백트래킹 감을 잡은것같다 근데 n과m문제만 풀어서 사실 그냥 똑같은 구조긴한데 이젠 검색안하고 풀수있어서 그 점에 만족하고있다

//#include <iostream>
//#define MAX 10
//
//using namespace std;
//
//int N, M;
//int arr[MAX] = {0,};
//int dfs(int k){
//    if(k == M){
//        for(int i = 0 ; i < M; i++){
//            cout << arr[i] << ' ';
//        }
//        cout << '\n';
//        return 0;
//    }
//    for(int i = 1; i <= N; i++){
//        arr[k] = i;
//        dfs(k + 1);
//    }
//    return 0;
//}
//
//int main(){
//    cin >> N >> M;
//    dfs(0);
//    return 0;
//}