#include <iostream>
int main()
{
    int i = 0, n, m, result;
    while (std::cin >> n >> m)
    {
 		i++;
 		result =(n-1) * ((m-1)* 6+3) + m*6;
      
        std::cout << "Case " << i <<": "<< result<< std::endl;
        
    }
    return 0;
}
