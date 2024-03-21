//한줄평 : 생각보다 간단한 문제였는데 6661이나 6662 같은로직이 들어올수있다는점을 생각하면 굉장히 쉬웠다

//#include <iostream>
//
//using namespace std;
//
//int main(){
//    int n;
//    cin >> n;
//    int cnt = 0;
//    int DeathNum = 666;
//    string tar;
//
//    while(cnt != n){
//        tar = to_string(DeathNum);
//        for(int j = 0; j < tar.length(); j++){
//            if(tar[j] == '6' && tar[j+1] == '6' && tar[j+2] == '6'){
//                cnt++;
//                break;
//            }
//        }
//        DeathNum++;
//    }
//
//    cout << DeathNum - 1;
//}