
def is_palindrome(string_var):     
    '''
    returns True if string_var is palindrome, False otherwise
    '''
    return string_var == string_var[::-1]

def histogram_letters(string_var):     
    '''
    count how many times a letter is present in the string_var
    and returns a dict

    '''
    import collections
    c = {}
    c = collections.Counter(string_var)
    return c

def get_most_frequent(list_var):
    '''
    returns a tuple with the most frequent object in the list with the 
    corresponing number
    '''
    import statistics
    obj = statistics.mode(list_var)
    num = list_var.count(obj)
    t = obj, num
    return t
    

def which_duplicates(list_var):
    '''
    return a dict with containing the repeted object and the number of repetitions
    '''
    duplicates = {} 
    for elem in list_var:
        if list_var.count(elem) > 1:
            duplicates[elem] = list_var.count(elem)
    return duplicates


def compute_factorial(int_val):
    '''
    returns factorial of a number
    '''
    fact = 1
    for i in range(1,int_val+1): 
        fact = fact * i 
    return fact



def is_prime(int_val):
    '''
    returns True if int_val is prime, False otherwise
    '''
    if all(int_val%k !=0 for k in range(2,int_val)):
        return True
    else:
        return False