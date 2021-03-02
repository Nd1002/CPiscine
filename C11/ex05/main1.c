#include <stdio.h>
#include <unistd.h>

void    ft_putnbr(int nb);
int     ft_atoi(char *str);
int do_op(char **argv)
{
    int i;
    int res;
    
    argv++;
    while (argv[2][i] != '\0')
        i++;
    if ( i != 1)
    {
        write(1, "0", 1);
        return (0);
    }
    int a = ft_atoi(argv[1]);
    int b = ft_atoi(argv[3]);
    if(argv[2][0] == 43)
    {
        res = a + b;
        ft_putnbr(res);
        return (0);
    }
    else if (argv[2][0] == 45)
    {
        res = a - b;
        ft_putnbr(res);
        return (0);
    }
    else if (argv[2][0] == 42)
    {
        res = a * b;
        ft_putnbr(res);
        return (0);
    }
    else if (argv[2][0] == 47)
    {
        if (b == 0)
        {
            write(1,"Stop : division by zero\n",24);
            return (0);
        }
        res = a / b;
        ft_putnbr(res);
        return (0);
    }
    else if (argv[2][0] == 37)
      {
          if (b == 0)
          {
              write(1,"Stop : modulo by zero\n",22);
              return (0);
          }
          res = a % b;
          ft_putnbr(res);
          return (0);
      }
    else
    {
        write(1,"0",1);
        return (0);
    }
    return 0;
}

int main(int argc, char **argv)
{
    (void)argc;
   //do_op(argv);
    printf("%d \n",ft_atoi("123"));
  
}

