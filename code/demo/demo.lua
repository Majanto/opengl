Demo = Register()
print(Demo)

function Demo:Init()
	Demo.name = 'Demo'
	Demo.parent = Main
	--demo.dependencies = { opengl, sdl }

end

function Demo:Setup(proj)
end