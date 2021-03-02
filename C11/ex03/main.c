
#include <unistd.h>
int ft_putnbr(int el1,int el2)
{
    return (el2 - el1);
}
int ft_is_sort(int *tab, int length, int(*f)(int, int));

#include <stdio.h>
int main(/*int argc, char **argv*/)
{
    
//    (void)argc;
//    (void)argv;
    int ch[5] = [1,2,3,4,5];
        printf("%d \n",ft_is_sort(ch,5,&ft_putnbr));
//        ch1++;
//    }
}
