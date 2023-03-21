
#include <iostream>
#include <algorithm>
#include <vector>

template<class T>
void move_vectors(std::vector<T>& lv, std::vector<T>& rv) {
    lv = std::move(rv);
}

int main()
{
    std::vector <std::string> one = { "test_string1", "test_string2" };
    std::vector <std::string> two;
    std::cout << "[IN]: ";
    std::for_each(one.begin(), one.end(), [](const std::string& s)->void {std::cout << s << " "; });
    move_vectors(two, one);
    std::cout << "\n[OUT]: ";
    std::for_each(two.begin(), two.end(), [](const std::string& s)->void {std::cout << s << " "; });
}
