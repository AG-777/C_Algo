#include <stdio.h>
//method 1
int main()
{
	int n1,n2;
    float f1,f2;
    
    scanf("%d %d",&n1,&n2);
    scanf("%f %f",&f1,&f2);
    
    printf("%d %d\n%.1f %.1f\n",n1+n2,n1-n2,f1+f2,f1-f2);
    return 0;
}

/*
//method 2
int main()
{
    int n1,n2;
    float f1,f2;
    char l1[20],l2[20];
    scanf("%[^\n]",l1);
    sscanf(l1,"%d%d",&n1,&n2);
    scanf(" %[^\n]",l2);
    sscanf(l2,"%f%f",&f1,&f2);
    printf("%d %d\n%.1f %.1f\n",n1+n2,n1-n2,f1+f2,f1-f2);
    return 0;
}
*/