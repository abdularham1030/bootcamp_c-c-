
class Solution
{
public:
    bool isPalindrome(int x) 
    {
        int last = 0 ,count=x;
        long int temp =0 ;
        if(x < 0)
            {
                return false;
            }
        while(x)
        {
            last = x % 10 ;
            temp = (temp + last)*10;
            x = x/10;   
        }
        temp = temp / 10 ;
        if(count == temp)
        {
            return true;
        }
        else 
           return false;
    }
};
