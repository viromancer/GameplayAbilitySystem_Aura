// Copyright WiseBit Studios

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EnemyInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEnemyInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class AURA_API IEnemyInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//setting this = 0 makes the function a pure virtual function.  this class is now considered abstract and must be derived from.
	virtual void HighlightActor() = 0;
	virtual void UnHighlightActor() = 0;
};
