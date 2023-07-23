#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    if (!head || !head->next)
        return 0;

    node *slow = head, *fast = head->next;
    
    while (fast && fast->next) {
        if (!fast || !fast->next)
            return 0;
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return 1;
    }

    return 0;
}