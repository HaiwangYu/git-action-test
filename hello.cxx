#include <iostream>

namespace MyNamespace
{
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
    std::cout<< "Hello\n";
    return 0;
}