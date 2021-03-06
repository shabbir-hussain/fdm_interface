#define EEC 0 // Exception Event Channel
#define NOC 2 // Normal Operation Channel
#define DMC 3 // Directed Message Channel
#define NSC 4 // Node Service Channel
#define UDC 5 // User-defined Channel
#define TMC 6 // Test and Maintenance
#define FMC 7 // CAN Base Frame Mitigation Channel

#define ECC_H 0
#define NOC_H 0x08000000
#define DMC_H 0x0C000000
#define NSC_H 0x10000000
#define UDC_H 0x14000000
#define TMC_H 0x18000000
#define FMC_H 0x1C000000

#define SOURCE_FID_START_BIT 19
#define FSB_START_BIT 18
#define LCL_START_BIT 17
#define PVT_START_BIT 16
#define DOC_START_BIT 2
#define RCI_START_BIT 0

#define SOURCE_ADDRESS_START_BIT 19
#define DESTINATION_ADDRESS_START_BIT 12
#define SOURCE_PORT_ID_START_BIT 6
#define DESTINATION_PORT_ID_START_BIT 0

#define CLIENT_FID_START_BIT 19
#define SMT_START_BIT 18
#define SERVER_FID_START_BIT 9
#define SID_START_BIT 2

enum FieldName{
    _SourceFID,
    _FSB,
    _LCL,
    _PVT,
    _DOC,
    _RCI,
    
    _SourceAddress,
    _DestinationAddress,
    _SourcePortID,
    _DestinationPortID,
    
    _ClientFID,
    _SMT,
    _ServerFID,
    _SID,
};

// Assumes header starts zeroed
void assignLCC(const uint32_T *LCC, uint32_T *Header){
 switch(*LCC){
        case EEC:
            //Exeption Event Channel
            *Header |= ECC_H;
            break;
        case NOC:
            *Header |= NOC_H;
            break;
        case DMC:
            *Header |= DMC_H;
            break;
        case NSC:
            *Header |= NSC_H;
            break;
        case UDC:
            *Header |= UDC_H;
            break;
        case TMC:
            *Header |= TMC_H;
            break;
        case FMC:
            *Header |= FMC_H;
            break;
            //TODO: Handle error case
    }   
}

void assignField(const uint32_T *field, uint32_T *Header, enum FieldName fieldName){
    //truncate bits to mask errors
    uint32_T mask;
    
    switch(fieldName){
        
        // 1 TO MANY FIELDS
        case _SourceFID:
            mask = *field & 0x7F;
            mask = mask << SOURCE_FID_START_BIT;
            break;
        case _FSB:
            mask = *field & 0x1; 
            mask = mask << FSB_START_BIT;
            break;
        case _LCL:
            mask = *field & 0x1;
            mask = mask << LCL_START_BIT;
            break;
        case _PVT:
            mask = *field & 0x01;
            mask = mask << PVT_START_BIT;
            break;
        case _DOC:
            mask = *field & 0x7F;
            mask = mask << DOC_START_BIT;
            break;
        case _RCI:
            mask = *field & 0x3;
            mask = mask << RCI_START_BIT;  
            break;
            
        // Directed messages 
        case _SourceAddress:
            mask = *field & 0x7f;
            mask = mask << SOURCE_ADDRESS_START_BIT;  
            break;
        case _DestinationAddress:
            mask = *field & 0x7f;
            mask = mask << DESTINATION_ADDRESS_START_BIT;  
            break;
        case _SourcePortID:
            mask = *field & 0x3f;
            mask = mask << SOURCE_PORT_ID_START_BIT;  
            break;
        case _DestinationPortID:
            mask = *field & 0x3f;
            mask = mask << DESTINATION_PORT_ID_START_BIT;  
            break;
            
        // Peer to Peer
        case _ClientFID:
            mask = *field & 0x7f;
            mask = mask << CLIENT_FID_START_BIT;  
            break;
        case _SMT:
            mask = *field & 0x1;
            mask = mask << SMT_START_BIT;  
            break;
        case _ServerFID:
            mask = *field & 0x7f;
            mask = mask << SERVER_FID_START_BIT;  
            break;
        case _SID:
            mask = *field & 0x7f;
            mask = mask << SID_START_BIT;  
            break;
    }           
    *Header |= mask;
}