## Explanation and Examples

This project demonstrates how motor control can be simplified by encapsulating the logic into reusable functions.

### Custom Methods

Instead of repeatedly writing multiple `digitalWrite()` and `analogWrite()` instructions, the project introduces two custom methods:

* `moveMotors(speedA, speedB)` – Controls the direction and speed of both motors.
* `stopMotors()` – Stops all motor movement.

This approach makes the code cleaner, easier to read, and easier to maintain.

### Examples

Move both motors forward at full speed:

```cpp
moveMotors(255, 255);
```

Move both motors backward:

```cpp
moveMotors(-255, -255);
```

Turn by running the motors at different speeds:

```cpp
moveMotors(255, 100);
```

Stop all movement:

```cpp
stopMotors();
```

### Using Variables

Motor speed values can also be stored in variables.

```cpp
int speedA = 255;
int speedB = 200;

moveMotors(speedA, speedB);
```

Using variables makes it easier to adjust speeds, test different configurations, and reuse the same code throughout a project.

### Benefits

* Cleaner code structure
* Reusable motor control functions
* Independent speed control for each motor
* Support for forward and reverse movement
* Easier integration into larger robotics projects
