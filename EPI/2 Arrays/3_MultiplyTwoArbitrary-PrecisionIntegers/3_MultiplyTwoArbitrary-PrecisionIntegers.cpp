#include <iostream>
#include <vector>

std::vector<int> multiplyAB(std::vector<int> A, std::vector<int> B)
{

    // tworzymy pusty wektor wynikowy 
    std::vector<int> result(A.size()+B.size(),0);

    for(size_t i = 0; i < A.size(); i++)
    {
        for(size_t j = 0; j < B.size(); j++)
        {
            int carryon = A[i]*B[j];
            result[i+j] = ( A[i]*B[j] + carryon ) % 10;
        }
    }
}


int main()
{

}