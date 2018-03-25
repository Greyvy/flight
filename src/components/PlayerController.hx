package components;

import phoenix.Vector.Vec;
import luxe.Component;
import entities.Player;
import luxe.Visual;
import luxe.Color;
import luxe.tween.Actuate;


class PlayerController extends Component {

    var speed         : Float = 440;
    var mouse         : Vec;
    var ref           : Player;

    var canJump       : Bool = true;
    var jump_distance : Float = 128;
    var jump_cooldown : Float = 0.25; // in seconds

    var jump_target   : Vec;

    override public function init() {
        ref = cast entity;
        jump_target = new Vec(0, jump_distance);
    }

    public function jump() {
        canJump = false;
        var result = pos + jump_target;
        Actuate.defaultEase = luxe.tween.easing.Sine.easeInOut;

        Actuate.tween(pos, jump_cooldown, { x: result.x, y: result.y });
        Actuate.tween(scale, jump_cooldown / 2, { x: 0.15, y: 0.15 })
            .repeat(1)
            .reflect()
            .onComplete(function() {
                canJump = true;
            });
    }

    override public function update(dt:Float) {
        // Move the player around
         if (Luxe.input.inputdown('left')) {
            pos.x += -speed * dt;
        }

        if (Luxe.input.inputdown('up')) {
            pos.y += -speed * dt;
        }

        if (Luxe.input.inputdown('right')) {
            pos.x += speed * dt;
        }

        if (Luxe.input.inputdown('down')) {
            pos.y += speed * dt;
        }

        mouse = Luxe.screen.cursor.pos;
        var rot = mouse - Luxe.camera.world_point_to_screen(pos);

        ref.dir_vis.pos.copy_from(pos);
        ref.jump_vis.pos.copy_from(pos);

        // Set rotation based on the mouse
        ref.radians = rot.angle2D + Math.PI / 2;
        ref.dir_vis.radians = ref.radians;

        if (Luxe.input.inputdown('teleport')) {
            jump_target = new Vec(0, jump_distance);
            jump_target.angle2D = rot.angle2D;
            ref.jump_vis.geometry = Luxe.draw.line({
                p0: jump_target, p1: new Vec(0, 0) });
        }

        if (canJump) {
            if (Luxe.input.inputreleased('teleport')) {
                jump();
            }
        }

    } // update

}

