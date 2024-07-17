#include "list.hpp"


int main()
{
    List<int> l;
    std::cout << "Size : " << l.getSize() << std::endl;
    l.my_push_back(4);
    l.my_push_back(3);
    l.my_push_back(2);
    l.my_push_back(14);
    

    std::cout << l[0] << std::endl;
    std::cout << l[1] << std::endl;
    std::cout << l[2] << std::endl;
    std::cout << l[3] << std::endl;
    std::cout << "Size : " << l.getSize() << std::endl;
    l.pop_front();
    std::cout << "Size : " << l.getSize() << std::endl;
    l.push_front(22);
    std::cout << l[0] << std::endl;
    std::cout << l[1] << std::endl;
    std::cout << l[2] << std::endl;
    std::cout << l[3] << std::endl;
    std::cout << "Size : " << l.getSize() << std::endl;
    l.insert(57, 4);
    l.my_push_back(14);
    std::cout << l[0] << std::endl;
    std::cout << l[1] << std::endl;
    std::cout << l[2] << std::endl;
    std::cout << l[3] << std::endl;
    std::cout << l[4] << std::endl;
    std::cout << l[5] << std::endl;
    std::cout << "Size : " << l.getSize() << std::endl;
    l.remove(4);
    std::cout << l[0] << std::endl;
    std::cout << l[1] << std::endl;
    std::cout << l[2] << std::endl;
    std::cout << l[3] << std::endl;
    std::cout << "Size : " << l.getSize() << std::endl;
    l.pop_back();
    std::cout << l[0] << std::endl;
    std::cout << l[1] << std::endl;
    std::cout << l[2] << std::endl;
    std::cout << "Size : " << l.getSize() << std::endl;


    try {
        l.remove(4);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    try {
        l.insert(32, 5);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    try {
        std::cout << l[5] << std::endl;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    return 0;



}