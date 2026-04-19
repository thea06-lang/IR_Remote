# Dabble Controller

An ESP32-based robot car controlled via Bluetooth using the [Dabble app](https://thestempedia.com/product/dabble/).

## Hardware

- ESP32 microcontroller
- 4 DC motors with motor driver
- Smartphone with Dabble app installed

### Pin Mapping

| Function | GPIO Pins |
|----------|-----------|
| Motor direction | 25, 26, 32, 27, 21, 18, 23, 22 |
| Motor speed (PWM) | 33, 14, 5, 19 |

## Setup

1. Install the [DabbleESP32](https://github.com/STEMpedia/DabbleESP32) library in Arduino IDE
2. Upload `dabble_controller.ino` to your ESP32
3. Open the Dabble app on your phone and connect via Bluetooth to `"Thea"`
4. Select the **Gamepad** module in the app

## Controls

| Button | Action |
|--------|--------|
| Up | Move forward |
| Down | Move backward |
| Left | Turn left |
| Right | Turn right |
| Circle | Stop |
| Triangle | Increase speed (+5) |
| Cross | Decrease speed (-5) |

Speed is constrained between **0–100** and defaults to **50**.

## Files

| File | Description |
|------|-------------|
| `dabble_controller.ino` | Main loop — Bluetooth input and movement logic |
| `car_monitor_new.ino` | Motor driver functions with PWM speed control |

## Serial Monitor

Connect at **115200 baud** to see debug output for button presses and speed changes.
