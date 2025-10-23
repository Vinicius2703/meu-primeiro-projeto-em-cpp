#pragma once
#include "historia.h"
#include <string>

class mapas : public historia{
private:
    int final_boss;
public:

    mapas() = default;

    std::string lobby_tv_time();

    int showtime(int a);

    void loja();

    void sai_tv();

    
};

