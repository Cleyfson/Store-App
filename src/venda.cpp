#include "venda.hpp"
#include <iomanip>

void Venda::adicionaPedido(Pedido* p)
{
    m_pedidos.push_back(p);
}

void Venda::imprimeRelatorio() const
{
    int pedidos = 0;
    double total_vendas = 0;
    for (auto it = m_pedidos.begin(); it != m_pedidos.end(); it++) {
        std::cout << "Pedido " << ++pedidos << std::endl;
        std::cout << (*it)->resumo();
        total_vendas += (*it)->calculaTotal();
    }

    std::cout << "Relatorio de Vendas" << std::endl;
    std::cout << "Total de vendas: R$ " << std::fixed << std::setprecision(2) << total_vendas << std::endl;
    std::cout << "Total de pedidos: " << pedidos << std::endl;
}