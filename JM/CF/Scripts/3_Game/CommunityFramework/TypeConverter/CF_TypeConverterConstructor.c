static autoptr CF_TypeConverterConstructor g_CF_TypeConverterConstructor = null;
	
class CF_TypeConverterConstructor
{
	private void CF_TypeConverterConstructor()
	{
#ifdef CF_TRACE_ENABLED
		auto trace = CF_Trace_0(this);
#endif

		CF_TypeConverter._OnCreate();
	}

	/**
	 * @note	We can safely guarantee the destructor is called on script reload, 
	 * 			we can't do the same for 'OnGameDestroy'.
	 */
	void ~CF_TypeConverterConstructor()
	{
#ifdef CF_TRACE_ENABLED
		auto trace = CF_Trace_0(this);
#endif

		CF_TypeConverter._OnDestroy();
	}
		
#ifdef CF_FUNC_OLD
	[CF_EventSubscriber(CF_TypeConverterConstructor._Init, CF_LifecycleEvents.OnGameCreate)]
#else
	[CF_EventSubscriber(ScriptCaller.Create(CF_TypeConverterConstructor._Init), CF_LifecycleEvents.OnGameCreate)]
#endif
	static void _Init()
	{
		if (g_CF_TypeConverterConstructor)
		{
			return;
		}
		
		g_CF_TypeConverterConstructor = new CF_TypeConverterConstructor();
	}

#ifdef CF_FUNC_OLD
	[CF_EventSubscriber(CF_TypeConverterConstructor._Cleanup, CF_LifecycleEvents.OnGameDestroy)]
#else
	[CF_EventSubscriber(ScriptCaller.Create(CF_TypeConverterConstructor._Cleanup), CF_LifecycleEvents.OnGameDestroy)]
#endif
	static void _Cleanup()
	{
		g_CF_TypeConverterConstructor = null;
	}
};
