@ECHO OFF

SET LOC_PATH=%CD%
SET FILES=%LOC_PATH%\python2.7_d.txt

CALL dlextract.bat python2.7 %FILES%

cd %TMP_PATH%

xcopy python2.7.1\include\python2.7 "%CUR_PATH%\include\python2.7" /E /Q /I /Y
xcopy python2.7.1\python\DLLs "%XBMC_PATH%\system\python\DLLs" /E /Q /I /Y
xcopy python2.7.1\python\Lib "%XBMC_PATH%\system\python\Lib" /E /Q /I /Y
xcopy python2.7.1\python\python27.dll "%XBMC_PATH%\system\python\" /E /Q /I /Y

cd %LOC_PATH%
