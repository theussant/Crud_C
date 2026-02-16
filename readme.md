# 🏢 Sistema de Gerenciamento de Funcionários (Linguagem C)

![Status do Projeto](https://img.shields.io/badge/Status-Concluído-success)
![Linguagem](https://img.shields.io/badge/Linguagem-C-blue)
![Plataforma](https://img.shields.io/badge/Plataforma-Windows-lightgrey)

> **Fundamentos de Programação:** Aplicação CLI (Interface de Linha de Comando) desenvolvida para gerenciar registros de funcionários, demonstrando conceitos fundamentais de estruturas de dados, manipulação de arrays e programação modular.

## 🎯 Sobre o Projeto

Este sistema foi desenvolvido como projeto final da disciplina de algoritmos. O objetivo é realizar o ciclo completo de um **CRUD** (Create, Read, Update, Delete) para gerenciar dados internos de uma empresa, como nome, idade, endereço, cargo e salário dos colaboradores.

O projeto foca na lógica de organização de dados em memória e no uso de funções para manter um código limpo, estruturado e modularizado.

Projeto desenvolvido como parte da formação técnica em Desenvolvimento de Sistemas.

## ✨ Principais Funcionalidades

* **📝 Cadastro em Lote:** Permite definir a quantidade e realizar o cadastro de vários funcionários de uma única vez.
* **📋 Listagem Geral:** Exibição detalhada de todos os funcionários ativos com seus respectivos códigos de identificação (ID).
* **🔍 Busca por Código:** Localização rápida de um registro específico através do código do funcionário.
* **⚙️ Alteração de Dados:** Permite modificar campos específicos (como cargo ou salário) de forma granular.
* **🗑️ Exclusão Lógica:** Sistema de remoção de registros com verificação de segurança antes de confirmar a exclusão.

## 🛠️ Tecnologias e Conceitos Aplicados

* **Linguagem:** C.
* **Bibliotecas Utilizadas:**
    * `stdio.h` / `stdlib.h`: Operações básicas de entrada/saída e sistema.
    * `locale.h`: Suporte para acentuação e caracteres da língua portuguesa.
    * `string.h`: Manipulação de cadeias de caracteres (strings).
    * `conio.h`: Controle de entrada/saída no console (Windows).
* **Conceitos de Programação:**
    * Uso de arrays multidimensionais para armazenamento de dados.
    * Modularização do código através de funções específicas para cada operação.
    * Estrutura de repetição `do-while` e controle de fluxo com `switch-case`.

## 🚀 Como Executar

### Pré-requisitos

* Um compilador C instalado (Recomendado: **GCC** ou o ambiente **Dev-C++**).
* Sistema Operacional **Windows** (devido às bibliotecas de sistema utilizadas).

### Instalação e Execução

1. **Clone o repositório e compile o projeto:**

   ```bash
   # Clonar o repositório
   git clone [https://github.com/theussant/nome-do-seu-repositorio.git](https://github.com/theussant/nome-do-seu-repositorio.git)
   cd nome-do-seu-repositorio

   # Compilar o código fonte
   gcc projeto.c -o Gerenciador.exe

   # Executar a aplicação
   ./Gerenciador.exe
