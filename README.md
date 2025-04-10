# [Desktop-Weather-Station](https://circuitdigest.com/microcontroller-projects/)

![Main Image](https://github.com/jobitjoseph/Desktop-Weather-Station/blob/ccabbe9faf04c1585b6047bbfd509baff6436843/Images/Title%20Image.png)


---
<p>
  In today’s fast-paced world, many of us spend long hours indoors—whether working from home, studying, or just managing our daily routines. Natural cues like changing skies, outdoor temperatures, or the feel of humidity are often lost behind four walls and closed windows. This can make it difficult to stay aware of what’s happening outside, especially when our focus is tied to digital devices. Having a dedicated, always-visible weather display on your desk adds a subtle but meaningful connection to the outside world. It’s a small touch that can help with planning your day, knowing when to grab a jacket before stepping out, or simply enjoying the gentle reminder that time and weather continue to change beyond the screen.
</p>

<p>This project offers a practical way to build a clean and minimal weather station using an ESP32 microcontroller and an E-Ink display. The use of E-Ink ensures that the display remains readable even without constant power, making it a perfect fit for battery-powered desktop use. Once connected to Wi-Fi, the station fetches real-time weather data such as temperature, humidity, and current conditions using the OpenWeatherMap API. It also monitors indoor temperature and humidity with the help of a built-in sensor and adds to the data displayed on the screen. The device automatically updates itself at fixed intervals and enters deep sleep to conserve energy. Once assembled, it becomes a quiet and elegant companion on your desk—keeping you informed, without the distractions of a smartphone or computer screen.</p>
The firmware part of this project builds upon the excellent work of [David Bird](https://github.com/G6EJD/ESP32-e-Paper-Weather-Display). The code has been adapted from his original implementation.



