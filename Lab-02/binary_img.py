import matplotlib.pyplot as plt

n = [1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000]

avg_time_binary = [0.35, 0.38, 0.41, 0.43, 0.45, 0.47, 0.48, 0.50, 0.51, 0.53]

plt.figure()
plt.plot(n, avg_time_binary, marker='o')
plt.xlabel("Input Size (n)")
plt.ylabel("Average Time (microseconds)")
plt.title("Binary Search Average Time Complexity")
plt.grid(True)
plt.show()