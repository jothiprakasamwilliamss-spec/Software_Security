# Software Security Portfolio (7021SCN)

## Overview
This repository contains an individual coursework portfolio for the module **Software Security (7021SCN)**.  
It demonstrates practical and analytical skills in secure software development, vulnerability discovery, threat modelling, automated security testing, dynamic analysis, and software supply chain security.

The work is organised into five distinct tasks (A-E), each focusing on a core area of secure software engineering aligned with OWASP and NIST SSDF principles.

---

## Task Summaries

### Task A - Vulnerability Discovery and Remediation
A deliberately vulnerable C program containing a buffer overflow flaw was created, exploited, and then securely refactored. The insecure function `gets()` was replaced with safer alternatives (`fgets()`), and input handling was improved.

### Task B - Threat Modelling and SDLC
A STRIDE-based threat model was developed for a vulnerable Flask web application. Key threats such as SQL injection, XSS, authentication bypass, and privilege escalation were analysed and mapped to mitigation strategies.

### Task C - Automated Security Testing (CI/CD)
A CI/CD pipeline was implemented using GitHub Actions with Semgrep for static analysis. The pipeline automatically scans code for vulnerabilities such as insecure database queries, XSS risks, and misconfigurations.

### Task D - Dynamic Analysis and Exploit Development
A penetration test was conducted using OWASP ZAP. SQL Injection and stored XSS vulnerabilities were manually exploited and validated. The report compares automated scanning results with manual exploitation findings.

### Task E - Compliance and Supply Chain Security
A containerised Flask application was analysed. A Software Bill of Materials (SBOM) was generated using Syft and scanned with Grype, identifying multiple CVEs. The task demonstrates alignment with the NIST SSDF framework.

---

## Tools and Technologies Used

- C / GCC / GDB
- Python Flask
- SQLite
- GitHub Actions (CI/CD)
- Semgrep (Static Analysis)
- OWASP ZAP (Dynamic Analysis)
- Docker
- Syft (SBOM generation)
- Grype (Vulnerability scanning)
- MSYS2 / Linux CLI tools

---

## Notes

- All tasks (A–E) are implemented in separate directories
- Screenshots and evidence are included where required
- CI/CD pipeline is fully functional and reproducible
- Exploits are demonstrated in a controlled lab environment only
- Security improvements and mitigations are clearly documented

---
