#include<stdio.h>


int waitN[20];
int waitS[20];
int xn,xs;

struct lock{
    int lck;
};

struct bridge{

    int north_waiting;
    int north_crossing;
    int north_consecutive;

    int south_waiting;
    int south_crossing;
    int south_consecutive;

    struct lock lk;
}Osbridge;





