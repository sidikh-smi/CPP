#include <iostream>

template<typename T>
class Array
{
    T *a;
    int sizes;
    public:
        Array(int n) {
            a  = new T[n];
            sizes = n;
        }
        void   charge(T *s){
            int i = 0;
            for(int i = 0; i < sizes; i++)
            {
                a[i] = s[i];
                std::cout << a[i] << " ";
            }
            std::cout << std::endl;
        }
        ~Array(){
            delete[] a;
        }
        int size()
        {
            int i = 0;
            while (a[i])
            {
                std::cout << a[i] << " ";
                i++;
            }
            return i;
        }
};

int main()
{
    Array<int> s(6);

    int z[] = {1, 2, 3, 4, 6};
    s.charge(z);
    std::cout << s.size() << std::endl;
}