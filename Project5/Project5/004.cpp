//#include <stdio.h>
//#include <stdlib.h>
//
//struct ListNode {
//    int data;
//    struct ListNode* next;
//};
//
//struct ListNode* createlist(); /*裁判实现，细节不表*/
//struct ListNode* mergelists(struct ListNode* list1, struct ListNode* list2);
//void printlist(struct ListNode* head)
//{
//    struct ListNode* p = head;
//    while (p) {
//        printf("%d ", p->data);
//        p = p->next;
//    }
//    printf("\n");
//}
//
//int main()
//{
//    struct ListNode* list1, * list2;
//
//    list1 = createlist();
//    list2 = createlist();
//    list1 = mergelists(list1, list2);
//    printlist(list1);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//
//struct ListNode* mergelists(struct ListNode* list1, struct ListNode* list2) {
//    if (list1 == NULL && list2 == NULL) {
//        return NULL;
//    }
//    if (list1 == NULL) {
//        return list2;
//    }
//    if (list2 == NULL) {
//        return list1;
//    }
//    if (list1->data >= list2->data) {
//        list2->next=mergelists(list1, list2->next);
//        return list2;
//    }
//    else {
//        list1->next=mergelists(list1->next, list2);
//        return list1;
//    }
//}

