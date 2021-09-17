 #include <iostream>
             #include <windows.h>
             #include <conio.h>
             using namespace std;

             struct mahasiswa
			 {
			 char       nim[50];
			 char    nama[50];
			 int data_nilai;};
             void tmbh_mhs();
             void push(mahasiswa);
             void init();
             bool isFull();
             bool isEmpty();

             void sorting(int);

             void baca_mhs();
             mahasiswa pop();
             void baca_sorting();
	      int flag = -1;
        const int MAX = 10;
        mahasiswa db_mhs[MAX];
        
        int main()
        {
            system("cls");
            char inputan;
            cout << "\t+++++++++++++ Program stack mahasiswa +++++++++++++\n";
            cout << endl << endl;
            cout << "\t Jumlah stack : " << flag+1 << " Batas Maksimum : " << MAX;
            cout << endl << endl;
            cout << "\t+------------------MENU     UTAMA-----------------+\n";
            cout << "\t|				NOMOR	PILIHAN					|\n";
            cout << "\t+-----------------------------------------------+\n";
            cout << "\t| 1. Tambahkan data mahasiswa (Push Stack) |\n";
            cout << "\t| 2. Tampilkan data mahasiswa (Pop stack)  |\n";
    		cout << "\t| 3. Tampilkan data dan sorting (Popsorting) |\n";
            cout << "\t+----+-------------------------------------------+\n";
            cout << "\tPilih menu : ";
			cin >> inputan;
            switch(inputan) {
                  case '1' :
                        tmbh_mhs();
                  break;
                  case '2' :
                        baca_mhs();
                  break;
                  case '3' :
                        baca_sorting();
                  break;
            }
     }
     void push(mahasiswa mhs) {
          flag++;
          db_mhs[flag] = mhs;
          cout << db_mhs[flag].nim;
     }
     void tmbh_mhs() {
          int ipt;
          mahasiswa mhs;
          system("cls");
          cout << "\t+++++++++++++Tambah Mahasiswa Menu (Push Menu)+++++++++++++\n";
          cout << endl << endl;
                  cout <<   "\tMasukkan jumlah data    :  ";
				  cin >>ipt;
				  cout<<endl;
          for(int i = 0;i < ipt;i++)        {
              if(!isFull()) {
                    cout << "\tMahasiswa ke : " << i+1 << endl;
                    cout << "\tMasukkan NIM : ";
					cin >> mhs.nim;
                    cout << "\tMasukkan Nama : ";
					cin >> mhs.nama;
                	cout << "\tMasukkan Nilai : ";
					cin   >>mhs.data_nilai;
                    push(mhs);
                    cout << "\tData telah di push " << endl << endl;
              }
              else {
                    cout << "\tData penuh."<<endl;
                    break;
              }
          }
          system("pause");
          system("cls");
          main();
     }
     bool isEmpty() {
          if(flag == -1) return true;
          else return false;
     }
     bool isFull() {
          if(flag == MAX-1) return true;
          else return false;
        }
        mahasiswa pop() {
            return db_mhs[flag--];
        }
        void baca_mhs() {
            int ipt;
            mahasiswa mhs;
            system("cls");
            cout << "\t+++++++++++++Baca Mahasiswa Menu (Pop menu)+++++++++++++\n";
            cout << endl << endl;
            if(isEmpty())    {
                cout << "Data kosong\n";
                system("pause");
                main();
            }
            cout << "\tMasukkan jumlah data yang dikeluarkan : ";
			cin>> ipt;cout<<endl;
            if(ipt <= flag+1) {
cout << "\t+---------------+----------------+-----------------+\n";
cout << "\t| Nim Mahasiswa | Nama Mahasiswa | Nilai Mahasiswa |\n";
cout << "\t+---------------+----------------+-----------------+\n";
                for(int i = 0;i < ipt;i++)      {
                    if(!isEmpty()) {
                          mhs = pop();
            cout << "\t " << mhs.nim << " \t\t         " <<mhs.nama << " \t\t         " << mhs.data_nilai << endl << endl;
            cout << "\t Data telah di pop " << endl <<
endl;
            cout <<"\t----------------------------------------------------\n";
                    }
                    else {
            cout << "\tData kosong."<<endl;
                          break;
                    }
             }
         }
         else {
            cout << "Data tidak sebanyak itu\n";
         }
         system("pause");
         main();
     }
     void sorting(int jml) {
         int j;
         int temp;
         char temp_i[2][50];
         for(int i=0; i<jml; i++) {
             temp = db_mhs[i].data_nilai;
             strcpy(temp_i[0],db_mhs[i].nim);
             strcpy(temp_i[1],db_mhs[i].nama);
             j = i-1;
             while (db_mhs[j].data_nilai>temp && j>=0) {
                   db_mhs[j+1].data_nilai = db_mhs[j].data_nilai;
                   strcpy(db_mhs[j+1].nama,db_mhs[j].nama);
                   strcpy(db_mhs[j+1].nim,db_mhs[j].nim);
                   j--;
             }
             db_mhs[j+1].data_nilai = temp;
             strcpy(db_mhs[j+1].nim,temp_i[0]);
             strcpy(db_mhs[j+1].nama,temp_i[1]);
         }
     }
     void baca_sorting() {
         int ipt;
         mahasiswa mhs;
         system("cls");
          cout << "\t+++++++++++++Baca Mahasiswa Sorting Menu (Pop menu)+++++++++++++\n";
         cout << endl << endl;
         if(isEmpty())    {
             cout << "Data kosong\n";
             system("pause");
             main();
         }
          cout << "\tMasukkan jumlah data yang dikeluarkan : ";
		   cin >> ipt;
		   cout<<endl;

          if(ipt <= flag+1) {
              cout << "Sebelum sorting : \n\n";
              cout << "\t+---------------+---------------+-----------------+\n";
              cout << "\t| Nim Mahasiswa | Nama Mahasiswa | Nilai Mahasiswa |\n";
              cout << "\t+---------------+----------------+-----------------+\n";
              for(int i = ipt;i >= 0;i--)     {
                  if(!isEmpty()) {
                      mhs = db_mhs[i];
              cout << "\t " << mhs.nim << " \t\t        " <<mhs.nama << " \t\t     " << mhs.data_nilai << endl << endl;
              cout << "\t Data tidak di pop " << endl << endl;
              cout << "\t----------------------------------------------------\n";
                  }
                  else {
                      cout << "\tData kosong."<<endl;
                      break;
                  }
              }
              sorting(ipt);
              cout << "Sesudah Sorting : \n\n";
              cout << "\t+---------------+----------------+-----------------+\n";
              cout << "\t| Nim Mahasiswa | Nama Mahasiswa | Nilai Mahasiswa |\n";
              cout << "\t+---------------+----------------+-----------------+\n";
              for(int i = 0;i < ipt;i++)     {
                  if(!isEmpty()) {
                      mhs = pop();
              cout << "\t " << mhs.nim << " \t\t        " <<mhs.nama << " \t\t     " << mhs.data_nilai << endl << endl;
              cout << "\t Data telah di pop " << endl <<
     endl;
              cout << "\t----------------------------------------------------\n";
                             }
                             else {
                                 cout << "\tData kosong."<<endl;
                                 break;
                             }
                         }
                 }
                 else {
                         cout << "Data tidak sebanyak itu\n";
                 }
                 system("pause");
                 main();
             }
