#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int> > commands) {
    vector<int> answer;
    
    for(int i=0;i<commands.size();++i) {
      int beg = commands[i][0]-1;
      int end = commands[i][1];
      int order = commands[i][2]-1;
      
      vector<int> tmp(array.begin()+beg, array.begin()+end);
      sort(tmp.begin(), tmp.end());   
      answer.push_back(tmp[order]);
   }
    return answer;
}

int main(void)
{
   int array[] = {1,5,2,6,3,7,4};
   int commands[][3] = {
      {2,5,3},
      {4,4,1},
      {1,7,3},
   };
   
   vector<int> vc(array, array+sizeof(array)/sizeof(int));
   vector<vector<int> > cvc;
   
   for(int i=0;i<3;++i)
      cvc.push_back(vector<int>(commands[i], commands[i]+sizeof(commands[i])/sizeof(int)));
   
   
   for(int i=0;i<cvc.size();++i) {
      for(int j=0;j<cvc[i].size();++j)
         cout << cvc[i][j] << ' ';
      cout << endl;      
   }
   vector<int> a = solution(vc,cvc);
   
   for(int i=0;i<a.size();++i)
      cout << a[i] << endl;
   return 0;
}
