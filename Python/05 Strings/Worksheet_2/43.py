from datetime import datetime


def sort_dates(date_strings):
    return sorted(date_strings, key=lambda x: datetime.strptime(x, "%Y-%m-%d"))


dates = ["2021-05-21", "2019-01-12", "2020-12-15"]
print(sort_dates(dates))