# mars-rover-autonomy-sim 🚀

This project simulates a Mars Rover that must operate independently due to the ~15-minute communication delay with Earth. It interprets high-level commands and autonomously navigates around obstacles using AI pathfinding (e.g., A*, D*). The aim of this project is to aid in the development of an autonomous rover using AI to mitigate the risks associated with the Earth-Mars communication delay.

## 🧠 Features
- Command queue with delay simulation
- A* pathfinding for autonomous rerouting
- Terrain grid with hazards and obstacles
- Sensor-based obstacle detection
- Fault recovery and replanning logic

## 📁 Project Structure
├── include/ # Header files
├── src/ # Source files
├── missions/ # Mission command plans
├── logs/ # Action logs
├── CMakeLists.txt # Build system
└── README.md

## 🛠️ Build Instructions
```bash
mkdir build
cd build
cmake ..
make
./MarsRoverAutonomySim
  
