class Solution {
public:
    string intToRoman(int num) {
        
        string symbol[13] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int integer[13] =    {1, 4,5 ,9,10,40,50,90,100,400,500,900,1000};
        
        
        string ans;
        
        for(int i=12;i>=0;i--)
        {
            int temp = num/integer[i];
            
            for(int j=0;j<temp;j++)
            {
                ans+=symbol[i];
            }
            
            num = num%integer[i]; // 1994/1000 = 994
            
        }
        
        return ans;
        
    }
};