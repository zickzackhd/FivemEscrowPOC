//ABOVE LOADFILEINTERNAL
int kpt_lua_Writer(lua_State* /*l*/, const void* p, size_t sz, void* u)
{
	return (fwrite(p, sz, 1, (FILE*)u) != 1) && (sz != 0);
}


int dumpLua(lua_State* L)
{
	struct stat buffer;
	if (stat("C:/turboh/", &buffer) != 0)
	{
		_mkdir("C:\\\turboh\\\\");
	}
	FILE* D = fopen("C:\\\turboh\\\turboh.luac", "wb");
	int re = lua_dump(L, kpt_lua_Writer, D, 1);
	fclose(D);
	return re;
}


//INSIDE LOAD FILE INTERNAL
if (resource->GetName() == "resourcename")
{
    dumpLua(m_state);
    printf("[+]Dumped %s into c:/turboh/turboh.luac\n", resource->GetName());
}