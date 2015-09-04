puts "Informe 3 numeros"
numeros = gets

n = numeros.split.map(&:to_i).sort

n_iguais = n[0] == n[1] &&  n[0] == n[2] && n[1] == n[2]

menor_maior =  "O menor numero informado é #{n.first} e o maior numero é #{n.last}"
iguais =   "Os tres numeros são iguais"

puts n_iguais ? iguais : menor_maior