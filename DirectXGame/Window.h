#pragma once

#include<Windows.h>

class Window
{
public:
	Window();
	bool init();
	bool broadcast();
	bool release();
	bool isRun();

	RECT getClientWindowRect();
	void setHWND(HWND hwnd);
	//events
	virtual void onCreate();
	virtual void onUpdate();
	virtual void onDestroy();
	~Window();
protected:
	HWND m_hwnd;
	bool m_is_run;
};

