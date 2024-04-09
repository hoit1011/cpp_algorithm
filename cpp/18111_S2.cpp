//한줄평 : 알고리즘 개 시발 진짜 좆같다

//#include<iostream>
//
//using namespace std;
//
//int land[501][501];
//
//int main(){
//    int mint = 99999999;
//    int minh = 99999999;
//    int time;
//    int N, M, B;
//    cin >> N >> M >> B;
//    for (int i = 0; i < N; i++)
//        for (int j = 0; j < M; j++) {
//            cin >> land[i][j];
//        }
//    for (int h = 0; h <= 256; h++) {
//        int build = 0, remove = 0;
//        for (int i = 0; i < N; i++) {
//            for (int j = 0; j < M; j++) {
//                int height = land[i][j] - h;
//                if (height > 0) remove += height;
//                else if (height < 0) build -= height;
//            }
//        }
//        if (remove + B >= build) {
//            time = remove * 2 + build;
//            if (time <= mint) {
//                mint = time;
//                minh = h;
//            }
//        }
//    }
//    cout << mint << " " << minh << endl;
//}
