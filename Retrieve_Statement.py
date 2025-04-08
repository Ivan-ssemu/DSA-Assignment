import Deposit_Money
import  Withdrawal_Money

class SACCO:
    def __init__(self):
        self.transactions = defaultdict(list)  # Stack-based approach

    def deposit(self, farmer_id, amount):
        self.transactions[farmer_id].append(("Deposit", amount, time.time()))

    def withdraw(self, farmer_id, amount):
        self.transactions[farmer_id].append(("Withdrawal", amount, time.time()))

    def get_statement(self, farmer_id, n=5):
        return list(reversed(self.transactions.get(farmer_id, [])[-n:]))

sacco = SACCO()
sacco.deposit("Farmer123", 1000)
sacco.withdraw("Farmer123", 200)
print(sacco.get_statement("Farmer123", 2))  # Last 2 transactions
