#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Sach
{
    int MaSach;
    char TenSach[30];
    char TenTG[30];
    int NamSX;
};
struct Node
{
    Sach infor;
    Node *next;
};
typedef Node *TRO;
void KhoiTao(TRO &L)
{
    L= NULL;
}
int rong(TRO L)
{
    return L==NULL;
}
void Nhap1(Sach &a)
{
    cout << "Nhap ma sach: "; cin >> a.MaSach;
    cout << "Nhap ten sach: "; fflush(stdin); gets(a.TenSach);
    cout << "Nhap ten tac gia: "; gets(a.TenTG);
    cout << "Nhap nam san xuat: "; cin >> a.NamSX;
}
void NhapDS(TRO &L)
{
    int i = 0;
    Sach a;
    KhoiTao(L);
    while(i!=4)
    {
        cout << "Nhap thong tin sach "<<i+1<<": " << endl;
        Nhap1(a);
        TRO P,Q;
        P = new (Node);
        P->infor = a;
        P->next = NULL;
        if(L==NULL)
            L=P;
        else
            Q->next = P;
        Q = P;
        i++;
    }
}
void HienThi(TRO L)
{
    TRO Q=L;
    cout << setw(15) << left << "Ma sach" << setw(30) << "Ten sach" << setw(30) << "Ten tac gia" << setw(15) << "Nam sx" << endl;
    while(Q!=NULL)
    {
        cout << setw(15) << left << Q->infor.MaSach << setw(30) << Q->infor.TenSach << setw(30) << Q->infor.TenTG << setw(15) << Q->infor.NamSX << endl;
        Q = Q->next;
    }
}
void xuat(TRO L)
{
    cout << setw(15) << left << "Ma sach" << setw(30) << "Ten sach" << setw(30) << "Ten tac gia" << setw(15) << "Nam sx" << endl;
    TRO Q=L;
    while(Q!=NULL)
    {
        if(strcmp(Q->infor.TenTG,"Quach Tuan Ngoc")==0)
        {cout << setw(15) << left << Q->infor.MaSach << setw(30) << Q->infor.TenSach << setw(30) << Q->infor.TenTG << setw(15) << Q->infor.NamSX << endl;}
        Q = Q->next;
    }
}

int main()
{
    TRO L;
    NhapDS(L);
    cout << "\t\tDANH SACH SAU KHI NHAP" << endl;
    HienThi(L);
    cout << "\t\tDANH SACH CAC CUON SACH CUA TAC GIA QUACH TUAN NGOC" << endl;
    xuat(L);
    return 0;
}
