**Laborator 11**

**Problemele se incarca pe Github pana duminica– 17.01.2021 ora 23:59.
Exercitiile se realizeaza astfel incat sa existe un fisier header si un fisier cpp pentru fiecare clasa si un fisier separat pentru main**


class Localitate {\
    char *nume;\
    int nr_locuitori;\
int venit_mediu;\
};\
\
class Oras{\
    int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.\
};\
\
class Minicipiu{\
    char * regiune;\
};\
class Capitala{\
    char *tara;\
};\
\
class Tara{\
    Localitate **v;\
};\
\

Cerinte:
- Implementati toate metodele astfel incat programul sa functioneze corect
- Creati in main 5 obiecte de tip Tara. Cel putin una din tari sa aiba o localitate, un oras, un municipiu si o capitala.
- Sortati tarile dupa numarul de locuitori si afisati-le.
- Sortati tarile dupa venitul mediu.
- Afisatati detaliile despre fiecare tara.


    

**Tutorial github**

Pentru descarcare pe windows:
https://git-scm.com/downloads

Dupa instalare deschideti programul Git bash

Pentru descarcare pe linux in terminal:
sudo apt install git

Comenzi de baza:
In continuare comenzile pentru linux(terminal) si windows(git bash) sunt comune.
ls -> pentru a vedea toate fisierele si folderele din locatia curenta
pwd -> pentru a vedea calea absoluta din locatia curenta
touch exemplu.txt -> creare fisier exemplu.txt(inlocuiti exemplu.txt cu fisierul pe care doriti sa il creati)
mkdir exemplu -> creare folder cu numele exemplu
cd exemplu -> pentru a schimba locatia curenta si a intra in folder-ul exemplu

Pasul 1 -> stabiliti locatia unde o sa lucrati
1.1 Stabiliti locatia unde doriti sa lucrati(Desktop, Documents sau orice alt folder)
1.2 creati un folder in aceasta locatie cu ce nume vreti voi (mkdir si apoi cd in el)
1.3 verificati ca va aflati in interiorul folder-ului (pwd)

Pasul 2 poate fi facut in 2 moduri -> initializarea/clonarea proiectului la voi local
Varianta 1
2.1 git init
2.2 git remote add origin https://github.com/Laborator-POO-2020-2021/Laborator-11.git

Varianta 2
2.1 git clone https://github.com/Laborator-POO-2020-2021/Laborator-11.git

Pasul 3 -> crearea propriului branch
3.1 cd Laborator-11
3.2 git checkout -b prenume.nume # aici fiecare isi creeaza un branch cu numele lui folosind argumentul -b
3.3 git branch # cu aceasta comanda puteti observa pe ce branch va aflati
3.4 git checkout master # va duceti inapoi pe branch-ul de master
3.5 git branch
3.6 git checkout prenume.nume # sa va intoarceti pe branch-ul vostru !!!!

Pasul 4 -> crearea unui fisier si urcarea acestuia pe website-ul github in repository-ul pentru laboratorul 11
4.1 touch main.cpp
4.2 touch header.hpp
4.3 touch file.cpp
4.4 git status # pentru a observa modificarile
4.5.1 git add . # .(punct) inseamna ca adaugati toate modificarile
4.5.2 git add main.cpp # sau varianta aceasta in care adaugati fiecare fisier modificat pe rand
4.6 git commit -m “un mesaj scurt cu ce ati modificat”
4.7 git push # cu aceasta comanda trimiteti modificarile pe server-ul github si pot fi vizualizate apoi si din brower

Pasul 4 se repeta de cate ori e nevoie, adica de fiecare data cand vreti sa trimiteti modificarile pe care le faceti pe server.
Nu e nevoie sa faceti asta la fiecare modificare, puteti faci pasul 4 o singura data dupa ce ati terminat laboratorul.

Din browser puteti vedea modificarile voastre selectand branch-ul vostru, ca in imaginea de mai jos.

