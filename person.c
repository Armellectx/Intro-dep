# include <stdlib.h>
# include "person.h"

Person* createPerson(int src, int dest){

Person* p = (Person*)malloc(sizeof(Person));

p->src=src;
p->dest=dest;


return p;
}



PersonList* insert(Person *p, PersonList *list){



    PersonList *nouvelle= (PersonList*)malloc(sizeof(PersonList));
    nouvelle->next=list;
    nouvelle->person=p;
    return nouvelle;



}