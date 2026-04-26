# 🚀 Vikram Lander Landing Simulation (C)

A simple **C program** simulating the landing decision logic of ISRO’s Vikram (Chandrayaan-3) lander.  
It checks critical parameters — **altitude, vertical velocity, horizontal velocity, tilt, and fuel** — and decides whether the lander achieves a **safe soft landing** or the mission is **aborted**.

---

## ✅ Parameters & Safe Limits
| Parameter              | Condition |
|------------------------|-----------|
| Altitude (m)           | ≤ 5       |
| Vertical velocity (m/s)| ≤ 2.0     |
| Horizontal velocity (m/s)| ≤ 0.5   |
| Tilt (°)               | < 12      |
| Fuel (%)               | ≥ 5       |

---

## 💻 How it Works
- User enters parameter values one by one.  
- Each parameter is checked **immediately**.  
- If any condition fails → **ABORT**.  
- If all conditions pass → **SUCCESS: Soft Landing**.  

---

## 📚 References
- [ISRO – Chandrayaan-3 Details](https://www.isro.gov.in/ISRO_EN/Chandrayaan3_Details.html)  
- [Times of India](https://timesofindia.indiatimes.com/india/chandrayaan-3-pragyan-to-roll-out-soon/articleshow/102988746.cms)  
- [Gunter’s Space Page](https://space.skyrocket.de/doc_sdat/chandrayaan-3.htm)  
