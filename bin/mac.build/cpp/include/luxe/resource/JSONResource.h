// Generated by Haxe 3.4.5
#ifndef INCLUDED_luxe_resource_JSONResource
#define INCLUDED_luxe_resource_JSONResource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
HX_DECLARE_CLASS2(luxe,resource,JSONResource)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,systems,assets,Asset)
HX_DECLARE_CLASS3(snow,systems,assets,AssetJSON)

namespace luxe{
namespace resource{


class HXCPP_CLASS_ATTRIBUTES JSONResource_obj : public  ::luxe::resource::Resource_obj
{
	public:
		typedef  ::luxe::resource::Resource_obj super;
		typedef JSONResource_obj OBJ_;
		JSONResource_obj();

	public:
		enum { _hx_ClassId = 0x07d345fe };

		void __construct( ::Dynamic _options);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="luxe.resource.JSONResource")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"luxe.resource.JSONResource"); }
		static hx::ObjectPtr< JSONResource_obj > __new( ::Dynamic _options);
		static hx::ObjectPtr< JSONResource_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic _options);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JSONResource_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("JSONResource","\x16","\x8b","\x4d","\x52"); }

		 ::snow::systems::assets::AssetJSON asset;
		 ::snow::api::Promise reload();

		void clear();

};

} // end namespace luxe
} // end namespace resource

#endif /* INCLUDED_luxe_resource_JSONResource */ 
