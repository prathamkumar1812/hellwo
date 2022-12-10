 #include <stdio.h>
 int main()
 {
     int u,t,a;
     float s;
     printf("ENTER the value of a\n");
     scanf("%d",&a);
     printf("ENTER the value of u\n");
     scanf("%d",&u);
     printf("ENTER the value of t\n");
     scanf("%d",&t);
     s= u*t +(a*t*t)*0.5;
     printf(
        " The value of s is %f\n",s);

     return 0;
}