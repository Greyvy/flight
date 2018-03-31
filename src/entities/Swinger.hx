package entities;

import luxe.Visual;
import luxe.Color;
import phoenix.Vector.Vec;

import phoenix.Batcher;
import phoenix.geometry.*;

import luxe.tween.Actuate;

// import luxe.collision.shapes.Polygon; import luxe.collision.ShapeDrawer;

class Swinger extends Visual {

    private var tau       : Float = Math.PI * 2;
    private var thickness : Int = 2;

    private var arm0      : Vec = new Vec(30, 30);

    override public function init() {
        geometry = new Geometry({
            batcher: Luxe.renderer.batcher,
            primitive_type: PrimitiveType.triangles
        });
        color = new Color(1, 1, 1, 1);

        var arm0_target = arm0.clone();
        arm0_target.angle2D += tau / 3;
        Actuate.tween(arm0, 0.25, { x: arm0_target.x, y: arm0_target.y })
            .repeat()
            .reflect();
    }

    function circle(pos:Vec, radius:Int, ?sides:Int = 32) {
        var piece = tau / sides;
        var inner_rad = radius - thickness;

        for (i in 0...sides) {
            var p0 = new Vec(Math.cos(piece * i), Math.sin(piece * i));
            var p1 = new Vec(Math.cos(piece * (i + 1)), Math.sin(piece * (i + 1)));
            var p2 = new Vec(Math.cos(piece * i), Math.sin(piece * i));
            var p3 = new Vec(Math.cos(piece * (i + 1)), Math.sin(piece * (i + 1)));

            p0 *= radius;
            p1 *= radius;
            p2 *= inner_rad;
            p3 *= inner_rad;

            geometry.add(new Vertex(p0));
            geometry.add(new Vertex(p1));
            geometry.add(new Vertex(p2));

            geometry.add(new Vertex(p2));
            geometry.add(new Vertex(p1));
            geometry.add(new Vertex(p3));

        }
    }

    function line(p0:Vec, p1:Vec) {

        var v0 = new Vec( p0.y, -p0.x);
        var v1 = new Vec(-p0.y,  p0.x);
        var v2 = new Vec( p1.y, -p1.x);
        var v3 = new Vec(-p1.y,  p1.x);

        v0.normalize();
        v1.normalize();
        v2.normalize();
        v3.normalize();

        v0.length *= thickness / 2;
        v1.length *= thickness / 2;
        v2.length *= thickness / 2;
        v3.length *= thickness / 2;

        v0 += p0;
        v1 += p0;
        v2 += p1;
        v3 += p1;

        geometry.add(new Vertex(v0));
        geometry.add(new Vertex(v1));
        geometry.add(new Vertex(v2));

        geometry.add(new Vertex(v2));
        geometry.add(new Vertex(v3));
        geometry.add(new Vertex(v1));

    }

    override public function update(dt:Float) {
        geometry.vertices = [];

        circle(new Vec(0, 0), 16, 32);
        line(new Vec(0, 0), arm0);

    }

}

