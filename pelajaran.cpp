#include <iostream>
#include "pelajaran.h"

pelajaran create_pelajaran(std::string namapel, std::string kodepel) {
    pelajaran p;
    p.namaMapel = namapel;
    p.kodeMapel = kodepel;
    return p;
}

void tampil_pelajaran(pelajaran pel) {
    std::cout << "nama pelajaran : " << pel.namaMapel << std::endl;
    std::cout << "nilai : " << pel.kodeMapel << std::endl;
}