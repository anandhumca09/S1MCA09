<!DOCTYPE html>
<html>
<head>
    <title>Calendar Generation</title>
</head>
<body>

<h2>Generate Calendar</h2>

Enter Year:
<input type="number" id="year">

<button onclick="generateCalendar()">Generate</button>

<div id="calendar"></div>

<script>
function generateCalendar() {
    let year = parseInt(document.getElementById("year").value);
    let output = "";

    if (isNaN(year) || year < 1) {
        alert("Please enter a valid year");
        return;
    }

    for (let month = 0; month < 12; month++) {
        let date = new Date(year, month, 1);
        let monthName = date.toLocaleString(
            "en-US", { month: "long" }
        );

        output += "<h3>" + monthName + " " + year + "</h3>";
        output += "<table border='1' cellpadding='5'>";
        output += "<tr><th>Sun</th><th>Mon</th><th>Tue</th>";
        output += "<th>Wed</th><th>Thu</th><th>Fri</th>";
        output += "<th>Sat</th></tr><tr>";

        let startDay = date.getDay();
        let days = new Date(year, month + 1, 0).getDate();

        for (let i = 0; i < startDay; i++) {
            output += "<td></td>";
        }

        for (let day = 1; day <= days; day++) {
            output += "<td>" + day + "</td>";

            if ((startDay + day) % 7 === 0 && day !== days) {
                output += "</tr><tr>";
            }
        }

        output += "</tr></table><br>";
    }

    document.getElementById("calendar").innerHTML = output;
}
</script>

</body>
</html>
