#!/bin/bash

# Verificando se um argumento foi passado
if [ $# -eq 0 ]; then
  echo "Por favor, forneça um nome de arquivo como argumento."
  exit 1
fi

name2="0002"

# Realiza alguma ação com o arquivo (imprimir neste caso)
gcc -o $name2 $1 -lm
./$name2
rm $name2

# 1 deixa mais rápido a compilação e execução, 
# 2 exclui automaticamente, não perde tempo.