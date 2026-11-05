# 🚀 Projetos Acadêmicos

Repositório central para armazenamento, documentação e versionamento dos projetos práticos e sistemas desenvolvidos ao longo do curso na faculdade.

Os exercícios menores de aprendizado e fixação de sintaxe são mantidos separadamente no repositório [`aprendizado-c`](https://github.com/andr-lima/aprendizado-c). Este repositório concentra aplicações completas e integradas.

---

## 📂 Organização do Repositório

O repositório é segmentado por semestres letivos, e cada projeto conta com uma pasta exclusiva contendo seu código-fonte e documentação técnica própria:

```text
projetos-academicos/
├── README.md
└── 2-semestre/
    ├── README.md
    ├── concessionaria-webcars/
    │   ├── README.md
    │   └── sistemaConcessionaria.c
    ├── caixa-eletronico/
    │   ├── README.md
    │   └── caixaEletronico.c
    └── sistema-petshop/
        ├── README.md
        └── sistema-Petshop.c
```

---

## 🎓 Projetos por Semestre

### 2º Semestre
* **[WebCars — Sistema de Concessionária](2-semestre/concessionaria-webcars/)**: Sistema de cadastro de clientes, catálogo de carros e simulação de financiamento com cálculo de comprometimento de renda (até 33%).
* **[Caixa Eletrônico](2-semestre/caixa-eletronico/)**: Protótipo de terminal de autoatendimento bancário e validação de cartão.
* **[Sistema de PetShop](2-semestre/sistema-petshop/)**: Sistema de gestão pet com cadastro de tutores, animais e contratação de serviços (*em desenvolvimento*).

---

## 🛠️ Tecnologias Utilizadas
* **Linguagem Principal:** C (padrão C11)
* **Compilador:** GCC / MinGW

---

## 🛡️ Padrão de Commits
O histórico de commits segue a convenção do [Conventional Commits](https://www.conventionalcommits.org/):
* `feat`: novos projetos ou novas funcionalidades
* `fix`: correção de bugs ou inconsistências de lógica
* `docs`: documentação e arquivos `README.md`
* `refactor`: reorganização e modularização de código
* `chore`: configurações do repositório, `.gitignore` e estrutura de pastas
