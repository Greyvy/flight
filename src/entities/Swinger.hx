package entities;

import luxe.utils.Maths;
import luxe.Visual;
import luxe.Color;
import phoenix.Vector.Vec;

import phoenix.Batcher;
import phoenix.geometry.*;

import luxe.tween.Actuate;

// import luxe.collision.shapes.Polygon; import luxe.collision.ShapeDrawer;

class Swinger extends Visual {

    private var tau       : Float = Math.PI * 2;
    private var thickness : Int = 1;

    private var arm0      : Array<Vec> = [new Vec(0, 0), new Vec(30, 30)];
    private var arm1      : Array<Vec> = [new Vec(0, 0), new Vec(-30, 30)];

    override public function init() {
        geometry = new Geometry({
            batcher: Luxe.renderer.batcher,
            primitive_type: PrimitiveType.triangles
        });

        color = new Color(1, 1, 1, 1);

        var target = Luxe.screen.mid;

        Actuate.defaultEase = luxe.tween.easing.Sine.easeInOut;
        Actuate.update(tweenSwing, 1,
                [arm0[1].angle2D, arm1[1].angle2D],
                [target.angle2D, -target.angle2D])
            .repeat()
            .reflect();

    }

    function tweenSwing(a, b) {
        arm0[1].angle2D = a;
        arm1[1].angle2D = b;
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

        var v2 = new Vec( p1.y, -p1.x);
        var v3 = new Vec(-p1.y,  p1.x);

        v2.normalize();
        v3.normalize();

        v2.length *= thickness / 2;
        v3.length *= thickness / 2;

        var v0 = v2.clone();
        var v1 = v3.clone();

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
        line(arm0[0], arm0[1]);
        line(arm1[0], arm1[1]);

    }

}

