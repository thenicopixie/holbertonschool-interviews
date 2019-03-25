#!/usr/bin/python3
""" Script to export data in the JSON format """
import json
import requests

if __name__ == "__main__":
    users = requests.get('https://jsonplaceholder.typicode.com/users').json()

    data = {}

    for user in users:
        uid = user.get("id")
        uname = user.get("username")
        data[uid] = []
        url = 'https://jsonplaceholder.typicode.com/todos?userID='
        todos = requests.get(url + str(uid)).json()
        for d in todos:
                data[uid].append({
                    "username": uname,
                    "task": d.get("title"),
                    "completed": d.get("completed")
                })
    with open("todo_all_employees.json", 'w') as fn:
        json.dump(data, fn)
