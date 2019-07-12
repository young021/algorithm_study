#include <string>
#include <vector>
#include <stack>
#include <sstream>
#include <iostream>

using namespace std;

int solution(string arrangement) {
    int answer = 0;
    stack<char> pipeline;
    char ch;
    int raiser = 0;
    istringstream iss(arrangement);
    while(iss >> ch) {
		if(ch == '(') {
			if(iss.peek() == ')') {
				raiser += pipeline.size();
				iss.get();
			}
			else
				pipeline.push(ch);
		}
		else  {
			raiser++;
			pipeline.pop();
		}
	} 
	answer = raiser;
    return answer;
}

int main(void)
{
	cout << solution("()(((()())(())()))(())") << endl;
	return 0;
}
