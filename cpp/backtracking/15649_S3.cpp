//한줄평 : 풀었다고는 했지만 사실 만족스럽지는 않다 다시 풀라고하면 확실하게 대답을 할수도 없을것같고 아직 정확하기 이해하지도 못한것같기 때문이다 앞으로도 N과M문제를 다 풀면서 공부를 해야겠다


//#include <iostream>
//
//#define fast cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
//#define MAX 9
//
//using namespace std;
//
//int N,M;
//int arr[MAX] = { 0, };
//int iscount[MAX] = { false, };
//
//int dfs(int k){
//    if(k == M){
//        for(int i = 0 ; i < M; i++){
//            cout << arr[i] << ' ';
//        }
//        cout << '\n';
//    }
//    for(int i = 1; i <= N; i++){
//        if(!iscount[i]){
//            iscount[i] = true;
//            arr[k] = i;
//            dfs(k + 1);
//            iscount[i] = false;
//        }
//    }
//}
//
//int main(){
//    fast;
//    cin >> N >> M;
//    dfs(0);
//}