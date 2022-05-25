#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

class CMuro {
    string nombre;
    int resistencia;

  public:
    CMuro(){};
    CMuro(const string &nombre, int resistencia);
    const string &getNombre();
    void setNombre(const string &nombre);
    int getResistencia();
    bool estaEnPie();
    void setResistencia(int resistencia);
};

CMuro::CMuro(const string &nombre, int resistencia) {
    this->nombre      = nombre;
    this->resistencia = resistencia;
}

void CMuro::setNombre(const string &nombre) { this->nombre = nombre; }
int CMuro::getResistencia() { return resistencia; }
void CMuro::setResistencia(int resistencia) { this->resistencia = resistencia; }
bool CMuro::estaEnPie() { return resistencia <= 70 ? false : true; }

class CDemoledor {
    string nombre;
    int energia;
    int danio;

  public:
    CDemoledor(){};
    CDemoledor(const string &nombre, int energia, int danio);
    const string &getNombre();
    void setNombre(const string &nombre);
    int getEnergia();
    void setEnergia(int energia);
    void golpear(CMuro &muro);
    bool tieneEnergia(CDemoledor &demoledor);
};

// CDemoledor::CDemoledor() {}

CDemoledor::CDemoledor(const string &nombre, int energia, int danio) {
    this->nombre  = nombre;
    this->energia = energia;
    this->danio   = danio;
}

const string &CDemoledor::getNombre() { return nombre; }
int CDemoledor::getEnergia() { return energia; }
void CDemoledor::setEnergia(int energia) { this->energia = energia; }

bool CDemoledor::tieneEnergia(CDemoledor &demoledor) { // CDemoledor &demoledor
    return demoledor.getEnergia() > 0 ? true : false;
    // return demoledor.energia > 0 ? true : false;
}

void CDemoledor::golpear(CMuro &muro) {
    energia -= 10;
    muro.setResistencia(muro.getResistencia() - danio);
}

int main() {
    CDemoledor demoledor("Jose", 50, 10);
    CMuro muro("utec", 100);
    demoledor.golpear(muro);
    demoledor.golpear(muro);
    demoledor.golpear(muro);
    demoledor.golpear(muro);
    cout << muro.estaEnPie() << endl;
    cout << demoledor.tieneEnergia(demoledor) << endl;

    return 0;
}