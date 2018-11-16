from abc import ABC, abstractmethod

class ContaBancaria(ABC):
    saldoInsuficiente = "Saldo insuficiente para efetuar operação"

    def __init__(self, saldo):
        self.saldo = saldo

    def depositar(self, valor):
        if(valor > 0):
            self.saldo += valor
        else:
            print(self.saldoInsuficiente)

    def sacar(self, valor):
        if(valor <= self.saldo):
            self.saldo -= valor
        else:
            print(self.saldoInsuficiente)

    def transferir(self, valor, conta):
        if(valor <= self.saldo):
            self.saldo -= valor
            conta.saldo += valor
        else:
            print(self.saldoInsuficiente)

    @abstractmethod
    def calcularSaldo(self):
        pass

class ContaCorrente(ContaBancaria):
    def calcularSaldo(self):
        return self.saldo - (self.saldo*0.1)

class ContaInvestimento(ContaBancaria):
    def calcularSaldo(self):
        return self.saldo + (self.saldo*0.05)

def main():
    contaInvestimento = ContaInvestimento(10000)

    contaCorrente = ContaCorrente(2000)
    contaCorrente.depositar(10000)
    contaCorrente.sacar(1000)

    contaCorrente.transferir(1000, contaInvestimento)

    print(contaInvestimento.calcularSaldo())
    print(contaCorrente.calcularSaldo())


if __name__ == '__main__':
    main()
