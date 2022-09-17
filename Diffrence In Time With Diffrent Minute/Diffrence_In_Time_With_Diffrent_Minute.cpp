
#include <iostream>
using namespace std;
 
int  MinutesElapsed(int a,int b,int c,int d,int e){
    int diffrence_hour=c-a;
    int diffrence_minute=d-b;
    int hour_to_minute=60-e;
    int s=((diffrence_hour*hour_to_minute)+diffrence_minute);
    return s;
}
int main() {
    
    cout<<MinutesElapsed(0,10,1,12,2) ;

    return 0;
}