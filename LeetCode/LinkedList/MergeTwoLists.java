/*https://leetcode.com/problems/merge-two-sorted-lists/*/

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
class MergeTwoLists {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
   
        ListNode f1=new ListNode();
        ListNode head=f1;
        int c=0;
        
        while(true){
         
            if(list1!=null && list2!=null){
                 c=1;
                if(list1.val <= list2.val){
                    f1.val=list1.val;
                    list1=list1.next;                    
                    
                }else{
            
                    f1.val=list2.val;
                    list2=list2.next;
                    
                    
                }
            }else if(list1!=null){
                c=1;
                    f1.val=list1.val;
                    list1=list1.next;
                   
                
            }else if(list2!=null){
                c=1;
                    f1.val=list2.val;
                    list2=list2.next;
                   
               
            }
            if(list1!=null || list2!=null){f1.next=new ListNode(); f1=f1.next;}
            else{
                if(c==0)head=null;
                break;
            }
            
        
        }
        
       
        return head;
    }
}