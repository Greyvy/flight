// Generated by Haxe 3.4.5
#ifndef INCLUDED_phoenix_Matrix
#define INCLUDED_phoenix_Matrix

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,Matrix)
HX_DECLARE_CLASS1(phoenix,MatrixTransform)
HX_DECLARE_CLASS1(phoenix,Quaternion)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)

namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES Matrix_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Matrix_obj OBJ_;
		Matrix_obj();

	public:
		enum { _hx_ClassId = 0x50da8404 };

		void __construct(hx::Null< Float >  __o_n11,hx::Null< Float >  __o_n12,hx::Null< Float >  __o_n13,hx::Null< Float >  __o_n14,hx::Null< Float >  __o_n21,hx::Null< Float >  __o_n22,hx::Null< Float >  __o_n23,hx::Null< Float >  __o_n24,hx::Null< Float >  __o_n31,hx::Null< Float >  __o_n32,hx::Null< Float >  __o_n33,hx::Null< Float >  __o_n34,hx::Null< Float >  __o_n41,hx::Null< Float >  __o_n42,hx::Null< Float >  __o_n43,hx::Null< Float >  __o_n44);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="phoenix.Matrix")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"phoenix.Matrix"); }
		static hx::ObjectPtr< Matrix_obj > __new(hx::Null< Float >  __o_n11,hx::Null< Float >  __o_n12,hx::Null< Float >  __o_n13,hx::Null< Float >  __o_n14,hx::Null< Float >  __o_n21,hx::Null< Float >  __o_n22,hx::Null< Float >  __o_n23,hx::Null< Float >  __o_n24,hx::Null< Float >  __o_n31,hx::Null< Float >  __o_n32,hx::Null< Float >  __o_n33,hx::Null< Float >  __o_n34,hx::Null< Float >  __o_n41,hx::Null< Float >  __o_n42,hx::Null< Float >  __o_n43,hx::Null< Float >  __o_n44);
		static hx::ObjectPtr< Matrix_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_n11,hx::Null< Float >  __o_n12,hx::Null< Float >  __o_n13,hx::Null< Float >  __o_n14,hx::Null< Float >  __o_n21,hx::Null< Float >  __o_n22,hx::Null< Float >  __o_n23,hx::Null< Float >  __o_n24,hx::Null< Float >  __o_n31,hx::Null< Float >  __o_n32,hx::Null< Float >  __o_n33,hx::Null< Float >  __o_n34,hx::Null< Float >  __o_n41,hx::Null< Float >  __o_n42,hx::Null< Float >  __o_n43,hx::Null< Float >  __o_n44);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Matrix_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Matrix","\x61","\xaa","\x5c","\xf0"); }

		::Array< Float > elements;
		 ::snow::api::buffers::ArrayBufferView _float32array;
		 ::phoenix::Matrix set(Float n11,Float n12,Float n13,Float n14,Float n21,Float n22,Float n23,Float n24,Float n31,Float n32,Float n33,Float n34,Float n41,Float n42,Float n43,Float n44);
		::Dynamic set_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		Float get_M11();
		::Dynamic get_M11_dyn();

		Float get_M21();
		::Dynamic get_M21_dyn();

		Float get_M31();
		::Dynamic get_M31_dyn();

		Float get_M41();
		::Dynamic get_M41_dyn();

		Float get_M12();
		::Dynamic get_M12_dyn();

		Float get_M22();
		::Dynamic get_M22_dyn();

		Float get_M32();
		::Dynamic get_M32_dyn();

		Float get_M42();
		::Dynamic get_M42_dyn();

		Float get_M13();
		::Dynamic get_M13_dyn();

		Float get_M23();
		::Dynamic get_M23_dyn();

		Float get_M33();
		::Dynamic get_M33_dyn();

		Float get_M43();
		::Dynamic get_M43_dyn();

		Float get_M14();
		::Dynamic get_M14_dyn();

		Float get_M24();
		::Dynamic get_M24_dyn();

		Float get_M34();
		::Dynamic get_M34_dyn();

		Float get_M44();
		::Dynamic get_M44_dyn();

		Float set_M11(Float _v);
		::Dynamic set_M11_dyn();

		Float set_M21(Float _v);
		::Dynamic set_M21_dyn();

		Float set_M31(Float _v);
		::Dynamic set_M31_dyn();

		Float set_M41(Float _v);
		::Dynamic set_M41_dyn();

		Float set_M12(Float _v);
		::Dynamic set_M12_dyn();

		Float set_M22(Float _v);
		::Dynamic set_M22_dyn();

		Float set_M32(Float _v);
		::Dynamic set_M32_dyn();

		Float set_M42(Float _v);
		::Dynamic set_M42_dyn();

		Float set_M13(Float _v);
		::Dynamic set_M13_dyn();

		Float set_M23(Float _v);
		::Dynamic set_M23_dyn();

		Float set_M33(Float _v);
		::Dynamic set_M33_dyn();

		Float set_M43(Float _v);
		::Dynamic set_M43_dyn();

		Float set_M14(Float _v);
		::Dynamic set_M14_dyn();

		Float set_M24(Float _v);
		::Dynamic set_M24_dyn();

		Float set_M34(Float _v);
		::Dynamic set_M34_dyn();

		Float set_M44(Float _v);
		::Dynamic set_M44_dyn();

		 ::snow::api::buffers::ArrayBufferView float32array();
		::Dynamic float32array_dyn();

		 ::phoenix::Matrix identity();
		::Dynamic identity_dyn();

		 ::phoenix::Matrix copy( ::phoenix::Matrix m);
		::Dynamic copy_dyn();

		 ::phoenix::Matrix make2D(Float _x,Float _y,hx::Null< Float >  _scale,hx::Null< Float >  _rotation);
		::Dynamic make2D_dyn();

		 ::phoenix::Matrix copyPosition( ::phoenix::Matrix m);
		::Dynamic copyPosition_dyn();

		 ::phoenix::Vector getPosition();
		::Dynamic getPosition_dyn();

		 ::phoenix::Matrix extractRotation( ::phoenix::Matrix m);
		::Dynamic extractRotation_dyn();

		 ::phoenix::Matrix makeRotationFromEuler( ::phoenix::Vector _v,hx::Null< int >  _order);
		::Dynamic makeRotationFromEuler_dyn();

		 ::phoenix::Matrix makeRotationFromQuaternion( ::phoenix::Quaternion q);
		::Dynamic makeRotationFromQuaternion_dyn();

		 ::phoenix::Matrix lookAt( ::phoenix::Vector _eye, ::phoenix::Vector _target, ::phoenix::Vector _up);
		::Dynamic lookAt_dyn();

		 ::phoenix::Matrix multiply( ::phoenix::Matrix _m);
		::Dynamic multiply_dyn();

		 ::phoenix::Matrix multiplyMatrices( ::phoenix::Matrix _a, ::phoenix::Matrix _b);
		::Dynamic multiplyMatrices_dyn();

		 ::phoenix::Matrix multiplyToArray( ::phoenix::Matrix _a, ::phoenix::Matrix _b,::Array< Float > _r);
		::Dynamic multiplyToArray_dyn();

		 ::phoenix::Matrix multiplyScalar(Float _s);
		::Dynamic multiplyScalar_dyn();

		::Array< Float > multiplyVector3Array(::Array< Float > _a);
		::Dynamic multiplyVector3Array_dyn();

		Float determinant();
		::Dynamic determinant_dyn();

		 ::phoenix::Matrix transpose();
		::Dynamic transpose_dyn();

		::Array< Float > flattenToArray(::Array< Float > _flat);
		::Dynamic flattenToArray_dyn();

		::Array< Float > flattenToArrayOffset(::Array< Float > _flat,int _offset);
		::Dynamic flattenToArrayOffset_dyn();

		 ::phoenix::Matrix setPosition( ::phoenix::Vector _v);
		::Dynamic setPosition_dyn();

		 ::phoenix::Matrix inverse();
		::Dynamic inverse_dyn();

		 ::phoenix::Matrix getInverse( ::phoenix::Matrix _m);
		::Dynamic getInverse_dyn();

		 ::phoenix::Matrix scale( ::phoenix::Vector _v);
		::Dynamic scale_dyn();

		Float getMaxScaleOnAxis();
		::Dynamic getMaxScaleOnAxis_dyn();

		 ::phoenix::Matrix makeTranslation(Float _x,Float _y,Float _z);
		::Dynamic makeTranslation_dyn();

		 ::phoenix::Matrix makeRotationX(Float _theta);
		::Dynamic makeRotationX_dyn();

		 ::phoenix::Matrix makeRotationY(Float _theta);
		::Dynamic makeRotationY_dyn();

		 ::phoenix::Matrix makeRotationZ(Float _theta);
		::Dynamic makeRotationZ_dyn();

		 ::phoenix::Matrix makeRotationAxis( ::phoenix::Vector _axis,Float _angle);
		::Dynamic makeRotationAxis_dyn();

		 ::phoenix::Matrix makeScale(Float _x,Float _y,Float _z);
		::Dynamic makeScale_dyn();

		 ::phoenix::Matrix compose_with_origin( ::phoenix::Vector _position, ::phoenix::Vector _origin, ::phoenix::Quaternion _quaternion, ::phoenix::Vector _scale);
		::Dynamic compose_with_origin_dyn();

		 ::phoenix::Matrix compose( ::phoenix::Vector _position, ::phoenix::Quaternion _quaternion, ::phoenix::Vector _scale);
		::Dynamic compose_dyn();

		 ::phoenix::MatrixTransform _transform;
		 ::phoenix::MatrixTransform decompose( ::phoenix::Vector _position, ::phoenix::Quaternion _quaternion, ::phoenix::Vector _scale);
		::Dynamic decompose_dyn();

		 ::phoenix::Matrix makeFrustum(Float _left,Float _right,Float _bottom,Float _top,Float _near,Float _far);
		::Dynamic makeFrustum_dyn();

		 ::phoenix::Matrix makePerspective(Float _fov,Float _aspect,Float _near,Float _far);
		::Dynamic makePerspective_dyn();

		 ::phoenix::Matrix makeOrthographic(Float _left,Float _right,Float _top,Float _bottom,Float _near,Float _far);
		::Dynamic makeOrthographic_dyn();

		void fromArray(::Array< Float > _from);
		::Dynamic fromArray_dyn();

		::Array< Float > toArray();
		::Dynamic toArray_dyn();

		 ::phoenix::Matrix clone();
		::Dynamic clone_dyn();

		 ::phoenix::Vector up();
		::Dynamic up_dyn();

		 ::phoenix::Vector down();
		::Dynamic down_dyn();

		 ::phoenix::Vector left();
		::Dynamic left_dyn();

		 ::phoenix::Vector right();
		::Dynamic right_dyn();

		 ::phoenix::Vector backward();
		::Dynamic backward_dyn();

		 ::phoenix::Vector forward();
		::Dynamic forward_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Matrix */ 