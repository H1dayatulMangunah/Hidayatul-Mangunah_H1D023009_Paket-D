#include <iostrem>
using namespace std;

typedef struct node *address;
struct node{
    address prev; //Node sebelumnya
    int data; //ID Buku
    address next; //Node berikutnya
};

address first, last = NULL;
address alokasi (int datanya){
    address hasil=new node;
    hasil->data=datanya;
    hasil->next=hasil->prev=NULL;
    return hasil;
}

void insertFirst(address baru){
    if (first==NULL){
        first=last=baru;
    }else{
        baru->next=first;
        first->prev=baru;
        first=baru;
    }
}

void insertLast(address baru){
    if(first==NULL){
        first=last=baru;
    }else{
        last->next=baru;
        baru->prev=last;
        last=baru;
    }
}

void deleteFirst(){
    if (first=NULL){
        cout <<"Daftar buku kosong."<,endl;
        return;
    }
    first=first->next;
    delete first->prev;
    first->prev=NULL;
}

void deleteLast(){
    if(first==NULL){
        cout <<"Daftar buku kosong."<,endl;
        return;
    }
    last=last->prev;
    delete last->next;
    last->next=NULL;
} 

void cetak(){
    address p=first;
    while (p!=NULL){
        cout<<"ID Buku:"<<p->data <<endl;
        p=p->next;
    }
}

//Lanjutkan fungsi untuk mengecek ID Buku Prima
bool is Prime (int n){ //btw ini pakai boolean yah ka karena lupa untuk rumusnya mungkin seperti ini yah ka
    if (n<=1) return false;
    if (n<=3) return true;
    if (n%2==0 || n%3== 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
//Fungsi untuk mencetak buku dengan ID Prima
void printPrimeBookIDs(){ //seperti antrian ada kanan dan iri namun ini pada node nya yah tetap ini itu untuk double linked list maaf kalo salah
    if (root != NULL) {
        printPrimeBookIDs(root->left);
        if (isPrime(root->id)) {
            cout << "ID: " << root->id << ", Title: " << root->title << endl;//yang penting ada coutnya
        }
        printPrimeBookIDs(root->right);
    }
}

//Fungsi untuk menemukan buku berdasarkan ID
address cariBuku(int id){
    
}

//Fungsi untuk menghapus buku berdasarkan ID
void hapusBuku(int id){
    if (first=NULL){
        cout <<"Daftar buku kosong."<,endl;
        return;
    }
    first=first->next;
    delete first->prev;
    first->prev=NULL; 
}

int main(){
    insertLast(alokasi(10));
    insertFirst(alokasi(30));
    insertLast(alokasi(50));
    insertLast(alokasi(19));
    insertLast(alokasi(90));
    insertLast(alokasi(27));
    insertLast(alokasi(11));

    cout<<"Daftar buku awal:"<<endl;
    cetak();

    hapusBuku(20);
    hapusBuku(10);

    cout<<"\nDaftar buku setelah penghapusan:"<<endl;
    cetak();
    printPrimeBookIDs();
    return;
}