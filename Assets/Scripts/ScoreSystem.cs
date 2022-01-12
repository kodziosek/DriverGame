using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ScoreSystem : MonoBehaviour
{
    [SerializeField] private TMP_Text scoreText;
    [SerializeField] private int multiplier;

    public const string HighScoreKey = "HighScore";

    private float score;
    

    void Update()
    {
        score += Time.deltaTime * multiplier;

        scoreText.text = Mathf.FloorToInt(score).ToString();
    }

    private void OnDestroy() 
    {
        int currentHighScore = PlayerPrefs.GetInt(HighScoreKey, 0);

        if(score > currentHighScore)
        {
            PlayerPrefs.SetInt(HighScoreKey, Mathf.FloorToInt(score));
        }
    }
}
