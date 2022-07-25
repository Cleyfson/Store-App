#include "japonesa.hpp"

std::string Japonesa::descricao() const
{
    std::string descricao = std::to_string(this->m_qtd) + "X " + "Comida japonesa - " + this->_combinado + ", ";
    descricao += std::to_string(this->_sushis) + " sushis, ";
    descricao += std::to_string(this->_temakis) + " temakis e ";
    descricao += std::to_string(this->_hots) + " hots.";

    return descricao;
}

Japonesa::Japonesa(const std::string& combinado,
    int sushis,
    int temakis,
    int hots,
    int qtd,
    float valor_unitario)
{
    this->_combinado = combinado;
    this->_sushis = sushis;
    this->_temakis = temakis;
    this->_hots = hots;
    this->m_qtd = qtd;
    this->m_valor_unitario = valor_unitario;
}