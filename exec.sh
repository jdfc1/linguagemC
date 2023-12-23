#!/bin/bash

# Verificando se um argumento foi passado
if [ $# -eq 0 ]; then
  dialog --msgbox 'Por favor, forneça um nome como argumento.' 5 50
  clear
  exit 1
fi

name2="my_prog"

# Realiza alguma ação com o arquivo (imprimir neste caso)
gcc $1 -o $name2
./$name2
rm $name2

# 1 deixa mais rápido a compilação e execução, 
# 2 exclui automaticamente, não perde tempo.