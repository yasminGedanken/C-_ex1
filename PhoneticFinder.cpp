/**
 * writer: yasmin gedanken
 * 
 * stringstream s(s1); //from stackoverflow.com
 */
#include <string>
#include <sstream>
#include <iostream>
#include <stdexcept>
#include <stdio.h>
#include "PhoneticFinder.hpp"
using namespace std;

namespace phonetic{
    string find(string s1,string s2){
     stringstream s(s1); //from stackoverflow.com
     string word;
    int i;

        while(s>>word){
            if(s2.length()==word.length()){
            for(i=0; i<word.length();i++){

            if(s2.at(i)=='v'|| s2.at(i)=='w') {
                if(word.at(i)!='v'&& word.at(i)!='w'&&word.at(i)!='V'&&word.at(i)!='W')
                break;
            }
             if(s2.at(i)=='b'|| s2.at(i)=='f'||s2.at(i)=='p') {
                if(word.at(i)!='b'&& word.at(i)!='B'&&word.at(i)!='f'&&word.at(i)!='F'&&word.at(i)!='p'&&word.at(i)!='P')
                 break;
              }
             if(s2.at(i)=='g'|| s2.at(i)=='j') {
                if(word.at(i)!='g'&& word.at(i)!='j'&&word.at(i)!='G'&&word.at(i)!='J')
                 break;
            }
              if(s2.at(i)=='c'|| s2.at(i)=='k'||s2.at(i)=='q') {
                if(word.at(i)!='c'&& word.at(i)!='k'&&word.at(i)!='q'&&word.at(i)!='C'&&word.at(i)!='K'&&word.at(i)!='Q')
                  break;
            }
             if(s2.at(i)=='s'|| s2.at(i)=='z') {
                if(word.at(i)!='s'&& word.at(i)!='z'&&word.at(i)!='S'&&word.at(i)!='Z')
                 break;
            }
             if(s2.at(i)=='d'|| s2.at(i)=='t') {
                if(word.at(i)!='d'&& word.at(i)!='t'&&word.at(i)!='D'&&word.at(i)!='T')
                  break;
            }
             if(s2.at(i)=='o'|| s2.at(i)=='u') {
                if(word.at(i)!='o'&& word.at(i)!='u'&&word.at(i)!='O'&&word.at(i)!='U')
                  break;
            }
             if(s2.at(i)=='i'|| s2.at(i)=='y') {
                if(word.at(i)!='i'&& word.at(i)!='y'&&word.at(i)!='I'&&word.at(i)!='Y')
                  break;
            }
        }
        if((i)==s2.length()) return word;
       }
        }
       
        std::string errorMessage = std::string("Did not find the word '")+s2+("' in the text");
   throw std::runtime_error(errorMessage);


    }

};