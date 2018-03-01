#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    FILE *fin = fopen("input.txt","r"), *fout = fopen("output.txt","w");
    int symb, max = 0, symb_count;

     while((symb = getc(fin)) != EOF)
        if(symb == '1') {
           symb_count = 1;
           while((symb = getc(fin)) == '1')
              symb_count++;
           if(symb_count > max)
              max = symb_count;
        }
    fprintf(fout, "%d",max);
    fclose(fin);
    fclose(fout);
}
