#include <stdarg.h>
#include <stdio.h>
void sort(int *stack, int l)
{
    int i = 0;
    int tmp[1];
    int m = l;
    while(m >= 0)
    {
        i = l - 1;
        while(i > 0)
        {
            if(stack[i - 1] < stack[i])
            {
                tmp[0] = stack[i];
                stack[i] = stack[i - 1];
                stack[i - 1] = tmp[0];
            }
            i--;
        }
        m--;
    }
    i = l - 1 ;
    while (i >= 0)
    {
        printf("%d ", stack[i]);
        i--;
    }
}
void va(int l, ...)
{
    int stack[l];
    int count = 0;
    va_list(groupi);
    va_start(groupi, l);
    while(count < l)
    {
        stack[count] = va_arg(groupi, int);
        count++;
    }
    //----------------//
    sort(stack, l);   
    //----------------//
}
int main()
{
    va(10, 1,12 ,123 ,1291 ,1 ,10 ,29 ,38 ,17 ,182);
    return (0);
}
