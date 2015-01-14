#ifndef GENERALCALLBACK_H
#define GENERALCALLBACK_H

#include "Avion.h"

class GeneralCallback: public osg::NodeCallback
{
public:
	osg::Timer t;
	osg::Timer_t precedentTour;
	osg::Timer_t precedentFrame;
	vector<osg::ref_ptr<osg::PositionAttitudeTransform>> patAvions;
	
	GeneralCallback();
	virtual void operator()(osg::Node* node, osg::NodeVisitor* nv);
	void deplacementGraphique();
	void phaseDeJeu();
};

#endif