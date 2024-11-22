#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str; // 문자열을 입력받기 위한 선언.
    cin >> str; // 문자열 입력받음

   for(int i(0); i < str.size(); ++i){ // 문자열의 크기를 비교하고 반복
       
       cout << str[i] << endl; // 반복 만큼 출력
       
   } 
    
       return 0;
}