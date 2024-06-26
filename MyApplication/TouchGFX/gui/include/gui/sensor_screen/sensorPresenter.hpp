#ifndef SENSORPRESENTER_HPP
#define SENSORPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class sensorView;

class sensorPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    sensorPresenter(sensorView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();
    virtual void tick();
    virtual ~sensorPresenter() {}

private:
    sensorPresenter();

    sensorView& view;
};

#endif // SENSORPRESENTER_HPP
