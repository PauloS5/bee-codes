WITH user_followers  AS(
	SELECT 
		followers.following_user_id_fk AS id,
		ARRAY_AGG(user_id_fk) AS followers
	FROM followers
	GROUP BY followers.following_user_id_fk
) 
SELECT 
	follower.user_name AS u1_name,
	followed.user_name AS u2_name
FROM followers
JOIN users follower
	ON follower.user_id = followers.user_id_fk
JOIN users followed
	ON followed.user_id = followers.following_user_id_fk
JOIN user_followers followers_of_followed
	ON followers_of_followed.id = followed.user_id
JOIN user_followers followers_of_follower
	ON followers_of_follower.id = follower.user_id
WHERE 
	followed.user_id = ANY(followers_of_follower.followers)
	AND follower.user_id = ANY(followers_of_followed.followers)
	AND follower.posts <= followed.posts
ORDER BY follower.user_id
