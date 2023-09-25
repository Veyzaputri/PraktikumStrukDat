#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;
int awalList,akhirList, awalKosong, akhirKosong;
struct mahasiswa{
	char nama[30];
	int next;
	int urut;
	//int nim;
};

int listkosong()
{
	 if (awalList==0)
	 return(true);
	 else
	 return(false);
}

mahasiswa elemen[15];
int jumlahList=6, jumlahKosong=4;
	
void createlist()
{
	//data list berisi e[1] sampe[6]
	awalList = 3;
	akhirList = 10;
	//data kosong berisi e[7] sampe e[10]
    awalKosong = 7;
    akhirKosong =4;
	
    elemen[1].urut = 1;    elemen[1].next =8;
    elemen[2].urut = 2;    elemen[2].next =5 ;
    elemen[3].urut = 300;    elemen[3].next =6 ;
    elemen[4].urut = 4;    elemen[4].next =0 ;
    elemen[5].urut = 5;    elemen[5].next =9 ;
    elemen[6].urut = 6;    elemen[6].next =1 ;
    elemen[7].urut = 7;    elemen[7].next = 2;
    elemen[8].urut = 8;    elemen[8].next = 10;
    elemen[9].urut = 9;    elemen[9].next = 4;
    elemen[10].urut = 10;   elemen[10].next =0;
    //while (elemen[i].next !=0){
		//cout<<elemen[i].info<<endl;
		
		//}
		//cout <<"i";
}
void cetakArray(){
	
	cout<<"Data Array"<<endl;
	cout<<"|index|"<<"urut|"<<"next|"<<"nama|"<<endl;
	for(int i=0; i<=10; i++){
		cout<<"|  "<<i<<"  |  "<<elemen[i].urut<<" | "<<elemen[i].next<<"  | "<<elemen[i].nama<<"  |"<<endl;
		
		}
		cout<<awalKosong<<endl;
	}
void cetakList(){
	int l=awalList;
	cout<<"cetak list "<<endl;
	cout<<"|index|"<<"urut|"<<"next|"<<"nama|"<<endl;
	while(l!=0){
		cout<<"|  "<<l<<"  |  "<<elemen[l].urut<<" | "<<elemen[l].next<<"  | "<<elemen[l].nama<<"  |"<<endl;
		//cout<<elemen[l].urut<<" "<<elemen[l].nama<<endl;
		l=elemen[l].next;
	
			}
			
		}
void cetakKosong(){
	int l=awalKosong;
	cout<<"awal kosong:"<<awalKosong<<endl;
	cout<<"cetak kosong "<<endl;
	cout<<"|index|"<<"urut|"<<"next|"<<"nama|"<<endl;
	while(l!=0){
		cout<<"|  "<<l<<"  |  "<<elemen[l].urut<<" | "<<elemen[l].next<<"  | "<<elemen[l].nama<<"  |"<<endl;
		//cout<<elemen[l].urut<<" "<<elemen[l].nama<<endl;
		l=elemen[l].next;
	
	} 
}
		
	
	/*void sisipdata(char nama, int nim){
		 int listbaru, n, bantu, prev;
	if(listkosong()){
        createlist();
    }
    if(nim < elemen[awalList].urut || listkosong()){//SISIP DATA DI AWAL
        listbaru = awalKosong;
        awalKosong = elemen[awalKosong].next;
        elemen[listbaru].urut = nim;
        elemen[listbaru].urut = nama;
        if (listkosong()){
            elemen[listbaru].next = 0;
            awalList = listbaru;
            akhirList = listbaru;
        }else{
            elemen[listbaru].next = awalList;
            awalList = listbaru;
        }}else if(nim > elemen[akhirList].urut){//SISIP DATA DI AKHIR
        listbaru = awalKosong;
        awalKosong = elemen[awalKosong].next;
        elemen[listbaru].urut = nama;
        elemen[listbaru].urut = nim;
        elemen[akhirList].next = listbaru;
        akhirList = listbaru;
        elemen[akhirList].next = 0;
    }else{//SISIP DATA DI TENGAH
        n = awalList;
        bantu = elemen[n].urut;
        while(nim > bantu){
            prev = n;
            n = elemen[n].next;
            bantu = elemen[n].urut;
        }
        
        listbaru = awalKosong;
        awalKosong = elemen[awalKosong].next;
        elemen[prev].next = listbaru;
        elemen[listbaru].urut = nim;
        elemen[listbaru].urut = nama;
        elemen[listbaru].next = n;
    }
   }
  */ 
  /*void hapus(char nama){
	   
    char bantu[30];
    int listbaru, k;
    //int listbaru, prev, k, n;
    cout<<"nama yang ingi dihapus :";
    cin.getline(bantu,30);
    if(mahasiswa == elemen[list].info){//HAPUS DI AWAL
        listbaru = elemen[list].next;
        k = kosong;
        kosong = list;
        list = listbaru;
        elemen[kosong].next = k;
    }
}*/
void hapusdata(){
	string target;
	int listbaru ,n, k, prev;
	if(listkosong()) 
		cout << "list masih kosong." << endl;
	
	else {
		cout << "Nama yang akan dihapus : ";
		cin.ignore();
		getline(cin, target);
	
		if(target == elemen[awalList].nama){		//depan
			listbaru = elemen[awalList].next;
			k = awalKosong;
			awalKosong = awalList;
			awalList = listbaru;
			elemen[awalKosong].next = k;
			return;
			}
			
		n = awalList;
		while(elemen[n].next != 0) {			//akhir
			prev = n; 
			n = elemen[n].next; }
		if(target == elemen[n].nama){
			elemen[prev].next = 0;
			k = awalKosong;
			awalKosong = n;
			elemen[awalKosong].next = k;
			return;
			}
		
		n = awalList;								//tengah
		while(n != 0 && elemen[n].nama != target) {
			prev = n; 
			n = elemen[n].next; }
		if(n != 0){
			listbaru = awalKosong;
			awalKosong = n;
			elemen[prev].next = elemen[n].next;
			elemen[awalKosong].next = listbaru;
			return;
			}
				
		cout << endl << "Data tidak ada"<<endl;
			} 
		}
