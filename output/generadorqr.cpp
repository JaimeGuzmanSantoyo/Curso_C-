#include <iostream>
using namespace std;
#include <vector>
#include "qrcodegen.hpp"    
using namespace qrcodegen; 
int main(){

std:: string texto= "https://www.facebook.com/jaime.guzman.50552338";

const QrCode qr = QrCode::encodeText(texto.c_str(), QrCode::Ecc::MEDIUM);

for (int y = 0; y < qr.getSize(); y++) {
        for (int x = 0; x < qr.getSize(); x++) {
            std::cout << (qr.getModule(x, y) ? "#" : " ");
        }
        std::cout << std::endl;
    }


return 0 ;
}