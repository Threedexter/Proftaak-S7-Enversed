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

bool USWidgetWrapper::SameWidget(UWidgetComponent* c)
{
	return this->widget == &*(c->GetSlateWidget());
}

USWidgetWrapper::~USWidgetWrapper()
{
}
