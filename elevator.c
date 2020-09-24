# include <stdlib.h>
# include "elevator.h"
# include "person.h"

Elevator *create_elevator(int capacity, int currentFloor, PersonList *persons){

 Elevator *e = (Elevator*)malloc(sizeof(Elevator));
 e->capacity=capacity;
 e->currentFloor=currentFloor;
 e->persons=persons;


}


Building *create_building(int nbFloor, Elevator *elevator, PersonList **waitingLists){

    Building *b = (Building*)malloc(sizeof(Building));
    b->nbFloor=nbFloor;
    b->elevator=elevator;
    b->waitingLists=waitingLists;

    return b;
}

PersonList* exitElevator(Elevator *e){

PersonList *sorties= (PersonList*)malloc(sizeof(PersonList)); //la liste des personnes sortantes qu'on renvoie
Person *p=e->persons->person; //on commence par regarder la première personne

while(p!=NULL){//on parcours la liste des gens dans l'ascenseur


if (p->dest==e->currentFloor){//on descend de l'ascenseur 

sorties->next=sorties;
sorties->person=p;

p=e->persons->next;
}
else { p=e->persons->next;}

} return sorties;
}


Boolean EstPleine(Elevator*e){// fonction qui dit si l'elevator est plein
p=e->persons->person;
int compteur=0;
while (p!=NULL){
    compteur=compteur+1;
    p=p=e->persons->next;
}if( compteur==e->capacity){return true;}
else{return false;}
}


//rappel: foo->bar is equivalent to (*foo).bar

PersonList* enterElevator(Elevator *e, PersonList *list){

    //cette fonction fait entrer dans l’ascenseur les personnes qui attendent (waitingList) et renvoie la nouvelle liste d’attente (i.e. la liste initiale moins les personnes qui sont entrées dans l’ascenseur)
//L’ascenseur ne peut pas accueillir plus de personnes que sa capacité maximale


    PersonList *attente= (PersonList*)malloc(sizeof(PersonList));//la nouvelle liste d'attente à renvoyer
    liste=b->elevator->waitingLists
    p=liste->person; //on commence par regarder la premiere personne sur la liste


    while (p!=NULL){ //on parcours la liste d'attente 
        if (EstPleine(e)==false){

            e->persons->next=p; //on ajoute la personne à la cabine
            p=attente->next;
             }
              
            else{attente->next=p;}//sinon: on l'ajoute à la nouvelle liste d'attente 
            }
            return attente;
        }


