//https://leetcode.com/problems/longest-substring-without-repeating-characters/

class WithoutRepeatingCharacters{
    public int lengthOfLongestSubstring(String s) {
        
        int sum=1;
        int presum=1;
        int ind=0;
        
            for(int i=1;i<s.length();i++)
            {  
               if(s.substring(ind,i).contains(String.valueOf(s.charAt(i)))){
                   ind = (s.substring(0,i).lastIndexOf(s.charAt(i)))+1;
                   if(presum<sum)presum=sum;
                   sum = (i) - (ind -1);
                   
               }
                else
               {
                   sum++;
                   
               }
                if(presum<sum)presum=sum;
                
            }
        
    
        if(s.length()==0)presum=0;
        
        return presum;
    }
}