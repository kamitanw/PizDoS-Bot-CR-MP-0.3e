void SendOnFootFullSyncData(ONFOOT_SYNC_DATA *pofSync, int sendDeathNoti, PLAYERID followPlayerID);
void SendInCarFullSyncData(INCAR_SYNC_DATA *picSync, int iUseCarPos, PLAYERID followPlayerID);
void SendPassengerFullSyncData(VEHICLEID vehicleID);
void SendAimSyncData(AIM_SYNC_DATA *paimSync, DWORD dwAmmoInClip, int iReloading, PLAYERID copyFromPlayer);
void SendUnoccupiedSyncData(UNOCCUPIED_SYNC_DATA *punocSync);
void SendSpectatorData(SPECTATOR_SYNC_DATA *pSpecData);

void SendEnterVehicleNotification(VEHICLEID VehicleID, BOOL bPassenger);
void SendExitVehicleNotification(VEHICLEID VehicleID);
void SendWastedNotification(BYTE byteDeathReason, PLAYERID WhoWasResponsible);
void NotifyVehicleDeath(VEHICLEID VehicleID);
void SendDamageVehicle(WORD vehicleID, DWORD panel, DWORD door, BYTE lights, BYTE tires);
