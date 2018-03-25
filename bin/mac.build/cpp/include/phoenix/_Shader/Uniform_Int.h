// Generated by Haxe 3.4.5
#ifndef INCLUDED_phoenix__Shader_Uniform_Int
#define INCLUDED_phoenix__Shader_Uniform_Int

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(opengl,GLObject)
HX_DECLARE_CLASS2(phoenix,_Shader,Uniform_Int)

namespace phoenix{
namespace _Shader{


class HXCPP_CLASS_ATTRIBUTES Uniform_Int_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Uniform_Int_obj OBJ_;
		Uniform_Int_obj();

	public:
		enum { _hx_ClassId = 0x31e1044f };

		void __construct(::String _name,int _value, ::opengl::GLObject _location);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="phoenix._Shader.Uniform_Int")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"phoenix._Shader.Uniform_Int"); }
		static hx::ObjectPtr< Uniform_Int_obj > __new(::String _name,int _value, ::opengl::GLObject _location);
		static hx::ObjectPtr< Uniform_Int_obj > __alloc(hx::Ctx *_hx_ctx,::String _name,int _value, ::opengl::GLObject _location);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Uniform_Int_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Uniform_Int","\xe4","\x8c","\x24","\x57"); }

		::String name;
		int value;
		 ::opengl::GLObject location;
};

} // end namespace phoenix
} // end namespace _Shader

#endif /* INCLUDED_phoenix__Shader_Uniform_Int */ 
