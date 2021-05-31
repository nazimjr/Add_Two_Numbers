# [ Add_Two_Numbers ](https://leetcode.com/problems/add-two-numbers/)
lab 3 software 
## What is Add Two Numbers..
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
 # code: 
```c
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *h = NULL, **p = &h, *n;
    for (int c = 0, s ; l1 || l2 || c ; l1 ? l1 = l1->next : 0, l2 ? l2 = l2->next : 0) {
        s = c + (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
        (n = malloc(sizeof *n)) ? n->val = s - ((c = s > 9) ? 10 : 0) : 0;
        p = n ? &(*p = n)->next : p;
    }
    return *p = NULL, h;
}
```

 
