#include "list_penyanyi.h"

void inputdata_penyanyi (infotype_penyanyi &penyanyi)
{
    cout << "SILAHKAN INPUT DATA PENYANYI";
    cout << endl;
    cout << "ID Penyanyi \t : "; cin >> penyanyi.id_penyanyi;
    cout << "Nama Penyanyi \t : "; cin >> penyanyi.nama;
    cout << "Usia \t \t : "; cin >> penyanyi.usia;
    cout << "Genre \t \t : "; cin >> penyanyi.genre;
    cout << "Label Rekaman \t : "; cin >> penyanyi.labelrekaman;
    cout << endl;
    cout << endl;
    cout << "Data Telah Tersimpan" << endl;
}

void createList_penyanyi(list_penyanyi &L)
{
    first(L) = NULL;
}

address_penyanyi alokasi_penyanyi (infotype_penyanyi x)
{
    address_penyanyi p = new elmlist_penyanyi;
    info(p) = x;
    next(p) = NULL;
    createList_lagu(lagu(p));
    return p;
}

void dealokasi (address_penyanyi &p)
{
    delete p;
}

void insertFirst_p (list_penyanyi &L, address_penyanyi p)
{
    if (first(L) == NULL)
    {
        first(L) = p;
    }
    else
    {
        next(p) = first(L);
        first(L) = p;
    }
}

void insertAfter_p(list_penyanyi &L, address_penyanyi Prec, address_penyanyi p)
{

}

void insertLast_p(list_penyanyi &L, address_penyanyi p)
{
    if (first(L) == NULL)
    {
        first(L) = p;
    }
    else
    {
        address_penyanyi q = first(L);
        while (next(q) != NULL)
        {
            q = next(q);
        }
        next(q) = p;
        next(p) = NULL;
    }
}

void deleteFirst_p(list_penyanyi &L, address_penyanyi &p)
{
    if (first(L) != NULL)
    {
        p = first(L);
        if (next(p) == NULL)
        {
            first(L) = NULL;
        }
        else
        {
            first(L) = next(p);
            next(p) = NULL;
        }
    }
}

void deleteLast_p(list_penyanyi &L, address_penyanyi &p)
{
    if (first(L) != NULL)
    {
        address_penyanyi q = first(L);
        while (next(next(q)) != NULL)
        {
            q = next(q);
        }
        p = next(q);
        next(p) = NULL;
    }
}

void deleteAfter_p(list_penyanyi &L, address_penyanyi Prec, address_penyanyi &p)
{

}

address_penyanyi findElm_penyanyi (list_penyanyi L, infotype_penyanyi x)
{
    address_penyanyi p = first(L);
    while (p != NULL)
    {
        if (info(p).id_penyanyi == x.id_penyanyi)
        {
            return p;
        }
        p = next(p);
    }
    return p;
}

void printInfo_penyanyi (list_penyanyi L)
{
    address_penyanyi p = first(L);
    if (p != NULL)
    {
        cout<<"Data Penyanyi"<<endl;
        do
        {
            cout<<endl;
            cout <<"============================================"<<endl;
            cout<<"ID Penyanyi \t : "<<info(p).id_penyanyi<<endl;
            cout<<"Nama Penyanyi \t : "<<info(p).nama<<endl;
            cout<<"Usia \t \t : "<<info(p).usia<<endl;
            cout<<"Genre \t \t : "<<info(p).genre<<endl;
            cout<<"Label Rekaman \t : "<<info(p).labelrekaman<<endl;
            cout <<"============================================"<<endl;
            cout<<endl;
            printInfo_lagu(lagu(p));
            p = next(p);
        } while (p != NULL);
    }
    else
    {
        cout<<"Data Kosong"<<endl;
    }
}
