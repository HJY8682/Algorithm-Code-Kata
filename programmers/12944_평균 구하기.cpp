#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;              //double 을 사용해 실수로 만들어줌
    for (int num : arr)             //arr :(에서) num 을 꺼내 대입 반복한다
    {
        answer += num;              //num을 하나씩 더해서 answer에 대입
    }
    return answer / arr.size();     //반복적으로 더해진 answer를 num으로 꺼내진 arr의 개수만큼 나눈다
}