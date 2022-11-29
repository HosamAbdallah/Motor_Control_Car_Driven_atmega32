

#ifndef UTILS_H_
#define UTILS_H_


#define READ_BIT(REG,BIT) ((REG>>BIT)&1)         // for Reg PIN
#define SET_BIT(REG,BIT)  (REG=REG|(1<<BIT))     // for Reg PORT
#define CLEAR_BIT(REG,BIT) ((REG=REG&~(1<<BIT)))
#define TOG_BIT(REG,BIT) (REG=REG^(1<<BIT))




#endif /* UTILS_H_ */