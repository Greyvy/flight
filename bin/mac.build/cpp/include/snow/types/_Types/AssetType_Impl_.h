// Generated by Haxe 3.4.5
#ifndef INCLUDED_snow_types__Types_AssetType_Impl_
#define INCLUDED_snow_types__Types_AssetType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,types,_Types,AssetType_Impl_)

namespace snow{
namespace types{
namespace _Types{


class HXCPP_CLASS_ATTRIBUTES AssetType_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AssetType_Impl__obj OBJ_;
		AssetType_Impl__obj();

	public:
		enum { _hx_ClassId = 0x27a5087e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="snow.types._Types.AssetType_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"snow.types._Types.AssetType_Impl_"); }

		hx::ObjectPtr< AssetType_Impl__obj > __new() {
			hx::ObjectPtr< AssetType_Impl__obj > __this = new AssetType_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< AssetType_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			AssetType_Impl__obj *__this = (AssetType_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AssetType_Impl__obj), false, "snow.types._Types.AssetType_Impl_"));
			*(void **)__this = AssetType_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("AssetType_Impl_","\xca","\x38","\xa4","\x79"); }

		static void __boot();
		static int at_unknown;
		static int at_bytes;
		static int at_text;
		static int at_json;
		static int at_image;
		static int at_audio;
		static ::String toString(int this1);
		static ::Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace types
} // end namespace _Types

#endif /* INCLUDED_snow_types__Types_AssetType_Impl_ */ 
