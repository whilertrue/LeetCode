ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int c = 0;
    ListNode *l = new ListNode(0);
    ListNode *t = l;
    while (l1 && l2) {
        int sum = l1->val + l2->val + c;
        c = sum >= 10;
        sum = sum >= 10 ? sum - 10 : sum;
        l1 = l1 -> next;
        l2 = l2 -> next;
        t -> next = new ListNode(sum);
        t = t -> next;
    }
    while (l1) {
        int sum = l1 -> val + c;
        c = sum >= 10;
        sum = sum >= 10 ? sum - 10 : sum;
        l1 = l1 -> next;
        t -> next = new ListNode(sum);
        t = t -> next;
    }
    while (l2) {
        int sum = l2 -> val + c;
        c = sum >= 10;
        sum = sum >= 10 ? sum - 10 : sum;
        l2 = l2 -> next;
        t -> next = new ListNode(sum);
        t = t -> next;
    }
    if (c)
        t -> next = new ListNode(1);
    return l->next ? l->next : new ListNode(0);
}