#include <stdio.h>

//Deklarasi struktur KHS
typedef struct node *alamat;
struct node {
    int data;
    alamat next;
};

//Buat fungsi update IP Mahasiswa
void updateIP(alamat baru){ //berdasarkan pemahaman saya update itu kan merubah dan mungkin sama seperti insert yah konsepnya
    if (first!=NULL){
        baru->next=first;
        first->prev=baru;
        first=baru;
    }else{
        first = last = baru;
    }
    //kalo untuk update alamat itu kalo nggak salah seperti ini tapi kalo dilihat sama pembahasannya kurang nyambung deh bingung 
    IP=3.85;//diketahui ipnya juga
    &NIM=24052;//diketahui nimnya
    *IP=4.00;//disini merubah untuk alamat IPnya menjadi 4.00
}

//Buat fungsi cetak KHS
void print KHS(){ //karena menggunakan struct maka cetaknya mungkin seperti ini
    alamat tmp=first;
    while (tmp!=NULL){
        cout<<tmp->info<<"\n";
        tmp=tmp->next;
        //nggak tau deh siapa tau bener kan sama-sama linked list:) dah mentok
}

//Buat main program
int main(){
    //cetak KHS sebelum perubahan
    printf("Sebelum IP diperbarui:\n");
    printKHS(&p);

    //cetak KHS setelah perubahan
    printf("Setelah IP diperbarui:\n");
    printKHS(&p);

    return 0;
}