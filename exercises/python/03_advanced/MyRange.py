# Exercises - Python session 3
# MyRange

class MyRange():
    def __init__(self, *args):
        self.list = []
        
        if len(args) == 1:
            self.stop = args[0]

        elif len(args) == 2:
            self.start = args[0]
            self.stop = args[1]

        elif len(args) == 3:
            self.start = args[0]
            self.stop = args[1]
            self.step = args[2]

        else:
            raise ValueError("Unexpected number of arguments")

        self.myrange(*args)

        
        
    def myrange(self, *args):

        if len(args) == 1:
            i = 0
            while i < self.stop:
                self.list.append(i)
                i = i+1

        elif len(args) == 2:
            i = self.start
            while i < self.stop:
                self.list.append(i)
                i = i+1

        elif len(args) == 3:
            i = self.start
            while i < self.stop:
                self.list.append(i)
                i = i+ self.step


###########    
#UnitTests
###########


import unittest
class TestMyModule(unittest.TestCase):
    def test1(self):
        self.assertEqual(MyRange(5).list, [0,1,2,3,4])
    
    def test2(self):
        self.assertEqual(MyRange(0,4).list, [0,1,2,3])
       
    def test3(self):
        self.assertEqual(MyRange(0,10,2).list, [0,2,4,6,8])
        
if __name__ == '__main__':
    unittest.main()
