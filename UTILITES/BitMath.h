/*
 * BitMath.h
 *
 *  Created on: Mar 21, 2023
 *      Author: Ahmed Samy El Nozahy
 */

#ifndef UTILITES_BITMATH_H_
#define UTILITES_BITMATH_H_

#define MASK_PIN    1

#define SET_BIT(_REG,PIN)      (_REG=_REG | (MASK_PIN <<PIN))
#define CLEAR_BIT(_REG,PIN)    (_REG=_REG & (~(MASK_PIN<<PIN)))
#define TOGGLE_BIT(_REG,PIN)   (_REG=_REG ^ (MASK_PIN<<PIN))
#define READ_BIT(_REG,PIN)     ((_REG>>PIN)  & MASK_PIN)
#define BIT_IS_SET(_REG,PIN)   (_REG&(1<<PIN))

#endif /* UTILITES_BITMATH_H_ */
