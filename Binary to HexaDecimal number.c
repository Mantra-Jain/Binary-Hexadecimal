#include<stdio.h>
#include<math.h>
#include<string.h>

void main()
{
    int rev[20],a[20],b[20],c[20];
    int i,j,k,l,flag,cntint,cntfra;
    int rem,num1,num3;
    float rem1,dno,num2,num4;
    char s[20];
    cntint=cntfra=0;
    flag=l=0;
    rem=0;
    printf("ENTER THE BINARY NO : ");
    scanf("%s",&s);
    for(i=0,j=0,k=0;i<strlen(s);i++)
    {
        if(s[i]=='.')
        {
            flag=1;
        }
        else if(flag==0)
            a[k++]=s[i]-48;
        else if(flag==1)
            b[j++]=s[i]-48;
    }
    cntint=k;
    cntfra=j;
    for(j=0,i=cntint-1;j<cntint;j++,i--)
    {
        rem = rem + (a[j] * pow(2,i));
    }
    for(k=0,i=1;k<cntfra;k++,i++)
    {
        rem1 = rem1 + (b[k] / pow(2,i));
    }
    rem1 = rem + rem1;
    dno=rem1;
    num1 = (int)dno;
    num2 = dno - num1;
    i=0;
    while(num1!=0)
    {
        rem = num1 % 16;
        rev[i] = rem;
        num1 = num1 / 16;
        i++;
    }
    j=0;
    while(num2!=0.0)
    {
        num2 =num2 * 16;
        num3 = (int) num2;
        num4 = num2 - num3;
        num2 = num4;
        c[j] = num3;
        j++;
        if(j==4)
        {
            break;
        }
    }
    l=i;
    printf("\nTHE HEXADECIMAL VALUE OF GIVEN BINARY NO IS : ");
    for(i=l-1;i>=0;i--)
    {
        if(rev[i] ==10)
        printf("A");
        else if(rev[i] ==11)
        printf("B");
        else if(rev[i] ==12)
        printf("C");
        else if(rev[i] ==13)
        printf("D");
        else if(rev[i] ==14)
        printf("E");
        else if(rev[i] ==15)
        printf("F");
        else
        printf("%d",rev[i]);
    }
    printf(".");
    for(k=0;k<j;k++)
    {
        if(c[k] ==10)
            printf("A");
        else if(c[k] ==11)
            printf("B");
        else if(c[k] ==12)
            printf("C");
        else if(c[k] ==13)
            printf("D");
        else if(c[k] ==14)
            printf("E");
        else if(c[k] ==15)
            printf("F");
        else
            printf("%d",c[k]);
    }
}
