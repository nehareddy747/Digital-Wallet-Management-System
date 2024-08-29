README: DIGITAL WALLET MANAGEMENT SYSTEM
Problem Overview

The Digital Wallet Management System is a software platform that facilitates digital financial transactions. Users can transfer and receive funds, view their account balances, and manage their finances securely and conveniently. The system processes a series of transactions between users and provides feedback on whether each transaction is successful or fails. After processing all transactions, the system sorts and displays users based on their remaining balance.

Problem Requirements
List of Users:
Each user has a unique identifier (userID) and an initial balance.
List of Transactions:
Transactions include transferring funds between users.

Output:
For each transaction, the system outputs whether the transaction was successful or failed.
After all transactions are completed, the users are sorted and displayed based on their remaining balances.

Input Format
Number of Users (N):
The first input line contains an integer N, representing the number of users.
User Information:
The next N lines each contain two integers:
userID: A unique identifier for the user.
balance: The user's current balance.
Number of Transactions (T):
The next line contains an integer T, representing the number of transactions.
Transaction Information:
The next T lines each contain three integers:
from_userID: The userID of the user initiating the transfer.
to_userID: The userID of the user receiving the funds.
amount: The amount to be transferred.


Constraints
1
≤
𝑁
≤
102
1≤N≤102
1
≤
𝑢
𝑠
𝑒
𝑟
𝐼
𝐷
≤
102
1≤userID≤102
0
≤
𝑏
𝑎
𝑙
𝑎
𝑛
𝑐
𝑒
≤
1
0
4
0≤balance≤10 
4
 
1
≤
𝑇
≤
1
0
3
1≤T≤10 
3
 
0
≤
𝑎
𝑚
𝑜
𝑢
𝑛
𝑡
≤
1
0
4
0≤amount≤10 
4
 
Output Format
For each transaction:

Print "Success" if the transaction was completed successfully.
Print "Failure" if the transaction failed (e.g., insufficient funds).
After processing all transactions:
Print all users in sorted order based on their leftover balance.
For users with the same balance, maintain the order of userID.



Sample Input
plaintext
Copy code
4
1 9000
2 3000
3 7500
4 2000

5
1 2 1000
3 4 3000
2 3 500
4 1 7500
1 4 1500


Sample Output
plaintext
Copy code
Success
Success
Success
Failure
Success

2 3500
3 5000
1 6500
4 6500


Explanation:

First Transaction: User 1 transfers 1000 to User 2. Since User 1 has 9000, the transaction is successful.
Second Transaction: User 3 transfers 3000 to User 4. Since User 3 has 7500, the transaction is successful.
Third Transaction: User 2 transfers 500 to User 3. Since User 2 has 4000 (after the first transaction), the transaction is successful.
Fourth Transaction: User 4 attempts to transfer 7500 to User 1, but fails due to insufficient funds (User 4 has only 5000).
Fifth Transaction: User 1 transfers 1500 to User 4. Since User 1 has 8000 (after the first transaction), the transaction is successful.
After processing all transactions, the users are sorted and displayed by their remaining balances.

Instructions for Use:

Parse the input to initialize the list of users and their balances.
Process each transaction, updating balances accordingly.
For each transaction, print whether it was successful or failed.
After all transactions, sort the users by their remaining balances.
Print the sorted list of users with their userID and remaining balance.
This system can be implemented in various programming languages such as C++, Python, or Java, and is useful in contexts where digital transactions need to be managed and verified efficiently.

SOLUTION EXPLANATION:

Input Reading:

The program first reads the number of users N and then reads each user's userID and their initial balance. These details are stored in a map<int, double>, where the key is the userID and the value is the balance.

Transaction Processing:

The number of transactions T is read, followed by the details of each transaction (from_userID, to_userID, amount).
For each transaction, the program checks if the from_userID has enough balance (balance >= amount).
If yes, the amount is deducted from from_userID's balance and added to to_userID's balance, and "Success" is printed.
If not, "Failure" is printed.

Sorting and Output:

After processing all transactions, the users are sorted by their remaining balances. A multimap<int, int> is used for sorting since balances might not be unique.
Finally, the sorted list of users is printed, showing each userID and their remaining balance.
This approach ensures that all transactions are processed correctly and that the final user balances are displayed in a sorted manner.



