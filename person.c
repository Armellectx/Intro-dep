# include <stdlib.h>
# include "person.h"

Person* createPerson(int src, int dest){

Person* p = (Person*)malloc(sizeof(Person));
// Person* p; ??à la place ? 
p.src=src;
p.dest=dest;

return p;
}



PersonList* insert(Person *p, PersonList *list){

    PersonList *liste= (PersonList*)malloc(sizeof(PersonList));

    liste.*next=p;

    return liste;



}