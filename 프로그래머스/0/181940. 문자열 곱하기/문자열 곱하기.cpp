#include <iostream>
#include <string>

using namespace std;

string solution(string my_string, int k) {
    string answer = "";
    for (int i = 0; i < k; i++) {
        answer += my_string;
    }
    return answer;
}

int main() {
    
    cout << solution("string", 3) << endl; 
    cout << solution("love", 10) << endl; 
    return 0;
}
