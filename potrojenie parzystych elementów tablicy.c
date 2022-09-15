#include <stdio.h>
#include <stdlib.h>

struct element {
	int a;
	struct element * next;
};

struct element* dodaj(struct element*Lista, int a){
    struct element * wsk = malloc(sizeof(struct element));
    wsk->a=a;
    wsk->next=Lista;
    return wsk;
};

struct element* stworz(){
    return NULL;
};

void foo(struct element* tablica){
    struct element* wsk=tablica;
    while(wsk!=NULL){
        if(wsk->a%2==0){
            wsk->a = wsk->a*3;
        }
        wsk=wsk->next;
    }
    
    return NULL;
}

int main()
{
	 struct node* tablica = stworz();
    tablica = dodaj(tablica,5);
    tablica = dodaj(tablica,4);
    tablica = dodaj(tablica,-6);
    tablica = dodaj(tablica,7);
    tablica = dodaj(tablica,1);
    
    foo(tablica);
    
    struct element* wsk=tablica;

    while(wsk!=NULL){
        printf("%d\n",wsk->a);
        wsk=wsk->next;
    }
    return 0;
}
