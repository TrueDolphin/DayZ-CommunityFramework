class CF_MouseEventArgs : CF_PositionEventArgs
{
	/**
	 * @brief OnClick, OnDoubleClick, OnMouseButtonDown, OnMouseButtonUp
	 */
	int Button;

	/**
	 * @brief OnMouseLeave
	 */
	Widget Enter;

	/**
	 * @brief OnMouseWheel
	 */
	int Wheel;

	/**
	 * @brief 1 = Enter, 2 = Leave
	 */
	int Type;

	override string GetDebugName()
	{
		string str = super.GetDebugName();
		str += " Button=" + Button;
		str += " Enter=" + Enter;
		str += " Wheel=" + Wheel;
		str += " Type=" + Type;
		return str;
	}
};