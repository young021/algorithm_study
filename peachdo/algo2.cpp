#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string word) {
    string answer = "";
    vector<char> words;

    copy(word.begin(),word.end(),back_inserter(words));
    int IndexNum = words.size();
    int n = 0;
    if(IndexNum%2 == 1)
    {
        n = IndexNum/2;
        answer = words[n];
    }
    else if(IndexNum%2 == 0)
    {
        n = IndexNum/2;
        for(int i = n-1; i<n+1; i++)
            answer += words[i];
    }
    return answer;
}

int main() {
    string word;
    cin >> word;
    cout << solution(word) << endl;
}
