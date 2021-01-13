# **Laborator 11**

**Problemele se incarca pe Github pana duminica– 17.01.2021 ora 23:59.\
Exercitiile se realizeaza astfel incat sa existe un fisier header si un fisier cpp pentru fiecare clasa si un fisier separat pentru main**


class Localitate {\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;char *nume;\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int nr_locuitori;\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int venit_mediu;\
};\
\
class Oras{\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.\
};\
\
class Minicipiu{\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;char * regiune;\
};\
\
class Capitala{\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;char *tara;\
};\
\
class Tara{\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Localitate **v; #hint:pentru a parcurge vectorul puneti pe ultima pozitie NULL si parcurgeti vectorul pana dati de NULL.\
};
<p align="center">
  <img src="https://github.com/Laborator-POO-2020-2021/Laborator-11/blob/master/Screenshot_3.png" />
</p>

Cerinte:
- Implementati toate metodele astfel incat programul sa functioneze corect
- Creati in main 5 obiecte de tip Tara. Cel putin una din tari sa aiba o localitate, un oras, un municipiu si o capitala.
- Sortati tarile dupa numarul de locuitori si afisati-le.
- Sortati tarile dupa venitul mediu.
- Afisatati detaliile despre fiecare tara.


    

# Tutorial github

 - Pentru descarcare pe windows:
   - https://git-scm.com/downloads

   - Dupa instalare deschideti programul Git bash
<p align="center">
  <img src="https://github.com/Laborator-POO-2020-2021/Laborator-11/blob/master/Screenshot_1.png" />
</p>
- Pentru descarcare pe linux in terminal:
  - sudo apt install git

## Comenzi de baza:
In continuare comenzile pentru linux(terminal) si windows(git bash) sunt comune.
- ls -> pentru a vedea toate fisierele si folderele din locatia curenta
- pwd -> pentru a vedea calea absoluta din locatia curenta
- touch exemplu.txt -> creare fisier exemplu.txt(inlocuiti exemplu.txt cu fisierul pe care doriti sa il creati)
- mkdir exemplu -> creare folder cu numele exemplu
- cd exemplu -> pentru a schimba locatia curenta si a intra in folder-ul exemplu

## Pasul 1 -> stabiliti locatia unde o sa lucrati
- Stabiliti locatia unde doriti sa lucrati(Desktop, Documents sau orice alt folder)
- creati un folder in aceasta locatie cu ce nume vreti voi (mkdir si apoi cd in el)
- verificati ca va aflati in interiorul folder-ului (pwd)

## Pasul 2 poate fi facut in 2 moduri -> initializarea/clonarea proiectului la voi local
- Varianta 1
  - git init
  - git remote add origin https://github.com/Laborator-POO-2020-2021/Laborator-11.git
  - git pull origin master

- Varianta 2
  - git clone https://github.com/Laborator-POO-2020-2021/Laborator-11.git
  - cd Laborator-11

## Pasul 3 -> crearea propriului branch
- git checkout -b prenume.nume # aici fiecare isi creeaza un branch cu numele lui folosind argumentul -b
- git branch # cu aceasta comanda puteti observa pe ce branch va aflati
- git checkout master # va duceti inapoi pe branch-ul de master
- git branch
- git checkout prenume.nume # sa va intoarceti pe branch-ul vostru !!!!

## Pasul 4 -> crearea unui fisier si urcarea acestuia pe website-ul github in repository-ul pentru laboratorul 11
- touch main.cpp
- touch header.hpp
- touch file.cpp
- git status # pentru a observa modificarile
- **Varianta 1**
    - git add . # .(punct) inseamna ca adaugati toate modificarile
- **Varianta 2**
    - git add main.cpp # sau varianta aceasta in care adaugati fiecare fisier modificat pe rand
- git commit -m “un mesaj scurt cu ce ati modificat”
- git push origin prenume.nume # cu aceasta comanda trimiteti modificarile pe branch-ul vostru de pe server-ul github, pot fi vizualizate apoi si din brower

Pasul 4 se repeta de cate ori e nevoie, adica de fiecare data cand vreti sa trimiteti modificarile pe care le faceti pe server.
Nu e nevoie sa faceti asta la fiecare modificare, puteti faci pasul 4 o singura data dupa ce ati terminat laboratorul.

Din browser puteti vedea modificarile voastre selectand branch-ul vostru, ca in imaginea de mai jos.
<p align="center">
  <img src="https://github.com/Laborator-POO-2020-2021/Laborator-11/blob/master/Screenshot_2.png" />
</p>

## Extra

**Cum sa adaugati cheia de ssh**

Rulati comanda:
- ssh-keygen\
Apoi in folder-ul .ssh din folder-ul principal al userului vostru (/home/marius.trifu/ pt linux) si C:\Users\marius.trifu sau /c/Users/marius.trifu pentru Windows.
- cd\
sau
- cd ~\
Pentru a intra in folder-ul .ssh dati:
- cd .ssh
- ls # pentru a vedea continutul, aici ar trebui sa aveti fisierele id_rsa si id_rsa.pub\
Fisierul id_rsa contine cheia voastra privata(niciodata sa nu o dati la nimeni) si fisierul id_rsa.pub contine cheia publica pe care o puteti da oricui.
- cat id_rsa.pub # ca sa va afiseze continutul fisierului
- copiati intreg continutul fisierului id_rsa.pub
- intrati pe site-ul github, va logati si urmariti pasii de mai jos

<p><b>Intrati la setari in colt dreapta sus</b></p>

<p align="center">
  <img src="https://github.com/Laborator-POO-2020-2021/Laborator-11/blob/master/Screenshot_4.png" />
</p>
<p><b>Selectati SSH and GPG keys</b></p>

<p align="center">
  <img src="https://github.com/Laborator-POO-2020-2021/Laborator-11/blob/master/Screenshot_5.png" />
</p>
<p><b>Selectati New SSH key</b></p>

<p align="center">
  <img src="https://github.com/Laborator-POO-2020-2021/Laborator-11/blob/master/Screenshot_7.png" />
</p>
<p><b>Introduceti datele din fisierul id_rsa.pub si un titlu</b></p>

<p align="center">
  <img src="https://github.com/Laborator-POO-2020-2021/Laborator-11/blob/master/Screenshot_6.png" />
</p>
