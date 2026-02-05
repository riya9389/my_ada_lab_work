import matplotlib.pyplot as plt

n = [1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000]

avg_time_quick = [
    0, 0, 0.666667, 0, 0.4,
    0, 0, 0.125, 0.111111, 0.2
]

plt.figure()
plt.plot(n, avg_time_quick, marker='o')
plt.xlabel("Input Size (n)")
plt.ylabel("Average Time (microseconds)")
plt.title("Quick Sort Average Time Complexity")
plt.grid(True)
plt.show()
