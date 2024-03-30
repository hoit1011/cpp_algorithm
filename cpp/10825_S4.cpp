//
// Created by 박성민 on 3/30/24.
//

// 한줄평 : vector에 구조체를 넣을수 있다는 사실을 알게 되었고 if-else문에 제일 최하위 조건부터 넣어야한다는 사실을 까먹어서 오래 걸린문제 ㅜ sort개념 한번 보고와서 쉬웠당
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//struct mem{
//    string name;
//    int kor,eng,math;
//};
//
//bool compare(mem a, mem b){
//    if(a.kor == b.kor && a.eng == b.eng && a.math == b.math)
//        return a.name < b.name;
//    if(a.kor == b.kor && a.eng == b.eng)
//        return a.math > b.math;
//    if(a.kor == b.kor)
//        return a.eng < b.eng;
//    else
//        return a.kor > b.kor;
//}
//
//int main(){
//    int n;
//    cin >> n;
//
//    vector<mem> v(n);
//
//    for(int i = 0 ; i < n; i++){
//        cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math;
//    }
//
//    sort(v.begin(), v.end(), compare);
//
//    for(int i = 0 ; i < n; i++){
//        cout << v[i].name << '\n';
//    }
//}