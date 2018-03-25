// Generated by Haxe 3.4.5
#ifndef INCLUDED_phoenix__Shader_Uniform_Float
#define INCLUDED_phoenix__Shader_Uniform_Float

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(opengl,GLObject)
HX_DECLARE_CLASS2(phoenix,_Shader,Uniform_Float)

namespace phoenix{
namespace _Shader{


class HXCPP_CLASS_ATTRIBUTES Uniform_Float_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Uniform_Float_obj OBJ_;
		Uniform_Float_obj();

	public:
		enum { _hx_ClassId = 0x73dc54fc };

		void __construct(::String _name,Float _value, ::opengl::GLObject _location);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="phoenix._Shader.Uniform_Float")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"phoenix._Shader.Uniform_Float"); }
		static hx::ObjectPtr< Uniform_Float_obj > __new(::String _name,Float _value, ::opengl::GLObject _location);
		static hx::ObjectPtr< Uniform_Float_obj > __alloc(hx::Ctx *_hx_ctx,::String _name,Float _value, ::opengl::GLObject _location);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Uniform_Float_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Uniform_Float","\xd1","\xec","\x82","\x17"); }

		::String name;
		Float value;
		 ::opengl::GLObject location;
};

} // end namespace phoenix
} // end namespace _Shader

#endif /* INCLUDED_phoenix__Shader_Uniform_Float */ 