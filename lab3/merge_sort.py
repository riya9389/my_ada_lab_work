import matplotlib.pyplot as plt

n = [1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000]

avg_time_merge = [
    0, 0, 0, 0, 0,
    0, 0, 0.875, 0.111111, 0.2
]

plt.figure()
plt.plot(n, avg_time_merge, marker='o')
plt.xlabel("Input Size (n)")
plt.ylabel("Average Time (microseconds)")
plt.title("Merge Sort Average Time Complexity")
plt.grid(True)
plt.show()
