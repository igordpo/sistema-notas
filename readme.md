# 📊 Sistema de Notas v4.0 🚀

Este é um programa desenvolvido em **C++** para o gerenciamento inteligente de notas escolares. Ele permite ao usuário cadastrar alunos, inserir notas de múltiplas disciplinas, calcular médias automaticamente, classificar o status acadêmico dos alunos e salvar os resultados em um arquivo de texto externo para consultas futuras. ✨

---

## 📋 Funcionalidades

- **🖥️ Menu Inicial Interativo:** Permite escolher entre criar um novo relatório ou visualizar o último histórico salvo.
- **🛡️ Validação de Dados:** Garante que o número de alunos (1 a 20), o número de disciplinas (1 a 5) e as notas inseridas (1 a 10) estejam rigorosamente dentro dos limites permitidos.
- **🧮 Cálculo de Média Automático:** Calcula a média aritmética das notas de cada aluno de forma instantânea.
- **🎯 Classificação de Status:**
  - 🟢 **Aprovado:** Média maior ou igual a `7.0`.
  - 🟡 **Recuperação:** Média entre `5.0` e `6.9`.
  - 🔴 **Reprovado:** Média abaixo de `5.0`.
- **💾 Persistência em Arquivo:** Grava o relatório final detalhado e um resumo estatístico em um arquivo chamado `relatorio.txt`.
- **⬜ Adiciona validacao de nome em branco:** Na parte da criação do `relatorio.txt` não tera como deixar sem nome .
- **🧮 adiciona destaque maior e menor media:** grava no relatório final o detalhamento da maior media e a menor media dos alunos `relatorio.txt`.
- **📖 adiciona relatorio de reprovados":** grava no relatório final `reprovados.txt` o detalhamento de quantos alunos foram reprovados.
- **⌚ Horario que o relatorio foi feito:** Grava o horario no final relatório marcando o horario que foi salvo em um arquivo chamado `relatorio.txt`.

---

## 🛠️ Como Executar o Projeto

### 📌 Pré-requisitos
Você precisará de um compilador C++ instalado em sua máquina (como o `g++` do GCC) ou de uma IDE de sua preferência (como VS Code 💻, Code::Blocks 🛠️ ou Dev-C++ 🚀).

### 🚀 Passos para Compilação e Execução

1. **📥 Clonar ou baixar o arquivo** contendo o código fonte (ex: `main.cpp`).
2. **📂 Abrir o terminal** na pasta onde o arquivo está salvo.
3. **⚙️ Compilar o código** executando o seguinte comando:
   ```bash
   g++ -o sistema_notas main.cpp=8kj7+