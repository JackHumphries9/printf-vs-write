import subprocess
import os
import time
import shutil

def parse_time(time: str) -> float:
    time = time.split(' ')[-2]
    time = time.split('m')[-1]
    time = time.split('s')[0]
    return float(time)

def main():
    list_builds = os.listdir('bin')
    out: dict[str, list[float]] = dict()

    
    try:
        shutil.rmtree('results')
    except FileNotFoundError:
        pass

    os.mkdir('results')
    
    for build in list_builds:
        print('Running build: ' + build)
        out[build] = []

        for i in range(100):
            st = time.time()
            
            subprocess.run(['./bin/' + build], stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
            
            et = time.time()

            out[build].append(et - st)
            

    # create a csv with the results from the runs    
    for build in out:
        with open(f'results/{build}.csv', 'w') as f:
            f.write('run,time\n')
            for i, t in enumerate(out[build]):
                f.write(f'{i+1},{t}\n')

    with open(f'results/combined.csv', 'w') as f:
        for build in out:
            f.write(f'{build}-run,{build}-time\n')
            for i, t in enumerate(out[build]):
                f.write(f'{i+1},{t}\n')

if __name__ == '__main__':
    main()