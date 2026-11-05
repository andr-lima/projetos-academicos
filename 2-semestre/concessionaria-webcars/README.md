# WebCars — Sistema de Concessionária

Projeto acadêmico em C do **2º semestre** que simula, via console/terminal, o atendimento de clientes em uma concessionária de veículos, contemplando cadastro, escolha de modelo e simulação de financiamento bancário com análise de renda.

---

## 🚗 Fluxo do Sistema

1. **Cadastro do Cliente:**
   * Leitura do nome completo.
   * Validação do CPF: exige exatamente 11 dígitos numéricos com repetição de leitura em caso de erro (`strlen`).
   * Leitura do salário mensal do cliente.
2. **Catálogo de Veículos:**
   * **1 - Fiat Uno:** R$ 40.000,00
   * **2 - Honda Civic:** R$ 100.000,00
   * **3 - Toyota Corolla:** R$ 130.000,00
3. **Forma de Pagamento:**
   * **1 - À vista:** Confirmação da compra imediata.
   * **2 - Financiamento:**
     * Escolha do prazo: de 20 a 50 parcelas mensais.
     * Regra de aprovação bancária: o valor da parcela mensal não pode comprometer mais que **33% do salário** do comprador.
     * Resultado da análise: aprovação com exibição do valor mensal ou reprovação por insuficiência de renda.
4. **Ciclo de Atendimento:**
   * Permite cadastrar um novo cliente consecutivamente sem encerrar a execução.

---

## 🛠️ Tecnologias e Conceitos Praticados

* **Linguagem:** C (padrão C11)
* **Entrada e Saída:** `printf`, `scanf` com especificador `[^\n]` para strings com espaços
* **Controle de Fluxo:** `switch-case` aninhados e `if-else`
* **Laços de Repetição:** `do-while` para validação de CPF e repetição de clientes
* **Manipulação de Texto:** `strlen` (`<string.h>`)
* **Compatibilidade:** Desenvolvido originalmente em ambiente **Windows** utilizando `<windows.h>`, `Sleep()` e `system("cls")`.

---

## 💻 Como Compilar e Executar

### No Windows (PowerShell / GCC):
```powershell
mkdir build
gcc -std=c11 -Wall -Wextra 2-semestre/concessionaria-webcars/sistemaConcessionaria.c -o build/webcars.exe
.\build\webcars.exe
```

> **Nota:** Como utiliza a biblioteca `<windows.h>`, no Linux requer adaptação (substituição de `windows.h`/`Sleep` por `<unistd.h>`/`sleep` e `cls` por `clear`) ou compilação cruzada.
