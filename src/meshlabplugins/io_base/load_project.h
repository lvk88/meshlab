#ifndef LOAD_PROJECT_H
#define LOAD_PROJECT_H

#include <common/ml_document/mesh_model.h>
#include <common/ml_shared_data_context/ml_shared_data_context.h>

std::vector<MeshModel*> loadALN(
		const QString& filename,
		MeshDocument& md,
		vcg::CallBackPos* cb);

std::vector<MeshModel*> loadOUT(
		const QString& filename,
		const QString& imageListFile,
		MeshDocument& md,
		std::vector<std::string>& unloadedImgList,
		vcg::CallBackPos* cb);

std::vector<MeshModel*> loadNVM(
		const QString& filename,
		MeshDocument& md,
		std::vector<std::string>& unloadedImgList,
		vcg::CallBackPos* cb);

std::vector<MeshModel*> loadMLP(
		const QString& filename,
		MeshDocument& md,
		std::vector<MLRenderingData>& rendOpt,
		std::vector<std::string>& unloadedImgList,
		vcg::CallBackPos* cb);

#endif // LOAD_PROJECT_H
