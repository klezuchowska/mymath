Since recently a lot of teenagers has been putting a lot of interest into theirs appearance, weight and generally outlook, I decided to develop a little program, that can help them checking theirs body parameters. Program is written in C++ language, and my main coding task was to write my own library. In this component you gonna find 5 basic functions. They are based on the parameters already given by user, it is - weight and hight. Now I am going to describe functions:

BMI Counter  double bmi(double m, double w)
This function takes weight (in kg) and height (in meters) and returns the Body Mass Index.

Body Characteristic  const char* check(double b)
Function takes already counted before BMI, and is checking in which domain this index is located. If it is below 18.5 it means underweight, 18.5 - 25 it is perfect body mass, and 	above 25 means overweight. It gives as output proper word.
	
Advice const char* advice(double b)
The same as previous function, input is a BMI factor. This time function gives to the user little, and a bit funny advices, how they can help themselves to keep in perfect body shape. 

Squirrel Counter int squirral (double m)
As a little squirrel lover, and probably not the only one, I would like to give an idea how many squirrels could fit in your body :) So I took average squirrel weight what is 300g, and counted how many entire squirrels could you be. Function gonna return the number of full squirrels (floor function of double number).

Water Counter double water(double m)
We also should not forget how important is amount of water in our bodies. And human body consist almost in 70% of water! This function takes the weight of body and counts how many liters (1 liter = 1 kg) of water is in your body. Output is amount of water (in liters) in your body.

