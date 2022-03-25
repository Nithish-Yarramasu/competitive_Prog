//https://leetcode.com/problems/add-two-numbers/

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class AddTwoNumbers {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        
        int carry=0;
        ListNode res = new ListNode();
        ListNode resHead =  res;
            
        for(;l1!=null && l2!=null ;)
        {
            
            res.val = l1.val + l2.val + carry;
            
           
            
            if(res.val>9){res.val%=10;carry=1;}
            else{ carry=0;}
            
            
            
            l2=l2.next;
            l1=l1.next;
            
            if(l1!=null && l2!=null){
            res.next = new ListNode();
            res=res.next;}
            
            
        }
        
        if(l1==null && l2 == null)
        {
            if(carry == 1 ){res.next=new ListNode();res=res.next;res.val=carry--;}
            
        }
        else if(l1==null)
        {
            while(l2!=null){
                res.next = new ListNode();
                res=res.next;
                res.val=l2.val+carry;
                if(res.val>9){res.val%=10;carry=1;}
                else carry=0;
                l2=l2.next;
                    
            }
        }
        else
        {
            while(l1!=null){
                res.next = new ListNode();
                res=res.next;
                res.val=l1.val+carry;
                if(res.val>9){res.val%=10;carry=1;}
                else carry=0;
                l1=l1.next;
            }
        }
        
        
        if(carry==1){
                res.next = new ListNode();
                res=res.next;
                res.val=carry;
        }
        res=resHead;
        

        
        return res;
    }
}