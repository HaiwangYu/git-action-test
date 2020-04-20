#include <iostream>

namespace MyNamespace
{
    /*
     * A multi-line doxygen
     * style commnet
     */
    class Foo
{
   public:
    Foo() {}

   protected:
    int m_i;
};
}  // namespace MyNamespace

int main()
{
    std::cout << "Hello\n";
    std::cout << "World\n";
    return 0;
}