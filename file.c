#include <stdio.h>
#include <string.h>
#include <math.h>



/*this is the program that uses twice the function defined above.*/
void reverseString(char content[]){
    int len=strlen(content);
    int i;
    for(i=len-1;i>-1;i--){
       printf("%c",content[i]);
    }
}
// void setWord(char *target,char *point){
//     for(int i=0;i<strlen(point);i++){
//         target[i]=point[i];
//     }
// }

// void printWords(char **words){
//     for(int i=0;i<strlen(words);i++){
//         printf("\n%s",words[i]);
//     }   
// }


// void readSentence(){
//     char words[500][500];
//     int i=0;
//     while(1){
//       char word[500];
//       scanf("%s", &word);
//       if(strlen(word)==0){
//          break;
//       }
//       setWord(words[i],word);
//     }
//     printWords(words);
// }

void printIsc(int n){
    for(int i=1;i<=n;i++){
        int ind=0;
        while(ind<i){
            printf("*");
            ind++;
        }
        printf("\n");
    }
}
void printRevIsc(int n){
    for(int i=n;i>=0;i--){
        int ind=0;
        while(ind<i){
            printf("*");
            ind++;
        }
        printf("\n");
    }
}
void printChar(char c,int times){
    for(int i=0;i<times;i++){
        printf("%c",c);
    }
}

void printTriangle(int n){
    int width=2*n-1;
    int space=width/2;
    while(space>=0){
        int numberStars=width-(2*space);
        printChar(' ',space);
        printChar('*',numberStars);
        printChar(' ',space);
        printf("\n");
        space--;
    }
}

typedef struct
{
    int id;
    char *name;
    int age;
} Student;

int main()
{
    int i=14;
    int j=i << 1;
    printf("%d",j);

    return 0;
}
