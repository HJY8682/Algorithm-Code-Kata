#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    int answer = 0;
    if (angle < 90)         //angle 이 90보다 작다면  0 < angle < 90 으로 하면 안되는 이유???
        {return 1;}         //return 1
    else if (angle == 90)   //angle 이 90과 같다면
        {return 2;}         //return 2
    else if (angle < 180)   //angle 이 180보다 작다면
        {return 3;}         //return 3
    else                    //아니라면
        {return 4;}         //return 4
    return answer;
}       