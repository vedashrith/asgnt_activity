//Given a string, s, consisting of alphabets and digits, find the frequency of each digit in the given string.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[1000];
    int num,i,j,cnt,ch=48;
    
    scanf("%[^\n]%*c",&str);
    num=strlen(str);
    for(i=0;i<10;i++)
    {
        cnt=0;
        for(j=0;j<num;j++)
        {
            if(str[j]==ch)
            {
                cnt++;
            }
        }
        printf("%d ",cnt);
            ch++;
    }
    
    
    return 0;
}

