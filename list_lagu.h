#ifndef LIST_LAGU_H_INCLUDED
#define LIST_LAGU_H_INCLUDED

#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

#define next(p) p->next
#define prev(p) p->prev
#define first(L) L.first
#define last(L) L.last
#define info(p) p->info

struct lagu
{
    string id_lagu;
    string judul, pencipta;
    int durasi;
};

typedef lagu infotype_lagu;
typedef struct elmlist_lagu *address_lagu;

struct elmlist_lagu
{
    infotype_lagu info;
    address_lagu next;
    address_lagu prev;
};

struct list_lagu
{
    address_lagu first;
    address_lagu last;
};

/** TIDAK PERLU MODIFIKASI **/
void inputdata_lagu(infotype_lagu &lagu);
void createList_lagu(list_lagu &L);
void insertFirst_l(list_lagu &L, address_lagu p);
void insertAfter_l(address_lagu Prec, address_lagu p);
void insertLast_l(list_lagu &L, address_lagu p);
void deleteFirst_l(list_lagu &L, address_lagu &p);
void deleteLast_l(list_lagu &L, address_lagu &p);
void deleteAfter_l(address_lagu Prec, address_lagu &p);

/** PERLU MODIFIKASI **/
address_lagu alokasi_lagu (infotype_lagu x);
void dealokasi(address_lagu &p);
address_lagu findElm_lagu (list_lagu L, infotype_lagu x);
void printInfo_lagu(list_lagu L);

#endif // LIST_LAGU_H_INCLUDED
