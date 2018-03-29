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

        function line() {
            var p0 = new Vec(1, 1);
            var p1 = new Vec(30, 30);
            // js.Lib.debug();

            var v0 = new Vec( p0.y, -p0.x);
            var v1 = new Vec(-p0.y,  p0.x);
            var v2 = new Vec( p1.y, -p1.x);
            var v3 = new Vec(-p1.y,  p1.x);

            geometry.add(new Vertex(v0));
            geometry.add(new Vertex(v1));
            geometry.add(new Vertex(v2));

            geometry.add(new Vertex(v2));
            geometry.add(new Vertex(v3));
            geometry.add(new Vertex(v1));

            // js.Lib.debug();
        }

        line();


        color = new Color(1, 1, 1, 1);
    }

    override public function update(dt:Float) {}

}
