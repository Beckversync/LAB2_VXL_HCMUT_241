# 🚀 STM32 7-Segment LED & LED Matrix Simulation 🎉

Welcome to the **STM32 7-Segment LED & LED Matrix Simulation Project**! This project takes you on an exciting journey, from mastering basic seven-segment displays to building a fully-animated LED matrix — all powered by the mighty **STM32F103C6 microcontroller**. 🧑‍💻⚡

🛠️ **Tools & Tech:**
- **💡 Microcontroller:** STM32F103C6
- **🎥 Simulation:** Proteus
- **🧰 Programming:** STM32 HAL Library

## 🌈 Table of Contents
- [📟 Exercise 1: Basic 7-Segment Display](#exercise-1-basic-7-segment-display)
- [💡 Exercise 2: 4-Digit Display & Blinking LEDs](#exercise-2-4-digit-display-and-blinking-leds)
- [🔄 Exercise 3: Updating 7-Segment Display](#exercise-3-updating-7-segment-display)
- [⏱️ Exercise 4: Adjusting Display Frequency](#exercise-4-adjusting-display-frequency)
- [⏰ Exercise 5: Digital Clock](#exercise-5-digital-clock)
- [🕒 Exercise 6: Software Timer Implementation](#exercise-6-software-timer-implementation)
- [🕹️ Exercise 7: Timer-Based Digital Clock](#exercise-7-timer-based-digital-clock)
- [⚡ Exercise 8: Optimized Interrupt Handling](#exercise-8-optimized-interrupt-handling)
- [🧱 Exercise 9: LED Matrix Integration](#exercise-9-led-matrix-integration)
- [🎉 Exercise 10: LED Matrix Animation](#exercise-10-led-matrix-animation)

## 📝 Exercises Breakdown

### 📟 Exercise 1: Basic 7-Segment Display
**🎯 Objective:** Interface two 7-segment displays and control them using timer interrupts.
- **🔩 Components:**
  - 7-Segment Common Anode (PB0-PB6)
  - PNP Transistor
  - STM32F103C6
- **🌀 Functionality:**
  - Display `1` and `2` alternately every 500ms.

### 💡 Exercise 2: 4-Digit Display & Blinking LEDs
**🎯 Objective:** Extend to a 4-digit display with visual effects.
- **🌈 Effects:**
  - Blinking DOT LEDs every second.
  - Smooth fading transition between numbers.
  - A cool running light pattern. 💨

### 🔄 Exercise 3: Updating 7-Segment Display
**🎯 Objective:** Implement the `update7SEG(int index)` function.
- **💾 Buffer:** Manage a 4-integer buffer for display values.

### ⏱️ Exercise 4: Adjusting Display Frequency
**🎯 Objective:** Fine-tune display frequency for a 1Hz update rate.

### ⏰ Exercise 5: Digital Clock
**🎯 Objective:** Build a digital clock with smooth transitions and a blinking colon separator.

### 🕒 Exercise 6: Software Timer Implementation
**🎯 Objective:** Implement a non-blocking software timer.
- **🔧 Steps:**
  1. Declare timer variables.
  2. Replace `HAL_Delay` with timer flags.

### 🕹️ Exercise 7: Timer-Based Digital Clock
**🎯 Objective:** Upgrade the digital clock using the software timer.

### ⚡ Exercise 8: Optimized Interrupt Handling
**🎯 Objective:** Offload `update7SEG()` from interrupts to `main()`.

### 🧱 Exercise 9: LED Matrix Integration
**🎯 Objective:** Control an 8x8 LED matrix.
- **🧩 Components:**
  - MATRIX-8X8-RED
  - ULN2803 Transistor Array

### 🎉 Exercise 10: LED Matrix Animation
**🎯 Objective:** Create a cool left-scrolling animation. ✨

---

🛠️ **How to Use:**
1. **📥 Clone this repository.**
2. **🖥️ Open the Proteus simulation files.**
3. **⚡ Flash the STM32 code onto your board.**
4. **🎉 Enjoy building and testing awesome displays!**

👥 **Contributors:**
- Your Name Beckversyn

📝 **License:**
HCMUT
