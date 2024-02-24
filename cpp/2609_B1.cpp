//
// Created by 박성민 on 2/23/24.
// 한줄평 : 쉬운문제인거같은데 잘 안풀려서 검색을 해보니 일반 나눗셈으로는 완벽하게 구현하기 어려운 문제였던것 같고
// 유클리드 호제법을 사용해서 풀었지만 사실 잘 모르겠다.

//#include <iostream>
//
//using namespace std;
//
//int gcd(int a, int b);
//
//int main() {
//    int a,b;
//
//    cin >> a >> b;
//    int GCD = gcd(a,b);
//    int LCM = a*b / GCD;
//
//    cout << GCD <<'\n' << LCM;
//    return 0;
//}
//
//int gcd(int a, int b){
//    int r = a % b;
//    while(r != 0){
//        a = b;
//        b = r;
//        r = a % b;
//    }
//    return b;
//}