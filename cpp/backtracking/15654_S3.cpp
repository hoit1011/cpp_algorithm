//한줊평 : 이제 진짜 대충 문제 푸는 유형은 알아버린것같은데 나중에 이걸 어떻게 써먹어야할지는 잘 모르겠다 더많은 데이터를 쌓아야겠다

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int N, M;
//int arr[10] = {0,};
//int arr2[10] = {0,};
//bool visited[10] = {false,};
//
//int dfs(int k){
//    if(k == M){
//        for(int i = 0; i < M; i++){
//            cout << arr2[i] << " ";
//        }
//        cout << '\n';
//        return 0;
//    }
//    for(int i =  0; i < N; i++){
//        if(!visited[i]){
//            visited[i] = true;
//            arr2[k] = arr[i];
//            dfs(k + 1);
//            visited[i] = false;
//        }
//    }
//    return 0;
//}
//
//int main(){
//    cin >> N >> M;
//    for(int i = 0 ; i< N; i++){
//        cin >> arr[i];
//    }
//    sort(arr, arr + N);
//    dfs(0);
//    return 0;
//}