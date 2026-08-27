class Solution {
public:
    int splitNum(int num) {
      vector<int>ans ;
      while(num>0)
      {
        ans.push_back(num%10) ;
        num = num/10 ;
      }  
      sort(ans.begin() , ans.end()) ;
      int n = ans.size() ;
      int num1 = 0 ;
      int num2 = 0 ;
      for(int i = 0 ; i <n ; i++)
      {
        if(i%2 == 0) num1 = num1*10 + ans[i] ;
        else num2 = num2 * 10 + ans[i] ;
      }
      return num1 + num2 ;
    }
};