
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == nullptr || head->next == nullptr){
            return head;
        }

        int count = 0;
        ListNode* temp = head;

        while(temp != nullptr){
            count++;
            temp = temp->next;
        }

        k = k % count;

        if(k == 0){
            return head;
        }

        count -= k;

        ListNode* curr = head;
        ListNode* prev = nullptr;

        while(count--){
            prev = curr;
            curr = curr->next;
        }

        prev->next = nullptr;

        ListNode* tail = curr;

        while(tail->next != nullptr){
            tail = tail->next;
        }

        tail->next = head;

        head = curr;

        return head;
    }
};
