// Fill out your copyright notice in the Description page of Project Settings.

#include "WidgetWrapper.h"


UWidgetWrapper::UWidgetWrapper(SWidget* widget)
{
	this->widget = widget;
}

UWidgetWrapper::UWidgetWrapper()
{
	this->widget = nullptr;
}

UWidgetWrapper::~UWidgetWrapper()
{
}

bool UWidgetWrapper::IsSameWidget(UWidget* component)
{
	TSharedPtr<SWidget> MyWidget = component->GetCachedWidget();

	if (!MyWidget.IsValid()) return false;

	return MyWidget.Get() == this->widget;
}

void UWidgetWrapper::SetWidget(SWidget* widget)
{
	this->widget = widget;
}

