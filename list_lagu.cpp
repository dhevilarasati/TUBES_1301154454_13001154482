#include "list_lagu.h"

//NIM   :1301154482 

void inputdata_lagu(infotype_lagu &lagu)
{
    cout << "SILAHKAN INPUT DATA LAGU DARI PENYANYI";
    cout << endl;
    cout << "ID Lagu \t : "; cin >> lagu.id_lagu;
    cout << "Judul \t \t : "; cin >> lagu.judul;
    cout << "Nama Pencipta  \t : "; cin >>lagu.pencipta;
    cout << "Durasi (menit) \t : "; cin >> lagu.durasi;
    cout << endl;
    cout << endl;
    cout << "Data Telah Tersimpan" << endl;
}

void createList_lagu(list_lagu &L)
{
    first(L) = NULL;
    last(L) = NULL;
}

address_lagu alokasi_lagu(infotype_lagu x)
{
    address_lagu p = new elmlist_lagu;
    info(p) = x;
    next(p) = NULL;
    prev(p) = NULL;
    return p;
}

void dealokasi(address_lagu &p)
{
    delete p;
}

void insertFirst_l(list_lagu &L, address_lagu p)
{
    if (first(L) == NULL)
    {
        first(L) = p;
        last(L) = p;
    }
    else
    {
        next(p) = first(L);
        prev(first(L)) = p;
        first(L) = p;
    }
}

void insertAfter(address_lagu Prec, address_lagu p)
{

}

void insertLast_l(list_lagu &L, address_lagu p)
{
    if (first(L) == NULL)
    {
        first(L) = p;
        last(L) = p;
    }
    else
    {
        prev(p) = last(L);
        next(last(L)) = p;
        last(L) = p;
    }
}

void deleteFirst_l(list_lagu &L, address_lagu &p)
{
    if (first(L) != NULL)
    {
        p = first(L);
        if (next(p) == NULL)
        {
            next(p) = NULL;
            prev(p) = NULL;
        }
        else
        {
            first(L) = next(p);
            prev(first(L)) = NULL;
            next(p) = NULL;
        }
    }
}

void deleteLast_l(list_lagu &L, address_lagu &p)
{
    if (first(L) != NULL)
    {
        p = last(L);
        if (next(p) == NULL)
        {
            first(L) = NULL;
            last(L) = NULL;
        }
        else
        {
            last(L) = prev(p);
            next(last(L)) = NULL;
        }
    }
}

void deleteAfter_l(address_lagu Prec, address_lagu &p)
{

}

address_lagu findElm_lagu(list_lagu L, infotype_lagu x)
{
    address_lagu p = first(L);
    while (p != NULL)
    {
        if (info(p).id_lagu == x.id_lagu)
        {
            return p;
        }
        p = next(p);
    }
    return p;
}

void printInfo_lagu(list_lagu L)
{
    address_lagu p = first(L);
    if (p != NULL)
    {
        cout<<"Data Lagu"<<endl;
        do
        {
            cout<<endl;
            cout<<"============================================"<<endl;
            cout<<"ID Lagu \t : "<<info(p).id_lagu<<endl;
            cout<<"Judul \t : "<<info(p).judul<<endl;
            cout<<"Pencipta \t : "<<info(p).pencipta<<endl;
            cout<<"Durasi (menit)\t : "<<info(p).durasi<<endl;
            cout<<"============================================"<<endl;
            p = next(p);
        } while (p != NULL);
    }
    else
    {
        cout<<"Data Kosong"<<endl;
    }
}
