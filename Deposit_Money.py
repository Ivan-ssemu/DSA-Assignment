from collections import defaultdict
import time

class SACCO:
    def __init__(self):
        self.accounts = defaultdict(list)  # HashMap with FarmerID as key

    def deposit(self, farmer_id, amount):
        timestamp = time.time()
        self.accounts[farmer_id].append(("Deposit", amount, timestamp))

    def get_deposits(self, farmer_id):
        return self.accounts.get(farmer_id, [])

sacco = SACCO()
sacco.deposit("Farmer123", 1000)
print(sacco.get_deposits("Farmer123"))