void sisipdata(char nama[],int urut) {
    int listbaru, n, bantu,prev;

    if (listkosong()) {
        createlist();
    }

    // Create a new node for the data
    listbaru = awalKosong;
    awalKosong = elemen[awalKosong].next;
    strcpy(elemen[listbaru].nama, nama);
    elemen[listbaru].urut = urut;
    elemen[listbaru].next = 0;

    if (urut < elemen[awalList].urut || listkosong()) {
        // SISIP DATA DI AWAL
        elemen[listbaru].next = awalList;
        awalList = listbaru;
				
			}else if (urut > elemen[akhirList].urut){
				
				// SISIP DATA DI AKHIR
        elemen[akhirList].next = listbaru;
        akhirList = listbaru;
				}else{
					 // SISIP DATA DI TENGAH
        n = awalList;
        bantu = elemen[n].urut;
        while (urut > bantu) {
            prev = n;
            n = elemen[n].next;
            bantu = elemen[n].urut;
				}
		}
	}
int main(){
	int mainn;
	string mahasiswa;
	char back;
	//int nim;
	createlist();
	do{
		cout<<"|            MENU UTAMA          |"<<endl;
		cout<<"=================================="<<endl;
		cout<<"|1.sisip data                    |"<<endl;
		cout<<"|2.Hapus data                    |"<<endl;
		cout<<"|3.cetak array,list,dan kosong)  |"<<endl;
		cout<<"----------------------------------"<<endl;
		cout<<"Pilih Menu :"; cin>>mainn;
		switch(mainn){
			
		case 1 :
			
			cin.ignore();
			cout<<"|INPUT DATA|"<<endl;
			cout<<"============"<<endl;
			//pada list didalam array data baru akan langsung mengisi data koson pertama
			if(awalKosong>10)
			{
				cout<<"dh penuh"<<endl;
			}else{
				cout <<"Nama :"; cin.getline(elemen[awalKosong].nama,30);
				cout <<"NIM  ;"; cin>>elemen[awalKosong].urut;
				sisipdata(nama[], urut);
			}
			break;
			
		case 2 :
				
					hapusdata();
					break;
	            
	    case 3 :
	        cetakArray();
	        cetakList();
	        cetakKosong();
	        break;
	         default:
	            cout<<"404 Not Found"<<endl;
			}cout<<"kembali ke menu utama?(y/Y)";
			cin>>back;
		}while(back == 'y');
		return 0;
		
		
	
}
