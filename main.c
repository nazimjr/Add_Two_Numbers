struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* h = NULL, ** p = &h, * n;
    for (int c = 0, s; l1 || l2 || c; l1 ? l1 = l1->next : 0, l2 ? l2 = l2->next : 0) {
        s = c + (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
        (n = malloc(sizeof * n)) ? n->val = s - ((c = s > 9) ? 10 : 0) : 0;
        p = n ? &(*p = n)->next : p;
    }
    return *p = NULL, h;
}