from avl import AVL

def main():
    avl = AVL()
    value = 0

    value = int(input("Digite um numero: "))
    while value != -1:
        avl.add(value)
        avl.imprimir()
        value = int(input("Digite um numero: "))

    print("----REMOVER----")
    value = int(input("Digite um numero: "))
    while value != -1:
        avl.remove(value)
        avl.imprimir()
        value = int(input("Digite um numero: "))
    
    avl.imp()

if __name__ == "__main__":
    main()
