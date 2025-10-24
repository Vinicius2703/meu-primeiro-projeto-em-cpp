#pragma once
#include <string>
#include "jogador.h"

class historia {
    public:
        historia() = default;

        std::string iniciar();

        void system_inicio();

        int historia_showtime(int a, std::string nome);
};