SELECT 
    tweet_id 
from 
    Tweets
Where CHAR_LENGTH(content) > 15;