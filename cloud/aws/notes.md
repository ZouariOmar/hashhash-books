# AWS (Amazone Web Service) Notes

- [AWS (Amazone Web Service) Notes](#aws-amazone-web-service-notes)
  - [The 6 Pillars of AWS](#the-6-pillars-of-aws)
    - [Operational Excellence](#operational-excellence)
    - [Security](#security)
    - [Reliability](#reliability)
    - [Performance Efficiency](#performance-efficiency)
    - [Cost Optimization](#cost-optimization)
    - [Sustainability](#sustainability)
  - [Cloud Adoption Framework (CAF) Perspectives and Foundational Capabilities](#cloud-adoption-framework-caf-perspectives-and-foundational-capabilities)
  - [Migration Strategies](#migration-strategies)
    - [AWS Snowball](#aws-snowball)
    - [AWS Database Migration Service](#aws-database-migration-service)
  - [Cloud services](#cloud-services)
    - [Simple Storage Service (S3)](#simple-storage-service-s3)
    - [Elastic Compute Cloud (EC2)](#elastic-compute-cloud-ec2)
    - [Relational Database Service (RDS)](#relational-database-service-rds)
  - [Data services](#data-services)
    - [Redshift](#redshift)
    - [Kinesis](#kinesis)
    - [SageMaker](#sagemaker)
  - [Content Delivery Network (CDN) services](#content-delivery-network-cdn-services)
    - [CloudFront](#cloudfront)

## The 6 Pillars of AWS

### Operational Excellence

- Run and fix your systems smoothly
- Real-world example: Write your setups as code. This stops human mistakes when building a server

### Security

- Protect your data and systems
- Real-world example: Lock your house doors. Use passwords and give access only to people who need it

### Reliability

- Keep your system working and fix it fast when things break
- Real-world example: Have backup plans. If one server breaks, another server takes over right away

### Performance Efficiency

- Make your system fast and use the right tools
- Real-world example: Pick a small car for short trips and a big truck for heavy loads. Use the right computer power for the job

### Cost Optimization

- Spend money wisely
- Real-world example: Only pay for what you use. Turn off servers at night if you do not need them

### Sustainability

- Think about the planet
- Real-world example: Use less energy by picking server parts that waste less power

## Cloud Adoption Framework (CAF) Perspectives and Foundational Capabilities

- **Business Perspective**: Makes sure cloud projects help your company save money and reach its goals.
- **People Perspective**: Focuses on training your staff and changing your work culture to use the cloud.
- **Governance Perspective**: Sets rules for managing costs, safety, and risks in the cloud.
- **Platform Perspective**: Helps you build a strong, modern foundation for your tech and apps.
- **Security Perspective**: Keeps your cloud data and servers safe from attacks.
- **Operations Perspective**: Focuses on keeping your apps running smoothly every day.

## Migration Strategies

### AWS Snowball

Accelerate moving offline data or remote storage to the cloud

### AWS Database Migration Service

Trusted by customers to securely migrate 1.5M+ databases with minimal downtime and zero data loss

## Cloud services

### Simple Storage Service (S3)

### Elastic Compute Cloud (EC2)

### Relational Database Service (RDS)

## Data services

### Redshift

> analytics - data warehousing

### Kinesis

> Real time data movement and analytics

### SageMaker

> Predictive analytics & ML

## Content Delivery Network (CDN) services

### CloudFront

![aws-cloud-front](img/aws-cloud-front.png)

- It caches copies of your files in hundreds of global server locations.
- When a user loads your page, CloudFront sends the file from the closest location.
- This makes loading times very fast.

> Securely deliver content with low latency and high transfer speeds
