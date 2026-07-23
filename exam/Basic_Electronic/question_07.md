# প্রশ্ন–৭: Input ও Output Wave চিত্রসহ Full Wave Bridge Rectifier-এর কার্যপ্রণালী বর্ণনা কর। (৮ নম্বর)

## উত্তর

**Full Wave Bridge Rectifier** হলো চারটি ডায়োড (D1, D2, D3, D4) দ্বারা গঠিত একটি সার্কিট, যা **AC-এর উভয় Half Cycle-কে DC-তে রূপান্তর করে।**

---

## Circuit Diagram

```text
                 D1              D2
        AC o----|>|-----+-----|<|----o AC
                         | 
                        (+)
                        RL
                        (-)
                         |
        AC o----|<|-----+-----|>|----o AC
                 D3              D4
```

---

## Input Wave (AC)

```text
      +V
       |
       |      /\      /\      /\
       |     /  \    /  \    /  \
-------+----/----\--/----\--/----\-------> Time
       |   /      \/      \/      \
       |  /        \      /        \
       |
      -V
```

---

## Output Wave (Full Wave DC)

```text
      +V
       |
       |      /\      /\      /\
       |     /  \    /  \    /  \
-------+----/----\--/----\--/----\-------> Time
       |   \      /\      /\      /
       |    \____/  \____/  \____/
       |
      0V
```

> **নোট:** Output Wave-এ কোনো অংশ 0V-এর নিচে যায় না। Negative Half Cycle-ও উপরের দিকে উঠে আসে।

---

## কার্যপ্রণালী

### Positive Half Cycle

* **D1 ও D4 ON (Conduct)** করে।
* **D2 ও D3 OFF** থাকে।
* কারেন্ট **RL**-এর মধ্য দিয়ে প্রবাহিত হয়।

### Negative Half Cycle

* **D2 ও D3 ON (Conduct)** করে।
* **D1 ও D4 OFF** থাকে।
* কারেন্ট আবারও **RL**-এর মধ্য দিয়ে **একই দিকে** প্রবাহিত হয়।

অতএব, উভয় Half Cycle-এ Load-এর মধ্য দিয়ে কারেন্ট একই দিকে প্রবাহিত হওয়ায় **Pulsating DC Output** পাওয়া যায়।

---

## সুবিধা

* AC-এর উভয় Half Cycle ব্যবহার করে।
* আউটপুট ভোল্টেজ বেশি পাওয়া যায়।
* Efficiency বেশি।
* Center Tap Transformer-এর প্রয়োজন হয় না।

---

## উপসংহার

সুতরাং, **Full Wave Bridge Rectifier** চারটি ডায়োডের সাহায্যে AC-এর উভয় Half Cycle-কে **Pulsating DC**-তে রূপান্তর করে।

### পরীক্ষার জন্য মনে রাখো ✍️

* **ডায়োড = ৪টি**
* **Positive Half → D1, D4 ON**
* **Negative Half → D2, D3 ON**
* **Output = Pulsating DC**
* **Load-এর কারেন্ট সবসময় একই দিকে প্রবাহিত হয়।**

