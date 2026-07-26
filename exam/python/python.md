# Python Programming Questions & Answers

---

## প্রশ্ন ১ — তিনটি সংখ্যার মধ্যে বড় সংখ্যা নির্ণয়

```python
a = float(input("প্রথম সংখ্যা দিন: "))
b = float(input("দ্বিতীয় সংখ্যা দিন: "))
c = float(input("তৃতীয় সংখ্যা দিন: "))

if a >= b and a >= c:
    print(f"বড় সংখ্যা: {a}")
elif b >= a and b >= c:
    print(f"বড় সংখ্যা: {b}")
else:
    print(f"বড় সংখ্যা: {c}")
```

---

## প্রশ্ন ২ — তিনটি সংখ্যার মধ্যে ছোট সংখ্যা নির্ণয়

```python
a = float(input("প্রথম সংখ্যা দিন: "))
b = float(input("দ্বিতীয় সংখ্যা দিন: "))
c = float(input("তৃতীয় সংখ্যা দিন: "))

if a <= b and a <= c:
    print(f"ছোট সংখ্যা: {a}")
elif b <= a and b <= c:
    print(f"ছোট সংখ্যা: {b}")
else:
    print(f"ছোট সংখ্যা: {c}")
```

---

## প্রশ্ন ৩ — দ্বিঘাত সমীকরণের মূল নির্ণয়

```python
import math

a = float(input("a এর মান দিন: "))
b = float(input("b এর মান দিন: "))
c = float(input("c এর মান দিন: "))

# Fix 1: a=0 হলে দ্বিঘাত সমীকরণ নয়
if a == 0:
    if b == 0:
        print("এটি কোনো সমীকরণ নয়।")
    else:
        x = -c / b
        print(f"এটি দ্বিঘাত নয়, রৈখিক সমীকরণ। মূল: x = {x:.2f}")
else:
    discriminant = b**2 - 4*a*c

    # Fix 3: floating point safe comparison
    if abs(discriminant) < 1e-10:
        root = -b / (2 * a)
        print(f"একটি সমান মূল: x = {root:.2f}")
    elif discriminant > 0:
        root1 = (-b + math.sqrt(discriminant)) / (2 * a)
        root2 = (-b - math.sqrt(discriminant)) / (2 * a)
        print(f"দুটি বাস্তব মূল: x1 = {root1:.2f}, x2 = {root2:.2f}")
    else:
        real_part = -b / (2 * a)
        # Fix 2: abs(a) দিয়ে imag_part সবসময় positive
        imag_part = math.sqrt(-discriminant) / (2 * abs(a))
        print(f"কাল্পনিক মূল: x1 = {real_part:.2f}+{imag_part:.2f}i, x2 = {real_part:.2f}-{imag_part:.2f}i")
```

---

## প্রশ্ন ৪ — সেন্টিগ্রেড থেকে ফারেনহাইট রূপান্তর

```python
celsius = float(input("সেলসিয়াস তাপমাত্রা দিন: "))

fahrenheit = (celsius * 9/5) + 32

print(f"{celsius}°C = {fahrenheit:.2f}°F")
```

---

## প্রশ্ন ৫ — ফারেনহাইট থেকে সেন্টিগ্রেড রূপান্তর

```python
fahrenheit = float(input("ফারেনহাইট তাপমাত্রা দিন: "))

celsius = (fahrenheit - 32) * 5/9

print(f"{fahrenheit}°F = {celsius:.2f}°C")
```

---

## প্রশ্ন ৬ — অসম বাহুর ত্রিভুজের ক্ষেত্রফল (হেরনের সূত্র)

```python
import math

a = float(input("প্রথম বাহু দিন: "))
b = float(input("দ্বিতীয় বাহু দিন: "))
c = float(input("তৃতীয় বাহু দিন: "))

# ত্রিভুজ গঠন সম্ভব কিনা যাচাই
if a + b > c and b + c > a and a + c > b:
    s = (a + b + c) / 2  # অর্ধ-পরিসীমা
    area = math.sqrt(s * (s - a) * (s - b) * (s - c))
    print(f"ত্রিভুজের ক্ষেত্রফল = {area:.2f} বর্গ একক")
else:
    print("এই বাহুগুলো দিয়ে ত্রিভুজ গঠন সম্ভব নয়।")
```

---

## প্রশ্ন ৭ — ত্রিভুজের ক্ষেত্রফল নির্ণয় (ভূমি ও উচ্চতা)

