using System;
using System.Collections;
using System.Collections.Generic;
#if UNITY_ANDROID
using Unity.Notifications.Android;
#endif
using UnityEngine;

public class AndroidNotificationHandler : MonoBehaviour
{
#if UNITY_ANDROID
    private const string ChannelId = "notification_channel";
    public void ScheduleNotification(DateTime datetime)
    {
        AndroidNotificationChannel notificationChannel = new AndroidNotificationChannel
        {
            Id = ChannelId,
            Name = "Notification Channel",
            Description = "Some random definition",
            Importance = Importance.Default
        };

        AndroidNotificationCenter.RegisterNotificationChannel(notificationChannel);

        AndroidNotification notification = new AndroidNotification
        {
            Title = "Energia zregenerowana!",
            Text = "Energia w twoim samochodzie się odnowiła, wracaj pobijać rekord!",
            SmallIcon = "default",
            LargeIcon = "default",
            FireTime = datetime
        };

        AndroidNotificationCenter.SendNotification(notification, ChannelId);
    }
#endif
}
