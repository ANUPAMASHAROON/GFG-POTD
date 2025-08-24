class Solution {
  public:
    
    Node* reverse(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;  
    }
    
    Node* addOne(Node* head) {

        if(!head) return head;
        
        Node* newHead = reverse(head);
        
        int carry = 1;  
        Node* temp = newHead;
        Node* prev = NULL;
        
        while(temp != NULL){
            int sum = temp->data + carry;
            temp->data = (sum % 10);
            carry = sum / 10;
            
            if(carry == 0) break;
            
            prev = temp;
            temp= temp->next;
        }
        
        if(carry){
            prev->next = new Node(carry);
        }
        
        
        return reverse(newHead);
    }
};

