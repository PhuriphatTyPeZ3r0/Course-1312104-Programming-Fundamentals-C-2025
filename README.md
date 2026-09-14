# 1312104 Programming Fundamentals (การโปรแกรมเบื้องต้น - ภาษา C)

<div align="center">

[![Institution: PIM](https://img.shields.io/badge/Institution-PIM-003366?style=for-the-badge&logo=google-classroom&logoColor=white)](https://www.pim.ac.th/)
[![Faculty: CPE & AI](https://img.shields.io/badge/Faculty-CPE%20%26%20AI-blue?style=for-the-badge)](https://www.pim.ac.th/)
[![Academic Year](https://img.shields.io/badge/Academic%20Year-1%2F2568%20(2025)-orange?style=for-the-badge)](https://github.com/PhuriphatTyPeZ3r0)
[![Language: C](https://img.shields.io/badge/Language-C-A8B9CC?style=for-the-badge&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Grade: A](https://img.shields.io/badge/Grade-A%20(4.00)-success?style=for-the-badge)](https://github.com/PhuriphatTyPeZ3r0)
[![Obsidian Compatible](https://img.shields.io/badge/Obsidian-Vault%20Ready-7C3AED?style=for-the-badge&logo=obsidian&logoColor=white)](https://obsidian.md/)

**คลังแบบฝึกหัด โค้ดแล็บ และสรุปเนื้อหารายวิชาการโปรแกรมเบื้องต้น (ภาษา C)**  
*สาขาวิชาวิศวกรรมคอมพิวเตอร์และปัญญาประดิษฐ์ (CPE & AI) — สถาบันการจัดการปัญญาภิวัฒน์ (PIM)*

</div>

---

## 📌 สารบัญ (Table of Contents)
- [📖 1. ข้อมูลรายวิชาเบื้องต้น (Course Information)](#-1-ข้อมูลรายวิชาเบื้องต้น-course-information)
- [📂 2. โครงสร้าง Repository (Standard Course Layout)](#-2-โครงสร้าง-repository-standard-course-layout)
- [📚 3. เนื้อหาและการบรรยาย (Lectures & Slides)](#-3-เนื้อหาและการบรรยาย-lectures--slides)
- [💻 4. แบบฝึกหัดและการทดลองภาคปฏิบัติ (Labs & Assignments)](#-4-แบบฝึกหัดและการทดลองภาคปฏิบัติ-labs--assignments)
- [🏆 5. โครงงานประจำรายวิชา (Course Projects)](#-5-โครงงานประจำรายวิชา-course-projects)
- [📝 6. สรุปทบทวนและเตรียมสอบ (Exams Review)](#-6-สรุปทบทวนและเตรียมสอบ-exams-review)
- [⚖️ 7. จริยธรรมทางวิชาการ (Academic Integrity Notice)](#-7-จริยธรรมทางวิชาการ-academic-integrity-notice)
- [👨‍💻 8. ผู้จัดทำ (Author)](#-8-ผู้จัดทำ-author)

---

## 📖 1. ข้อมูลรายวิชาเบื้องต้น (Course Information)

- **รหัสวิชา:** `1312104`
- **ชื่อวิชาภาษาอังกฤษ:** Programming Fundamentals (C)
- **ชื่อวิชาภาษาไทย:** การโปรแกรมเบื้องต้น (ภาษา C)
- **ภาษาโปรแกรมที่ใช้:** C (GCC / Clang C11/C17)
- **หน่วยกิต:** 3 หน่วยกิต (3-0-6)
- **ภาคการศึกษา / ปีการศึกษา:** ภาคเรียนที่ 1.1 / ปีการศึกษา 2568 (2025)
- **ผลการเรียนที่ได้รับ (Grade):** **A (4.00)**

---

## 📂 2. โครงสร้าง Repository (Standard Course Layout)

```text
Course-1312104-Programming-Fundamentals-C-2025/
├── 00_Templates/               # Template โน้ตและคู่มือ format (Markdown/Obsidian)
├── 01_Lectures/                # เอกสารและตำราประกอบการสอน
│   ├── 01_Docs/               # เอกสารประกอบการสอน (Syllabus, Handouts)
│   └── 02_Teaching_Slides/    # สไลด์ประกอบการสอนประจำสัปดาห์
├── 02_Labs_Assignments/       # ใบงาน แบบฝึกหัด และโค้ดแล็บภาษา C
│   └── Code/                  # ซอร์สโค้ดภาษา C (.c) ทดสอบตรรกะและการจัดการหน่วยความจำ
├── 03_Projects/                # โครงงานและโปรเจกต์ประจำวิชา
│   └── README.md
├── 04_Exams_Review/            # แนวข้อสอบ สรุปทบทวนก่อนสอบกลางภาคและปลายภาค
└── README.md                   # เอกสารแนะนำและสารบัญหลัก
```

> **หมายเหตุ:** โครงสร้างนี้รองรับการเปิดอ่านบน GitHub และเปิดเป็น **Obsidian Vault** โดยสมบูรณ์

---

## 📚 3. เนื้อหาและการบรรยาย (Lectures & Slides)

| หมวดเนื้อหา | หัวข้อการบรรยาย (Lecture Topics) | รายละเอียดเนื้อหา | สไลด์ / เอกสาร |
| :---: | :--- | :--- | :---: |
| **C Syntax Foundations** | **Structure, Compilation & Preprocessors** | โครงสร้างภาษา C, Preprocessor (`#include`, `#define`), วงจรการคอมไพล์ GCC | [เอกสาร](01_Lectures/) |
| **Data & Memory** | **Data Types, Variables & Memory Model** | ขนาดข้อมูล (Byte Width), รูปแบบเลขฐาน, การจัดสรรหน่วยความจำแบบ Stack | [เอกสาร](01_Lectures/) |
| **Operators** | **Arithmetic, Relational & Bitwise Operations** | ตัวดำเนินการทางคณิตศาสตร์ ตรรกศาสตร์ และ Bitwise Shifting (`<<`, `>>`, `&`, `\|`, `^`) | [เอกสาร](01_Lectures/) |
| **Flow Control** | **Branching & Iteration Algorithms** | การตัดสินใจเงื่อนไข (`if-else`, `switch`), วนซ้ำ (`for`, `while`, `do-while`), Nested Control | [เอกสาร](01_Lectures/) |
| **Functions & Modularization** | **Functions & Parameter Passing** | การแยกฟังก์ชันย่อย, Call-by-value, และการเตรียมพร้อมสู่พอยน์เตอร์ (Pointers) | [เอกสาร](01_Lectures/) |

---

## 💻 4. แบบฝึกหัดและการทดลองภาคปฏิบัติ (Labs & Assignments)

| ลำดับแบบฝึกหัด | หัวข้อแล็บ (Lab Topic) | สาระสำคัญและเนื้อหาการทดลอง | โฟลเดอร์ซอร์สโค้ด |
| :---: | :--- | :--- | :---: |
| **Lab 01** | Basic Syntax & Standard I/O | การใช้งาน `printf`, `scanf`, Format Specifiers (`%d`, `%f`, `%s`), Escape Characters | [เปิดโค้ด](02_Labs_Assignments/Code/Test.c) |
| **Lab 02** | Flow Control & Conditional Logic | การแก้โจทย์เงื่อนไขซับซ้อน, การตรวจสอบขอบเขตข้อมูล, และการคำนวณสูตรคณิตศาสตร์ | [เปิดโค้ด](02_Labs_Assignments/Code/TestX2.c) |
| **Lab 03** | Repetition & Data Processing | การวนลูปประมวลผลชุดตัวเลข, Nested Loops แสดงผลรูปแบบ Matrix/Patterns | [เปิดโค้ด](02_Labs_Assignments/Code/testX3.c) |

---

## 🏆 5. โครงงานประจำรายวิชา (Course Projects)

> โครงงานและโปรแกรมประยุกต์ภาษา C ที่พัฒนาขึ้นในรายวิชา (เก็บอยู่ในโฟลเดอร์ `03_Projects/`)

### ⚡ C Algorithm & Memory-Efficient Console Utility
- **บทบาทและหน้าที่:** โปรแกรมประยุกต์สำหรับแก้ปัญหาการคำนวณและประมวลผลข้อมูลเชิงตรรกะแบบ High Performance บนคอนโซล
- **เทคโนโลยี:** `C (C11/C17 Standard), GCC Compiler, Make / Clang`
- **ซอร์สโค้ด:** [โฟลเดอร์โครงงาน](03_Projects/)

---

## 📝 6. สรุปทบทวนและเตรียมสอบ (Exams Review)

- [x] **สรุปทบทวนการสอบกลางภาค (Midterm Review):** [บันทึกสรุปไวยากรณ์และลำดับการประมวลผล](04_Exams_Review/)
- [x] **สรุปทบทวนการสอบปลายภาค (Final Review):** [บันทึกสรุป Pointers, Arrays, Strings และฟังก์ชัน](04_Exams_Review/)

---

## ⚖️ 7. จริยธรรมทางวิชาการ (Academic Integrity Notice)

> [!NOTE]  
> คลังนี้จัดทำขึ้นเพื่อเป็น **บันทึกการเรียนรู้ส่วนบุคคล (Personal Learning Archive)** และนำเสนอพัฒนาการทางวิชาการ (Academic Portfolio) เท่านั้น  
> ไม่อนุญาตให้นำโค้ดหรือการบ้านไปคัดลอก (Plagiarism) เพื่อส่งงานในรายวิชาโดยไม่ได้รับอนุญาตตามระเบียบของสถาบันฯ

---

## 👨‍💻 8. ผู้จัดทำ (Author)

**Phuriphat Hemakul (PhuriphatTyPeZ3r0)**
- 🎓 นักศึกษา สาขาวิศวกรรมคอมพิวเตอร์และปัญญาประดิษฐ์ (CPE & AI)
- 🏛️ สถาบันการจัดการปัญญาภิวัฒน์ (PIM)
- 🐙 GitHub: [@PhuriphatTyPeZ3r0](https://github.com/PhuriphatTyPeZ3r0)
- 🌐 Portfolio: [resume-phuriphat-hemakul.vercel.app](https://resume-phuriphat-hemakul.vercel.app)
