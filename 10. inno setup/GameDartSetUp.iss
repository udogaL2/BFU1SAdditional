; Имя приложения
#define   Name       "Darts Game"
; Версия приложения
#define   Version    "D0.1"
; Фирма-разработчик
#define   Publisher  "ShEvgy"
; Имя исполняемого модуля
#define   ExeName    "Darts.exe"

[Setup]
AppId={{3113320E-C7BE-409C-847E-25E83BD63B8D}
AppName={#Name}
AppVersion={#Version}
AppPublisher={#Publisher}
DefaultDirName={pf}\{#Name}
DefaultGroupName={#Name}

OutputDir="F:\CLionProjects\additional\10. inno setup"
OutputBaseFileName=Darts Game setup

SetupIconFile="F:\CLionProjects\additional\10. inno setup\dart.ico"

Compression=lzma
SolidCompression=yes

[Languages]
Name: "russian"; MessagesFile: "compiler:Languages\Russian.isl";

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked

[files]
Source: "F:\CLionProjects\sfml_Project\cmake-build-debug\sfml_sample.exe"; DestDir: "{app}"; Flags: ignoreversion; DestName: Darts.exe
Source: "F:\CLionProjects\sfml_Project\data\*"; DestDir: "{app}\data"; Flags: ignoreversion recursesubdirs createallsubdirs

[Icons]
Name: "{group}\{#Name}"; Filename: "{app}\{#ExeName}"; IconFilename: "{app}\data\ico\dart.ico"; Tasks: desktopicon
Name: "{commondesktop}\{#Name}"; Filename: "{app}\{#ExeName}"; Tasks: desktopicon