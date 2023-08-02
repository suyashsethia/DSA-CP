def log(descriptor):
    def decorator(func):
        def wrapper(*args):
            log_line = f"LOG:{func.__name__}({','.join(map(str, args))})\n"
            descriptor.write(log_line)
            descriptor.flush()
            return func(*args)
        return wrapper
    return decorator



a = {1,2,3,5}

a [1,2,3,4]
for i in range(10):
    