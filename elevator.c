# include <stdlib.h>
# include "elevator.h"
# include "person.h"

Elevator *create_elevator(int capacity, int currentFloor, PersonList *persons){

 Elevator *e = (Elevator*)malloc(sizeof(Elevator));
 e.capacity=capacity;
 e.currentFloor=currentFloor;
 e.*persons= *persons;


}


Building *create_building(int nbFloor, Elevator *elevator, PersonList **waitingLists){

    Building *b = (Building*)malloc(sizeof(Building));
    b.nbFloor=nbFloor;
    b.*elevator=*elevator;
    b.**waitingLists=**waitingLists;

    return b;
}

PersonList* exitElevator(Elevator *e){

PersonList *sorties= (PersonList*)malloc(sizeof(PersonList)); //la liste des personnes sortantes qu'on renvoie
liste=e.*persons; 
p=*liste.*person; //on commence par regarder la première personne

while(p!=NULL){//on parcours la liste des gens dans l'ascenseur


if (p.dest==e.currentFloor){//on descend de l'ascenseur 

*sorties.*next=*sorties;
*sorties.*person=p;

p=liste.*next;
}
else { p=liste.*next;}

} return *sorties;
}


PersonList* enterElevator(Elevator *e, PersonList *list){

    PersonList *attente= (PersonList*)malloc(sizeof(PersonList));//la nouvelle liste d'attente à renvoyer
    liste=b.*elevator.*waitingLists

    while (p!=NULL){ //on parcours la liste d'attente 
        si la personne veut rentrer
            si la capacité n'est pas pleine
                on l'ajoue a la liste de la capine
            sinon: on l'ajoute à la nouvelle liste d'attente 

    }

}
void stepElevator(Building *b);

