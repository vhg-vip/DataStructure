#include <stdio.h>
#include <stdlib.h>
typedef struct sach
{
    int id;
    char ten[100];
    char tg[100];
    float gia;
}book;
book ss[1000];
int dem()
{
    FILE *fp=fopen("B18DCAT119.bin","rb");
    int c=0;
    while(fgetc(fp)!=EOF)
    {
        c++;
        fseek(fp,sizeof(book)*c,SEEK_SET);
    }
    fclose(fp);
    return c;
}
void them(int n)
{
    FILE *fp=fopen("B18DCAT119.bin","ab");
    int c=dem();
    for(int i=1;i<=n;i++)
    {
        book s;
        s.id=c+i;
        while((getchar())!='\n');
        gets(s.ten);
        //while((getchar())!='\n');
        gets(s.tg);
        scanf("%f",&s.gia);
        fseek(fp,0,SEEK_END);
        fwrite(&s,sizeof(book),1,fp);
    }
    fclose(fp);
    printf("%d",n);

}
void sua(int n)
{
    FILE *fp=fopen("B18DCAT119.bin","rb+");
    fseek(fp,sizeof(book)*(n-1),SEEK_SET);
    book s;
    s.id=n;
    while((getchar())!='\n');
    gets(s.ten);
    // while((getchar())!='n');
     gets(s.tg);
     scanf("%f",&s.gia);
    fwrite(&s,sizeof(book),1,fp);
    puts(s.ten);
    fclose(fp);

}
void sortt()
{
    int n=dem();
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        if(ss[i].gia>ss[j].gia)
    {
        book tmp=ss[i];
        ss[i]=ss[j];
        ss[j]=tmp;
    }
}

void in()
{
    FILE *fp=fopen("B18DCAT119.bin","rb");
    int n=dem();
    for(int i=0;i<n;i++)
    {
        fseek(fp,sizeof(book)*i,SEEK_SET);
        fread(&ss[i],sizeof(book),1,fp);
    }
    sortt();
    for(int i=0;i<n;i++)
    {
        printf("%d %s %.2f %s \n",ss[i].id,ss[i].ten,ss[i].gia,ss[i].tg);
    }
     fclose(fp);
}



int main()
{
   // FILE *fp=fopen("B18DCAT087.bin","wb");
   // fclose(fp);
     int n,m;
     scanf("%d",&n);
     switch(n)
     {
     case 1:
        scanf("%d",&m);
        them(m);
        break;
     case 2:
        scanf("%d",&m);
        sua(m);
        break;
     case 3:
        in();
        break;
     }
     return  0;


}
