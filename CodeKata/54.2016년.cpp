#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int sum=0;
    switch(a)
    {
        case 12:
            sum += b;
        case 11:
            if(a==11){
                sum += b;
            }
            else{
                sum += 30;
            }
        case 10:
            if(a==10){
                sum += b;
            }
            else{
                sum += 31;
            }
        case 9:
            if(a==9){
                sum += b;
            }
            else{
                sum += 30;
            }
        case 8:
            if(a==8){
                sum += b;
            }
            else{
                sum += 31;
            }
        case 7:
            if(a==7){
                sum += b;
            }
            else{
                sum += 31;
            }
        case 6:
            if(a==6){
                sum += b;
            }
            else{
                sum += 30;
            }
        case 5:
        if(a==5){
            sum += b;
        }
        else{
            sum += 31;
        }
        case 4:
        if(a==4){
            sum += b;
        }
        else{
            sum += 30;
        }        
        case 3:
        if(a==3){
            sum += b;
        }
        else{
            sum += 31;
        }        
        case 2:
        if(a==2){
            sum += b;
        }
        else{
            sum += 29;
        }        
        case 1:
        if(a==1){
            sum += b;
        }
        else{
            sum += 31;
        }
    }
    sum %= 7;
    switch(sum)
    {
        case 0:
            answer = "THU";
            break;
        case 1:
            answer = "FRI";
            break;
        case 2:
            answer = "SAT";
            break;
        case 3:
            answer = "SUN";
            break;
        case 4:
            answer = "MON";
            break;
        case 5:
            answer = "TUE";
            break;
        case 6:
            answer = "WED";
            break;
    }
    return answer;
}
