#include <vector>
#include <iostream>

using namespace std;

#define MAX 10000001

bool is_prime[MAX];

void preprocess(void)
{
	for(int i=2;i<MAX;++i)
		is_prime[i] = true;

	for(int i=2;i*i<MAX;++i)
		if(is_prime[i]) {
			for(int j=i*2;j<MAX;j+=i)
				is_prime[j] = false;
		}	 
}

long long solution(int N) {
	preprocess();
    long long answer = 0;
    
    for(int i=0;i<=N;++i)
    	if(is_prime[i])
    		answer += i;
    return answer;
}

int main(void)
{
	int a = solution(7);
	cout << a << endl;
	return 0;
}
