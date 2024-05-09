//한줄평 : 널값빼문에 제대로 출력이 안되서 헤멘부분 빼면 할만했던것 같다

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    string a;
//    vector<char> v;
//    cin >> a;
//    for (int i = 0; i < a.length(); i++) {
//        v.push_back(a[i]);
//    }
//    string res;
//    int num = a.length() / 3;
//    int num1 = a.length() % 3;
//    for (int i = 0; i < num; i++) {
//        int cnt = 1;
//        int sum = 0;
//        for (int j = 0; j < 3; j++) {
//            if (v.back() == '1')
//                sum += cnt;
//            v.pop_back();
//            cnt *= 2;
//        }
//        res.push_back(sum + '0');
//    }
//
//    int cnt = 1;
//    int sum = 0;
//    if (num1 != 0) {
//        for (int i = 0; i < num1; i++) {
//            if (v.back() == '1')
//                sum += cnt;
//            v.pop_back();
//            cnt *= 2;
//        }
//        res.push_back(sum + '0');
//    }
//
//    if (res.empty() || res == "0") {
//        cout << "0";
//    } else {
//        reverse(res.begin(), res.end());
//        cout << res;
//    }
//}