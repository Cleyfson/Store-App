#include "pedido.hpp"

Pedido::~Pedido()
{
    while (!m_produtos.empty()) {
        delete m_produtos.back();
        m_produtos.pop_back();
    }
}

void Pedido::setEndereco(const std::string& endereco)
{
    this->m_endereco = endereco;
}

float Pedido::calculaTotal() const
{
    float total = 0;
    for (auto it = m_produtos.begin(); it != m_produtos.end(); it++) {
        total += (*it)->getQtd() * (*it)->getValor();
    }

    return total;
}

void Pedido::adicionaProduto(Produto* p)
{
    m_produtos.push_back(p);
}

std::string Pedido::resumo() const
{
    std::string resumo;
    for (auto it = m_produtos.begin(); it != m_produtos.end(); it++) {
        resumo += (*it)->descricao() + "\n";
    }
    resumo += "Endereco: " + m_endereco + "\n";
    return resumo;
}