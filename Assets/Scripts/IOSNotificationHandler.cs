using System.Collections;
using System.Collections.Generic;
using UnityEngine;
#if UNITY_IOS
using Unity.Notifications.iOS;
#endif

public class IOSNotificationHandler : MonoBehaviour
{
#if UNITY_IOS
    public void ScheduleNotification(int minutes)
    {
        iOSNotification notification = new iOSNotification
        {
            Title = "Energia Naładowana",
            Subtitle = "Twoje auto jest znowu naładowane!",
            Body = "Energia w twoim aucie jest znowu naładowana, wróć pobijać rekord!",
            ShowInForeground = true,
            ForegroundPresentationOption = (PresentationOption.Alert | PresentationOption.Sound),
            CategoryIdentifier = "category_a",
            ThreadIdentifier = "thread1",
            Trigger = new iOSNotificationTimeIntervalTrigger
            {
                TimeInterval = new System.TimeSpan(0, minutes, 0),
                Repeats = false
            }
        };

        iOSNotificationCenter.ScheduleNotification(notification);
    }
#endif
}
