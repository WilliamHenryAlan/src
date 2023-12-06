import requests
r = requests.get('https://www.baidu.com')
print(r.status_code)
print(r.headers)