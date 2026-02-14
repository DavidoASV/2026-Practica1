// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFistMesh.h"
//#include "ConstructorHelpers.h"

// Sets default values
AMyFistMesh::AMyFistMesh()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_MatPreviewMesh_01.SM_MatPreviewMesh_01'"));

	RootComponent = StaticMeshComponent;

}

// Called when the game starts or when spawned
void AMyFistMesh::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyFistMesh::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

