#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
        if (num1 == num2) // num1이 num2와 같다면
            {
            answer = 1;   // answer 는 1
            }
        else              // 아니라면
            {
            answer = -1;  // answer 는 -1
            };
    return answer;
}