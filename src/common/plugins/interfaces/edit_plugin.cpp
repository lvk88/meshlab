#include "edit_plugin.h"

#include "../../ml_document/mesh_document.h"

bool EditTool::startEdit(MeshDocument &md, GLArea *parent, MLSceneGLSharedDataContext* cont)
{
	//assert(NULL != md.mm());
	if (md.mm() != NULL)
		return (startEdit(*(md.mm()), parent, cont));
	else return false;
}
