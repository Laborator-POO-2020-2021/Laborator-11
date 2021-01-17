#include "capitala.h++"
#include "municipiu.h++"
#include "tara.h++"

int main() {
    Localitate *v;
    v = new Localitate[ 6 ];
    v[ 0 ] = Localitate("Bacau", 100, 200);
    v[ 1 ] = Oras(100, v[ 0 ]);
    std::cout << v[ 0 ] << '\n';
    std::cout << v[ 1 ];

    return 0;
}