cd /d "%~dp0"

FOR %%i IN (%*) DO (
    ISP_MW --Retinex_MSRCR_GIMP --sigma 15 --sigma 120 --dynamic 10 %%i
)

pause