<mxfile host="app.diagrams.net" modified="2020-10-30T10:53:17.574Z" agent="5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.75 Safari/537.36" etag="Y4690Hr2QLoTemjmnV71" version="13.8.7" type="github">
  <diagram name="Page-1" id="929967ad-93f9-6ef4-fab6-5d389245f69c">
    <mxGraphModel dx="2062" dy="1122" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1.5" pageWidth="1600" pageHeight="1200" background="none" math="0" shadow="0">
      <root>
        <mxCell id="0" style=";html=1;" />
        <mxCell id="1" style=";html=1;" parent="0" />
        <mxCell id="1672d66443f91eb5-23" value="Title" style="text;strokeColor=none;fillColor=none;html=1;fontSize=24;fontStyle=1;verticalAlign=middle;align=center;" parent="1" vertex="1">
          <mxGeometry x="120" y="40" width="1510" height="40" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-5" value="InventoryContainer" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=40;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;" vertex="1" parent="1">
          <mxGeometry x="170" y="1050" width="160" height="452" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-6" value="NameTag:FName&#xa;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-5">
          <mxGeometry y="40" width="160" height="24" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-9" value="TableList:TArray&lt;UOasisInventoryContainerTable*&gt;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-5">
          <mxGeometry y="64" width="160" height="30" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-7" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-5">
          <mxGeometry y="94" width="160" height="8" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-12" value="AddInventoryItem(UOasisItemBase* item):bool" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-5">
          <mxGeometry y="102" width="160" height="30" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-111" value="GetItem(FName ItemName):UOasisItemBase*" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-5">
          <mxGeometry y="132" width="160" height="30" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-112" value="GetItem(const FOasisItemConfig&amp; itemConfig):UOasisItemBase*" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-5">
          <mxGeometry y="162" width="160" height="30" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-13" value="RemoveInventoryItem(UOasisItemBase* item):bool" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-5">
          <mxGeometry y="192" width="160" height="20" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-14" value="MoveInventoryItem(UOasisInventoryContainer* from,UOasisItemBase* item):bool" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-5">
          <mxGeometry y="212" width="160" height="40" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-36" value="OnItemInfoUpdate(const FOasisItemConfig&amp; ItemConfig, UOasisItemBase* item)" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-5">
          <mxGeometry y="252" width="160" height="40" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-37" value="OnItemSlotChanged(const FInventoryItemSlot&amp; ItemSlot, UOasisItemBase* item);" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-5">
          <mxGeometry y="292" width="160" height="40" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-105" value="OnItemUse(UOasisItemBase* item));" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-5">
          <mxGeometry y="332" width="160" height="40" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-107" value="OnItemDrop(const FOasisItemConfig&amp;tem);" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-5">
          <mxGeometry y="372" width="160" height="40" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-106" value="OnItemAdd(UOasisItemBase* item);" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-5">
          <mxGeometry y="412" width="160" height="40" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-15" value="InventoryContainerTable" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;" vertex="1" parent="1">
          <mxGeometry x="360" y="860" width="223" height="248" as="geometry">
            <mxRectangle x="303" y="1080" width="170" height="26" as="alternateBounds" />
          </mxGeometry>
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-16" value="Name:FName&#xa;&#xa;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-15">
          <mxGeometry y="26" width="223" height="26" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-19" value="Category:int32" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-15">
          <mxGeometry y="52" width="223" height="26" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-30" value="ContainerType:EInventoryContainerType" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-15">
          <mxGeometry y="78" width="223" height="26" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-31" value="SlotArray:TArray&lt;FInventoryItemSlot&gt; &#xa;Slot2ItemMap:TMap&lt;FInventoryItemSlot*, UOasisItemBase*&gt; " style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-15">
          <mxGeometry y="104" width="223" height="46" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-17" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-15">
          <mxGeometry y="150" width="223" height="8" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-32" value="AddInventoryItem(UOasisItemBase* item):bool" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-15">
          <mxGeometry y="158" width="223" height="30" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-33" value="RemoveInventoryItem(UOasisItemBase* item):bool" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-15">
          <mxGeometry y="188" width="223" height="20" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-35" value="IsItemAvailable(EOasisItemCategory category):bool&#xa;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-15">
          <mxGeometry y="208" width="223" height="40" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-42" value="InventoryComponent" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;" vertex="1" parent="1">
          <mxGeometry x="500" y="1270" width="210" height="484" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-2" value="InventoryConainterList:TArray&lt;UOasisInventoryContainer&gt;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-42">
          <mxGeometry y="26" width="210" height="30" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-44" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-42">
          <mxGeometry y="56" width="210" height="8" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-4" value="LoadAndInitInventory():" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-42">
          <mxGeometry y="64" width="210" height="30" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-49" value="AddInventoryItem(UOasisItemBase* item):bool" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-42">
          <mxGeometry y="94" width="210" height="30" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-108" value="GetItem(FName ItemName):UOasisItemBase* item" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-42">
          <mxGeometry y="124" width="210" height="30" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-109" value="UseItem(FName ItemName):bool" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-42">
          <mxGeometry y="154" width="210" height="30" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-11" value="MoveInventoryItem(UOasisInventoryContainer* from,UOasisItemBase* item):bool" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-42">
          <mxGeometry y="184" width="210" height="40" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-10" value="RemoveInventoryItem(UOasisItemBase* item):bool" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-42">
          <mxGeometry y="224" width="210" height="20" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-47" value="OnItemInfoUpdate(const FOasisItemConfig&amp; ItemConfig, UOasisItemBase* item)" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-42">
          <mxGeometry y="244" width="210" height="40" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-104" value="OnItemContainerChanged(const FInventoryItemSlot&amp; ItemSlot, UOasisItemBase* item);" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-42">
          <mxGeometry y="284" width="210" height="40" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-101" value="OnItemAdd(UOasisItemBase* item);" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-42">
          <mxGeometry y="324" width="210" height="40" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-102" value="OnItemDrop(const FOasisItemConfig&amp;tem);" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-42">
          <mxGeometry y="364" width="210" height="40" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-103" value="OnItemUse(UOasisItemBase* item));" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-42">
          <mxGeometry y="404" width="210" height="40" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-50" value="SaveInventoryData" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-42">
          <mxGeometry y="444" width="210" height="40" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-51" value="UOasisInventoryAssetManager" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;" vertex="1" parent="1">
          <mxGeometry x="940" y="1222" width="200" height="112" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-53" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-51">
          <mxGeometry y="26" width="200" height="8" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-54" value="LoadItem" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-51">
          <mxGeometry y="34" width="200" height="26" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-55" value="LoadInventoryData" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-51">
          <mxGeometry y="60" width="200" height="26" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-56" value="LoadDatatable&#xa;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-51">
          <mxGeometry y="86" width="200" height="26" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-58" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;exitX=1;exitY=0.5;exitDx=0;exitDy=0;" edge="1" parent="1" source="eyBGq87dRODjQVl_F9Fw-4" target="eyBGq87dRODjQVl_F9Fw-51">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-59" value="UOasisItemBase" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;" vertex="1" parent="1">
          <mxGeometry x="660" y="990" width="180" height="190" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-60" value="count:int32&#xa;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-59">
          <mxGeometry y="26" width="180" height="26" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-65" value="IsConsumable:bool" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-59">
          <mxGeometry y="52" width="180" height="26" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-63" value="ItemConfig:FOasisItemConfig" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-59">
          <mxGeometry y="78" width="180" height="26" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-61" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-59">
          <mxGeometry y="104" width="180" height="8" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-62" value="UpdateItemCount(int32 count):bool" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-59">
          <mxGeometry y="112" width="180" height="26" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-64" value="UpdateItemData(const UOasisItemBase&amp; ItemBase):bool" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-59">
          <mxGeometry y="138" width="180" height="26" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-110" value="UseItem():bool" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-59">
          <mxGeometry y="164" width="180" height="26" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-67" value="FOasisItemConfig" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;" vertex="1" parent="1">
          <mxGeometry x="1030" y="977" width="160" height="208" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-68" value="FName ItemName;&#xa;		EOasisItemCategory ItemCategory;&#xa;FText ItemShowName;&#xa;FText ItemDescription;&#xa;int32 Price;&#xa;		bool CanStack;&#xa;		int32 MaxCount;&#xa;int32 MaxLevel;&#xa;int32 AbilityLevel;&#xa;		FIntPoint InventorySize;&#xa;bool CanRotate;&#xa;		UTexture2D* ItemIcon;" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-67">
          <mxGeometry y="26" width="160" height="174" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-69" value="" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-67">
          <mxGeometry y="200" width="160" height="8" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-73" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;exitX=1;exitY=0.5;exitDx=0;exitDy=0;" edge="1" parent="1" source="eyBGq87dRODjQVl_F9Fw-31" target="eyBGq87dRODjQVl_F9Fw-59">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-91" value="" style="endArrow=open;html=1;endSize=12;startArrow=diamondThin;startSize=14;startFill=0;edgeStyle=orthogonalEdgeStyle;exitX=1;exitY=0.5;exitDx=0;exitDy=0;" edge="1" parent="1" source="eyBGq87dRODjQVl_F9Fw-9" target="eyBGq87dRODjQVl_F9Fw-15">
          <mxGeometry relative="1" as="geometry">
            <mxPoint x="350" y="1260" as="sourcePoint" />
            <mxPoint x="510" y="1260" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-92" value="0..n" style="edgeLabel;resizable=0;html=1;align=left;verticalAlign=top;" connectable="0" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-91">
          <mxGeometry x="-1" relative="1" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-93" value="1" style="edgeLabel;resizable=0;html=1;align=right;verticalAlign=top;" connectable="0" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-91">
          <mxGeometry x="1" relative="1" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-94" value="" style="endArrow=open;html=1;endSize=12;startArrow=diamondThin;startSize=14;startFill=0;edgeStyle=orthogonalEdgeStyle;" edge="1" parent="1" source="eyBGq87dRODjQVl_F9Fw-2" target="eyBGq87dRODjQVl_F9Fw-5">
          <mxGeometry relative="1" as="geometry">
            <mxPoint x="380" y="1542" as="sourcePoint" />
            <mxPoint x="542" y="1480" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-95" value="0..n" style="edgeLabel;resizable=0;html=1;align=left;verticalAlign=top;" connectable="0" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-94">
          <mxGeometry x="-1" relative="1" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-96" value="1" style="edgeLabel;resizable=0;html=1;align=right;verticalAlign=top;" connectable="0" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-94">
          <mxGeometry x="1" relative="1" as="geometry" />
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-99" value="" style="endArrow=block;endFill=1;html=1;edgeStyle=orthogonalEdgeStyle;align=left;verticalAlign=top;exitX=1;exitY=0.5;exitDx=0;exitDy=0;" edge="1" parent="1" source="eyBGq87dRODjQVl_F9Fw-63" target="eyBGq87dRODjQVl_F9Fw-67">
          <mxGeometry x="-1" relative="1" as="geometry">
            <mxPoint x="910" y="1110" as="sourcePoint" />
            <mxPoint x="1070" y="1110" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="eyBGq87dRODjQVl_F9Fw-100" value="1" style="edgeLabel;resizable=0;html=1;align=left;verticalAlign=bottom;" connectable="0" vertex="1" parent="eyBGq87dRODjQVl_F9Fw-99">
          <mxGeometry x="-1" relative="1" as="geometry" />
        </mxCell>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>
