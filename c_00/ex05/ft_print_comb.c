#include <unistd.h>
 void ft_print_comb()
{
    for(char i = '0' ; i <= '7' ; i++)
    {
        for (char j = i+1; j <= '8'; ++j)
        {
            for (char k = j+1; k <= '9'; ++k)
            {
                char str[4] = {i,j,k, '\n'};
                write(1, str, 4);
            }
        }
    }
}