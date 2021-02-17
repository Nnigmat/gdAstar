# gdAstar
Godot A* module for Godot 3.2

A* implementation for godot, based off Justin Heyes-Jones A* C++ implementation ([https://github.com/justinhj/astar-algorithm-cpp](https://github.com/justinhj/astar-algorithm-cpp))

## How to install

1. To install the module you need to download the godot source code
2. Checkout to 3.2 version
3. Install required libs from guide https://docs.godotengine.org/ru/stable/development/compiling/index.html
4. Clone the module into `godot/modules/`. So you will have `godot/modules/gdAstar`.
5. Start compilation from the official guide https://docs.godotengine.org/ru/stable/development/compiling/index.html

## Example usage in gdscript

```python
var astar = gdAstar.new()

# Add all your walkable map points
var x = 0
var y = 0
astar.AddPoint(x, y)

# Find a path
var src = Vector2(0, 0)
var dst = Vector2(1, 1)
astar.FindPath(src.x, src.y, dst.x, dst.y)

# You may clear the current points with ClearPoints
astar.ClearPoints()

# And you can instance multiple gdAstar in case you need to
var astarFlying = gdAstar.new()

```
