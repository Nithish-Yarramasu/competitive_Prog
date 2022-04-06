//Problem Definition :https://leetcode.com/problems/group-anagrams/

class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        
       
         HashMap<Integer,Integer> temp=null;
        HashMap<Map<Integer,Integer>,List<String>> f1 = new HashMap<Map<Integer,Integer>,List<String>>();
        
        List<List<String>> LF = new ArrayList<List<String>>();
        
        int v;
        for(int i=0;i<strs.length;i++)
        {    HashMap<Integer,Integer> h1 = new HashMap<Integer,Integer>();
            for(int j=0;j<strs[i].length();j++){
                
                int k =strs[i].charAt(j)-'a';
                if(!h1.containsKey(k))
                    h1.put(k,1);
                else
                {   v=h1.get(k);
                    h1.put(k,++v);
                }
            }
          
            if(strs[i].equals("")){
                if(!h1.containsKey(null)){
                     h1.put(null,1);
                }
               else
                {   v=h1.get(null);
                    h1.put(null,++v);
                }
            }
  

           if(f1.containsKey(h1))
           {    
                f1.get(h1).add(strs[i]);
           }else
            {  
                List<String> l = new ArrayList<String>();
                l.add(strs[i]);
                f1.put(h1,l);
            }
        }
        
        
        for(Map.Entry<Map<Integer,Integer>,List<String>> m : f1.entrySet())
            LF.add(m.getValue());
        return LF;
    }
}