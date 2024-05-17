////
//// Created by 박성민 on 5/14/24.
//// 한줄평 : 바뀌는 vector의 size의 for문 범위 때문에 오류가 많이 났다. 잘 고쳤다.
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main(){
//    int N,M;
//    int cnt = 0;
//    vector<int> v;
//    cin >> N >> M;
//    for(int i = 1; i <= 10000; i++){
//        if(N <= i * i && M >= i * i){
//            v.push_back(i);
//        }
//    }
//    if(v.size() == 0){
//        cout << -1;
//    }else{
//        int a = v.size();
//        int min = 0;
//        for(int i = 0 ; i < a; i++){
//            cnt += v[i] * v[i];
//            if(i == 0){
//                min = v[i] * v[i];
//            }
//            v.pop_back();
//        }
//        cout << cnt << '\n' << min;
//    }
//}