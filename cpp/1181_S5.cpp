//
// Created by 박성민 on 2/24/24.
// 한줄평 : 오랜만에 공부하면서 sort에 대한것을 다시 배워보았고
// 아직 헷갈리는 부분이 있어서 정렬 문제를 많이 풀어봐야겠다

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//int cmp(string a, string b){
//    if(a.length() == b.length()){
//        return a < b;
//    }else{
//        return a.length() < b.length();
//    }
//}
//
//string word[20000];
//
//int main(){
//    int N;
//    cin >> N;
//
//    for(int i = 0; i < N; i++){
//        cin >> word[i];
//    }
//
//    sort(word, word + N, cmp);
//
//    for(int i = 0 ; i < N; i++){
//        if(word[i] == word[i+1]){
//            continue;
//        }
//        cout << word[i] << '\n';
//    }
//    return 0;
//}