```python
base = float(input("ত্রিভুজের ভূমি দিন: "))
height = float(input("ত্রিভুজের উচ্চতা দিন: "))

area = 0.5 * base * height

print(f"ত্রিভুজের ক্ষেত্রফল = {area:.2f} বর্গ একক")
```

---

## প্রশ্ন ৮ — বৃত্তের ক্ষেত্রফল নির্ণয়

```python
import math

radius = float(input("বৃত্তের ব্যাসার্ধ দিন: "))

area = math.pi * radius**2

print(f"বৃত্তের ক্ষেত্রফল = {area:.2f} বর্গ একক")
```

---

## প্রশ্ন ৯ — লিপ ইয়ার নির্ণয়

```python
year = int(input("সাল দিন: "))

if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
    print(f"{year} একটি লিপ ইয়ার।")
else:
    print(f"{year} লিপ ইয়ার নয়।")
```

---

## প্রশ্ন ১০ — ফাংশন ব্যবহার করে ফ্যাক্টোরিয়াল নির্ণয়

```python
def factorial(n):
    if n == 0 or n == 1:
        return 1
    result = 1
    for i in range(2, n + 1):
        result *= i
    return result

n = int(input("সংখ্যা দিন: "))

if n < 0:
    print("ঋণাত্মক সংখ্যার ফ্যাক্টোরিয়াল হয় না।")
else:
    print(f"{n}! = {factorial(n)}")
```

---

## প্রশ্ন ১১ — ১+২+৩+...+১০০ সিরিজের যোগফল

```python
total = 0

for i in range(1, 101):
    total += i

print(f"১ থেকে ১০০ পর্যন্ত যোগফল = {total}")
```

---

## প্রশ্ন ১২ — ১+৩+৫+...+১০০ (বিজোড় সংখ্যার) যোগফল

```python
total = 0

for i in range(1, 101, 2):  # বিজোড় সংখ্যা: 1, 3, 5, ...99
    total += i

print(f"১ থেকে ১০০ পর্যন্ত বিজোড় সংখ্যার যোগফল = {total}")
```

---

## প্রশ্ন ১৩ — ১+২+৩+...+n সংখ্যার যোগফল

```python
n = int(input("n এর মান দিন: "))

total = 0

for i in range(1, n + 1):
    total += i

print(f"১ থেকে {n} পর্যন্ত যোগফল = {total}")
```

---

## প্রশ্ন ১৪ — 1²+2²+3²+...+100² সিরিজের যোগফল

```python
total = 0

for i in range(1, 101):
    total += i**2

print(f"1² থেকে 100² পর্যন্ত যোগফল = {total}")
```

---

## প্রশ্ন ১৫(১) — 3²+6²+9²+...+99² সিরিজের যোগফল

```python
total = 0

for i in range(3, 100, 3):  # 3, 6, 9, ..., 99
    total += i**2

print(f"3² + 6² + 9² + ... + 99² = {total}")
```

---

## প্রশ্ন ১৫(২) — ১ থেকে ১০০ পর্যন্ত মৌলিক সংখ্যা বের করা

```python
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

print("১ থেকে ১০০ পর্যন্ত মৌলিক সংখ্যাগুলো:")
primes = []

for num in range(1, 101):
    if is_prime(num):
        primes.append(num)

print(primes)
print(f"মোট মৌলিক সংখ্যা: {len(primes)}")
```

---

## প্রশ্ন ১৬ — ১ থেকে ১০০ পর্যন্ত ৭ দ্বারা বিভাজ্য সংখ্যার যোগফল

```python
total = 0
numbers = []

for i in range(1, 101):
    if i % 7 == 0:
        total += i
        numbers.append(i)

print(f"৭ দ্বারা বিভাজ্য সংখ্যাগুলো: {numbers}")
print(f"যোগফল = {total}")
```

---

## প্রশ্ন ১৭ — ১ থেকে n পর্যন্ত ফিবোনাচ্চি সংখ্যা বের করা

```python
n = int(input("কতটি ফিবোনাচ্চি সংখ্যা দেখতে চান: "))

a, b = 0, 1
print(f"প্রথম {n}টি ফিবোনাচ্চি সংখ্যা:")

for i in range(n):
    print(a, end=" ")
    a, b = b, a + b

print()
```

---

> **নোট:** প্রতিটি প্রোগ্রাম Python 3.x এ চলবে।
