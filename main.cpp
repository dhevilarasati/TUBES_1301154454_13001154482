#include <iostream>
#include "list_penyanyi.h"
#include "list_lagu.h"

using namespace std;

int main()
{
    //NIM   :1301154454
    list_penyanyi L;
    list_penyanyi lp;
    list_lagu ll;
    createList_penyanyi(lp);
    createList_lagu(ll);
    infotype_penyanyi p;
    infotype_lagu l;
    address_penyanyi ap;
    address_lagu al;
    int pil;
    string id;
    int total;

    //NIM   :1301154482
    do
    {
    mulai:
        system("cls");
        cout<<"\n";
        cout<<"===========MENU=========== \n";
        cout<<" 1. Input Data Terurut \n";
        cout<<" 2. Search and View \n";
        cout<<" 3. Search and Edit \n";
        cout<<" 4. Search and Delete \n";
        cout<<" 5. View All  \n";
        cout<<" 6. Reporting \n";
        cout<<" 7. Sorting \n";
        cout<<" 0. Exit \n";
        cout<<"========================== \n";
        cout<<endl;
        cout<<"Masukkan Pilihan = ";cin>>pil;

        switch (pil)
        {
        case 1 :
            system("cls");
            int pil1;
                cout<<"===========INPUT DATA=========== \n";
                cout<<" 1. Insert Data Penyanyi \n";
                cout<<" 2. Insert Data Lagu Penyanyi \n";
                cout<<" 3. Kembali Ke Menu Utama \n";
                cout<<" 0. Exit \n";
                cout<<"================================= \n";
                cout<<endl;
                cout<<"Masukan Pilihan = ";cin>>pil1;
            switch (pil1)
            {
            case 1 :
                system("cls");
                inputdata_penyanyi(p);
                ap = alokasi_penyanyi(p);
                insertFirst_p(lp,ap);
                getch();
                break;
            case 2 :
                system("cls");
                cout<<"Data Penyanyi Yang Ada"<<endl;
                printInfo_penyanyi(lp);
                cout<<endl;
                cout<<"Masukan ID Penyanyi untuk menginputkan Data Lagu : ";
                cin >> id;
//                ap = findElm_penyanyi(lp, id);
                cout<<endl;
                if (ap != NULL)
                {
                    inputdata_lagu(l);
                    address_lagu x = findElm_lagu(ll, l);
                    al = alokasi_lagu(l);
                    insertLast_l(ll, al);
                    system("cls");
                    printInfo_lagu(ll);
                }
                getch();
                break;
            case 3 :
                system("cls");
                getch();
                goto mulai;
                break;
            case 4 :
                system("cls");
                exit;
                break;
            }
            getch();
            break;
        case 2 :
            int pil2;
            system("cls");
            cout<<"===========SEARCHING VIEW DATA=========== \n";
            cout<<" 1. Searching Data Penyanyi \n";
            cout<<" 2. Searching Data Lagu \n";
            cout<<" 3. Kembali \n";
            cout<<" 0. Exit \n";
            cout<<"========================================= \n";
            cout<<endl;
            cout<<"Masukan Pilihan = "; cin>>pil2;
            switch (pil2)
            {
            case 1 :
                system("cls");
                cout<<"Masukkan ID Penyanyi : ";cin>>p.id_penyanyi;
                ap = findElm_penyanyi(lp, p);
                cout<<"========================================= \n";
                cout<<"ID Penyanyi \t : "<<info(ap).id_penyanyi<<endl;
                cout<<"Nama \t \t : "<<info(ap).nama<<endl;
                cout<<"Usia \t \t : "<<info(ap).usia<<endl;
                cout<<"Genre \t \t : "<<info(ap).genre<<endl;
                cout<<"Label Rekaman \t : "<<info(ap).labelrekaman<<endl;
                cout<<"========================================= \n";
                cout<<endl;
                cout<<endl;
                getch();
                break;
            case 2 :
                system("cls");
                cout<<"Masukkan ID Lagu : "; cin>>l.id_lagu;
                al = findElm_lagu(ll, l);
                cout<<"========================================= \n";
                cout<<"ID Lagu \t : "<<info(al).id_lagu<<endl;
                cout<<"Judul \t \t : "<<info(al).judul<<endl;
                cout<<"Pencipta \t : "<<info(al).pencipta<<endl;
                cout<<"Durasi \t \t : "<<info(al).durasi<<endl;
                cout<<"========================================= \n";
                cout<<endl;
                cout<<endl;
                getch();
                break;
            case 3 :
                system("cls");
                getch();
                goto mulai;
            case 0 :
                system("cls");
                exit;
            }
            getch();
            goto mulai;
        case 3 :
            system("cls");
            int pil3;
            cout<<"===========SEARCHING EDIT DATA=========== \n";
            cout<<" 1. Update Data Penyanyi \n";
            cout<<" 2. Update Data Lagu \n";
            cout<<" 3. Kembali \n";
            cout<<" 0. Exit \n";
            cout<<"========================================= \n";
            cout<<endl;
            cout<<"Masukan Pilihan = ";cin>>pil3;
            switch (pil3)
            {
                case 1 :
                    system("cls");
                    cout<<"Masukan ID Penyanyi yang ingin diubah : ";cin>>p.id_penyanyi;
                    ap = findElm_penyanyi(lp, p);
                    if (ap == NULL)
                    {
                        cout<<"\n Data Penyanyi tidak ditemukan \n";
                    }
                    else
                    {
                        cout<<" Data Penyanyi Lama \n";
                        cout<<"========================================= \n";
                        cout<<"ID Penyanyi \t : "<<info(ap).id_penyanyi<<endl;
                        cout<<"Nama \t \t :"<<info(ap).nama<<endl;
                        cout<<"Usia \t \t : "<<info(ap).usia<<endl;
                        cout<<"Genre \t \t : "<<info(ap).genre<<endl;
                        cout<<"Label Rekaman \t : "<<info(ap).labelrekaman<<endl;
                        cout<<"========================================= \n";
                        cout<<endl;
                        cout<<"Masukan Data Penyanyi Baru \n";
                        cout<<"========================================= \n";
                        cout<<"Nama \t \t: ";cin>>info(ap).nama;
                        cout<<"Usia \t \t: ";cin>>info(ap).usia;
                        cout<<"Genre \t \t: ";cin>>info(ap).genre;
                        cout<<"Label Rekaman \t: ";cin>>info(ap).labelrekaman;
                        cout<<endl;
                        cout<<endl;
                    }
                    getch();
                    goto mulai;
                    break;
                case 2 :
                    system("cls");
                    cout<<"Masukan ID Lagu yang ingin diubah : ";cin>>l.id_lagu;
                    ap = findElm_penyanyi(lp, p);
                    if (al == NULL)
                    {
                        cout<<"\n Data Lagu tidak ditemukan \n";
                    }
                    else
                    {
                        cout<<" Data Lagu Lama \n";
                        cout<<"========================================= \n";
                        cout<<"ID Lagu \t : "<<info(al).id_lagu<<endl;
                        cout<<"Judul \t \t :"<<info(al).judul<<endl;
                        cout<<"Pencipta \t \t : "<<info(al).pencipta<<endl;
                        cout<<"Durasi \t \t : "<<info(al).durasi<<endl;
                        cout<<"========================================= \n";
                        cout<<endl;
                        cout<<"Masukan Data Penyanyi Baru \n";
                        cout<<"========================================= \n";
                        cout<<"Judul \t \t: ";cin>>info(al).judul;
                        cout<<"Pencipta \t \t: ";cin>>info(al).pencipta;
                        cout<<"Durasi \t: ";cin>>info(al).durasi;
                        cout<<endl;
                        cout<<endl;
                    }
                    getch();
                    goto mulai;
                    break;
                case 3 :
                    system("cls");
                    getch();
                    goto mulai;
                case 0 :
                    system("cls");
                    exit;
            }
            getch();
            goto mulai;
        //NIM   : 1301154454
        case 4 :
            system("cls");
            int pil4;
            cout<<"===========SEARCHING DELETE DATA=========== \n";
            cout<<" 1. Delete Data Penyanyi \n";
            cout<<" 2. Delete Data Lagu \n";
            cout<<" 3. Kembali \n";
            cout<<" 0. Exit \n";
            cout<<"=========================================== \n";
            cout<<endl;
            cout<<"Masukan Pilihan = "; cin>>pil4;
            switch (pil4)
            {
                case 1 :
                    system("cls");
                    cout<<"Masukan ID Penyanyi yang ingin dihapus : ";cin>>p.id_penyanyi;
                    ap = findElm_penyanyi(lp, p);
                    if (ap != NULL)
                    {
                        if (ap == first(L))
                        {
                            //lagu(ap) = NULL;
                            deleteFirst_p(lp,ap);
                        }
                        else
                        {
                            deleteFirst_p(lp, ap);
                        }
                        cout<<"Data Penyanyi Berhasil Dihapus";
                        cout<<endl;
                        cout<<endl;
                    }
                    else
                    {
                        cout<<"Data Penyanyi Tidak Ditemukan";
                        cout<<endl;
                        cout<<endl;
                    }
                    getch();
                    break;
                case 2 :
                    system("cls");
                    cout<<"Masukan ID Lagu yang ingin dihapus : "; cin>>l.id_lagu;
                    al = findElm_lagu(ll, l);
                    if (ap != NULL)
                    {
                        if (ap == first(L))
                        {
                            deleteFirst_l(ll, al);
                        }
                        else
                        {
                            deleteLast_l(ll, al);
                        }
                        cout<<"Data Lagu Berhasil Dihapus";
                        cout<<endl;
                        cout<<endl;
                    }
                    else
                    {
                        cout<<"Data Lagu Tidak Ditemukan";
                        cout<<endl;
                        cout<<endl;
                    }
                    getch();
                    break;
                case 3 :
                    system("cls");
                    getch();
                    goto mulai;
                case 0 :
                    system("cls");
                    exit;
            }
            getch();
            goto mulai;
        case 5 :
            system("cls");
            int pil5;
            cout<<"===========CETAK DATA=========== \n";
            cout<<" 1. Cetak Data Penyanyi \n";
            cout<<" 2. Cetak Lagu \n";
            cout<<" 3. Kembali \n";
            cout<<" 0. Exit \n";
            cout<<"================================ \n";
            cout<<endl;
            cout<<"Masukan Pilihan = ";cin>>pil5;
            switch (pil5)
            {
                case 1 :
                    system("cls");
                    printInfo_penyanyi(lp);
                    getch();
                    break;
                case 2 :
                    system("cls");
                    printInfo_lagu(ll);
                    getch();
                    break;
                case 3 :
                    system("cls");
                    getch();
                    goto mulai;
                case 4 :
                    system("cls");
                    exit;
            }
            getch();
            goto mulai;
        case 6 :

        case 7 :
            /*system("cls")
            int pil7;
             cout<<"===========REPORTING=========== \n";
            cout<<" 1.  \n";
            cout<<" 2.  \n";
            cout<<" 3. Kembali \n";
            cout<<" 0. Exit \n";
            cout<<"================================ \n";
            cout<<endl;
            cout<<"Masukan Pilihan = ";cin>>pli7;
            switch (pil7)
            {
                case 1 :

            }*/

        default: cout<<"Maaf tidak terdapat pada pilihan";
        }
    } while (pil != 0);
    return 0;
}
