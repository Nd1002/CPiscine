
#include <unistd.h>
int ft_putnbr(char *ch)
{
    while(*ch != '\0')
    {
        if(*ch < 48 || *ch > 57)
        {
            return (1);
        }
        ch++;
    }
    return (0);
}
int ft_count_if(char **tab, int length, int(*f)(char*));

#include <stdio.h>
int main(int argc, char **argv)
{
    
    (void)argc;
    argv++;
        printf("%d \n",ft_count_if(argv,&ft_putnbr));
//        ch1++;
//    }
}
