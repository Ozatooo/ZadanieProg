#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <math.h>
#include <regex>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
using namespace std;
 
int main(int argc, char** argv) {
 
 
string input;
 regex regularne("[a-z]+@[a-z]+\.pl"); //tworzymy zmienn¹ z wyra¿eniem
    ofstream plik1;
   ifstream plik;  //deklaracja zmiennej pliku tekstowego
   
   plik1.open("a.txt");  //otwarcie pliku
   plik2.open("b.txt");  //otwarcie pliku
   
   if(plik.good())  //sprawdzenie czy plik istnieje
            while(!plik.eof())  //petla wykonuje sie az program dojedzie do konca pliku
        {
           
              plik>>input;
             cout<<input;
              cout<<endl;
             if(!cin) break;
                if(input=="koniec") //koniec pêtli
                        break;
                if(regex_match(input,regularne)) //sprawdzamy, czy wprowadzony napis pasuje do wyra¿enia
                {
                        cout<<"Prawid³owe"<<endl;
                        plik1<<input<<"<---Prawid³owo"<<endl;
                    }
                else
                {
                        cout<<"To nie jest mail"<<endl;
                    }
                     
        }
               
             
                   plik1.close();  //zamkniecie pliku tekstowego
                   plik2.close();  //zamkniecie pliku tekstowego
 
cout<<endl;
 
       
 return 0;
}

