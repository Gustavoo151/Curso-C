
#include <stdio.h>


// Return ascii code
char numLetra(char Morse){
        if(Morse == ".-")
            return 'a';
        else if(Morse == "-...")
            return 'b';
        else if (Morse == "-.-.")
            return 'c';
        else if (Morse ==  "-..")
            return 'd';
        else if (Morse == ".")
            return 'e';
        else if (Morse == "..-.")
            return 'f';
        else if (Morse == "--.")
            return 'g';
        else if (Morse == "....")
            return 'h';
        else if (Morse == "..")
            return 'i';
        else if (Morse ==  ".---")
            return 'j';
        else if (Morse == "-.-")
            return 'k';
        else if (Morse == ".-..")
            return 'l';
        else if (Morse == "--")
            return 'm';
        else if (Morse == "-.")
            return 'n';
        else if (Morse == "---")
            return 'o';
        else if (Morse == ".--.")
            return 'p';
        else if (Morse == "--.-")
            return 'q';
        else if (Morse == ".-.")
            return 'r';
        else if (Morse == "...")
            return 's';
        else if (Morse == "-")
            return 't';
        else if (Morse == "..-")
            return 'u';
        else if (Morse == "...-")
            return 'v';
        else if (Morse == ".--")
            return 'w';
        else if (Morse == "-..-")
            return 'x';
        else if (Morse == "-.--")
            return 'y';
        else if (Morse == "--..")
            return 'z';
        else if (Morse ==  ".----")
            return '1';
        else if (Morse ==  "..---")
            return '2';
        else if (Morse ==  "...--")
            return '3';
        else if (Morse == "....-")
            return '4';
        else if (Morse ==  ".....")
            return '5';
        else if (Morse ==  "-....")
            return '6';
        else if (Morse ==  "--...")
            return '7';
        else if (Morse ==  "---..")
            return '8';
        else if (Morse ==  "----.")
            return '9';
        else if (Morse ==  "----")
            return '0';
}



int main(){
    char letra[10] = '.-';
    printf("%c", numLetra(letra));
}