#ifndef MMB_H_INCLUDED
#define MMB_H_INCLUDED
#include <stdint.h>
#include<uchar.h>

typedef struct cust Cust;
struct cust {
    char32_t *name;
    char32_t *joint_name;
    int32_t age;
    char32_t *pan;
    char32_t *acc_type;
    char32_t *phone;
    int32_t initial_depo;
};

typedef struct customer_node Node;

struct customer_node {
    Cust data;
    Node *next;
};

typedef struct slist Slist;
struct slist
{
    Node *head;
    Node *tail;
    uint32_t length;
};

Slist slist_new();
uint32_t count_cust(const Slist *list);

Slist* open_acc(Slist *list,char32_t *name,char32_t *joint_name,int32_t age,char32_t *pan,char32_t *acc_type,char32_t *phone,int32_t initial_depo);
/*
Slist* credit(const Slist *list);
Slist* debit(const Slist *list);
uint32_t balance(const Slist *list);
uint32_t count_credit_debit(const Slist *list);
uint32_t count_cust(const Slist *list);
*/

#endif // MMB_H_INCLUDED
