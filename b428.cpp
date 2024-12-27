# include <iostream>

int main() {
    std::string origin, result = "";
    while (std::cin >> origin >> result) {
        int k = result[0] - origin[0];
        if (result[0] < origin[0]) {
            k += 26;
        } 
        std::cout << k << std::endl;
    }  
}