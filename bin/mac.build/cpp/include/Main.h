// Generated by Haxe 3.4.5
#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
#endif
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS1(entities,Player)
HX_DECLARE_CLASS1(entities,Swinger)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Game)
HX_DECLARE_CLASS1(luxe,KeyEvent)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS2(luxe,collision,Results_luxe_collision_data_ShapeCollision)
HX_DECLARE_CLASS3(luxe,collision,shapes,Shape)



class HXCPP_CLASS_ATTRIBUTES Main_obj : public  ::luxe::Game_obj
{
	public:
		typedef  ::luxe::Game_obj super;
		typedef Main_obj OBJ_;
		Main_obj();

	public:
		enum { _hx_ClassId = 0x332f6459 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Main")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"Main"); }
		static hx::ObjectPtr< Main_obj > __new();
		static hx::ObjectPtr< Main_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"); }

		int width;
		int height;
		 ::Dynamic config( ::Dynamic config);

		 ::entities::Player player;
		 ::entities::Swinger swinger;
		::Array< ::Dynamic> walls;
		::Array< ::Dynamic> wall_colliders;
		void ready();

		void onkeyup( ::luxe::KeyEvent event);

		void oncollide( ::luxe::collision::Results_luxe_collision_data_ShapeCollision collisions);
		::Dynamic oncollide_dyn();

		void update(Float dt);

};


#endif /* INCLUDED_Main */ 