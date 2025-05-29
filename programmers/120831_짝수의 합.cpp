#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (           //반복문 for 사용
        int i = 1;  //i에 1을 할당
        i <= n;     //i는 n 이하로  설정 <=(이하)
        i++)        //를 1씩 더함
    {
        if(i % 2 == 0) // if문 사용  i를 2로 나누었을때 나머지가 0이라면
        {
            answer += i; // answer + i 덧셈 후 대입한다
        }
     }
    return answer; 
    // for 에서 i는 1씩 계속 늘어나지만 n 이하이고 만약 i가 2로 나누었을때 나머지가 0 (짝수) 이라면 i 값을 answer에 더하고
    // 짝수를 더한 것은 반환한 값이 return answer 가 된다
}