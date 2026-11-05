# Projetos Acadêmicos — 2º Semestre

Projetos desenvolvidos durante o **2º semestre da faculdade**, aplicando conceitos consolidados da linguagem C (estruturas condicionais, laços, vetores, matrizes, strings e fluxos de menus).

---

## 📁 Projetos do Semestre

| Projeto | Pasta | Descrição | Status |
| :--- | :--- | :--- | :---: |
| **WebCars** | [`concessionaria-webcars/`](concessionaria-webcars/) | Sistema de vendas e financiamento de veículos com validação bancária de renda | Concluído |
| **Caixa Eletrônico** | [`caixa-eletronico/`](caixa-eletronico/) | Simulação das etapas iniciais de autenticação e inserção de cartão em terminal | Protótipo |
| **Sistema PetShop** | [`sistema-petshop/`](sistema-petshop/) | Gestão de pet shop com cadastro de clientes, pets, serviços e produtos | *Em desenvolvimento* |

---

## 🛠️ Compilação e Organização

Cada projeto possui sua própria pasta independente com seu arquivo fonte `.c` e seu respectivo `README.md`.

Para compilar qualquer um dos projetos, recomenda-se criar o diretório `build/` na raiz do repositório (ignorado pelo Git):

```bash
mkdir -p build
# Exemplo compilando caixa eletrônico:
gcc 2-semestre/caixa-eletronico/caixaEletronico.c -o build/caixaEletronico
```
