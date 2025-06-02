#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n; i++) { //i는 1이고, n이하이고, 1씩 증가한다
        if (n % i == 0){           //n을 i로 나누었을때 나머지가 0이된다면 (약수)
            answer += i;           //answer에 i 를 더하면서 대입
            }
        }
    return answer;
}