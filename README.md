# FreeFem PDE Examples

This repository contains example codes and resources for solving Partial Differential Equations (PDEs) using [FreeFem++](https://freefem.org/). The examples cover Dirichlet, Neumann, and Robin boundary conditions, as well as time-dependent (parabolic) problems.

## Directory Structure

- **Dirichlet_BC/**  
  Examples with Dirichlet boundary conditions.

  - `heat.edp`: Stationary heat equation with Dirichlet BC.
  - `heatexb.eps`, `HeatExchanger.eps`: Output plots.

- **Neumann_BC/**  
  Examples with Neumann boundary conditions.

  - `acustic.edp`: Acoustic problem with Neumann BC.
  - `Sound.eps`: Output plot.

- **Parabolic_PDE/**  
  Time-dependent (parabolic) PDEs and related resources.
  - `thermal_conduction.edp`: 2D heat equation with mixed (Robin) BC.
  - `axisymmetry_thermal_conduction.edp`: Axisymmetric heat conduction.
  - `NACA0012_Airfoil.edp`: Airfoil potential flow and lift computation.
  - `theory.ipynb`: Jupyter notebook with theory and finite element formulation.
  - `thermic.dat`, `theta_lift_log.dat`: Output data files.

## Getting Started

1. **Install FreeFem++**  
   Download and install from [freefem.org](https://freefem.org/download.html).

2. **Run an Example**  
   Open a terminal and run:
   ```sh
   FreeFem++ Parabolic_PDE/thermal_conduction.edp
   ```
