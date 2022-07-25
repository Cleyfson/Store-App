#ifndef VENDA_H
#define VENDA_H

#include "pedido.hpp"
#include <list>

class Venda {
public:
    void adicionaPedido(Pedido* p);
    void imprimeRelatorio() const;

private:
    std::list<Pedido*> m_pedidos;
};
#endif
