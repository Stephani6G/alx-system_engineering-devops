
        - Round Robin algorithm distribution. he queries requested are distributed to every server sequentially one after another.
 Is your load-balancer enabling an Active-Active or Active-Passive setup, explain the difference between both
         - Active-Active set up.
How a database Primary-Replica (Master-Slave) cluster works
          - A primary-replica (also known as master-slave) database cluster is a setup where multiple copies of a database exist, with one designated as the primary or master node and the others acting as replicas or slave nodes. This setup provides several benefits, including improved performance, high availability, and data redundancy.
 What is the difference between the Primary node and the Replica node in regard to the application?
       -  Primary Node: The primary node is the main database server responsible for handling read and write operations. All write operations, such as INSERT, UPDATE, and DELETE queries, are directed to this primary node. It maintains the authoritative copy of the data    .
        Replica Nodes: Replica nodes, also called slave nodes, are copies of the primary database. These nodes receive replicated copies of data from the primary node and are typically used for read operations, such as SELECT queries. They serve to distribute read queries, reducing the load on the primary node and improving performance.
~                                                                                            
~                                                                                            
