# ১. CRO-এর Block Diagram অঙ্কন করে বিভিন্ন অংশের বর্ণনা কর। (৮ নম্বর)

## উত্তর:

### CRO (Cathode Ray Oscilloscope)

**CRO** হলো এমন একটি ইলেকট্রনিক যন্ত্র, যা বৈদ্যুতিক সিগন্যালের **তরঙ্গরূপ (Waveform), ভোল্টেজ, সময় ও ফ্রিকোয়েন্সি** প্রদর্শন করে।

### Block Diagram

```text
           Input Signal
                │
                ▼
      ┌─────────────────┐
      │ Vertical Amplifier │
      └─────────────────┘
                │
                ▼
      ┌─────────────────┐
      │ Delay Line      │
      └─────────────────┘
                │
                ▼
      ┌─────────────────┐
      │ Vertical Plate  │
      └─────────────────┘

Time Base ─► Horizontal Amplifier ─► Horizontal Plate

                         │
                         ▼
                 ┌────────────┐
                 │    CRT     │
                 └────────────┘
```

---

## বিভিন্ন অংশের কাজ

### ১. Vertical Amplifier

ইনপুট সিগন্যালকে প্রয়োজন অনুযায়ী বৃদ্ধি (Amplify) করে।

### ২. Delay Line

সিগন্যালকে অল্প সময় বিলম্বিত করে, যাতে সম্পূর্ণ Waveform দেখা যায়।

### ৩. Time Base Generator

Saw-tooth Wave তৈরি করে Horizontal Sweep নিয়ন্ত্রণ করে।

### ৪. Horizontal Amplifier

Time Base থেকে আসা সিগন্যালকে বৃদ্ধি করে Horizontal Plate-এ পাঠায়।

### ৫. CRT (Cathode Ray Tube)

ইলেকট্রন বিমের সাহায্যে Screen-এ Waveform প্রদর্শন করে।

### ৬. Vertical ও Horizontal Plate

ইলেকট্রন বিমকে উপর-নিচ এবং ডান-বাম দিকে সরিয়ে Waveform তৈরি করে।

---

## উপসংহার

সুতরাং, **CRO** বৈদ্যুতিক সিগন্যালের Waveform পর্যবেক্ষণ ও বিশ্লেষণের জন্য ব্যবহৃত একটি গুরুত্বপূর্ণ ইলেকট্রনিক যন্ত্র।

