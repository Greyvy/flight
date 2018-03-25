package entities;

import luxe.Entity;
import luxe.Visual;
import luxe.Color;
import phoenix.Vector.Vec;
import luxe.collision.shapes.Polygon;
import luxe.collision.ShapeDrawer;
// import luxe.tween.Actuate;

import components.PlayerController;

class DebugCol extends ShapeDrawer {
    override public function drawLine(p0x:Float, p0y:Float, p1x:Float, p1y:Float, ?startPoint:Bool = true) {
        Luxe.draw.line({
            p0: new Vec(p0x, p0y),
            p1: new Vec(p1x, p1y),
            color: new Color(0, 1, 0, 0.5)
        });
    }
}


class Player extends Visual {

    public var dir_vis  : Visual;
    public var jump_vis : Visual;

    public var collider : Polygon;

    override public function init() {

        geometry = Luxe.draw.ngon({ x: 0, y: 0, r: 16, sides: 3, solid: true});
        color = new Color(1, 1, 1, 1);

        dir_vis = new Visual({ name: 'player_direction',
            depth: 1,
            pos: pos,
            geometry: Luxe.draw.circle({ x: 0, y: -10, r: 2 }),
            color: new Color(0, 0, 0, 1)
        });

        jump_vis = new Visual({
            name: 'player_jump_visualization',
            depth: 3,
            pos: pos,
            visible: false,
            geometry: Luxe.draw.line({ p0: new Vec(0, 0), p1: new Vec(0, 128) }),
            color: new Color(1, 0, 1, 1),
        });

        collider = Polygon.create(pos.x, pos.y, 3, 16);
        collider.name = 'player_collision';

        add(new PlayerController());

    }

    override public function update(dt:Float) {

        // @NOTE(Grey): Would like to do this, but it lags 1 frame behind
        // dir_vis.pos.copy_from(pos);
        // jump_vis.pos.copy_from(pos);
        // dir_vis.radians = radians;

        if (Luxe.input.inputdown('teleport')) {
            jump_vis.visible = true;
        }

        if (Luxe.input.inputreleased('teleport')) {
            jump_vis.visible = false;
        }

        collider.position = pos;
        collider.rotation = radians * 180 / Math.PI;
        // var debug_col = new DebugCol();
        // debug_col.drawPolygon(col_geo);

    }

}

