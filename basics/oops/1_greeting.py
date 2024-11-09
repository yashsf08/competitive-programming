"""This program is about greeting a student.
"""

import pprint as pp


class Student(object):
    def __init__(self, student_id, student_age, first_name, last_name) -> None:
        self.student_id: int = student_id
        self.student_age: int = student_age
        self.first_name: str = first_name
        self.last_name: str = last_name
        self.student_name: str = first_name + last_name

    def greeting(self) -> None:
        pp.pprint(f"Hello, {self.student_name}")

    def get_age(self) -> None:
        pp.pprint(f"Your age is --> {self.student_age}")


def main():
    my_obj = Student(1, 20, "Yash", "Sonune")
    my_obj.greeting()
    my_obj.get_age()
    return


if __name__ == "__main__":
    main()
