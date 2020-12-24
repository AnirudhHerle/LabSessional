#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "MMB.h"


void test(){

    Slist s1 = slist_new();
    Slist *list= &s1;
    assert (count_cust(list) == 0);

    list = open_acc(list,"Ram","",32,"ABCD1234A","SB","9865478523",2000);
    assert(list->head->data.initial_depo == 2000); //  account with 2000 initial deposit and type="SB" is created
    list = open_acc(list,"amar","",28,"ABCD1244N","SB","9865478523",3000);
    assert (list->head->data.age == 28); // Second account is created
    list = open_acc(list,"antony","",48,"XYZD1244N","SB","9865478523",1500);

}


int main()
{
    //printf("Hello world!\n");
    test();
    return 0;
}
