from abc import ABC

class Cliente(ABC):
    def __init__(self, nome, endereco, telefone):
        self.nome     = nome
        self.endereco = endereco
        self.telefone = telefone

class PessoaFisica(Cliente):
    def __init__(self, *args):
        self.cpf = list(args).pop()
        super().__init__(*args[:-1])

    def imprimirDados(self):
        print(self.__dict__)

class PessoaJuridica(Cliente):
    def __init__(self, *args):
        self.cnpj = list(args).pop()
        self.nomeFantasia = list(args).pop(-2)
        super().__init__(*args[:-2])

    # Repetição por conta do diagrama UML
    def imprimirDados(self):
        print(self.__dict__)

class Empresa:
    def __init__(self):
        self.clientes = []

    def imprimirClientes(self):
        for cliente in self.clientes:
            cliente.imprimirDados()

    def adicionarClientes(self, cliente):
        self.clientes.append(cliente)

    def quantidadeClientes(self):
        return len(self.clientes)

pf = PessoaFisica(
    "Roberto", "R: Bobos, Nº: 0",
    "(84) 90000-0000", '000.000.000-00'
    )

pj = PessoaJuridica(
    "Roberto", "R: Bobos, Nº: 0",
    "(84) 90000-0000", "123.456.1259-000",
    "Robertos LTDA"
    )

e = Empresa()
e.adicionarClientes(pf)
e.adicionarClientes(pj)
e.imprimirClientes()
print(e.quantidadeClientes())
