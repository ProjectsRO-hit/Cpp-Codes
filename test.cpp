// #include <iostream>

// using namespace std;
// int main()
// {

// 	for (size_t i{0}; i < 100000; ++i)
// 	{
// 		cout << "i : " << i << '\n';
// 	}
// 	cout << "Done" << endl;
// 	return 0;
// }

#include <iostream>
#include <sstream>

int main() {
    std::ostringstream buffer;

    for (int i = 0; i < 100000; ++i) {
        buffer << "Line " << i << '\n';
    }

    std::cout << buffer.str();
    return 0;
}
