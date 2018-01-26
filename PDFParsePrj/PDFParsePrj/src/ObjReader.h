#ifndef _OBJREADER_H_
#define _OBJREADER_H_

class DataInputStream;
class Object;
class Xref;

class ObjReader
{
public:
	ObjReader(DataInputStream *pSource, const Xref *pXref);
	const Object *ReadObj(void);
	const Object *ReadIndirectObj(int nObjNum, int nGeneration);

private:
	DataInputStream *m_pSource;
	const Xref *m_pXref;
};

#endif
