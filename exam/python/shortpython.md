# Python 

---

## ১. তিনটি সংখ্যার মধ্যে বড় সংখ্যা

```python
a, b, c = float(input("a: ")), float(input("b: ")), float(input("c: "))
if a >= b and a >= c: print("বড়:", a)
elif b >= c: print("বড়:", b)
else: print("বড়:", c)
```

---

## ২. তিনটি সংখ্যার মধ্যে ছোট সংখ্যা

```python
a, b, c = float(input("a: ")), float(input("b: ")), float(input("c: "))
if a <= b and a <= c: print("ছোট:", a)
elif b <= c: print("ছোট:", b)
else: print("ছোট:", c)
```

---

## ৩. দ্বিঘাত সমীকরণের মূল

```python
import math
a, b, c = float(input("a: ")), float(input("b: ")), float(input("c: "))
d = b**2 - 4*a*c
if d > 0:
    print(f"x1={(-b+math.sqrt(d))/(2*a):.2f}, x2={(-b-math.sqrt(d))/(2*a):.2f}")
elif d == 0:
    print(f"x={-b/(2*a):.2f}")
else:
    print(f"কাল্পনিক মূল: {-b/(2*a):.2f} ± {math.sqrt(-d)/(2*a):.2f}i")
```

---

## ৪. সেলসিয়াস → ফারেনহাইট

```python
c = float(input("°C: "))
print(f"{c}°C = {(c*9/5)+32:.2f}°F")
```

---

## ৫. ফারেনহাইট → সেলসিয়াস

```python
f = float(input("°F: "))
print(f"{f}°F = {(f-32)*5/9:.2f}°C")
```

---

## ৬. ত্রিভুজের ক্ষেত্রফল (হেরনের সূত্র)

```python
import math
a, b, c = float(input("a: ")), float(input("b: ")), float(input("c: "))
s = (a+b+c)/2
print(f"ক্ষেত্রফল = {math.sqrt(s*(s-a)*(s-b)*(s-c)):.2f}")
```

---

## ৭. ত্রিভুজের ক্ষেত্রফল (ভূমি × উচ্চতা)

```python
b, h = float(input("ভূমি: ")), float(input("উচ্চতা: "))
print(f"ক্ষেত্রফল = {0.5*b*h:.2f}")
```

---

## ৮. বৃত্তের ক্ষেত্রফল

```python
import math
r = float(input("ব্যাসার্ধ: "))
print(f"ক্ষেত্রফল = {math.pi*r**2:.2f}")
```

---

## ৯. লিপ ইয়ার

```python
y = int(input("সাল: "))
if (y%4==0 and y%100!=0) or y%400==0: print(f"{y} লিপ ইয়ার ✓")
else: print(f"{y} লিপ ইয়ার নয় ✗")
```

---

## ১০. ফ্যাক্টোরিয়াল

```python
def factorial(n):
    r = 1
    for i in range(2, n+1): r *= i
    return r

n = int(input("n: "))
print(f"{n}! = {factorial(n)}")
```

---

## ১১. ১ থেকে ১০০ যোগফল

```python
print(sum(range(1, 101)))  # = 5050
```

---

## ১২. বিজোড় সংখ্যার যোগফল (১–১০০)

```python
print(sum(range(1, 101, 2)))  # = 2500
```

---

## ১৩. ১ থেকে n যোগফল

```python
n = int(input("n: "))
print(f"যোগফল = {sum(range(1, n+1))}")
```

---

## ১৪. 1²+2²+...+100² যোগফল

```python
print(sum(i**2 for i in range(1, 101)))  # = 338350
```

---

## ১৫(১). 3²+6²+...+99² যোগফল

```python
print(sum(i**2 for i in range(3, 100, 3)))
```

---

## ১৫(২). ১–১০০ মৌলিক সংখ্যা

```python
def is_prime(n):
    if n < 2: return False
    for i in range(2, int(n**0.5)+1):
        if n%i == 0: return False
    return True

primes = [n for n in range(1, 101) if is_prime(n)]
print(primes)
```

---

## ১৬. ৭ দ্বারা বিভাজ্য সংখ্যার যোগফল (১–১০০)

```python
nums = [i for i in range(1, 101) if i%7==0]
print(f"সংখ্যা: {nums}, যোগফল = {sum(nums)}")
```

---

## ১৭. ফিবোনাচ্চি সংখ্যা

```python
n = int(input("কতটি: "))
a, b = 0, 1
for _ in range(n):
    print(a, end=" ")
    a, b = b, a+b
```

---

> **নোট:** সব প্রোগ্রাম Python 3.x এ চলবে।
