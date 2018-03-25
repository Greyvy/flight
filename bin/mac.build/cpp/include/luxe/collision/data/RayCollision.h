// Generated by Haxe 3.4.5
#ifndef INCLUDED_luxe_collision_data_RayCollision
#define INCLUDED_luxe_collision_data_RayCollision

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,collision,data,RayCollision)
HX_DECLARE_CLASS3(luxe,collision,shapes,Ray)
HX_DECLARE_CLASS3(luxe,collision,shapes,Shape)

namespace luxe{
namespace collision{
namespace data{


class HXCPP_CLASS_ATTRIBUTES RayCollision_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef RayCollision_obj OBJ_;
		RayCollision_obj();

	public:
		enum { _hx_ClassId = 0x2fe5f04a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="luxe.collision.data.RayCollision")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"luxe.collision.data.RayCollision"); }
		static hx::ObjectPtr< RayCollision_obj > __new();
		static hx::ObjectPtr< RayCollision_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RayCollision_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("RayCollision","\x48","\xf1","\xd7","\x43"); }

		 ::luxe::collision::shapes::Shape shape;
		 ::luxe::collision::shapes::Ray ray;
		Float start;
		Float end;
		 ::luxe::collision::data::RayCollision reset();
		::Dynamic reset_dyn();

		void copy_from( ::luxe::collision::data::RayCollision other);
		::Dynamic copy_from_dyn();

		 ::luxe::collision::data::RayCollision clone();
		::Dynamic clone_dyn();

};

} // end namespace luxe
} // end namespace collision
} // end namespace data

#endif /* INCLUDED_luxe_collision_data_RayCollision */ 