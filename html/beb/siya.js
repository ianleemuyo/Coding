const yesButton = document.getElementById('yesButton');
const noButton = document.getElementById('noButton');
const clock = document.getElementById('clock');
const messagesDiv = document.getElementById('messages');
const celebration = document.getElementById('celebration');
let noButtonClicks = 0;

// Function to update the clock and date
function updateClock() {
    const now = new Date();
    const hours = now.getHours().toString().padStart(2, '0');
    const minutes = now.getMinutes().toString().padStart(2, '0');
    const seconds = now.getSeconds().toString().padStart(2, '0');
    const date = now.toLocaleDateString();

    clock.innerText = `${hours}:${minutes}:${seconds} | ${date}`;
}

setInterval(updateClock, 1000);

// Handle "Yes" button click
yesButton.addEventListener('click', () => {
    celebration.classList.remove('hidden');
    setTimeout(() => {
        celebration.classList.add('hidden');
    }, 5000);
    clock.style.display = 'none';  // Hide the clock after 'Yes'
});

// Handle "No" button click
noButton.addEventListener('click', () => {
    noButtonClicks++;

    if (noButtonClicks === 5) {
        messagesDiv.innerText = "Do you really not like me?";
    } else if (noButtonClicks === 10) {
        messagesDiv.innerText = "That much?";
    } else if (noButtonClicks === 20) {
        messagesDiv.innerText = "Try again maybe you will.";
    } else if (noButtonClicks === 21) {
        location.reload();  // Reload the page after the 21st click
    }

    noButton.style.position = 'absolute';
    noButton.style.top = `${Math.random() * 80 + 10}%`;
});
