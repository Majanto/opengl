Demo = Register('Demo')

function Demo:Init()
	self.parent = App
	self.dependencies = { OpenGL, SDL }
end

function Demo:Setup()
end