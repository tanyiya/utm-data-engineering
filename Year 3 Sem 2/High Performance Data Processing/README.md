# ⚡ Course Reflection: High Performance Data Processing (HPDP)

The *High Performance Data Processing* course provided an advanced, rigorous framework tailored to the architecture, optimization, and scaling of large-scale data infrastructures. The curriculum focused heavily on overcoming the computational bottlenecks inherent in big data handling, web scraping, and real-time streaming analytics by leveraging parallel architectures, distributed computing engines, and highly optimized data pipelines.

The programmatic deliverables and technical breakthroughs achieved throughout the course are categorized below:

### 🎓 Serverless vs On Premise Architecture
To establish a strong foundation in critical engineering analysis, the initial phase focused on rigorous research methodologies and formal technical writing. This culminated in an academic paper formatted to strict standards, exploring modern high-performance computing frameworks, optimization trade-offs, and data system paradigms. Continuous progress was systematically documented via structured logbook tracking to maintain research discipline and reproducible workflows.
* **Associated Deliverable:** [HPDP IEEE Paper (PDF)](HPDP%20IEEE%20Paper.pdf)

### 🐘 Large-Scale In-Memory Data Optimization
Addressing the physical limitations of traditional processing tools when confronted with large out-of-memory datasets, this segment applied defensive computational strategies in Python to handle data volumes exceeding 700MB. Techniques executed to optimize RAM efficiency and CPU cycles included:
* **Downcasting & Type Optimization:** Minimizing memory footprints by re-evaluating and tightening pandas data types.
* **Chunking & Sampling:** Streamlining I/O operations through incremental text-stream processing.
* **Parallel Core Execution:** Transitioning processing pipelines from single-threaded constraints into parallelized computation graphs via **Dask**.
* **Repository:** [Assignment 2 — Big Data Handling Infrastructure](https://github.com/drshahizan/HPDP/tree/main/2526/assignment/A2/bdm/Sayur)

---

### 🚀 Advanced Engineering Projects & Systems Architecture

The architectural core of the course was executed across two major milestones, scaling from localized parallelization to live distributed stream processing.

#### 1. High-Performance Distributed Web Crawling (Project 1)
This project mandated the design and optimization of an enterprise-grade web scraping engine engineered to harvest, clean, and store over 100,000 structured records from a target Malaysian e-commerce platform. 


Key technical hurdles resolved included bypassing anti-scraping mechanisms, enforcing ethical crawling protocols, and mitigating I/O and CPU bottlenecks. Optimization techniques involved moving from sequential execution to aggressive **multithreading** and **multiprocessing**. The final system was validated through a comprehensive performance audit comparing pre- and post-optimization latency and throughput graphs.
* **Project Repository:** [Project 1 — High-Performance Web Crawler](https://github.com/drshahizan/HPDP/tree/main/2526/project/p1/shopping)
* **Associated Deliverable:** [HPDP Report P1 (PDF)](HPDP%20Report%20P1.pdf)

#### 2. Real-Time Distributed Sentiment Streaming (Project 2)
The final milestone shifted focus from batch processing to continuous data streams, constructing a live end-to-end sentiment analysis pipeline capturing Malaysian social media and product review telemetry. 

The system architecture implemented a cutting-edge real-time processing stack:
* **Ingestion Layer:** **Apache Kafka** distributed message brokers decoupled incoming live text streams.
* **Processing Layer:** **Apache Spark Structured Streaming** handled distributed micro-batching and applied embedded Natural Language Processing (NLP) / Machine Learning classification models for live sentiment sorting.
* **Storage & Visualization:** Processed analytical layers were transferred to high-throughput indexing stores (**Elasticsearch** / **Apache Druid**) for instant visual rendering and dashboard generation.
* **Project Repository:** [Project 2 — Real-Time Spark & Kafka Pipeline](https://github.com/drshahizan/HPDP/tree/main/2526/project/p2/Shopping)

---

> ### 🎯 Summary Conclusion
> The *High Performance Data Processing* course effectively built the core architectural skills needed to engineer highly scalable data platforms. Mastery of multi-core parallelization, memory layout optimizations, and distributed data engines like Spark and Kafka ensures the capability to confidently build resilient, low-latency data platforms that easily handle enterprise-scale big data workloads.
