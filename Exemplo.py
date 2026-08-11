#1. variaveis e tipos de dados
from operator import truediv

nome = "fulano"

idade = 18

altura = 1.75

aprovado = True

print(nome)
print(idade)
print(altura)
print(aprovado)

#podemos verificar o tipo de uma variavel usando o type().

print(type(nome))

#2. Entrada de dados
#IMPORTANTE
# O input() sempre retorna uma string

nome = input("digite seu nome: \n")
print("olá", nome )

idade = int(input("Digite sua idade: \n"))

print("A sua idade é: ", idade)

#3. Saida de dados
print("Olá, mundo")

#Podemos utilizar o f-string para deixar a saida mais organizada

print(f"Meu nome é {nome} e tenho {idade} anos.")

#4. Operadores aritméticos

n1 =10

n2 = 3

soma = n1 + n2
subtracao = n1 - n2
multiplicacao = n1 * n2
divisao = n1 / n2
resto = n1 % n2
potencia = n1 ** n2

print(soma)
print(subtracao)
print(multiplicacao)
print(divisao)
print(resto)
print(potencia)

#OPERADORES RELACIONAIS

idade = 18

print(idade != 18) #diferente
print(idade > 18) #maior
print(idade < 18) #menor
print(idade >= 18) #maior ou igual
print(idade <= 18) #menor ou igual

#6. OPERADORES LÓGICOS

idade = 20

possui_carteira = True

resultado = idade >= 18 and possui_carteira
print(resultado)

resultado = idade >= 18 or possui_carteira
print(resultado)

resultado = not possui_carteira
print(resultado)

#7. EXEMPLO PRÁTICO

#Vamos criar um pequeno programa para calcular o valor de uma compra

produto = input("DIgite o nome do produto: \n")
quantidade = int (input("Digite o quantidade: \n"))
preco = float(input("Digite o preço do porduto: \n"))

#Calculando o valor total
total = quantidade * preco

#Mostrando os resultados
print("\n===== RESUMO DA COMPRA =====\n")

print(f"produto: {produto}\n")
print(f"quantidade: {quantidade}\n")
print(f"preço: {preco}\n")
print(f"total: {total:.2f}\n")

#8. EXEMPLO PRÁTICO COM MÉDIA

nome = input("nome do aluno: \n")

nota1 = float(input("Digite a primeira nota: \n"))
nota2 = float(input("Digiteb a segunda nota: \n"))

media = (nota1 + nota2) / 2

print(f"Aluno: {nome}\n")
print(f"nota1: {nota1}\n")
print(f"nota2: {nota2}\n")
print(f"media: {media}")

