SELECT user_id, name, mail
FROM Users
WHERE mail REGEXP '^[A-Za-z][A-Za-z0-9_.-]*@leetcode\\.com$'
  AND mail COLLATE utf8mb3_bin REGEXP '^[A-Za-z][A-Za-z0-9_.-]*@leetcode\\.com$';