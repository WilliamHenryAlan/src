import os
def rename_file(dir_path,target_str):
    for filename in os.listdir(dir_path):
        if (target_str in filename):
            new_filename = filename.replace(target_str,'')
            old_file_path = os.path.join(dir_path, filename)
            new_file_path = os.path.join(dir_path, new_filename)
            # Rename the file
            os.rename(old_file_path, new_file_path)
            print(f'Renamed: {old_file_path} -> {new_file_path}')
        else:
            print(f'Skipped: {filename}')



dir_path = '/Users/willian/Desktop/cs/'
target_string = '代码随想录项目精讲系列-'
rename_file(dir_path,target_string)