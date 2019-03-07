# Exercises - Python session 3
# Context manager


import time

class Timer:

    def __enter__(self):
        self.start = time.perf_counter()
    
    def __exit__(self, exc_type, exc_value, traceback):
        self.end = time.perf_counter()

        elapsed = self.end - self.start
        print(elapsed)


        

with Timer() as timer:
    list = []
    for i in range(3000):
        list.append(i)
        
