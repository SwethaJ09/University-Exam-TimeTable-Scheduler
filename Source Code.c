#include<stdio.h>
#include<string.h>
void main()
{ 
  int n,I,ye,j,m=0;
  int X,Y,Z,K,R;
  int st,en,year;
  int day,s;
  int mon1,mon2,daysm,i,dates[100][100];
  int p,l,a,b=0; 
  int temp,k;
  FILE *fp,*fp2,*fp3,*fp4;
  char str[100][1000];
  char t[100][1000];
  char u[100][1000];
  char v[100][1000];
  int reg;
     //ROOM ALLOTMENT
   int fir=117;
   int sec=123;
   int thi=115;
   int fou=122;
   int o,avg;
   int P,q,M;
   Z=21000;
   K=20000;
   P=19000;
   q=18000;
  char name[100];
  int line=0;
  int line2=0;
  int line3=0;
  int line4=0;
  int r=0,g=0;
  int l1=0;
  int l2=0,l4=0,l6=0,l8=0;
  FILE *f2,*f4,*f6,*f8;
  FILE *f1;
  char pro[100][1000];
  char x[100][1000];
  char y[100][1000];
  char z[100][1000];
  char w[100][1000];
  int suc[100][1000];
  int sem1,sem2,sem3,sem4;
     printf("Enter sem1:");
     scanf("%d",&sem1);
     printf("Enter sem2:");
     scanf("%d",&sem2);
     printf("Enter sem3:");
     scanf("%d",&sem3);
     printf("Enter sem4:");
     scanf("%d",&sem4);
     if(sem1==2 || sem2==2)
     {
      fp=fopen("test.txt","r");
      if(fp==NULL)
       {
        printf("Error opening the file sem1\n");
       }
       while(!ferror(fp) && !feof(fp))
       {
        if(fgets(str[line],1000,fp)!=NULL)
           line++;
        }
        fclose(fp);
        /*printf("SUBJECTS FOR SEM2:\n");
        for(i=0;i<line;i++)
        {
        printf("%s",str[i]);
        }*/
    }
     if(sem1==4 || sem2==4)
     {
    fp2=fopen("sem4.txt","r");
    if(fp2==NULL)
    {
        printf("Error opening the file sem4\n");
    }
    while(!ferror(fp2) && !feof(fp2))
    {
        if(fgets(t[line2],1000,fp2)!=NULL)
           line2++;
    }
    fclose(fp2);
    /*printf("SUBJECTS FOR SEM4:\n");
    for(i=0;i<line2;i++)
    {
        printf("%s",t[i]);
    }*/
     }

    if(sem3==6||sem4==6)
     {
    fp3=fopen("sem6.txt","r");
    if(fp3==NULL)
    {
        printf("Error opening the file sem6\n");
    }
    while(!ferror(fp3) && !feof(fp3))
    {
        if(fgets(u[line3],1000,fp3)!=NULL)
           line3++;
    }
    fclose(fp3);
    /*printf("SUBJECTS FOR 6th SEM:\n");
    for(i=0;i<line3;i++)
    {
        printf("%s",u[i]);
    }*/
    }

    if(sem3==8||sem4==8)
    {
     fp4=fopen("sem8.txt","r");
    if(fp4==NULL)
    {
        printf("Error opening the file sem4\n");
    }
    while(!ferror(fp4) && !feof(fp4))
    {
        if(fgets(v[line4],1000,fp4)!=NULL)
           line4++;
    }
    fclose(fp4);
    /*printf("SUBJECTS FOR 8TH SEM:\n");
    for(i=0;i<line4;i++)
    {
        printf("%s\n",v[i]);
    }*/
    }
f2=fopen("con2.txt","r");
if(f2==NULL)
    {
      printf("Error opening the file sem2\n");
    }
while(!ferror(f2) && !feof(f2))
    {
      //if(fgets(w[l2],1000,f2)!=NULL)
      fscanf(f2,"%s\n",w[l2]);
        l2++;
    }
fclose(f2);
f4=fopen("con4.txt","r");
if(f4==NULL)
    {
      printf("Error opening the file sem4\n");
    }
while(!ferror(f4) && !feof(f4))
    {
      //if(fgets(x[l4],8,f4)!=NULL)
        fscanf(f4,"%s\n",x[l4]);
        l4++;
    }
fclose(f4);
f6=fopen("con6.txt","r");
if(f6==NULL)
    {
      printf("Error opening the file sem6\n");
    }
while(!ferror(f6) && !feof(f6))
    {
      //if(fgets(y[l6],1000,f6)!=NULL)
        fscanf(f6,"%s\n",y[l6]);
        l6++;
    }
fclose(f6);
f8=fopen("con8.txt","r");
if(f8==NULL)
    {
      printf("Error opening the file sem8\n");
    }
while(!ferror(f8) && !feof(f8))
    {
      //if(fgets(z[l8],1000,f8)!=NULL)
        fscanf(f8,"%s\n",z[l8]);
        l8++;
    }
fclose(f8);

f1=fopen("prof.txt","r");
if(f1==NULL)
    {
      printf("Error opening the file prof\n");
    }
while(!ferror(f1) && !feof(f1))
    {
      //if(fgets(z[l8],1000,f8)!=NULL)
       if(fgets(pro[l1],1000,f1)!=NULL)
           l1++;
    }
fclose(f1);

    printf("Enter the start date:");
    scanf("%d",&st);
   printf("Enter the day..\n1)Monday\n2)Tuesday\n3) Wednesday\n4) Thursday\n5) Friday\n6) Saturday\n7)Sunday\n");
   scanf("%d",&day);
   printf("Enter the end date:");
   scanf ("%d",&en);
   printf("Enter the start month:");
   scanf("%d",&mon1);
   printf("Enter the end month:");
   scanf("%d",&mon2);
   printf("Enter the year:");
   scanf("%d",&year);
   
    if(mon1==mon2)
    {
        m=0;
        for(i=st;i<=en;i++)
        {
            dates[m][0]=i;
            dates[m][1]=mon1;
            m++;
        }
        l=(en-st)+2;
        /*for(i=0;i<=l;i++)
        {
            for(j=0;j<=l;j++)
            {
            if(dates[i][j]!=0)
            printf("%d\t",dates[i][j]);
            }
        }*/
    }
    
    else if(mon1!=mon2)
    {
    if(mon1==1||mon1==3||mon1==5||mon1==7||mon1==8||mon1==10||mon1==12)
    {
        daysm=31;
    }
    else 
    {
        daysm=30;
    }
    
    if(daysm==31)
    {
        m=0;
        s=(daysm-st)+1;
        for(i=st;i<=31;i++)
        {
            dates[m][0]=i;
            dates[m][1]=mon1;
            m++;
        }
        for(j=1;j<=en;j++)
        {
            dates[s][0]=j;
            dates[s][1]=mon2;
            s++;
        }
    }
    if(daysm==30)
    {
        m=0;
        s=(daysm-st)+1;
        for(i=st;i<=30;i++)
        {
            dates[m][0]=i;
            dates[m][1]=mon1;
            m++;
        }
        for(j=1;j<=en;j++)
        {
            dates[s][0]=j;
            dates[s][1]=mon2;
            s++;
        }
    }
    p=(daysm-st)+en;
    /*for(i=0;i<=p;i++)
    {
        for(j=0;j<=s;j++)
        {
           if(dates[i][j]!=0)  
           printf("%d\t\n",dates[i][j]);
        }
    }*/
    }
 if(mon1!=mon2)
 {
     printf("\n************************************\n");
     printf("\nTIMETABLE FOR 2ND SEM AND 4TH SEM:\n");
     printf("\n************************************\n");
      m=0;
      for(I=0;I<p;I=I+3)
      {
         if(day%7==0)
          {
            printf("----------------------------\n");
            printf("%d-%d-%d \t %s \t%s\n",dates[I+2][0],dates[I+2][1],year,str[m],t[m]); 
            day=day+3;
            m++;
            suc[r][0]=dates[I+2][0];
            suc[r][1]=dates[I+2][1];
            r++;
          }
          else
         {
           if(m==6)
           {
             break;
           }
           else
           {
           printf("------------------------------\n");
           printf("%d-%d-%d \t %s \t%s\n",dates[I][0],dates[I][1],year,str[m],t[m]);
           m++;
           day=day+3;
           suc[r][0]=dates[I][0];
           suc[r][1]=dates[I][1];
           r++;
           }
          
        }
      }
      printf("\n************************************\n");
      printf("TIMETABLE FOR 6TH AND 8TH SEM:\n");
      printf("\n************************************\n");
      m=0;
      for(I=1;I<=p;I=I+3)
      {
         if(day%7==0)
          {
            printf("-----------------------------\n");
            printf("%d-%d-%d \t %s \t%s\n",dates[I+1][0],dates[I+1][1],year,u[m],v[m]); 
            day=day+4;
            m++;
            suc[r][0]=dates[I+1][0];
            suc[r][1]=dates[I+1][1];
            r++;
          }
          else
         {
           if(m==6)
           {
            break;
           }
           else
           {
           printf("-----------------------------\n");
           printf("%d-%d-%d \t %s \t%s\n",dates[I][0],dates[I][1],year,u[m],v[m]);
           m++;
           day=day+4;
           suc[r][0]=dates[I][0];
           suc[r][1]=dates[I][1];
           r++;
           }
          
        }
      }
   }
 if(mon1==mon2)
{
   printf("\n************************************\n");
   printf("\nTIMETABLE FOR 2ND SEM AND 4TH SEM:\n");
   printf("\n************************************\n");
   m=0;
   for(I=0;I<=l;I=I+3)
      {
         if(day%7==0)
          {
            printf("--------------------------\n");
            printf("%d-%d-%d  %s \t%s\n",dates[I+2][0],dates[I+2][1],year,str[m],t[m]); 
            day=day+3;
            m++;
            suc[r][0]=dates[I+2][0];
            suc[r][1]=dates[I+2][1];
            r++;
          }
          else
         {
           if(m==6)
           {
            break;
           }
           else
           {
           printf("-------------------------------\n");
           printf("%d-%d-%d  %s \t%s\n",dates[I][0],dates[I][1],year,str[m],t[m]);
           m++;
           day=day+3;
           suc[r][0]=dates[I][0];
           suc[r][1]=dates[I][1];
            r++;
           }
          
        }
      }
  printf("\n************************************\n");
  printf("TIMETABLE FOR 6TH AND 8TH SEM:\n");
  printf("\n************************************\n");
   m=0;
   for(I=1;I<=l;I=I+3)
      {
         if(day%7==0)
          {
            printf("--------------------------\n");
            printf("%d-%d-%d  %s \t%s\n",dates[I+1][0],dates[I+1][1],year,u[m],v[m]); 
            day=day+4;
            m++;
            suc[r][0]=dates[I+1][0];
            suc[r][1]=dates[I+1][1];
            r++;
          }
          else
         {
           if(m==6)
           {
            break;
           }
           else
           {
           printf("-------------------------------\n");
           printf("%d-%d-%d  %s \t%s\n",dates[I][0],dates[I][1],year,u[m],v[m]);
           m++;
           day=day+4;
           suc[r][0]=dates[I][0];
           suc[r][1]=dates[I][1];
           r++;
           }
          
        }
      }
   }
printf("\t\t\tCONSOLIDATED TIMETABLE\n");
printf("DATE\t\t  SEM2\t\t  SEM4\t\t  SEM6\t\t  SEM8\n");
for(i=0;i<12;i++)
{
printf("%d-%d-%d     %s\t\t%s              %s\t\t%s\n",suc[i][0],suc[i][1],year,w[g],x[g],y[g],z[g]);
    g++;
}
printf(" ");
printf("\n****************************\n");
printf("\n HALL TICKET GENERATION\n");
printf("\n****************************\n");
printf("Enter name:");
scanf("%s",name);
printf("Enter register number:");
scanf("%d",&reg);
if(reg>=21000 && reg<=21117)
{
   printf("\nSRI SIVASUBRAMANIYA NADAR COLLEGE OF ENGINEERING\n");
   printf("\t\t\t\t\tNAME:  %s\n",name);
   printf("\t\t\t\t\tSEMESTER:SECOND(2nd)\n");
   m=0;
   printf("\nDATE              SUBJECTS\n");
   for(I=0;I<=l;I=I+3)
      {
         if(day%7==0)
          {
            printf("\n----------------------------------------------\n");
            printf("%d-%d-%d  %s\n",dates[I+2][0],dates[I+2][1],year,str[m]); 
            day=day+3;
            m++;
          }
          else
         {
           if(m==6)
           {
            break;
           }
           else
           {
           printf("\n--------------------------------------------------\n");
           printf("%d-%d-%d  %s\n",dates[I][0],dates[I][1],year,str[m]);
           m++;
           day=day+3;
           }
          
        }
      }
}
if(reg>=20000 && reg<=20123)
{

   printf("\nSRI SIVASUBRAMANIYA NADAR COLLEGE OF ENGINEERING\n");
   printf("\t\t\t\t\tNAME:    %s\n",name);
   printf("\t\t\t\t\tSEMESTER:FOURTH(4th)\n");
    m=0;
    printf("\nDATE               SUBJECTS\n");
   for(I=0;I<=l;I=I+3)
      {
         if(day%7==0)
          {
            printf("---------------------------------------------\n");
            printf("%d-%d-%d  %s\n",dates[I+2][0],dates[I+2][1],year,t[m]); 
            day=day+3;
            m++;
          }
          else
         {
           if(m==6)
           {
            break;
           }
           else
           {
           printf("-----------------------------------------------\n");
           printf("%d-%d-%d  %s\n",dates[I][0],dates[I][1],year,t[m]);
           m++;
           day=day+3;
           }
          
        }
      }
}
if(reg>=19000 && reg<=19115)
{
   printf("\nSRI SIVASUBRAMANIYA NADAR COLLEGE OF ENGINEERING\n");
   printf("\t\t\t\t\tNAME:    %s\n",name);
   printf("\t\t\t\t\tSEMESTER:SIXTH(6th)\n");
   m=0;
   printf("\nDATE              SUBJECTS\n");
   for(I=1;I<=l;I=I+3)
      {
         if(day%7==0)
          {
            printf("------------------------------------------\n");
            printf("%d-%d-%d  %s\n",dates[I+1][0],dates[I+1][1],year,u[m]); 
            day=day+4;
            m++;
          }
          else
         {
           if(m==6)
           {
            break;
           }
           else
           {
           printf("------------------------------------------\n");
           printf("%d-%d-%d  %s \n",dates[I][0],dates[I][1],year,u[m]);
           m++;
           day=day+4;
           }
          
        }
      }
   } 
if(reg>=18000 && reg<=18122)
{
   printf("\nSRI SIVASUBRAMANIYA NADAR COLLEGE OF ENGINEERING\n");
   printf("\t\t\t\t\tNAME:    %s\n",name);
   printf("\t\t\t\t\tSEMESTER:EIGHTH(8th)\n");
   m=0;
   printf("\nDATE              SUBJECTS\n");
   for(I=1;I<=l;I=I+3)
      {
         if(day%7==0)
          {
            printf("-----------------------------------------\n");
            printf("%d-%d-%d  %s \n",dates[I+1][0],dates[I+1][1],year,v[m]); 
            day=day+4;
            m++;
          }
          else
         {
           if(m==2)
           {
            break;
           }
           else
           {
           printf("-----------------------------------------------\n");
           printf("%d-%d-%d  %s \n",dates[I][0],dates[I][1],year,v[m]);
           m++;
           day=day+4;
           }
          
        }
      }
   }

  //room allotment
   printf("\nEnter the number of rooms: \n");
   scanf("%d",&M);
   printf("\nEnter the occupancy: \n");
   scanf("%d",&o);
   X=M/2;
   if(X*o<(fir+sec)){
      printf("INSUFFICIENT SPACE\n");
   }
   else{
   avg=fir/X;
   printf("-----------------------------");
   printf("    EXAM HALL ALLOTMENT      ");
   printf("-----------------------------");
   printf("\n FOR SEM 2 AND SEM 4:\n");
   printf("ROOM NO:  |   1yr     |  2yr\n");
   printf("---------------------------------------\n");
    for(Y=1;Y<=X;Y++){
        if (Y<X){
        printf("CS %d    | %d - %d | %d - %d\n",100+Y,Z,Z+avg-1,K,K+avg-1);
        printf("-----------------------------------------\n");

        }
        else{
            printf("CS %d    | %d - %d | %d - %d\n",Y+100,Z,21117,K,20123);
            printf("-----------------------------------------\n");
        }
        Z+=avg;
        K+=avg;

    }
   }
    if(X*o<(fir+sec)){
    printf("RE-CHECK THE NUMBER OF ROOMS \n");
    }
    else{
   printf("\n FOR SEM 6 AND SEM 8:\n");
   printf("ROOM NO:  |   3rd yr     |  4th yr\n");
   printf("---------------------------------------\n");
    for(R=1;R<=X;R++){
        if (R<X){
        printf("CS %d    | %d - %d | %d - %d\n",R+100,P,P+avg-1,q,q+avg-1);
        printf("-----------------------------------------\n");

        }
        else{
            printf("CS %d    | %d - %d | %d - %d\n",R+100,P,19115,q,18122);
            printf("-----------------------------------------\n");
        }
        P=P+avg;
        q=q+avg;

    }
    }

int jan[ ]={1,3,4,5,6,7,8,10,11,12,13,14,15,17,18,19,20,21,22,24,25,26,27,28,29,31};
int feb[ ]={1,2,3,4,5,7,8,9,10,11,12,14,15,16,17,18,19,21,22,23,24,25,26,28,29,30,31};
int mar[ ]={1,2,3,4,5,7,8,9,10,11,12,14,15,16,17,18,19,21,22,23,24,25,26,28,29,30,31};
int apr[ ]={1,2,4,5,6,7,8,9,11,12,13,14,15,16,18,19,20,21,22,23,25,26,27,28,29,30,31};
int may[ ]={1,2,3,4,5,6,7,9,10,11,12,13,14,16,17,18,19,20,21,23,24,25,26,27,28,30,31};
int jun[ ]={1,2,3,4,6,7,8,9,10,11,13,14,15,16,17,18,20,21,22,23,24,25,27,28,29,30,31};
int jul[ ]={1,2,4,5,6,7,8,9,11,12,13,14,15,16,18,19,20,21,22,23,25,26,27,28,29,30};
int aug[ ]={1,2,3,4,5,6,8,9,10,11,12,13,15,16,17,18,19,20,22,23,24,25,26,27,29,30,31};
int sep[ ]={1,2,3,5,6,7,8,9,10,12,13,14,15,16,17,19,20,21,22,23,24,26,27,28,29,30,31};
int oct[ ]={1,3,4,5,6,7,8,10,11,12,13,14,15,17,18,19,20,21,22,24,25,26,27,28,29,31};
int nov[ ]={1,3,4,5,6,7,8,10,11,12,13,14,15,17,18,19,20,21,22,24,25,26,27,28,29,31};
int dec[ ]={1,2,3,5,6,7,8,9,10,12,13,14,15,16,17,19,20,21,22,23,24,26,27,28,29,30,31};
int A,W,e;
char ceven[25][10]={"UEN1276", "UMA1276", "UPH1276",	"UCY1276", "UEE1276", "UCS1201" ,"UCS1400" ,"UCS1403" ,"UCS1401" ,"UCS1402" ,"UCS1403" ,"UCS1405" ,"UCS1602" ,"UCS1601" ,"UCS1602", "UCS1604" ,"UPE1605" ,"UOE1606" ,"UPE1704" ,"UOE1705","-------","-------","-------"};
char codd[25][10]={"UEN1176", "UMA1176", "UPH1176", "UCY1176", "UGE1176", "UGE1177",	"UMA1377", "UCS1301", "UCS1302", "UCS1305", "UCS1303", "UEC1351", "UCS1501", "UCS1502", "UCS1503","UCS1504", "UCS1505", "UPE1506", "UCS1701", "UCS1702", "UCS1703", "UCS1704", "UPE1705", "UPE1707"};
printf("\n\t enter the month for conducting arrear exams\n");


scanf("%d",&A);

printf("\n------------------- TIMETABLE FOR ARREAR STUDENTS ------------------\n");
  if(A==9){
    printf("\n\tSUBJECTS OF SEM 1 & 2:\n");
    printf("\n\t-----------------------------------------------------\n");
    printf("\n\t    DATE    |  FORENOON   |   AFTERNOON  |  HALL NO  \n");
    printf("\n\t-----------------------------------------------------\n");
    
    for(W=0;W<6;W++){  
      printf("\n\t%d-%d-%d   |   %s   |   %s  | CS 001-005 \n",sep[W],A,year,ceven[W],codd[W]);
      
    }
    printf("\n\t\t\t********************************\n");
    printf("\n\tSUBJECTS OF SEM 3 & 4:\n");
    printf("\n\t-----------------------------------------------------\n");
    printf("\n\t    DATE    |  FORENOON   |   AFTERNOON  |  HALL  NO  \n");
    printf("\n\t-----------------------------------------------------\n");
    for(W=5;W<11;W++){
      printf("\n\t%d-%d-%d   |   %s   |   %s    | CS 301-305\n",sep[W],A,year,ceven[W],codd[W]);
      
    }
    printf("\n\t\t\t********************************\n");
    printf("\n\tSUBJECTS OF SEM 5 & 6:\n");
    printf("\n\t-----------------------------------------------------\n");
    printf("\n\t    DATE    |  FORENOON   |   AFTERNOON  | HALL NO  \n");
    printf("\n\t-----------------------------------------------------\n");
    for(W=11;W<17;W++){
      printf("\n\t%d-%d-%d   |   %s   |    %s   | CS 101-105\n",sep[W],A,year,ceven[W],codd[W]);
      
    }
    printf("\n\t\t\t********************************\n");
    printf("\n\tSUBJECTS OF SEM 7 & 8:\n");
    printf("\n\t-----------------------------------------------------\n");
    printf("\n\t    DATE    |  FORENOON   |   AFTERNOON  |  HALL NO  \n");
    printf("\n\t-----------------------------------------------------\n");
    for(W=17;W<23;W++){
        printf("\n\t %d-%d-%d  |   %s    |    %s   | CS 201-205\n",sep[W],A,year,ceven[W],codd[W]);
    }
  }
   if(A==8){
    printf("\n\tSUBJECTS OF SEM 1 & 2:\n");
    printf("\n\t-----------------------------------------------------\n");
    printf("\n\t    DATE    |  FORENOON   |   AFTERNOON  |  HALL NO  \n");
    printf("\n\t-----------------------------------------------------\n");
    
    for(W=0;W<6;W++){  
      printf("\n\t%d-%d-%d   |   %s   |   %s  | CS 001-005 \n",aug[W],A,year,ceven[W],codd[W]);
      
    }
    printf("\n\t\t\t********************************\n");
    printf("\n\tSUBJECTS OF SEM 3 & 4:\n");
    printf("\n\t-----------------------------------------------------\n");
    printf("\n\t    DATE    |  FORENOON   |   AFTERNOON  |  HALL  NO  \n");
    printf("\n\t-----------------------------------------------------\n");
    for(W=5;W<11;W++){
      printf("\n\t%d-%d-%d   |   %s   |   %s    | CS 301-305\n",aug[W],A,year,ceven[W],codd[W]);
      
    }
    printf("\n\t\t\t********************************\n");
    printf("\n\tSUBJECTS OF SEM 5 & 6:\n");
    printf("\n\t-----------------------------------------------------\n");
    printf("\n\t    DATE    |  FORENOON   |   AFTERNOON  | HALL NO  \n");
    printf("\n\t-----------------------------------------------------\n");
    for(W=11;W<17;W++){
      printf("\n\t%d-%d-%d   |   %s   |    %s   | CS 101-105\n",aug[W],A,year,ceven[W],codd[W]);
      
    }
    printf("\n\t\t\t********************************\n");
    printf("\n\tSUBJECTS OF SEM 7 & 8:\n");
    printf("\n\t-----------------------------------------------------\n");
    printf("\n\t    DATE    |  FORENOON   |   AFTERNOON  |  HALL NO  \n");
    printf("\n\t-----------------------------------------------------\n");
    for(W=17;W<23;W++){
        printf("\n\t %d-%d-%d  |   %s    |    %s   | CS 201-205\n",aug[W],A,year,ceven[W],codd[W]);
    
    }
  }
   if(A==4){
    printf("\n\tSUBJECTS OF SEM 1 & 2:\n");
    printf("\n\t-----------------------------------------------------\n");
    printf("\n\t    DATE    |  FORENOON   |   AFTERNOON  |  HALL NO  \n");
    printf("\n\t-----------------------------------------------------\n");
    
    for(W=0;W<6;W++){  
      printf("\n\t%d-%d-%d   |   %s   |   %s  | CS 001-005 \n",apr[W],A,year,ceven[W],codd[W]);
      
    }
    printf("\n\t\t\t********************************\n");
    printf("\n\tSUBJECTS OF SEM 3 & 4:\n");
    printf("\n\t-----------------------------------------------------\n");
    printf("\n\t    DATE    |  FORENOON   |   AFTERNOON  |  HALL  NO  \n");
    printf("\n\t-----------------------------------------------------\n");
    for(W=5;W<11;W++){
      printf("\n\t%d-%d-%d   |   %s   |   %s    | CS 301-305\n",apr[W],A,year,ceven[W],codd[W]);
      
    }
    printf("\n\t\t\t********************************\n");
    printf("\n\tSUBJECTS OF SEM 5 & 6:\n");
    printf("\n\t-----------------------------------------------------\n");
    printf("\n\t    DATE    |  FORENOON   |   AFTERNOON  | HALL NO  \n");
    printf("\n\t-----------------------------------------------------\n");
    for(W=11;W<17;W++){
      printf("\n\t%d-%d-%d   |   %s   |    %s   | CS 101-105\n",apr[W],A,year,ceven[W],codd[W]);
      
    }
    printf("\n\t\t\t********************************\n");
    printf("\n\tSUBJECTS OF SEM 7 & 8:\n");
    printf("\n\t-----------------------------------------------------\n");
    printf("\n\t    DATE    |  FORENOON   |   AFTERNOON  |  HALL NO  \n");
    printf("\n\t-----------------------------------------------------\n");
    for(W=17;W<23;W++){
        printf("\n\t %d-%d-%d  |   %s    |    %s   | CS 201-205\n",apr[W],A,year,ceven[W],codd[W]);
    
    }
  }
if(A==5){
    printf("\n\tSUBJECTS OF SEM 1 & 2:\n");
    printf("\n\t-----------------------------------------------------\n");
    printf("\n\t    DATE    |  FORENOON   |   AFTERNOON  |  HALL NO  \n");
    printf("\n\t-----------------------------------------------------\n");
    
    for(W=0;W<6;W++){  
      printf("\n\t%d-%d-%d   |   %s   |   %s  | CS 001-005 \n",may[W],A,year,ceven[W],codd[W]);
      
    }
    printf("\n\t\t\t********************************\n");
    printf("\n\tSUBJECTS OF SEM 3 & 4:\n");
    printf("\n\t-----------------------------------------------------\n");
    printf("\n\t    DATE    |  FORENOON   |   AFTERNOON  |  HALL  NO  \n");
    printf("\n\t-----------------------------------------------------\n");
    for(W=5;W<11;W++){
      printf("\n\t%d-%d-%d   |   %s   |   %s    | CS 301-305\n",may[W],A,year,ceven[W],codd[W]);
      
    }
    printf("\n\t\t\t********************************\n");
    printf("\n\tSUBJECTS OF SEM 5 & 6:\n");
    printf("\n\t-----------------------------------------------------\n");
    printf("\n\t    DATE    |  FORENOON   |   AFTERNOON  | HALL NO  \n");
    printf("\n\t-----------------------------------------------------\n");
    for(W=11;W<17;W++){
      printf("\n\t%d-%d-%d   |   %s   |    %s   | CS 101-105\n",may[W],A,year,ceven[W],codd[W]);
      
    }
    printf("\n\t\t\t********************************\n");
    printf("\n\tSUBJECTS OF SEM 7 & 8:\n");
    printf("\n\t-----------------------------------------------------\n");
    printf("\n\t    DATE    |  FORENOON   |   AFTERNOON  |  HALL NO  \n");
    printf("\n\t-----------------------------------------------------\n");
    for(W=17;W<23;W++){
        printf("\n\t %d-%d-%d  |   %s    |    %s   | CS 201-205\n",may[W],A,year,ceven[W],codd[W]);
    
    }
  }

  //INVIGILATOR ALLOTMENT
  Y=100;
  X=M/2;
  printf("ROOM NO             INVIGILATORS\n");
  for(i=0;i<X;i++)
  {
    printf("%d     %s\n",1+Y,pro[i]);
    Y++;
  }
}