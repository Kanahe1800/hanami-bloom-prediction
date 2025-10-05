# 🌸 Hanami Bloom Prediction  
**Visualizing Cherry Blossom Bloom Trends Across Japan**

---

## Motivation  
Japan attracts an average of 30–40 million tourists each year [1], many drawn by the country’s breathtaking natural scenery and particularly beautiful annual **cherry blossom bloom**.  

Beyond tourism, bloom timing also acts as a **biological sensor** for environmental change. Shifts in the time of full blooming can reflect variations in temperature, precipitation, and CO₂ emissions, serving as indicators of climate change.  

Our goal is twofold:
1. Help travelers find the best times to visit Japan for cherry blossoms 
2. Investigate how environmental factors influence bloom timing and plant health  

---
## Solution

(This part not done yet)
- Talk about predicting by which days bloom occurs
- random forest and ML approach
- What we predict and user-web-interface

<img width="882" height="633" alt="Screenshot 2025-10-04 at 10 48 07 PM" src="https://github.com/user-attachments/assets/96aec756-1723-40e7-b66e-7252f07dbe95" />
  

---

## Methodology  
We used **OpenEarthData API** [2] to collect environmental data for Japan, spanning 1981 to the present day, including:

- **Monthly mean temperature (in Degrees Celcius):** `M2SMNXSLV`  
- **Number of days with rainfall >= 1mm per month:** `M2SMNXEDI`  

For each year X, we gathered data from November (X) to March (X + 1) to capture both:

- **Spring forcing temperature** – drives the onset of blooming  
   **Winter chill requirement** – ensures plants are ready for spring growth  

We then constructed seasonal tables and visualizations to identify long-term climate patterns and their correlation with cherry blossom timing, guided by plant phenology research [3].

---

## Future Applications  
- Monitoring other climate phenomenom with predictions, such as CO2 emission, N2 desposition, and photoperiod
- Scaling the model to other regions and plant species  accross the globe
- Providing tourism recommendations based on real-time environmental data  

---

## References  
1. [Japan National Tourism Organization – Inbound Statistics](https://www.tourism.jp/en/tourism-database/stats/inbound/)  
2. [OpenEarthData API – MERRA-2 Dataset](https://disc.gsfc.nasa.gov/datasets/M2SMNXSLV_5.12.4/summary)  
3. [Frontiers in Plant Science – Understanding Blooming Responses to Climate Change](https://www.frontiersin.org/journals/plant-science/articles/10.3389/fpls.2020.00443/full)
