import time
import random
import matplotlib.pyplot as plt

n = [1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000]

avg_time_insertion = [
    12.5, 48.7, 108.3, 192.1, 301.5,
    432.8, 592.4, 781.6, 1001.2, 1256.9
]

plt.figure()
plt.plot(n, avg_time_insertion, marker='o')
plt.xlabel("Input Size (n)")
plt.ylabel("Average Time (microseconds)")
plt.title("Insertion Sort Average Time Complexity")
plt.grid(True)
plt.show()   
