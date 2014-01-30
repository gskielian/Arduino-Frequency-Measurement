Arduino-Frequency-Measurement
=============================

The Arduino can be used to do frequency measurement potentially up to several MHz (depending of which method you use).

I have thus far found and documented two robust methods for frequency measurement on the Arduino:

* The FreqCount Library
* strategically using `pulseIn()`


---

## FreqCount Library

//TODO create blurb on Freq Count Library

#### Specs:
* Range:  up to several MHz[1][1]
* Usage:  uses pin 5
* Caveat: can alter pulse widths for `PWM` on other pwm pins.

## pulseIn()

The `pulseIn()` function can be used to detect the length of a pulse (it waits for the pulse to begin, and then returns the microsecond-width of said pulse).

#### example:

```ino
pulseIn(3, HIGH); // waits for 3 to turn HIGH, then returns the amount of us until it turns LOW again
```

An example how how to utilze this for frequency detection is provided.

#### Specs:

- can be used on _any_ pin
- 10us < pulse width < 3min
- due to the `10us` lower limit, 100kHz is the upper limit for pulseIn's frequency detection


## References:

[1] : http://tushev.org/articles/arduino/item/51-measuring-frequency-with-arduino
