class CF_CollectionEvent : CF_Event
{
	override string String()
	{
		string str = super.String();
		return str;
	}

	void Process(CF_MVVM_View view, CF_ModelBase model, CF_ObservableCollection collection)
	{
		CF_Trace trace(this, "Process", "" + view, "" + model, "" + collection, String());
	}
};