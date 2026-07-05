# Cloud Notes

- [Cloud Notes](#cloud-notes)
  - [Termes](#termes)
    - [General Data Protection Regulation (GDPR)](#general-data-protection-regulation-gdpr)
    - [Personal Data](#personal-data)
    - [Infrastructure as Code (IaC)](#infrastructure-as-code-iac)
    - [Availability Zones (AZs)](#availability-zones-azs)
    - [Regions vs AZ's vs Edge Locations](#regions-vs-azs-vs-edge-locations)
  - [Cloud Services](#cloud-services)
    - [Cloud databases](#cloud-databases)
    - [Cloud storage](#cloud-storage)
    - [Cloud computing](#cloud-computing)
      - [Cloud Service Models](#cloud-service-models)
      - [Cloud Deployment Models](#cloud-deployment-models)

## Termes

### General Data Protection Regulation (GDPR)

Regulates how personal data is collected, processed, and stored from users in the EU

Other regulation: `LGPD`, `CCPA`, `HIPAA`, `APPI`, `PDPA`, `PIPEDA`, etc..

### Personal Data

Personal data is any information that relates to an identified or identifiable living individual.
Different pieces of information, which collected together can lead to the identification of a
particular person, also constitute personal data.

### Infrastructure as Code (IaC)

Infrastructure as code (IaC) is the ability to provision and support your computing infrastructure using code instead of manual processes and settings.

### Availability Zones (AZs)

It is a single, isolated data center (or group of data centers) used by cloud providers like AWS. Each AZ has its own power, cooling, and internet. This keeps your apps running safely even if one zone fails

### Regions vs AZ's vs Edge Locations

| Feature        | Region                  | Availability Zone (AZ)             | Edge Location               |
| -------------- | ----------------------- | ---------------------------------- | --------------------------- |
| Main Purpose   | Host your apps globally | Prevent downtime & backup          | Speed up content delivery   |
| Physical Scale | Large geographic area   | Distinct buildings inside a Region | Small localized data center |
| Quantity       | 30+ globally            | 3+ per Region                      | Hundreds globally           |

## Cloud Services

> Think of it like a kitchen: computing is the chef cooking,
> storage is the pantry, and a database is a highly organized recipe box

### Cloud databases

Cloud databases organize data so you can search and update it quickly

### Cloud storage

Cloud storage acts as a digital locker to save files

### Cloud computing

Cloud computing provides processing power to run programs

- Cloud computing isn’t just for **hosting websites**—it powers **data storage**, **backups**, **AI models**, **streaming services**, and much more.

#### Cloud Service Models

There are **3 main types** of cloud computing as-a-service options and each one covers a degree of management for you:

- infrastructure-as-a-service (**IaaS**):
  - Scalable, cloud-based infrastructure
  - Users: System Admins
  - e.g: `EC2`, `google cloude compute engine`, etc..

- platform-as-a-service (**PaaS**)
  - Full development environment
  - Users: Developers
  - e.g: `google app engine`, `AWS Elastic Beanstalk`, etc..

- software-as-a-service (**SaaS**)
  - Software available online, no installation
  - Users: Everyone (end-users)
  - e.g: `google workspace`, `dropbox`, `office365`, etc..

other cloud services models:

- function-as-a-service (**FaaS**)
  - Serverless computing
  - Focus on a function (part of software)
  - e.g: identity authentication, payment transactions

- anything-as-a-service (**XaaS**)
  - cover anything from databases to disaster recovery

#### Cloud Deployment Models

| Factors                     | Public Cloud   | Private Cloud                                   | Community Cloud                                 | Hybrid Cloud                                    | Multi-Cloud                                                |
| --------------------------- | -------------- | ----------------------------------------------- | ----------------------------------------------- | ----------------------------------------------- | ---------------------------------------------------------- |
| Initial Setup               | Easy           | Complex, requires a professional team to set up | Complex, requires a professional team to set up | Complex, requires a professional team to set up | Complex, requires expertise in managing multiple providers |
| Scalability and Flexibility | High           | High                                            | Fixed                                           | High                                            | Very High                                                  |
| Cost Comparison             | Cost-effective | Costly                                          | Distributed cost among members                  | Between public and private cloud                | Variable; depends on providers and management complexity   |
| Reliability                 | Low            | Low                                             | High                                            | High                                            | Very High (improved redundancy across providers)           |
| Data Security               | Low            | High                                            | High                                            | High                                            | High (depends on configuration and governance)             |
| Data Privacy                | Low            | High                                            | High                                            | High                                            | High (depends on data placement and compliance policies)   |
