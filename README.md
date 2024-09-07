#### synergy社区版在windows下构建的二进制，把openssl放到报错提示的路径里面就能运行，主要是为了不方便安装微软编译器的人准备的
二进制都在build/bin/下面，运行前需要注册windows服务，管理员权限打开powershell:
```powershell
sc.exe create Synergy binpath= "your/path/to/synergyd.exe"
```
然后打开任务管理器->服务找到Synergy右键启动
如果想卸载就
```powershell
sc.exe delete Synergy
```
