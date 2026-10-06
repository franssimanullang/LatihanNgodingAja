#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    //untuk buat node pertama 
    Node* node1 = new Node ();
    node1 -> data = 10;
    node1 -> next = nullptr;

    //kalau mau nambahin node kita bisa melakukan hal ini
    Node* node2 = new Node();
    node2 -> data=20;
    node2->next = nullptr;//ingat kalau sudah add node baru dibelakang, kita harus add nullptr dibelakang nodenya.
    node1->next = node2;//ini kalau kita mau naruh node 2 setelah node 1

    //kalau kita mau nentuin head dan tailnya kita bisa mengetikkan kodingan seperti dibawah ini 
    Node* head = node1;//misalnya node 1 yang mau kita bikin head 
    Node* tail= node2;//kalau misalnya kita ignin membuat node 2 sebagai tail dari linked listnya 

    //nah setelah kita tentuin tailnya yang mana, kalau udah ditentukan 
    //untuk membuat atau menambah node baru diakhir kita dapat menggunakan 
    Node* node3 = new Node();
    node3->data = 30;
    node3->next=nullptr;
    tail->next=node3;//maka sekarang node 3 setelah tail sebelumnya
    tail=node3;//nah sekarang baru kita pindahkan tailnya ke node 3

    //kalau mau nambah node didepan sekaligus menjadikannya sebagai Head bisa seperti kodingan dibawah ini
    Node* node0 = new Node();
    node0->data = 5;
    node0->next=head;//kita bikin disini nodenya 
    head=node0;
    
    Node* node00 = new Node();
    node00->data=25;
    node00->next=node2->next;
    node2->next=node00;

    //untuk nampilin linked listnya tidak  bisa langsung cout
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}