// https://leetcode.com/problems/reverse-nodes-in-k-group/

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
class ReverseNodesInKGroups{
    public ListNode reverseKGroup(ListNode head, int k) {
        
        ListNode tail = head;
        ListNode dummy=head;
        ListNode prehead=tail;
        ListNode start=head;
        ListNode temp;
        int l=0;
        int c=0;
        
        while(dummy!=null){
            l++;
            dummy=dummy.next;
        }
        
        int i = l/k;
        
        while(i-->0&&k!=1){
            c++;
            int j=k-1;
            while(j-->0){
                temp=head;
                head = tail.next;
                tail.next = head.next;
                head.next=temp;
            }
            if(c==1)
            {
              start=head;    
            }
            if(c>1)
            {
                prehead.next=head;
                prehead=tail;
            }
            tail=tail.next;
            head=tail;
        }       
        
        return start;
    }