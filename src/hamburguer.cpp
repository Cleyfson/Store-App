#include "hamburguer.hpp"

std::string Hamburguer::descricao() const {
    // TODO: Implemente este metodo.
    /*
   * Note que aqui voce deve retornar uma descricao detalhada do Hamburguer.
   *
   * Exemplos:
   * 1X Hamburguer X-tudo artesanal.
   * 1X Hamburguer X-tudo simples.
   */
    std::string descricao = std::to_string(this->m_qtd) + "X " + "Hamburguer " + this->_tipo;
    if (this->_artesanal) {
        descricao += " artesanal.";
    } else {
        descricao += " simples.";
    }

    return descricao;
}

Hamburguer::Hamburguer(const std::string &tipo,
                       bool artesanal,
                       int qtd,
                       float valor_unitario) {

    this->_tipo = tipo;
    this->_artesanal = artesanal;
    this->m_qtd = qtd;
    this->m_valor_unitario = valor_unitario;
}