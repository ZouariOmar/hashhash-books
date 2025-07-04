# Cyber Security Notes

- "To outsmart a hacker, you need to think like one.", This is the core of "Offensive Security.
- Ubuntu Server can run on systems with only 512MB of RAM!

## Terms

- **SOC**: Security Operations Center (SOC) is a team of IT security professionals tasked with monitoring, preventing, detecting, investigating, and responding to threats within a company’s network and systems.
- **DFIR**: Digital Forensics and Incident Response
- **IPS**: Intrusion Prevention System (IPS) is a device or application that detects and stops intrusions attempts proactively. They are usually deployed in front of the protected asset and block any potential threat from reaching their target.
- **firewall**: A security tool, hardware or software that is used to filter network traffic by stopping unauthorized incoming and outgoing traffic.
- **Threat intelligence** collects information to help the company better prepare against potential adversaries.
- **SIEM**: Security Information and Event Management system that is used to aggregate security information in the form of logs, alerts, artifacts and events into a centralized platform that would allow security analysts to perform near real-time analysis during security monitoring.
- **Apache**: The most widely used web server software. Developed and maintained by Apache Software Foundation, Apache is an open source software available for free.
- **CVE**: Common Vulnerabilities and Exposures (CVE), this term is given to a publicly disclosed vulnerability
- **PoC**: A Proof of Concept is often a piece of code or an application that is used to demonstrate an idea or theory is possible. Proof of Concepts are often used to demonstrate vulnerabilities
- **Linux** is a command line operating system based on unix. There are multiple operating systems that are based on Linux.
- **PoS**: Point of Sale

## Search Skills

- As readers, to evaluate the information. We will mention a few things to consider when evaluating information:
  - _Source_: Identify the author or organization publishing the information. Consider whether they are reputable and authoritative on the subject matter. Publishing a blog post does not make one an authority on the subject.
  - _Evidence and reasoning_: Check whether the claims are backed by credible evidence and logical reasoning. We are seeking hard facts and solid arguments.
  - _Objectivity and bias_: Evaluate whether the information is presented impartially and rationally, reflecting multiple perspectives. We are not interested in authors pushing shady agendas, whether to promote a product or attack a rival.
  - _Corroboration and consistency_: Validate the presented information by corroboration from multiple independent sources. Check whether multiple reliable and reputable sources agree on the central claims.

- A cryptographic method or product considered bogus or fraudulent is often called **snake oil**.

- The search operators supported by ==Google==:
  - **"exact phrase"**: Double quotes indicate that you are looking for pages with the exact word or phrase. For example, one might search for "passive reconnaissance" to get pages with this exact phrase.
  - **site:**: This operator lets you specify the domain name to which you want to limit your search. For example, we can search for success stories on TryHackMe using site:tryhackme.com success stories.
  - **-**: The minus sign allows you to omit search results that contain a particular word or phrase. For example, you might be interested in learning about the pyramids, but you don’t want to view tourism websites; one approach is to search for pyramids -tourism or -tourism pyramids.
  - **filetype::** This search operator is indispensable for finding files instead of web pages. Some of the file types you can search for using Google are Portable Document Format (PDF), Microsoft Word Document (DOC), Microsoft Excel Spreadsheet (XLS), and Microsoft PowerPoint Presentation (PPT). For example, to find cyber security presentations, try searching for filetype:ppt cyber security.

## Tools

- The **ss** command in Linux is a powerful tool for displaying socket statistics. It provides detailed information about network connections, including TCP, UDP, and Unix domain sockets, replacing the older netstat command. ss is faster and offers more filtering and display options than netstat.
