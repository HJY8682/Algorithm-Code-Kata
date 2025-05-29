#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "";
    if (num % 2 == 0)  // num을 2로 나누었을때 몫이 0 이라면 
    {
        return "Even"; //  "Even" 을 return
    }
    else               // 아니라면
    {
        return "Odd";  // "Odd" 를 return
    }
    return answer;
}