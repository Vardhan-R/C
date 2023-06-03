#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList {
    int data;
    int data_2;
    long double a;
    double b;
    // char c;
    // struct LinkedList* next;
} LinkedList;

int lenLinkedList(LinkedList l_l) {
    int n = 1;
    LinkedList* temp = &l_l;
    while (temp->next != NULL) {
        temp = temp->next;
        n++;
    }
    return n;
}

LinkedList* accessNode(LinkedList l_l, int n) {
    LinkedList* temp = &l_l;
    for (int i = 0; i < n; i++) {
        temp = temp->next;
    }
    return temp;
}

void appendNode(LinkedList l_l) {
    LinkedList* temp = accessNode(l_l, lenLinkedList(l_l) - 1);
    temp->next = (LinkedList*) malloc(sizeof(LinkedList));
    temp->next->next = NULL;
}

void insertNode(LinkedList l_l, int n) {
    if (n) {
        LinkedList* temp_a = accessNode(l_l, n - 1);
        LinkedList* temp_b = (LinkedList*) malloc(sizeof(LinkedList));
        temp_b->next = temp_a->next;
        temp_a->next = temp_b;
    } else {
        insertNode(l_l, 1);

    }
}

// void delete

int main() {
    int n = 6;
    LinkedList l_l_1;
    l_l_1.data = 0;
    // l_l_1.next = NULL;

    LinkedList* curr_ptr = &l_l_1;
    // printf("%p\n", curr_ptr);
    for (int i = 0; i < 7; i++) {
        printf("%d ", (int) (curr_ptr + (i + 1)) - (int) (curr_ptr + i));
    }
    // printf("%d\n", curr_ptr + 1);
    printf("%p\n", curr_ptr + 2);
    printf("%p\n", curr_ptr + 3);
    // printf("%p\n", curr_ptr + 4);
    // printf("%p\n", curr_ptr + 5);
    // printf("%p\n", curr_ptr + 6);
    // LinkedList* prev_ptr = &l_l_1;
    // for (int i = 1; i < n; i++) {
    //     LinkedList* temp;
    //     temp = (LinkedList*) malloc(sizeof(LinkedList));
    //     temp->data = i;
    //     // printf("%d_1 %d\n", i, curr_ptr->data);
    //     temp->next = NULL;
    //     curr_ptr->next = temp;
    //     // printf("%d", temp.data);
    //     curr_ptr = temp;
    //     // printf("%d_2 %d\n", i, curr_ptr->data);
    // }

    // printf("%d\n", lenLinkedList(l_l_1));

    // // appendNode(l_l_1);
    // insertNode(l_l_1, 3);
    // curr_ptr = accessNode(l_l_1, 3);
    // curr_ptr->data = 9;

    // printf("%d\n", lenLinkedList(l_l_1));

    // for (int i = 0; i < lenLinkedList(l_l_1); i++) {
    //     printf("%d ", accessNode(l_l_1, i)->data);
    // }

    // printf("l_l_1[0] = %d\n", curr_ptr->data);
    // printf("%p\n", &l_l_1);
    // printf("%p\n", l_l_1.next);
    // printf("%p\n", l_l_1.next->next);
    // printf("%p\n", l_l_1.next->next->next);
    // printf("%p\n", l_l_1.next->next->next->next);
    // printf("%p\n", l_l_1.next->next->next->next->next);
    // printf("%p\n", l_l_1.next->next->next->next->next->next);
    // printf("%p\n", l_l_1.next->next->next->next->next->next->next);
    // printf("%p\n", l_l_1.next->next->next->next->next->next->next->next);
    // printf("%d\n", sizeof(LinkedList));
    // for (int i = 0; i < n; i++) {
    //     printf("l_l_1[%d] = %d\n", i, curr_ptr->data);
    //     curr_ptr = curr_ptr->next;
    //     printf("l_l_1[%d] = %p\n", i, curr_ptr);
    // }

    return 0;
}