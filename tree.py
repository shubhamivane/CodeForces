import os

def tree(cwd, prev=''):
    nest = prev + '---'
    for item in os.listdir():
        print('|{} {}'.format(nest, item))
        try:
            cwd = os.getcwd()
            os.chdir(item)
            tree(os.getcwd(), nest)
            os.chdir(cwd)
        except NotADirectoryError:
            continue


if __name__ == '__main__':
    print(os.getcwd().split('/')[-1])
    tree(os.getcwd())
