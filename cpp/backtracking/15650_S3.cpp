//한줄평 : 백트래킹 감잡는중 ( 존나힘듬 )

//#include <iostream>
//#define MAX 10
//#define fast cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
//
//using namespace std;
//
//int N, M;
//int arr[MAX] = {0,};
//bool iscount[MAX] = {false,};
//
//int dfs(int j, int k) {
//    if(k == M) {
//        for (int i = 0; i < M; i++) {
//            cout << arr[i] << ' ';
//        }
//        cout << '\n';
//        return 0;
//    }
//    for(int i = j; i <= N; i++) {
//        if(!iscount[i]) {
//            iscount[i] = true;
//            arr[k] = i;
//            dfs(i + 1, k + 1);
//            iscount[i] = false;
//        }
//    }
//    return 0;
//}
//
//int main() {
//    fast;
//    cin >> N >> M;
//    dfs(1, 0);
//    return 0;
//}
