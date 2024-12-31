SDL = Register('SDL')

function SDL:Init()
	self.parent = Lib
	self.precompiled = true
	self.filter = 'Extern'
end

function SDL:Setup()
	kind('SharedItems')
end

function SDL:AddDependencies(other)
	links {
		'SDL2.lib',
		'SDL2main.lib'
	}
	libdirs { self.dir .. 'lib/x64' }
	includedirs { self.dir .. 'include' }
	postbuildcommands { 'xcopy /y /d "' .. self.dir .. 'lib\\x64\\SDL2.dll" "' .. GetProjectTargetDir(other.name) .. '"' }
end