// 한줄평 : 브루트 포스 알고리즘을 계속 푸는 중인데 감을 잡을듯 말듯 못풀겠다 하지만 조건이 정해져있을때 푸는 방법을 안것 같다

//#include <iostream>
//#include <algorithm>
//#include <utility>
//using namespace std;
//
//string WB[8] = {
//    "WBWBWBWB",
//    "BWBWBWBW",
//    "WBWBWBWB",
//    "BWBWBWBW",
//    "WBWBWBWB",
//    "BWBWBWBW",
//    "WBWBWBWB",
//    "BWBWBWBW"
//};
//string BW[8] = {
//    "BWBWBWBW",
//    "WBWBWBWB",
//    "BWBWBWBW",
//    "WBWBWBWB",
//    "BWBWBWBW",
//    "WBWBWBWB",
//    "BWBWBWBW",
//    "WBWBWBWB"
//};
//string board[55];
//
//int WB_cnt(int a, int b){
//    int cnt = 0;
//    for(int i = 0; i < 8; i++){
//        for(int j = 0; j < 8; j++){
//            if(board[a+i][b+j] != WB[i][j])
//                cnt++;
//        }
//    }
//    return cnt;
//}
//
//int BW_cnt(int a, int b){
//    int cnt = 0;
//    for(int i = 0; i < 8; i++){
//        for(int j = 0; j < 8; j++){
//            if(board[a+i][b+j] != BW[i][j])
//                cnt++;
//        }
//    }
//    return cnt;
//}
//
//int main(){
//    int X, Y;
//    int minVal = 99999;
//    cin >> X >> Y;
//    for(int i = 0; i < X; i++)
//        cin >> board[i];
//    for(int i = 0; i + 8 <= X; i++){
//        for(int j = 0; j + 8 <= Y; j++){
//            int tmp;
//            tmp = min(WB_cnt(i, j), BW_cnt(i, j));
//            if(tmp < minVal)
//                minVal = tmp;
//        }
//    }
//    cout << minVal;
//    return 0;
//}
