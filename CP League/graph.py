import matplotlib.pyplot as plt

# Data
years = [1, 2, 3]
clients = [15, 35, 60]
revenue = [30, 75, 120]
net_profit = [5, 25, 50]

# Create line graph
plt.plot(years, clients, marker='o', label='Clients', color='blue')
plt.plot(years, revenue, marker='o', label='Revenue (Lakhs)', color='green')
plt.plot(years, net_profit, marker='o', label='Net Profit (Lakhs)', color='orange')

# Add title and labels
plt.title('Business Growth Over Years')
plt.xlabel('Year')
plt.ylabel('Amount')

# Add legend
plt.legend()

# Show the graph
plt.grid()
plt.show()
