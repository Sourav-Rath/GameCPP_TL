// Fill out your copyright notice in the Description page of Project Settings.


#include "Test_Barrel.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"


// Sets default values
ATest_Barrel::ATest_Barrel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComp");
	RootComponent = StaticMeshComp;

	SphereComp = CreateDefaultSubobject<USphereComponent>("SphereComp");
	SphereComp->SetupAttachment(RootComponent);

	

}

// Called when the game starts or when spawned
void ATest_Barrel::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATest_Barrel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}





