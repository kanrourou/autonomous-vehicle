  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 3;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (motor_P)
    ;%
      section.nData     = 18;
      section.data(18)  = dumData; %prealloc
      
	  ;% motor_P.Left_high_p1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% motor_P.Left_high_p2
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% motor_P.Left_high_p3
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% motor_P.Left_low_p1
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% motor_P.Left_low_p2
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% motor_P.Left_low_p3
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% motor_P.Right_high_p1
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% motor_P.Right_high_p2
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% motor_P.Right_high_p3
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% motor_P.Right_low_p1
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% motor_P.Right_low_p2
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% motor_P.Right_low_p3
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% motor_P.EN_Left_p1
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% motor_P.EN_Left_p2
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% motor_P.EN_Left_p3
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% motor_P.EN_Right_p1
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% motor_P.EN_Right_p2
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% motor_P.EN_Right_p3
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% motor_P.Left_high_p4
	  section.data(1).logicalSrcIdx = 18;
	  section.data(1).dtTransOffset = 0;
	
	  ;% motor_P.Left_low_p4
	  section.data(2).logicalSrcIdx = 19;
	  section.data(2).dtTransOffset = 1;
	
	  ;% motor_P.Right_high_p4
	  section.data(3).logicalSrcIdx = 20;
	  section.data(3).dtTransOffset = 2;
	
	  ;% motor_P.Right_low_p4
	  section.data(4).logicalSrcIdx = 21;
	  section.data(4).dtTransOffset = 3;
	
	  ;% motor_P.EN_Left_p4
	  section.data(5).logicalSrcIdx = 22;
	  section.data(5).dtTransOffset = 4;
	
	  ;% motor_P.EN_Right_p4
	  section.data(6).logicalSrcIdx = 23;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% motor_P.Constant_Value
	  section.data(1).logicalSrcIdx = 24;
	  section.data(1).dtTransOffset = 0;
	
	  ;% motor_P.Constant2_Value
	  section.data(2).logicalSrcIdx = 25;
	  section.data(2).dtTransOffset = 1;
	
	  ;% motor_P.Constant4_Value
	  section.data(3).logicalSrcIdx = 26;
	  section.data(3).dtTransOffset = 2;
	
	  ;% motor_P.Constant5_Value
	  section.data(4).logicalSrcIdx = 27;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 0;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (motor_B)
    ;%
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 0;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (motor_DW)
    ;%
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 1008116136;
  targMap.checksum1 = 3564589615;
  targMap.checksum2 = 1322083197;
  targMap.checksum3 = 1603772587;

