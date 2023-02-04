#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include <sys/stat.h>
#include <sys/types.h>
#include<stdlib.h>
#define SABET 10000
int check(int n,char *a,char *b);
void realname_creatfile(char *a,char *b,int n);
int harf_shomar(char *a);
int dastoor_harf_shomar(char *a);
void reset(char *a,int n);
bool file_exists(const char *filename);
void jaygozry(char *a,char *b,int n);
void insert(char *vord,char *file_name,char* real_file_name,char* string_name,char* real_string_name,char* number,int number1,int number2,int dasf,int *size_dastoor,char **matn1,int *size_matn1);
void removestr(char *vord,char *file_name,char* real_file_name,char* number,int number1,int number2,int dasf,int *size_dastoor,char **matn1,int *size_matn1);
void copystr(char *vord,char *file_name,char* real_file_name,char* number,int number1,int number2,int dasf,int *size_dastoor,char **matn1,int *size_matn1,char* clipboard);
int main(){
    char root[]="root";
    if(!(file_exists(a))){

    
    int result = mkdir(a, 0777);
    }
    char *dastoor[]={"creatfile","exit","insertstr","cat","removestr","copystr","cutstr","pastestr"};
    int size_dastoor[]={10,5,10,4,10,8,7,9};
    char name_file[SABET];
    char vord[SABET];
    char artificial_vord[SABET];
    int t=1;
    char c='p';
    char passvand_file[]=" --file";
    char passvand_str[]=" --str";
    int dasf =(-1);
    int counter=0;
    int t2=1;
    int shroovanpassvand=0;
    char file_name[SABET];
    char real_file_name[SABET];  
    char string_name[SABET];
    char real_string_name[SABET];
    char number[SABET];
    int number1;
    int number2;
    char *matn1[SABET];
    int size_matn1[SABET];
    char clipboard[SABET];
    reset(clipboard,SABET);
    for(int i=0;i<SABET;i++){
        matn1[i]=(char*)malloc(SABET * sizeof(char));
    }    
    while(t==1){
        for(int i=0;i<SABET;i++){
            reset(matn1[i],SABET);
            size_matn1[i]=0;
        }
        c='p';
        counter=0;
        t2=1;
        reset(vord,SABET);
        reset(file_name,SABET);
        reset(real_file_name,SABET);
        reset(string_name,SABET);
        reset(real_string_name,SABET);
        reset(number,SABET);


        while(c != '\n'){
            c=getchar();
            // if(c!='\n'){
                vord[counter]=c;
            // }
            // printf("%c\n",vord[counter]);
            counter+=1;
        }

        dasf=(-1);
        for(int i=0; i<8;i++){
            // printf("i: %d\n",dastoor_harf_shomar(vord) );

            if(dastoor_harf_shomar(vord) == (size_dastoor[i])-1){
                if(check(dastoor_harf_shomar(vord),vord,dastoor[i])){
                    
                    dasf = i;
                }
            }
        }
        // printf("DASE1%d\n",dasf);

        if(dasf==1){
            t=0;
            break;
        }
        // printf("DASE2%d\n",dasf);
        if(dasf==0){
            // printf("%d",check(6,&vord[size_dastoor[dasf]-1],passvand_file));
            // if(check(7,&vord[size_dastoor[dasf]-1],passvand_file)){
                int i=size_dastoor[dasf]+8;
                int t3=1;
                int t4;
                while(t3==1){
                    if(vord[i]=='t' &&vord[i+1]=='x' &&vord[i+2]=='t' ){
                        t3=0;
                    }
                    if(i==size_dastoor[dasf]+8 && vord[i]=='/'){
                        t4=0;
                    }
                    else{
                        *(file_name+i)=vord[i];
                        // printf("??:%c\n",file_name[i]);

                    }
                    // printf("%c",file_name[i]);
                    i+=1;
                }
                file_name[i]=vord[i];
                i++;
                file_name[i]=vord[i];
                int g=1;
                int j=0;
                int k=0;


                realname_creatfile(file_name,real_file_name,SABET-1);
                char t[SABET];
                reset(t,SABET);
                

                jaygozry(real_file_name,t,SABET);
                // printf("t:%s",t);
                while (g==1){
                    if(t[k]=='/'){
                        j+=1;
                        }
                    if(t[k]=='\0'){
                        break;
                    }
                    k+=1;
                }
                // printf("j:%d k:%d\n",j,k);
                j-=1;
                // printf("hy::%s\n",t);
                char t2[SABET];
                reset(t2,SABET);
                int j2=0;
                
                k=0;
                while(g==1){
                    if(t[k]=='/' && j2==(j)){
                        break;
                    }
                    else{
                        if(t[k]=='/'){
                            j2+=1;
                        }
                        t2[k]=t[k];
                        k+=1;
                    }
                }
                // printf("hy2::%s\n",t2);
                // char real__file_name[]="root/helloworld4.txt";
                int result = mkdir(t2, 0777);
                // printf("%d",result);
                if (file_exists(t)){
                    printf("already exits\n");
                }
                FILE *fp = fopen(t,"w");
                fclose(fp);


            // }
        }
            if(dasf==2){
                insert(vord,file_name,real_file_name,string_name,real_string_name,number,number1,number2,dasf,size_dastoor,matn1,size_matn1);
            }

        if(dasf==3){
                    int i=12;
                    // printf("HY");
                    // printf("%c",vord[i]);
                        int ta3=1;
                        int ta4;
                        while(ta3==1){
                            if(vord[i]=='t' &&vord[i+1]=='x' &&vord[i+2]=='t' ){
                                ta3=0;
                            }
                            if(i==12 && vord[i]=='/'){
                                ta4=0;
                            }
                            else{
                                *(file_name+i)=vord[i];
                                // printf("??:%c\n",file_name[i]);

                            }
                            // printf("%c",file_name[i]);
                            i+=1;
                        }
                        file_name[i]=vord[i];
                        i++;
                        file_name[i]=vord[i];
                        int g=1;
                        int j=0;
                        int k=0;


                        realname_creatfile(file_name,real_file_name,SABET-1);
                        char t[SABET];
                        jaygozry(real_file_name,t,SABET);
                        // printf("t:%s\n",t);
                        if (file_exists(t)){
                            FILE *fp = fopen(t,"r");
                            for(int i=1;i<SABET;i++){
                                fgets(matn1[i],SABET,fp);
                                printf("%s",matn1[i]);
                            }
                            printf("\n");                    


                        }
                        else{
                            printf("this file does not exist!");                            
                        }


                }
        if(dasf==4){
            removestr(vord,file_name,real_file_name,number,number1,number2,dasf,size_dastoor,matn1,size_matn1);
        }
        if(dasf==5){
            copystr(vord,file_name,real_file_name,number,number1,number2,dasf,size_dastoor,matn1,size_matn1,clipboard);
        }
        if(dasf==6){
            copystr(vord,file_name,real_file_name,number,number1,number2,dasf,size_dastoor,matn1,size_matn1,clipboard);
            removestr(vord,file_name,real_file_name,number,number1,number2,dasf,size_dastoor,matn1,size_matn1);
        }
        if(dasf==7){
            reset(artificial_vord,SABET);
            // char clipboard2[4]="KHJ";
            char artifical_start[]="insertstr --file /";
            for(int i=0;i<19;i++){
                artificial_vord[i]=artifical_start[i];
            }
            int jj=0;
            int counter=0;
                int i=size_dastoor[dasf]+8;
                int t3=1;
                int t4;
                while(t3==1){
                    if(vord[i]=='t' &&vord[i+1]=='x' &&vord[i+2]=='t' ){
                        t3=0;
                    }
                    if(i==size_dastoor[dasf]+8 && vord[i]=='/'){
                        t4=0;
                    }
                    else{
                        *(file_name+i)=vord[i];
                        // artificial_vord[jj]=vord[i];
                        // printf("??:%c\n",file_name[i]);

                    }
                    // printf("%c",file_name[i]);
                    i+=1;
                    jj+=1;
                }
                // printf("1:%s\n",artificial_vord);
                file_name[i]=vord[i];
                i++;
                file_name[i]=vord[i];
                int g=1;
                int j=0;
                int k=0;


                realname_creatfile(file_name,real_file_name,SABET-1);
                char t[SABET];
                reset(t,SABET);
                

                jaygozry(real_file_name,t,SABET);
                // printf("t:%s %c\n",t,t[0]);

                for(int sd=0;sd<jj+2;sd++){
                    artificial_vord[18+sd]=t[sd];

                }
                jj+=(20);
                int counter2=0;
                artificial_vord[jj]=' ';
                jj+=1;
                artificial_vord[jj]='-';
                jj+=1;
                artificial_vord[jj]='-';
                jj+=1;
                artificial_vord[jj]='s';
                jj+=1;
                artificial_vord[jj]='t';
                jj+=1;
                artificial_vord[jj]='r';
                jj+=1;
                artificial_vord[jj]=' ';
                jj+=1;
                while(1){
                    if(clipboard[counter2]=='\0'){
                        break;
                    }
                    artificial_vord[jj]=clipboard[counter2];
                    counter2+=1;
                    jj+=1;
                }
                artificial_vord[jj]=' ';
                jj+=1;
                artificial_vord[jj]='-';
                jj+=1;
                artificial_vord[jj]='-';
                jj+=1;
                artificial_vord[jj]='p';
                jj+=1;
                artificial_vord[jj]='o';
                jj+=1;
                artificial_vord[jj]='s';
                jj+=1;
                artificial_vord[jj]=' ';
                jj+=1;



                // printf("2:%s\n",artificial_vord);
                        i+=8;
                        int i2=0;
                        // printf("num:%c\n",vord[i]);
                        while(g){
                            if(vord[i]==':'){
                                break;
                            }
                            number[i2]=vord[i];
                            i2+=1;
                            i+=1;
                        }
                        // number1=atoi(number);
                    //   printf("num1:%d\n",number1);
                        i+=1;
                    for(int sd=0;sd<i2;sd++){
                        artificial_vord[jj]=number[sd];
                        jj+=1;

                    }
                artificial_vord[jj]=':';
                jj+=1;


                        reset(number,SABET);
                        i2=0;
                        
                        while(g){
                            if(vord[i]=='\n'){
                                break;
                            }
                            number[i2]=vord[i];
                            i2+=1;
                            i+=1;
                        }
                        // number2=atoi(number);
                    for(int sd=0;sd<i2;sd++){
                        artificial_vord[jj]=number[sd];
                        jj+=1;

                    }
                artificial_vord[jj]='\n';
                jj+=1;
                insert(artificial_vord,file_name,real_file_name,string_name,real_string_name,number,number1,number2,dasf,size_dastoor,matn1,size_matn1);
                
                // printf("4:%s\n",artificial_vord);        

            // while(1){
            //     if(clipboard[i]=='\0'){
            //         break;
            //     }
            //     artficial
            // }
        }
        if(dasf==(-1)){
            printf("invalid command\n");
        }
        


    }
    return 0;
    
}
int check(int n,char *a,char *b){
    int t=(1);
    for (int i=0; i<n; i++){
        if(*(a+i) != *(b+i)){
            t=0;
            break;
        }
    }
    return t;
}
void realname_creatfile(char *a,char *b,int n){
    // printf("UUU");
    int i=0;
    int j=0;
    int y=(-1);
    while (i<n){
        if(*(a+i) == '"' && *(a+i-1)!= 92){
            i+=1;
            // printf("1");
            y*=(-1);

        }
         else{
            if(a[i]==' ' && y==(-1)){
                // printf("2");
                break;
                // i+=1;
                // continue;

            }
            else{
                if(*(a+i) == 92){
                    if(*(a+i+1)=='"'){
                        *(b+j)='"';
                        // printf("%c",*(b+j));
                        j+=1;
                        i+=2;
                    }
                    if(*(a+i+1) == 'n'){
                        *(b+j)='\n';
                        // printf("%c",*(b+j));
                        j+=1;
                        i+=2;
                    }
                    if(*(a+i+1) == 92 && *(a+i+2)=='n' ){
                        *(b+j)='\\';
                        *(b+j+1)='n';
                        // printf("%c",*(b+j));
                        // printf("%c",*(b+j+1));
                        j+=2;
                        i+=3;
                    }
                    else{
                        *(b+j)=*(a+i);
                            // printf("%c",*(b+j));
                            j+=1;
                            i+=1;
                    }


                
                }
                    else{
                        *(b+j)=*(a+i);
                            // printf("%c",*(b+j));
                            j+=1;
                            i+=1;
                    }
 
           }
        }
    }
}
void jaygozry(char *a,char *b,int n){
    int hg=1;
    int hg2=0;
    for(int i=0;i<n;i++){
        if(a[i]!='\0' && hg==1){
            hg=0;
            hg2=i;

        }
        if(a[i]!='\0' && hg==0){

            b[i-hg2]=a[i];
            // printf("j%c %d\n",b[i-hg2],i-hg2);                        

                    }
                }
}
int harf_shomar(char *a){
    int t=0;
    for(int i=0;i<33;i++){
        if(a[i]=='\0')break;
        t+=1;

    }
    return t;
}
int dastoor_harf_shomar(char *a){
    int t=0;
    for(int i=0;i<33;i++){
        if(a[i]=='\0' || a[i]=='-' || a[i]=='\n' || a[i]==' ')break;
        t+=1;

    }
    return t;
}
void reset(char *a,int n){
    for(int i=0;i<n;i++){
        a[i]='\0';
    }
}
bool file_exists(const char *filename){
    bool is_exist = false;
    FILE *fp = fopen(filename,"r");
    if(fp!=NULL){
        is_exist=true;
        fclose(fp);
    }
    return is_exist;
}
void insert(char *vord,char *file_name,char* real_file_name,char* string_name,char* real_string_name,char* number,int number1,int number2,int dasf,int *size_dastoor,char **matn1,int *size_matn1){

                        int i=size_dastoor[dasf]+8;
                        int ta3=1;
                        int ta4;
                        while(ta3==1){
                            if(vord[i]=='t' &&vord[i+1]=='x' &&vord[i+2]=='t' ){
                                ta3=0;
                            }
                            if(i==size_dastoor[dasf]+8 && vord[i]=='/'){
                                ta4=0;
                            }
                            else{
                                *(file_name+i)=vord[i];
                                // printf("??:%c\n",file_name[i]);

                            }
                            // printf("%c",file_name[i]);
                            i+=1;
                        }
                        file_name[i]=vord[i];
                        i++;
                        file_name[i]=vord[i];
                        int g=1;
                        int j=0;
                        int k=0;


                        realname_creatfile(file_name,real_file_name,SABET-1);
                        char t[SABET];
                        reset(t,SABET);

                        jaygozry(real_file_name,t,SABET);
                        // printf("t: %s\n",t);
                        i+=8;

                        int sa3=1;
                        int sa4=0;
                            // printf("i?:%d\n",i);
                        // printf("$$:%c",vord[i]);
                        
                        while(sa3==1){
                            if((vord[i-1]=='"' && vord[i-2]!='\\' && sa4==2)||(sa4==0 && vord[i]==' ') ){
                                    // printf("I2:%d\n",i);
                                sa3=0;
                                break;
                            }
                            // if(vord[i+1]=='-' && vord[i+2]=='-' && vord[i+3]=='p' && vord[i+4]=='o' && vord[i+5]=='s' ){
                            //         // printf("I2:%d\n",i);
                            //     sa3=0;
                            //     break;
                            // }
                            // if(i==size_dastoor[dasf]+8 && vord[i]=='/'){
                            //     sa4=0;
                            // }
                            else{
                                if(vord[i]=='"' && vord[i-1]!='\\' ){
                                    // printf("I:%d\n",i);
                                    sa4+=1;
                                }
                                
                                *(string_name+i)=vord[i];
                                // printf("??:%c\n",file_name[i]);

                            }
                            // // printf("%c",file_name[i]);
                            i+=1; 
                            // printf("i?:%d\n",i);
                        }
                        // printf("i:%d\n",i);
                        // printf("??:%c\n",vord[i]);
                        char st[SABET];
                        reset(st,SABET);
                        realname_creatfile(string_name,real_string_name,SABET-1);

                        jaygozry(real_string_name,st,SABET);
                        // printf("st:%s\n",st);
                        // printf("st:%s\n",st);
                        // printf("?:%c\n",vord[i-1]);
                        i+=7;
                        int i2=0;
                        // printf("num:%c\n",vord[i]);
                        while(g){
                            if(vord[i]==':'){
                                break;
                            }
                            number[i2]=vord[i];
                            i2+=1;
                            i+=1;
                        }
                        number1=atoi(number);
                        // printf("%d %c\n",number1,vord[i]);
                        i+=1;
                        reset(number,SABET);
                        i2=0;
                        
                        while(g){
                            if(vord[i]=='\n'){
                                break;
                            }
                            number[i2]=vord[i];
                            i2+=1;
                            i+=1;
                        }
                        number2=atoi(number);
                        // printf("%d %c\n",number2,vord[i]);
                if (file_exists(t)){
                    FILE *fp = fopen(t,"r");
                    for(int i=1;i<SABET;i++){
                        fgets(matn1[i],SABET,fp);
                        // printf("%s\n",matn1[i]);
                        size_matn1[i]=harf_shomar(matn1[i]);
                    }
                    fclose(fp);
                    // printf("1:%s\n2:%s3:size%d",matn1[1],matn1[2],harf_shomar(matn1[2]));
                    fp = fopen(t,"w");
                    int size_st=harf_shomar(st);
                    // printf("st%s size%d\n",st,size_st);
                    k=0;
                    if(size_matn1[number1]<number2){
                        // printf("size_matn1[number1]:%d\n",size_matn1[number1]);
                        printf("nope\n");
                    }

                    else if(number1==1 && number2==0 && size_matn1[1]==0){
                        fp = fopen(t,"w");
                        // printf("shart1\n");
                        fputs(st,fp);

                    }

                    else{
                        fp = fopen(t,"w");
                        // printf("shart2\n");
                        for(int i=1;i<SABET;i++){
                            for(int j=0;j<SABET;j++){
                                if(i==(number1) && j==number2){
                                    for(int k=0;k<size_st;k++){
                                        // printf("k:\n");
                                        fputc(st[k],fp);
                                    }

                                }
                                if(matn1[i][j]!='\0'){
                                    fputc(matn1[i][j],fp);
                                }
                            }
                            // fputc('\n',fp);
                        }

                    }
                    fclose(fp);

                }
                else{
                    printf("this file does not exist!\n");
                }


}
void removestr(char *vord,char *file_name,char* real_file_name,char* number,int number1,int number2,int dasf,int *size_dastoor,char **matn1,int *size_matn1){
                        int g=1;
                        int j=0;
                        int k=0;                       
                        int i=size_dastoor[dasf]+8;
                        int ta3=1;
                        int ta4;
                        while(ta3==1){
                            if(vord[i]=='t' &&vord[i+1]=='x' &&vord[i+2]=='t' ){
                                ta3=0;
                            }
                            if(i==size_dastoor[dasf]+8 && vord[i]=='/'){
                                ta4=0;
                            }
                            else{
                                *(file_name+i)=vord[i];
                                // printf("??:%c\n",file_name[i]);

                            }
                            // printf("%c",file_name[i]);
                            i+=1;
                        }
                        file_name[i]=vord[i];
                        i++;
                        file_name[i]=vord[i];
                        realname_creatfile(file_name,real_file_name,SABET-1);
                        char t[SABET];
                        reset(t,SABET);

                        jaygozry(real_file_name,t,SABET);
                        // printf("t:%s\n",t);
                        i+=8;
                        int i2=0;
                        // printf("num:%c\n",vord[i]);
                        while(g){
                            if(vord[i]==':'){
                                break;
                            }
                            number[i2]=vord[i];
                            i2+=1;
                            i+=1;
                        }
                        number1=atoi(number);
                    //   printf("num1:%d\n",number1);
                        i+=1;
                        reset(number,SABET);
                        i2=0;
                        
                        while(g){
                            if(vord[i]==' '){
                                break;
                            }
                            number[i2]=vord[i];
                            i2+=1;
                            i+=1;
                        }
                        number2=atoi(number);
                    //   printf("num2:%d\n",number2);
                        reset(number,SABET);
                      i+=7;
                      i2=0;
                    //   printf("p+%c\n",vord[i]);
                        while(g){
                            if(vord[i]=='-'){
                                break;
                            }
                            number[i2]=vord[i];
                            i2+=1;
                            i+=1;
                        }
                    // printf("number:%s\n",number);
                      int number3=atoi(number);
                    //   printf("k:%d",number3);
                    i+=1;
                    int alamat=1;
                    if(vord[i]=='b'){
                        alamat=(-1);
                    }
                if (file_exists(t)){
                    FILE *fp = fopen(t,"r");
                    for(int i=1;i<SABET;i++){
                        fgets(matn1[i],SABET,fp);
                        // printf("%s\n",matn1[i]);
                        size_matn1[i]=harf_shomar(matn1[i]);
                    }
                    fclose(fp);

                    // printf("1:%s\n2:%s3:size%d",matn1[1],matn1[2],harf_shomar(matn1[2]));
                    fp = fopen(t,"w");

                    // printf("st%s size%d\n",st,size_st);
                    k=0;
                    if(size_matn1[number1]<number2){
                        // printf("size_matn1[number1]:%d\n",size_matn1[number1]);
                        printf("nope\n");
                    }

                    // else if(number1==1 && number2==0 && size_matn1[1]==0){
                    //     fp = fopen(t,"w");
                    //     // printf("shart1\n");
                    //     fputs(st,fp);

                    // }

                    else{
                        int payan=0;
                        int shomar_char=number2;
                        int shomar_line=number1;

                        int enter_line[SABET]={0};
                        while(number3!=0){

                            if(shomar_char<0){
                                shomar_line-=1;
                                shomar_char=size_matn1[shomar_line]-1;
                                number3-=1;
                                enter_line[shomar_line]=1;
                                continue;
                            }
                            if(shomar_line<1){
                                shomar_line=1;
                                shomar_char=0;
                                break;
                            }
                            if(shomar_char==size_matn1[shomar_line]){
                                shomar_line+=1;
                                shomar_char=0;
                                number3-=1;
                                enter_line[shomar_line-1]=1;
                                continue;                                
                            }
                            if(shomar_line>SABET){
                                shomar_line=SABET;
                                shomar_char=0;
                                break;
                            }
                            number3-=1;
                            shomar_char+=alamat;

                        }
                        // printf("shomar_char:%d\n",shomar_char);
                        // printf("shomar_line:%d\n",shomar_line);                        

                        fp = fopen(t,"w");
                        int jhj=1;
                        // printf("shart2\n");
                        for(int i=1;i<SABET;i++){
                            for(int j=0;j<SABET;j++){
                                jhj=1;


                                
                                if(matn1[i][j]!='\0'){
                                    if(alamat==1){
                                        if((number1==i && j>=number2 && number1!=shomar_line)){
                                            jhj=0;
                                            // printf("i:%d j:%d HELOO c:%c\n",i,j,matn1[i][j]);
                                        }
                                        if(i==shomar_line && j<=shomar_char && number1!=shomar_line){
                                            jhj=0;
                                        }
                                        if(i>number1 && i<shomar_line && number1!=shomar_line){
                                            jhj=0;
                                        }
                                        if(number1==shomar_line && j>=number2 && j<=shomar_char && i==shomar_line){
                                            jhj=0;
                                        }
                                        if(jhj==1){
                                            fputc(matn1[i][j],fp);
                                        }

                                    }
                                    else{
                                        if((number1==i && j<=number2)&& number1!=shomar_line){
                                            // printf("i:%d j:%d HELOO2 c:%c\n",i,j,matn1[i][j]);
                                            jhj=0;
                                        }
                                        if(i==shomar_line && j>shomar_char && number1!=shomar_line){
                                            // printf("i:%d j:%d HELOO2 c:%c\n",i,j,matn1[i][j]);    
                                            jhj=0;
                                        }
                                        if(i<number1 && i>shomar_line && number1!=shomar_line){
                                            // printf("i:%d j:%d HELOO2 c:%c\n",i,j,matn1[i][j]); 
                                            jhj=0;
                                        }
                                        if(number1==shomar_line && j<=number2 && j>=shomar_char && i==shomar_line){
                                            // printf("i:%d j:%d HELOO2 c:%c\n",i,j,matn1[i][j]);      
                                            jhj=0;
                                        }
                                        if(jhj==1){
                                            fputc(matn1[i][j],fp);
                                        }
                                    }
                                
                                }
                            }
                            // fputc('\n',fp);
                        }

                    }
                    fclose(fp);

                }
                else{
                    printf("this file does not exist!");
                }
}
void copystr(char *vord,char *file_name,char* real_file_name,char* number,int number1,int number2,int dasf,int *size_dastoor,char **matn1,int *size_matn1,char* clipboard){
                        reset(clipboard,SABET);
                        int g=1;
                        int j=0;
                        int k=0;                       
                        int i=size_dastoor[dasf]+8;
                        int ta3=1;
                        int ta4;
                        while(ta3==1){
                            if(vord[i]=='t' &&vord[i+1]=='x' &&vord[i+2]=='t' ){
                                ta3=0;
                            }
                            if(i==size_dastoor[dasf]+8 && vord[i]=='/'){
                                ta4=0;
                            }
                            else{
                                *(file_name+i)=vord[i];
                                // printf("??:%c\n",file_name[i]);

                            }
                            // printf("%c",file_name[i]);
                            i+=1;
                        }
                        file_name[i]=vord[i];
                        i++;
                        file_name[i]=vord[i];
                        realname_creatfile(file_name,real_file_name,SABET-1);
                        char t[SABET];
                        reset(t,SABET);

                        jaygozry(real_file_name,t,SABET);
                        // printf("t:%s\n",t);
                        i+=8;
                        int i2=0;
                        // printf("num:%c\n",vord[i]);
                        while(g){
                            if(vord[i]==':'){
                                break;
                            }
                            number[i2]=vord[i];
                            i2+=1;
                            i+=1;
                        }
                        number1=atoi(number);
                    //   printf("num1:%d\n",number1);
                        i+=1;
                        reset(number,SABET);
                        i2=0;
                        
                        while(g){
                            if(vord[i]==' '){
                                break;
                            }
                            number[i2]=vord[i];
                            i2+=1;
                            i+=1;
                        }
                        number2=atoi(number);
                    //   printf("num2:%d\n",number2);
                        reset(number,SABET);
                      i+=7;
                      i2=0;
                    //   printf("p+%c\n",vord[i]);
                        while(g){
                            if(vord[i]=='-'){
                                break;
                            }
                            number[i2]=vord[i];
                            i2+=1;
                            i+=1;
                        }
                    // printf("number:%s\n",number);
                      int number3=atoi(number);
                    //   printf("k:%d",number3);
                    i+=1;
                    // printf("n1:%d n2:%d n3:%d\n",number1,number2,number3);
                    int alamat=1;
                    if(vord[i]=='b'){
                        alamat=(-1);
                    }
                if (file_exists(t)){
                    int counter_copy=number3;
                    FILE *fp = fopen(t,"r");
                    for(int i=1;i<SABET;i++){
                        fgets(matn1[i],SABET,fp);
                        // printf("%s\n",matn1[i]);
                        size_matn1[i]=harf_shomar(matn1[i]);
                    }
                    fclose(fp);

                    // printf("1:%s\n2:%s3:size%d",matn1[1],matn1[2],harf_shomar(matn1[2]));
                    // fp = fopen(t,"w");

                    // printf("st%s size%d\n",st,size_st);
                    k=0;
                    if(size_matn1[number1]<number2){
                        // printf("size_matn1[number1]:%d\n",size_matn1[number1]);
                        printf("nope\n");
                    }

                    // else if(number1==1 && number2==0 && size_matn1[1]==0){
                    //     fp = fopen(t,"w");
                    //     // printf("shart1\n");
                    //     fputs(st,fp);

                    // }
                    // printf("n1:%d n2:%d n3:%d\n",number1,number2,number3);

                    else{
                        int payan=0;
                        int shomar_char=number2;
                        int shomar_line=number1;

                        int enter_line[SABET]={0};
                        while(number3!=0){

                            if(shomar_char<0){
                                clipboard[counter_copy-number3]=matn1[shomar_line][shomar_char];
                                shomar_line-=1;
                                shomar_char=size_matn1[shomar_line]-1;
                                number3-=1;
                                enter_line[shomar_line]=1;
                                continue;
                            }
                            if(shomar_line<1){
                                shomar_line=1;
                                shomar_char=0;
                                break;
                            }
                            if(shomar_char==size_matn1[shomar_line]){
                                clipboard[counter_copy-number3]=matn1[shomar_line][shomar_char];
                                shomar_line+=1;
                                shomar_char=0;
                                number3-=1;
                                enter_line[shomar_line-1]=1;
                                continue;                                
                            }
                            if(shomar_line>SABET){
                                shomar_line=SABET;
                                shomar_char=0;
                                break;
                            }
                            clipboard[counter_copy-number3]=matn1[shomar_line][shomar_char];
                            number3-=1;
                            shomar_char+=alamat;


                        }
                        // printf("clip:%s",clipboard);


                    }


                }
                else{
                    printf("this file does not exist!");
                }


}