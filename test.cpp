#include <iostream>

// template<typename T>
// class Array
// {
//     T *a;
//     int sizes;
//     public:
//         Array(int n) {
//             a  = new T[n];
//             sizes = n;
//         }
//         void   charge(T *s){
//             int i = 0;
//             for(int i = 0; i < sizes; i++)
//             {
//                 a[i] = s[i];
//             }
//         }
//         Array& operator[](int l)
//         {
//             if(l > sizes)
//                 throw ;
//             return (a[l]);
//         }
//         ~Array(){
//             delete[] a;
//         }
//         int size()
//         {
//             int i = 0;
//             while (a[i])
//             {
//                 i++;
//             }
//             return i;
//         }
// };

const int size = 10;

class Array{
    int a[2];
    public:
        Array(){
            for(int k = 0; k < size; k++)
                a[k] = k;
        }
        // int& operator[](int i){
        //     if(i > size)
        //         throw std::exception();
        //     return (a[i]);
        // }
};

int main()
{
    // Array<int> s(4);

    // int z[] = {1, 2, 3, 4};
    // s.charge(z);

    // std::cout << s.size() << std::endl;
    Array s;
    try
    {
        s[0] = 10;
        // std::cout << s[0] << std::endl;
    }
    catch(...)
    {
        std::cout << "Error out of bound" << std::endl;
    }
}