/*
 * =====================================================================================
 *
 *       Filename:  test.cpp
 *
 *    Description:  haha
 *
 *        Version:  1.0
 *        Created:  21/02/2018 15:21:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dengfeng Guan (D. Guan), dfguan@hit.edu.cn
 *   Organization:  Center for Bioinformatics, Harbin Institute of Technology
 *
 * =====================================================================================
 */

#include "ogdf/energybased/FMMMLayout.h"
#include "ogdf/fileformats/GraphIO.h"
using namespace ogdf;
int main()
{
    Graph G;
    GraphAttributes GA(G);
    if (!GraphIO::read(G, "sierpinski_04.gml")) {
        std::cerr << "Could not load sierpinski_04.gml" << std::endl;
        return 1;
    }
    for (node v : G.nodes)
        GA.width(v) = GA.height(v) = 10.0;
    FMMMLayout fmmm;
    fmmm.useHighLevelOptions(true);
    fmmm.unitEdgeLength(15.0);
    fmmm.newInitialPlacement(true);
    fmmm.qualityVersusSpeed(FMMMOptions::QualityVsSpeed::GorgeousAndEfficient);
    fmmm.call(GA);
    GraphIO::write(GA, "output-energybased-sierpinski-layout.gml", GraphIO::writeGML);
    return 0;
}

