if %1.==. goto help
echo %1
echo %2
for %%A in ( %1 ) do _stripnl.exe <%%A >%2%%A
goto end
:help
echo Usage: stripnl <wildcard> [prefix]
:end