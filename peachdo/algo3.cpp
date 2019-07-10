#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n){
    double answer = 0;
    double Cont = 0;
    double sum = 0;
    while(n !=0){
        Cont++;
        sum = sum + n%10;
        n = n/10;
    }
    answer = sum*1.0 / Cont*1.0;
    return answer;
}

int main(){
   double n;
   cin >> n;
   cout << solution(n) << endl;
}
