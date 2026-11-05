# Caixa Eletrônico — Protótipo de Terminal Bancário

Projeto acadêmico em C do **2º semestre** focado na simulação das etapas iniciais de interação de um usuário em um terminal de autoatendimento bancário (caixa eletrônico).

---

## 🏧 Fluxo do Protótipo

1. **Identificação do Usuário:**
   * Leitura do nome do correntista.
   * Leitura do CPF.
2. **Checagem de Cartão:**
   * Solicitação de inserção do cartão com confirmação do usuário (`S` / `s`).
   * Laço de repetição (`while`) que valida a inserção do cartão antes de permitir o avanço para as operações de conta.
3. **Resumo:**
   * Confirmação dos dados lidos no terminal.

---

## 🛠️ Tecnologias e Conceitos Praticados

* **Linguagem:** C
* **Entrada e Saída:** `printf` e `scanf`
* **Controle de Fluxo:** Laço `while` para validação de status de inserção de dispositivo físico simulado

---

## 💻 Como Compilar e Executar

### No Linux:
```bash
mkdir -p build
gcc 2-semestre/caixa-eletronico/caixaEletronico.c -o build/caixaEletronico
./build/caixaEletronico
```

### No Windows:
```powershell
mkdir build
gcc 2-semestre/caixa-eletronico/caixaEletronico.c -o build/caixaEletronico.exe
.\build\caixaEletronico.exe
```
