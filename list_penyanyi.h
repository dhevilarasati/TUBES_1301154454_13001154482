//NIM   : 1301154454
#ifndef LIST_PENYANYI_H_INCLUDED
#define LIST_PENYANYI_H_INCLUDED

#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

#include "list_lagu.h"

#define first(L) L.first
#define next(p) p->next
#define info(p) p->info
#define lagu(p) p->lagu

struct penyanyi
{
    string id_penyanyi;
    string nama;
    int usia;
    string genre;
    string labelrekaman;
};

typedef penyanyi infotype_penyanyi;
typedef struct elmlist_penyanyi *address_penyanyi;

struct elmlist_penyanyi
{
    infotype_penyanyi info;
    address_penyanyi next;
    list_lagu lagu;
};

struct list_penyanyi
{
        address_penyanyi first;
};

/** TIDAK PERLU MODIFIKASI**/
void inputdata_penyanyi (infotype_penyanyi &penyanyi);
void createList_penyanyi(list_penyanyi &L);
void insertFirst_p(list_penyanyi &L, address_penyanyi p);
void insertAfter_p(list_penyanyi &L, address_penyanyi Prec, address_penyanyi p);
void insertLast_p(list_penyanyi &L, address_penyanyi p);
void deleteFirst_p(list_penyanyi &L, address_penyanyi &p);
void deleteLast_p(list_penyanyi &L, address_penyanyi &p);
void deleteAfter_p(list_penyanyi &L, address_penyanyi Prec, address_penyanyi &p);

/** PERLU MODIFIKASI **/
address_penyanyi alokasi_penyanyi (infotype_penyanyi x);
void dealokasi (address_penyanyi &p);
address_penyanyi findElm_penyanyi (list_penyanyi L, infotype_penyanyi x);
void printInfo_penyanyi (list_penyanyi L);
#endif // LIST_PENYANYI_H_INCLUDED
