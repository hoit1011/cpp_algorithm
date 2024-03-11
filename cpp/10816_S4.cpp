//
// Created by 박성민 on 3/11/24.
// 한줄평 : 일반 배열로할때는 안되더니 unordered_map(hash_map)으로 하니까 된다
// 그리고 변수는 전역변수로 선언하는게 더 이쁜것같다

//#include <iostream>
//#include <unordered_map>
//
//using namespace std;
//
//unordered_map<int, int> arr;
//int N, M , card;
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cin >> N;
//    for(int i = 0 ; i < N; i++){
//        cin >> card;
//        arr[card]++;
//    }
//    cin >> M;
//    for(int i = 0 ; i < M; i++){
//        cin >> card;
//        cout << arr[card] << " ";
//    }
//    return 0;
//}