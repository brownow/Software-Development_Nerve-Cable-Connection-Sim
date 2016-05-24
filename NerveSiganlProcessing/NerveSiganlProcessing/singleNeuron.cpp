///-------------------------------------------------------------------------------------------------
// file:	singleNeuron.cpp
//
// summary:	Implements the single neuron class
///-------------------------------------------------------------------------------------------------

#include "singleNeuron.h"

///-------------------------------------------------------------------------------------------------
/// <summary>	Constructor. </summary>
///
/// <param name="iData"> Input data. </param>
///-------------------------------------------------------------------------------------------------

singleNeuron::singleNeuron(InputData iData)
{
	_iData = iData;
	neuronSignal = new singleSignal(iData);	//create signal
	neuronStatus = ' ';
}

///-------------------------------------------------------------------------------------------------
/// <summary>	Destructor. </summary>
///-------------------------------------------------------------------------------------------------

singleNeuron::~singleNeuron()
{
}