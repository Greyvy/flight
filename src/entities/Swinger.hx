package entities;

import luxe.Entity;
import luxe.Visual;
import luxe.Color;
import phoenix.Vector.Vec;

import phoenix.Batcher;
import phoenix.geometry.*;
import phoenix.geometry.Geometry;
import phoenix.geometry.Vertex;


// import luxe.collision.shapes.Polygon;
// import luxe.collision.ShapeDrawer;

class Swinger extends Visual {

    override public function init() {
        // geometry = Luxe.draw.ring({ x: 0, y: 0, r: 16 });
        geometry = new Geometry({ batcher: Luxe.renderer.batcher, primitive_type: PrimitiveType.triangles });


        var tau = Math.PI * 2;
        var sides = 32;
        var piece = tau / sides;

        var radius = 16;
        var thickness = 2;

        var inner_rad = radius - thickness;

        for (i in 0...sides) {
            var p0 = new Vec(Math.cos(piece * i), Math.sin(piece * i));
            var p1 = new Vec(Math.cos(piece * (i + 1)), Math.sin(piece * (i + 1)));
            var p2 = new Vec(Math.cos(piece * i), Math.sin(piece * i));
            var p3 = new Vec(Math.cos(piece * (i + 1)), Math.sin(piece * (i + 1)));

            p0.length = radius;
            p1.length = radius;
            p2.length = inner_rad;
            p3.length = inner_rad;

            geometry.add(new Vertex(p0));
            geometry.add(new Vertex(p1));
            geometry.add(new Vertex(p2));

            geometry.add(new Vertex(p2));
            geometry.add(new Vertex(p1));
            geometry.add(new Vertex(p3));

        }

        var p0 = new Vec(1, 1);
        var p1 = new Vec(30, 30);
        // var p1 = new Vec(Math.cos(tau / 4), Math.sin(tau / 4));
        // p1.length = 30;

        // var s0 = new Vec(-thickness / 2, p0.y);
        // var s1 = new Vec( thickness / 2, p0.y);

        var v0 = new Vec(p0.y, -p0.x);
        var v1 = new Vec(-p0.y, p0.x);
        var v2 = new Vec(p1.y, -p1.x);
        var v3 = new Vec(-p1.y, p1.x);

        // v0.length = thickness / 2;
        // v1.length = thickness / 2;
        // v2.length = thickness / 2;
        // v3.length = thickness / 2;

        // s0.angle2D = p0.angle2D - (Math.PI / 4);
        // s1.angle2D = p0.angle2D + (Math.PI / 4);

        // var p0_angle = p0.angle2D;

        // js.Lib.debug();

        geometry.add(new Vertex(v0));
        geometry.add(new Vertex(v1));
        geometry.add(new Vertex(v2));

        geometry.add(new Vertex(v2));
        geometry.add(new Vertex(v3));
        geometry.add(new Vertex(v1));

        // geometry.add(new Vertex(new Vec(s0.x, p1.y)));
        // geometry.add(new Vertex(new Vec(s1.x, p0.y)));

        // geometry.add(new Vertex(new Vec(s0.x, p1.y)));
        // geometry.add(new Vertex(new Vec(s1.x, p1.y)));
        // geometry.add(new Vertex(new Vec(s1.x, p0.y)));


        color = new Color(1, 1, 1, 1);
    }

    override public function update(dt:Float) {}

}
