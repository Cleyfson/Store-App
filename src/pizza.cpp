#include "pizza.hpp"

std::string Pizza::descricao() const
{

    std::string descricao = std::to_string(this->m_qtd) + "X " + "Pizza " + this->_sabor + ", " + std::to_string(this->_pedacos) + " pedacos e ";
    if (this->_borda_recheada) {
        descricao += "borda recheada.";
    } else {
        descricao += "sem borda recheada.";
    }

    return descricao;
}

Pizza::Pizza(const std::string& sabor,
    int pedacos,
    bool borda_recheada,
    int qtd,
    float valor_unitario)
{

    this->_sabor = sabor;
    this->_pedacos = pedacos;
    this->_borda_recheada = borda_recheada;
    this->m_qtd = qtd;
    this->m_valor_unitario = valor_unitario;
}