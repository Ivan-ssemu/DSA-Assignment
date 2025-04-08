import Deposit_Money
class SACCO:
    def __init__(self):
        self.balances = {}  # HashMap for quick balance lookup

    def deposit(self, farmer_id, amount):
        self.balances[farmer_id] = self.balances.get(farmer_id, 0) + amount

    def withdraw(self, farmer_id, amount):
        if self.balances.get(farmer_id, 0) >= amount:
            self.balances[farmer_id] -= amount
            return "Withdrawal successful"
        return "Insufficient balance"

sacco = SACCO()
sacco.deposit("Farmer123", 500)
print(sacco.withdraw("Farmer123", 200))  # Successful
print(sacco.withdraw("Farmer123", 400))  # Insufficient balance
