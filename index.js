document.getElementById('btn').addEventListener('click', function (event) {
    event.preventDefault();
    document.getElementById('demo').innerHTML = "text after click of button";

});
