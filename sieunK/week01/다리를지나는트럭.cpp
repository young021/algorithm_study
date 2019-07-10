#include <string>
#include <vector>
#include <iostream>

using namespace std;

struct info {
	int weight;
	int len;
public:
	info(int _weight = 0):weight(_weight), len(1) {}	
};

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    
    int timer = 0;
    int total_weight = 0;
    vector<info> bridge;
	do {
		timer++;
		for(int i=0;i<bridge.size();++i)
			bridge[i].len++;
			
		if(!bridge.empty() && bridge.front().len > bridge_length) {
			total_weight -= bridge.front().weight;
			bridge.erase(bridge.begin());
		}
		if(!truck_weights.empty() && 
			total_weight + truck_weights.front() <= weight) {
			bridge.push_back(truck_weights.front());
			total_weight += truck_weights.front();
			truck_weights.erase(truck_weights.begin());
		}
	} while(!bridge.empty());
	
	answer = timer;
    return answer;
}

int main(void)
{
	int arr[] = {7, 4, 5, 6};
	solution(2, 10, vector<int>(arr,arr+sizeof(arr)/sizeof(int)));
	return 0;
}
