"use strict";

//about button
const aboutButton = document.querySelector(".about");
const gotoSection = document.querySelector(".about-me-button");

aboutButton.addEventListener("click", function () {
  gotoSection.scrollIntoView({
    behavior: "smooth",
    block: "start",
  });
});

//project button

const projectButton = document.querySelector(".projects");
const targetSection = document.querySelector(".section-project");

projectButton.addEventListener("click", function () {
  targetSection.scrollIntoView({
    behavior: "smooth",
    block: "start",
  });
});

//contact me button

const contactMeButton = document.querySelector(".contactMe");
const targetSection2 = document.querySelector(".lastOne");

contactMeButton.addEventListener("click", function () {
  targetSection2.scrollIntoView({
    behavior: "smooth",
    block: "start",
  });
});
//learn more buttton

const learnMore = document.querySelector(".btn--outline");
const targetSection3 = document.querySelector(".section-featured");
learnMore.addEventListener("click", function () {
  targetSection3.scrollIntoView({
    behavior: "smooth",
    block: "start",
  });
});
// const diceImageLInk = document.querySelector(".step-img-diceGame");
// diceImageLInk.addEventListener("click", function () {});
