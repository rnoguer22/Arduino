# Arduino 

--- 

This an Arduino demo for Linux environments. Executing raw .ino files with no IDE, just using the terminal instead 

--- 

### Instalation 

```bash
sudo pacman -Si arduino-cli
sudo pacman -S arduino-cli 

# We are using arduino uno r3, so we have to install its core. We can see its core, FQBN and serial port with the following command (with the arduino board connected to the system)
arduino-cli board list 

sudo arduino-cli core update-index
sudo arduino-cli core install arduino:avr

# Compile the code first to verify errors
cd path/to/your/arduino/folder
sudo arduino-cli compile --fqbn arduino:avr:uno .

# Upload the code so that the board runs it 
sudo arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:avr:uno .

# To see the serial output if provided by the program
sudo arduino-cli monitor /dev/ttyACM0

```

---
