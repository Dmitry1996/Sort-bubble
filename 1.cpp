#include <iostream>
#include <ctime>
 
void SortMass(int* m, int n)
{
     for(int i = n - 1; i >= 1; i--)
       for(int j = 0; j < i; j++)
       {
               if(m[j] > m[j+1])
               {
                       int foo = m[j];
                       m[j] = m[j+1];
                       m[j+1] = foo;
               }
       }  
}
 
int main ()
{
    std::cout << "Bedute n: ";
    int n = 0;
    int* m;
    std::cin >> n;
    m = new int[n];
    srand(time(0));
    for(int i = 0; i < n; i++)
    {
            int x = rand()%100;
            m[i] = x;
            std::cout << m[i] << ' ';
    }
    std::cout << std::endl;
    SortMass(m, n);
    std::cout << "After sort" << std::endl;
    for(int i = 0; i < n; i++)
      std::cout << m[i] << ' ';
    std::cin.get();
    std::cin.get();
}
