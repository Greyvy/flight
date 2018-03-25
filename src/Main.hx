// To run: `flow run --debug`
import luxe.GameConfig;
import luxe.Input;
import phoenix.Vector.Vec;
import luxe.Color;

import luxe.collision.Collision;
import luxe.collision.shapes.Shape;
import luxe.collision.shapes.Polygon;
import luxe.collision.Collision.Results;
import luxe.collision.data.ShapeCollision;

import entities.Player;
import entities.Swinger;

class Utils {

    // Round to a certain float precision
    // ref: https://stackoverflow.com/a/23690980
    public static function round(number:Float, ?precision=2):Float {
        number *= Math.pow(10, precision);
        return Math.round(number) / Math.pow(10, precision);
    }

}

class Main extends luxe.Game {

    var width:Int = 640;
    var height:Int = 360;

    override function config(config:GameConfig) {

        config.window.title = 'luxe game';
        config.window.width = width;
        config.window.height = height;
        config.window.fullscreen = false;

        return config;

    }

    var player  : Player;
    var swinger : Swinger;
    var walls   : Array<Array<Float>>;
    var wall_colliders : Array<Shape> = [];

    override function ready() {
        player = new Player({ name: 'Player', pos: Luxe.screen.mid });
        swinger = new Swinger({ name: 'Swinger', pos: new Vec(120, 80) });

        Luxe.camera.size = new Vec(width, height);
        Luxe.camera.shake(12);

        // walls = [
        //     [-1, 0, Luxe.screen.w + 2, 30],
        //     [-1, 30, 30, Luxe.screen.h - 60],
        //     [-1, Luxe.screen.h - 30, Luxe.screen.w + 2, 30],
        //     [Luxe.screen.w - 29, 30, 30, Luxe.screen.h - 60]
        // ];

        walls = [
            [
                Luxe.screen.w * (0.25 / 2), Luxe.screen.h * (0.25 / 2),
                Luxe.screen.w * 0.75 - 2, Luxe.screen.h * 0.75 - 2
            ],
            [
                Luxe.screen.w * (0.25 / 2) + 9, Luxe.screen.h * (0.25 / 2) + 9,
                Luxe.screen.w * 0.75 - 18, Luxe.screen.h * 0.75 - 18
            ]
        ];

        for (w in walls) {
            Luxe.draw.rectangle({
                x: w[0], y: w[1],
                w: w[2], h: w[3],
                color: new Color(1, 1, 1, 1)
            });
        }

        wall_colliders.push(Polygon.rectangle(walls[0][0], walls[0][1], walls[0][2], 9));

        // @NOTE(Grey): register keymap
        Luxe.input.bind_key('left', Key.left);
        Luxe.input.bind_key('left', Key.key_a);

        Luxe.input.bind_key('up', Key.up);
        Luxe.input.bind_key('up', Key.key_w);

        Luxe.input.bind_key('right', Key.right);
        Luxe.input.bind_key('right', Key.key_d);

        Luxe.input.bind_key('down', Key.down);
        Luxe.input.bind_key('down', Key.key_s);

        Luxe.input.bind_key('teleport', Key.lshift);
        Luxe.input.bind_key('teleport', Key.space);
        Luxe.input.bind_mouse('teleport', luxe.MouseButton.right);

        Luxe.input.bind_key('shoot', Key.key_x);
        Luxe.input.bind_mouse('shoot', luxe.MouseButton.left);


        Luxe.events.listen('sim.triggers.collide', oncollide);

    } // ready

    // @NOTE(Grey): shutdown code
    override function onkeyup(event:KeyEvent) {
     if (event.keycode == Key.escape)
         Luxe.shutdown();
    } // onkeyup

    function oncollide(collisions:Results<ShapeCollision>) {
        if (collisions.length > 0) {
            trace('collide');
            // js.Lib.debug();
        }
    } // ontrigger

    override function update(dt:Float) {
        if (Luxe.input.keyreleased(Key.key_0)) {
            Luxe.showConsole(!Luxe.debug.visible);
        }

        Luxe.camera.center = new Vec(player.pos.x, player.pos.y);

        var collisions = Collision.shapeWithShapes(player.collider, wall_colliders);
        Luxe.events.fire('sim.triggers.collide', collisions);

        // luxe.Log.log(triangle.spr.pos.x);

    } // update

}

