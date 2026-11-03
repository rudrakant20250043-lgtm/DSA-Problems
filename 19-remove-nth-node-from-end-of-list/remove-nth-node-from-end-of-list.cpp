
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;

        ListNode* temp = head;

        // Count total nodes
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        count = count - n;

        // If head needs to be deleted
        if (count == 0) {
            temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        ListNode* curr = head;
        ListNode* prev = nullptr;

        // Reach the node to delete
        while (count--) {
            prev = curr;
            curr = curr->next;
        }

        // Delete the node
        prev->next = curr->next;
        delete curr;

        return head;
    }
};
