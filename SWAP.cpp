void swap(int*,int*);
main()
{
 int a,b;
 clrscr();
 printf("Enter two numbers");
 scanf("%d%d",&a,&b);
 swap(&a,&b); //call by reference
 printf("a=%d b=%d",a,b);
 getch();
}
void swap(int *x,int *y)//formal arguments
{
 int t;
 t=*x;
 *x=*y;
 *y=t;
}
