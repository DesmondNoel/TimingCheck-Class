# TimingCheck-Class
A Class to easily perform timing checks within your own code.

How Does it work?

Creating an instance of the class starts the timer for that instance. The class is instantiated by an int ID. The timer is ended by calling the EndTimer() method. Once this is done, the ID and the time is compared with a map of acceptable execution times for that id.

If the execution time is acceptable, we continue execution as normal.

If not, we peform an immediate check that allows you to exit the process we also remove the value pair from the map and you can check for this value from the map at your leisure to determine if any timings checks were failed.

Why was it released?


This was originally used by me to detect debuggers by checking code execution times. It can be falsed by lag but you can control this by putting unrealistic values within the map.
