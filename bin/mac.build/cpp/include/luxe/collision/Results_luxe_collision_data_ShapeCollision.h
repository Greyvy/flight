// Generated by Haxe 3.4.5
#ifndef INCLUDED_luxe_collision_Results_luxe_collision_data_ShapeCollision
#define INCLUDED_luxe_collision_Results_luxe_collision_data_ShapeCollision

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,collision,ResultsIterator_luxe_collision_data_ShapeCollision)
HX_DECLARE_CLASS2(luxe,collision,Results_luxe_collision_data_ShapeCollision)
HX_DECLARE_CLASS3(luxe,collision,data,ShapeCollision)

namespace luxe{
namespace collision{


class HXCPP_CLASS_ATTRIBUTES Results_luxe_collision_data_ShapeCollision_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Results_luxe_collision_data_ShapeCollision_obj OBJ_;
		Results_luxe_collision_data_ShapeCollision_obj();

	public:
		enum { _hx_ClassId = 0x5486b155 };

		void __construct(int size);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="luxe.collision.Results_luxe_collision_data_ShapeCollision")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"luxe.collision.Results_luxe_collision_data_ShapeCollision"); }
		static hx::ObjectPtr< Results_luxe_collision_data_ShapeCollision_obj > __new(int size);
		static hx::ObjectPtr< Results_luxe_collision_data_ShapeCollision_obj > __alloc(hx::Ctx *_hx_ctx,int size);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Results_luxe_collision_data_ShapeCollision_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Results_luxe_collision_data_ShapeCollision","\xd9","\xc2","\xa8","\x80"); }

		::Array< ::Dynamic> items;
		int count;
		void push( ::luxe::collision::data::ShapeCollision value);
		::Dynamic push_dyn();

		 ::luxe::collision::data::ShapeCollision get(int index);
		::Dynamic get_dyn();

		 ::luxe::collision::data::ShapeCollision pull();
		::Dynamic pull_dyn();

		 ::luxe::collision::Results_luxe_collision_data_ShapeCollision clear();
		::Dynamic clear_dyn();

		 ::luxe::collision::ResultsIterator_luxe_collision_data_ShapeCollision iterator();
		::Dynamic iterator_dyn();

		int get_length();
		::Dynamic get_length_dyn();

		int get_total();
		::Dynamic get_total_dyn();

};

} // end namespace luxe
} // end namespace collision

#endif /* INCLUDED_luxe_collision_Results_luxe_collision_data_ShapeCollision */ 
