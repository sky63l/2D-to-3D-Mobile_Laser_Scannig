# 2D-to-3D-Mobile_Laser_Scannig

This repository is presented the development of a prototype system on a ROS (Robot Operating System) package for 3D mapping using a low-cost 2D LiDAR sensor. The software and hardware architecture was validated to implement a 3D model construction algorithm based on displacement mapping obtained from odometry data from mobile robots.


## Usage
For clone just run below command at terminal  
```
git clone https://github.com/sky63l/ROS_compatible_package_for_3D_reconstruction_using_a_Low-cost_LiDAR-2D
cd robot_ws

```

## Archiecture SoftWare: 

Se establece rutas apropiadas para el flujo de cada tipo de mensaje durante el intercambio de datos. La Figura 1 muestra los nodos, topics y tipos de mensajes que constituyen la arquitectura. Se pueden distinguir dos grupos de nodos distintos:
- MICROROS_GROUP consta de dos nodos, scan_node y odometry_node ejecutado en el microcontrolador ESPWROOM-32. El nodo scan_node publica los datos recopilados a través del sensor LiDAR 2D /scan/sensor_msgs/LaserScan y el nodo odometry_combined_node publica los datos recopilados por el sensor de Unidad de Medición Inercial /imu/sensor_msgs/Imu y los datos recopilados por los sensores encoder de los motores /odom/sensor_msgs/odometry.
- El ROS2_GROUP consta de dos nodos ejecutados en una computadora remota. aligned_node se subscribe a scan_node permitiendo la lectura de escaneos láser y los convierte en una nube de puntos. La nube de puntos generada se publica luego en un nuevo topico de ROS denominado aligned_cloud
sensor_msgs/PointCloud2. constructor_node implementa el algoritmo de asignación de desplazamientos para generar el mapa en tiempo real. Publica un topico de ROS llamado elevated_map sensor_msgs::PointCloud2.

![image](https://github.com/sky63l/2D-to-3D-Mobile_Laser_Scannig/assets/91811505/032bd83e-087b-4484-8a42-492a35ab79eb)

## Lenguages: 

-C,C++

-Python 3.8

## Dependency: 

-Ubuntu 20.04 OS image

-ROS2 Foxy

-Micro-ROS

-Rviz Plugin

-Point Cloud Library PCL

## Result

/elevated_map/sensor_msgs::PointCloud2

![map (1)-1](https://github.com/sky63l/2D-to-3D-Mobile_Laser_Scannig/assets/91811505/a8abb2b2-700b-4735-81df-f3f5d477d7f2)

/3D_map/sensor_msgs::PointCloud2

![objet(1)-1](https://github.com/sky63l/2D-to-3D-Mobile_Laser_Scannig/assets/91811505/f69eda4b-e13b-482e-961f-25f2f71726f1)
