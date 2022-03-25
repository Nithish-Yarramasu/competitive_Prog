//https://leetcode.com/problems/longest-palindromic-substring/

class LongPalSubStrng{
    
    static int[][]p;
    static boolean[][]d;
    public String longestPalindrome(String s) {
        
        char[] c= new char[s.length()];
        d = new boolean[c.length][c.length];
        p = new int[c.length][c.length];
        int ind1=-1,ind2=-1;
        int max=-1;
        
        for (int[] row: p)
              Arrays.fill(row,-1);
        
        s.getChars(0,s.length(),c,0);
        
        for(int i=0;i<c.length;i++)
          for(int j=i;j<c.length;j++)
              if(c[i]==c[j])d[i][j]=true;
        
        for(int i=0;i<c.length;i++){
            for(int j=c.length-1;j>=i;j--){
                if(p[i][j]==-1 && max<j-i){
                    p[i][j]=(isPalindrome(i,j)==true)?1:0;
                }
                if(p[i][j]>0 && max<j-i){
                    max=j-i;
                    ind1=i;
                    ind2=j;
                }
            }
        }
                
            
        //System.out.println(max + " ind1" + ind1 + "ind2" + ind2);
        
        return s.substring(ind1,ind2+1);
    }
    
    public boolean isPalindrome(int i,int j){
        
        if((i==j)||(j-i==1))return d[i][j];
        if(d[i][j]==false)return false;
        if(p[i][j]!=-1)return p[i][j]>0?true:false;
        return (d[i][j]&&isPalindrome(i+1,j-1));
    }
    
    
}