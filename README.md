# UE5Plugins
UE5插件   5.4版本
使用说明
打开项目目录下的Plugins文件夹（没有的话自己创建一个），然后将MMDD开头的插件复制进去就可以使用



插件名字及功能：
MMDD    测试插件，复制到Plugins即可，测试能否在所有蓝图中调用函数fun01 fun02，函数会在屏幕打印hello world

添加websocket连接功能，蓝图输入MMDD即可显示相关函数
函数说明：
init()  		初始化连接，需输入服务端地址
connect()       发起连接，连接成功屏幕会有提示
send()		发送数据
close()   		关闭连接 