class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
 
        // if the digit is anyhing except 9 in it then just add 1
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(digits[i]<9)
            {
                digits[i]++;
                return digits;
            }
            // now it means last digits is 9 now so adding 1 simply means make it 0
            
            digits[i]=0;
            
        }
        
        digits[0] =1;
		digits.push_back(0);
        return digits;
    }
};