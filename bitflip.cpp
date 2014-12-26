#include "stdafx.h"

using namespace std;

int main(int argc, char *argv[])
{
    int tmp;
    char old,neu;
    cout<<"All of the characters (in order from 0-255): "<<endl;
    for(int x=0;x<256;x++){cout<<(char)x;}
    cout<<endl;
    system("PAUSE");
    system("CLS");
    cout<<"Bit Flipper: Find the inverse of any character!"<<endl;
    cout<<"A.K.A: John Romero's legendary mood swings"<<endl;
    cout<<"Enter a character to \"flip\": "; cin>>old;
    tmp=(int)old;
    cout<<"ASCII value of "<<old<<" is "<<tmp<<"."<<endl;
    neu=((char)(255-tmp));
    cout<<"\"Bit-Flipped\" "<<old<<"("<<tmp<<") is "<<neu<<"("<<(int)neu<<"="<<((int)neu+256)<<")."<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
