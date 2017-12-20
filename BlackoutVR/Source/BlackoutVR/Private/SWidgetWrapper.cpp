// Fill out your copyright notice in the Description page of Project Settings.

#include "SWidgetWrapper.h"

USWidgetWrapper::USWidgetWrapper(SWidget* widget)
{
	this->widget = widget;
}
USWidgetWrapper::USWidgetWrapper()
{
	this->widget = nullptr;
}

bool USWidgetWrapper::SameWidget(UWidget* c)
{
	TSharedPtr<SWidget> MyWidget = c->GetCachedWidget();

	if (!MyWidget.IsValid()) return false;

	return MyWidget.Get() == this->widget;
}

USWidgetWrapper::~USWidgetWrapper()
{
}

void USWidgetWrapper::SetWidget(SWidget* widget)
{
	this->widget = widget;
}
