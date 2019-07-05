#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int i;

    vector<string> v;
    v.push_back("¼ö");
    v.push_back("¹Ú");

    for(i = 0; i < n; i++)
        if(i%2==0)
            answer += v[0].c_str();
        else if(i%2==1)
            answer += v[1].c_str();

    return answer;
}

int main(){
    int n ;
    cin >> n ;
    string answer = solution(n);
    cout << answer << endl;
}
