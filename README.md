# DNA-Sequence-Analysis-Bioinformatics

## Overview
This repository features a **C-based bioinformatics tool** designed for foundational DNA sequence analysis. It computes nucleotide distribution, calculates GC content (thermal stability), and generates reverse complements.

The project bridges the gap between **low-level programming** and **genomic research** by validating computational outputs against the **Human Hemoglobin Alpha (HBA1)** gene via NCBI BLAST.

---

## Scientific Report
For a deep dive into the biological findings, evolutionary conservation, and BLAST alignment screenshots, read the full report:


👉 **[View the Integrated Analysis Report](./ANALYSIS_REPORT.md)**

---

## Features
- **Sequence Validation:** Ensures the input contains only valid nucleotides (A, T, G, C).
- **Structural Analysis:** Calculates **GC Content (64.00%)** to assess DNA stability.
- **Reverse Complement:** Generates the antisense strand for molecular study.
- **Species Comparison:** Includes BLAST analysis across Humans, Primates, and Rodents.

---

## How to Run

### 1. Compile the code:
Using any C compiler (like GCC):
```bash
gcc dna_analyzer.c -o dna_analyzer
```

### 2. Run the program:
```bash
./dna_analyzer
```

---

## Summary of Results

| Metric | Result |
| :--- | :--- |
| **Target Gene** | Human Hemoglobin Alpha (HBA1) |
| **Sequence Length** | 75 bp |
| **GC Content** | 64.00% (High Stability) |
| **Conservation** | 100% Identity in Primates |

---

## License
This project is licensed under the **MIT License** - see the [LICENSE](./LICENSE) file for details.
