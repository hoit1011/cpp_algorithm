//한줄평 : 오늘도 브루트 포스를 풀었는데 생각보다 이제 어떻게 푸는지 알것같아서 풀었다 슬슬 브루트포스 문제를 잘 풀수있는것같긴한데 아직 좀더 많이 풀어봐야겠다

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int arr[9];
//int result[7];
//
//int main() {
//    for (int i = 0; i < 9; i++) {
//        cin >> arr[i];
//    }
//
//    for (int i = 0; i < 8; i++) {
//        for (int j = i + 1; j < 9; j++) {
//            int hap = 0;
//            for (int k = 0; k < 9; k++) {
//                if (k != i && k != j) {
//                    hap += arr[k];
//                }
//            }
//            if (hap == 100) {
//                int t = 0;
//                for (int m = 0; m < 9; m++) {
//                    if (m != i && m != j) {
//                        result[t] = arr[m];
//                        t++;
//                    }
//                }
//                break;
//            }
//        }
//    }
//
//    sort(result, result + 7);
//    for (int i = 0; i < 7; i++) {
//        cout << result[i] << '\n';
//    }
//
//    return 0;
//}
