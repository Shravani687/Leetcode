bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
while (head1 != nullptr && head2 != nullptr) {
        if (head1->data != head2->data) {
            return false; // Data mismatch, lists are not equal
        }
        head1 = head1->next;
        head2 = head2->next;
    }
     return head1 == nullptr && head2 == nullptr;
}