// API Key for OpenWeather
const apiKey = "c06a70932f041eb20090f6c312e30e94"; // Replace with your actual API key
const city = "Mangalore" // Replace with any city you want

// URL to fetch weather data
const url = `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${apiKey}&units=metric`;

// Fetch weather data
fetch(url)
  .then((response) => response.json()) // Convert the response to JSON
  .then((data) => {
    // Display the weather details
    console.log(`Weather in ${city}:`);
    console.log(`Temperature: ${data.main.temp}°C`);
    console.log(`Weather: ${data.weather[0].description}`);
  })
  .catch((error) => console.error("Error:", error)); // Handle errors