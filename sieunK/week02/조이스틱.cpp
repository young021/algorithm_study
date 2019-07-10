#include <string>
#include <vector>
#include <iostream>

using namespace std;

#define LEFT 0
#define RIGHT 1

int solution(string name) {
    int answer = 0;
    
	int cnt = 0;
	int pos = 0;
	string str(name.size(),'A');
	while(str != name) {
		if(name[pos] != 'A') {
			str[pos] = name[pos];
			if(str[pos] > 'M')
				cnt += 'Z'-str[pos]+1;
			else
				cnt += str[pos]-'A'; 	
		}
		if(pos!=0)
			cnt++;
			
		int i = pos;
	    int front = 0;
		do {
			i++;
			i = i%name.size();
			if(name[i] == 'A')
				front++;
			else
				break;	
		} while(i!=pos);
		
		i = pos;
		int back = 0;
		do {
			i--;
			if(i==-1)
				i = name.size()-1;
			if(name[i] == 'A')
				back++;
			else
				break;		
		} while(i!=pos);
		
		int dir = RIGHT;
		if(front > back)
			dir = LEFT;
					
		if(dir == LEFT) {
			if(pos == 0) 
				pos = name.size()-1;
			else 
				pos--;	
		}
		else {
			pos++;
		}
	}				
    return cnt;
}

int main(void)
{
	cout << solution(string("ZA")) << endl;
	return 0;
}
