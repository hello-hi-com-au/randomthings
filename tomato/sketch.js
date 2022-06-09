function setup() {
  createCanvas(400, 400);
}

function draw() {
  noStroke();
fill(17, 255, 0);
rect(184, 66, 27, 53);
fill(255, 0, 0);
ellipse(150, 200, 200, 200);
ellipse(250, 200, 200, 200);
textSize(20);
text("Eat Up!!!", 160, 45);

draw = function() {
    if (mouseY > 60) {
   fill(255, 255, 255);
ellipse(mouseX, mouseY, 30, 30); 
}
};
}