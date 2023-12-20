#courses = {'History', 'Microbiolgy', 'Math', 'Physics', 'Physics', 'Physics','CompSci'}
#print(courses)

sci_courses = {'History', 'Microbiolgy', 'Math', 'Physics', 'Physics', 'Physics','CompSci'}
print(sci_courses)

art_courses = {'History', 'English', 'Math', 'Ecoms', 'Commerce', 'Government','CompSci'}
print(art_courses)

print(sci_courses.intersection(art_courses))
print(sci_courses.difference(art_courses))
print(sci_courses.union(art_courses))