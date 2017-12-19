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
	// visibility should match
	if (!( // not
		c->GetVisibility() == ESlateVisibility::Visible && this->widget->GetVisibility() == EVisibility::Visible // same
		|| // or
		c->GetVisibility() == ESlateVisibility::Collapsed && this->widget->GetVisibility() == EVisibility::Collapsed // same
		|| // or
		c->GetVisibility() == ESlateVisibility::Hidden && this->widget->GetVisibility() == EVisibility::Hidden // same
		|| // or
		c->GetVisibility() == ESlateVisibility::HitTestInvisible && this->widget->GetVisibility() == EVisibility::HitTestInvisible // same
		|| // or
		c->GetVisibility() == ESlateVisibility::SelfHitTestInvisible && this->widget->GetVisibility() == EVisibility::SelfHitTestInvisible // same
		))
	{
		return false;
	}
	// X Y and Z should match
	if (!(
		this->widget->GetRenderTransform() == c->RenderTransform.ToSlateRenderTransform()
		))
	{
		return false;
	}
	// Enabled should match
	if (!(
		this->widget->IsEnabled() != c->GetIsEnabled()
		))
	{
		return false;
	}
	return true;
}

USWidgetWrapper::~USWidgetWrapper()
{
}
