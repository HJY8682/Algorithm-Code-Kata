#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int x = 1; x <= n; x++){ //x는 1로설정, n이하이며, 1씩 증가 반복(for)한다
        if( n % x == 1){         //n 을 x 로 나누었을때 몫이 1 이라면(if)
            return x;            //종료하고 x 를 보여준다
        }
    }
    return answer;
}