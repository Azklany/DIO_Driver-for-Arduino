/*
 * BIT_MATH.h or STD_MACROS.h
 *
 *      Author: Azklany
 *      Layer : LIB
 *
 */

#ifndef LIB_BIT_MATH_H_
#define LIB_BIT_MATH_H_

#define SET_BIT(REG,PIN) REG|=(1<<PIN)
#define CLR_BIT(REG,PIN) REG&=~(1<<PIN)
#define TOG_BIT(REG,PIN) REG^=(1<<PIN)
#define GET_BIT(REG,PIN) (REG>>PIN)&1
#define IS_BIT_SET(REG,PIN) (REG>>PIN)&1
#define IS_BIT_CLR(REG,PIN) !((REG>>PIN)&1)


#endif /* LIB_BIT_MATH_H_ */
