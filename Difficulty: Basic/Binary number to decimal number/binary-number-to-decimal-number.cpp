class Solution {
  public:
    int binaryToDecimal(string &b) {
         int length=b.length();
        int sum=0;
        
        for( int i=0; i<length; i++)
        {
            if(b[length-1-i] == '1')
            {
                sum+=pow(2,i);
            }
        }
        return sum;       // Code here.
    }
};