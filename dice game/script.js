'use strict';
const score0EL = document.querySelector('#score--0');
const score1EL = document.getElementById('score--1');
const diceEL = document.querySelector('.dice');

const btnNew = document.querySelector('.btn--new');
const btnRoll = document.querySelector('.btn--roll');
const btnHold = document.querySelector('.btn--hold');

const player0EL = document.querySelector('.player--0');
const player1El = document.querySelector('.player--1');

const current0EL = document.getElementById('current--0');
const current1EL = document.getElementById('current--1');

let scores, currentScore, activePlayer, playing;

const init = function () {
  scores = [0, 0];
  currentScore = 0;
  activePlayer = 0;
  playing = true;

  score0EL.textContent = 0;
  score1EL.textContent = 0;
  current0EL.textContent = 0;
  current1EL.textContent = 0;

  player0EL.classList.remove('player--winner');
  player1El.classList.remove('player--winner');
  player0EL.classList.add('player--active');
  player1El.classList.remove('player--active');
};
init();

diceEL.classList.add('hidden');
const switch_player = function () {
  document.getElementById(`current--${activePlayer}`).textContent = 0;
  currentScore = 0;
  activePlayer = activePlayer === 0 ? 1 : 0;
  player0EL.classList.toggle('player--active');
  player1El.classList.toggle('player--active');
};
//the togglr method is used for the purpose of adding or removing a  class based on the appearance of the class (whether the class is availale it will remove it or it will add a classs if it is not available)

//implement the rolling dice functionality
btnRoll.addEventListener('click', function () {
  if (playing) {
    //first well generrate a random dice roll
    const dice = Math.trunc(Math.random() * 6) + 1;
    console.log(dice);
    // display a dice
    diceEL.classList.remove('hidden');
    diceEL.src = `dice-${dice}.png`;
    //check for rolled 1
    if (dice !== 1) {
      currentScore += dice;
      document.getElementById(`current--${activePlayer}`).textContent =
        currentScore;
      // current0EL.textContent = currentScore;
    } else {
      //switch to the next player
      switch_player();
    }
  }
});
btnHold.addEventListener('click', function () {
  //we can use the console.log method to always find a solution or to debug
  //1 add current score to the score of the active player
  if (playing) {
    scores[activePlayer] += currentScore;
    //scores[1]=scores[1]+currentScore;
    document.getElementById(`score--${activePlayer}`).textContent =
      scores[activePlayer];
    //2 check score if player's score is<=100
    if (scores[activePlayer] >= 100) {
      //finish the game
      playing = false;
      document
        .querySelector(`.player--${activePlayer}`)
        .classList.add('player--winner');
      document
        .querySelector(`.player--${activePlayer}`)
        .classList.remove('player--active');
      diceEL.classList.add('hidden');
    } else {
      switch_player();
    }
  }
});
btnNew.addEventListener('click', init);
