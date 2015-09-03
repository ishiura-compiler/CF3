#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x21 = INT32_MIN;
int16_t x23 = INT16_MIN;
uint8_t x342 = 5U;
int16_t x549 = -14739;
static int8_t x647 = 14;
int8_t x648 = -1;
volatile uint64_t x1486 = 3959605593LLU;
static int16_t x1570 = INT16_MAX;
static volatile int32_t t10 = 63408;
static uint32_t x1585 = UINT32_MAX;
int32_t x1588 = -1;
volatile uint32_t t11 = UINT32_MAX;
static volatile uint64_t x1614 = 447499678325697LLU;
volatile uint64_t x1616 = UINT64_MAX;
int16_t x2144 = -3;
volatile int32_t t16 = 0;
uint16_t x2237 = UINT16_MAX;
uint64_t x2239 = 3LLU;
int32_t x2240 = 1;
int16_t x2327 = -1;
int32_t x2441 = INT32_MAX;
int8_t x2444 = INT8_MIN;
uint16_t x2634 = 6U;
uint32_t x2758 = 17209089U;
int64_t t21 = 1881348306230881805LL;
uint16_t x2953 = UINT16_MAX;
uint32_t x2954 = 507689741U;
int32_t t26 = 204432037;
int64_t x3304 = -1LL;
volatile int64_t x3457 = 38801900LL;
static uint64_t x3630 = UINT64_MAX;
int32_t x3632 = INT32_MIN;
int64_t t31 = 51LL;
volatile int16_t x4026 = INT16_MAX;
int16_t x4121 = INT16_MIN;
volatile int32_t t36 = 2;
int8_t x4182 = INT8_MAX;
int16_t x4183 = -1;
int32_t x4184 = -1;
int32_t x4200 = 0;
volatile int64_t t38 = 11169083036LL;
int64_t t40 = -11711LL;
static int32_t x4550 = INT32_MAX;
int8_t x4551 = INT8_MIN;
static uint8_t x4735 = 1U;
static int8_t x4736 = -1;
uint16_t x4742 = UINT16_MAX;
volatile int32_t t43 = 130461207;
int64_t x4822 = 15113390171LL;
int16_t x5078 = INT16_MAX;
uint64_t x5176 = UINT64_MAX;
uint8_t x5206 = 104U;
uint16_t x5207 = UINT16_MAX;
int8_t x5252 = -1;
uint32_t x5695 = UINT32_MAX;
int16_t x5697 = -1320;
int32_t x5738 = 997;
int64_t x5869 = INT64_MIN;
int8_t x6100 = INT8_MIN;
uint32_t x6182 = UINT32_MAX;
volatile uint32_t t64 = 612272U;
volatile uint8_t x6202 = 0U;
uint16_t x6322 = 3U;
uint64_t x6405 = 143766170LLU;
volatile uint64_t t70 = 2702557409405862513LLU;
uint64_t x6831 = UINT64_MAX;
uint64_t t71 = 3858382806LLU;
volatile uint64_t x6901 = 1LLU;
int64_t x6903 = 7LL;
volatile uint64_t t72 = 6073181600722LLU;
int8_t x6945 = INT8_MIN;
uint64_t x6946 = 23832408671004008LLU;
int8_t x6947 = -1;
volatile int8_t x6994 = 3;
int16_t x7253 = INT16_MIN;
uint8_t x7343 = 11U;
uint32_t x7344 = UINT32_MAX;
static uint16_t x7405 = UINT16_MAX;
int64_t x7407 = -1LL;
int32_t t81 = 182058;
uint32_t x7581 = 902557362U;
static volatile uint32_t x7582 = 195U;
int16_t x7583 = INT16_MIN;
volatile uint32_t t82 = 62510U;
int16_t x7647 = 0;
static uint64_t x7650 = UINT64_MAX;
volatile int64_t x7989 = 9936466365224444LL;
uint16_t x7990 = 21U;
static volatile uint16_t x8065 = UINT16_MAX;
static uint16_t x8066 = 3U;
volatile uint64_t t91 = 278LLU;
static int16_t x8175 = INT16_MAX;
volatile int16_t x8176 = INT16_MAX;
int16_t x8338 = 288;
uint8_t x8339 = 3U;
int64_t x8512 = INT64_MIN;
volatile int16_t x8644 = INT16_MAX;
volatile uint32_t t96 = 5U;
int32_t x8776 = -1;
int64_t x8794 = INT64_MAX;
volatile uint32_t x8796 = UINT32_MAX;


void f0(void) {
	static uint64_t x22 = UINT64_MAX;
	volatile int16_t x24 = INT16_MIN;
	uint64_t t0 = 609958LLU;

	t0 = (x21+(x22<<(x23-x24)));

	if (t0 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x121 = UINT32_MAX;
	int8_t x122 = 13;
	static int16_t x123 = 26;
	int32_t x124 = -1;
	static volatile uint32_t t1 = 359209U;

	t1 = (x121+(x122<<(x123-x124)));

	if (t1 != 1744830463U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x249 = 24U;
	static int16_t x250 = INT16_MAX;
	volatile int8_t x251 = INT8_MIN;
	int8_t x252 = INT8_MIN;
	uint32_t t2 = 9335U;

	t2 = (x249+(x250<<(x251-x252)));

	if (t2 != 32791U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x341 = 76202LLU;
	uint64_t x343 = UINT64_MAX;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t3 = 586886316LLU;

	t3 = (x341+(x342<<(x343-x344)));

	if (t3 != 76207LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x550 = UINT64_MAX;
	int8_t x551 = -13;
	int32_t x552 = -49;
	uint64_t t4 = 3854913494LLU;

	t4 = (x549+(x550<<(x551-x552)));

	if (t4 != 18446744004990060141LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x645 = 996U;
	uint8_t x646 = 4U;
	volatile int32_t t5 = -4772;

	t5 = (x645+(x646<<(x647-x648)));

	if (t5 != 132068) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x949 = -1LL;
	uint16_t x950 = 22542U;
	uint8_t x951 = 4U;
	uint16_t x952 = 2U;
	static volatile int64_t t6 = 4670343067157042LL;

	t6 = (x949+(x950<<(x951-x952)));

	if (t6 != 90167LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x1289 = 4711967775LLU;
	uint64_t x1290 = 186827LLU;
	int64_t x1291 = 1LL;
	static volatile uint64_t x1292 = UINT64_MAX;
	volatile uint64_t t7 = 4032859LLU;

	t7 = (x1289+(x1290<<(x1291-x1292)));

	if (t7 != 4712715083LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x1413 = 3U;
	static uint32_t x1414 = UINT32_MAX;
	uint64_t x1415 = 4LLU;
	volatile uint16_t x1416 = 4U;
	uint32_t t8 = 18345037U;

	t8 = (x1413+(x1414<<(x1415-x1416)));

	if (t8 != 2U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x1485 = INT16_MIN;
	int32_t x1487 = -1;
	static int64_t x1488 = -4LL;
	uint64_t t9 = 160018LLU;

	t9 = (x1485+(x1486<<(x1487-x1488)));

	if (t9 != 31676811976LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x1569 = 447U;
	volatile int32_t x1571 = INT32_MIN;
	volatile int32_t x1572 = INT32_MIN;

	t10 = (x1569+(x1570<<(x1571-x1572)));

	if (t10 != 33214) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x1586 = 0;
	static volatile int32_t x1587 = -1;

	t11 = (x1585+(x1586<<(x1587-x1588)));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x1613 = INT32_MIN;
	int8_t x1615 = -1;
	uint64_t t12 = 5503853450962645535LLU;

	t12 = (x1613+(x1614<<(x1615-x1616)));

	if (t12 != 447497530842049LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x1685 = INT16_MIN;
	static uint64_t x1686 = 3181657LLU;
	volatile int64_t x1687 = 12LL;
	static volatile int16_t x1688 = -1;
	uint64_t t13 = 3246887570847457LLU;

	t13 = (x1685+(x1686<<(x1687-x1688)));

	if (t13 != 26064101376LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x1817 = INT32_MIN;
	int64_t x1818 = INT64_MAX;
	volatile int64_t x1819 = -1LL;
	int64_t x1820 = -1LL;
	int64_t t14 = -1426LL;

	t14 = (x1817+(x1818<<(x1819-x1820)));

	if (t14 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x1993 = 0;
	uint32_t x1994 = UINT32_MAX;
	static int8_t x1995 = -1;
	int16_t x1996 = -19;
	static volatile uint32_t t15 = 1773727535U;

	t15 = (x1993+(x1994<<(x1995-x1996)));

	if (t15 != 4294705152U) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x2141 = -1;
	uint8_t x2142 = UINT8_MAX;
	volatile uint32_t x2143 = UINT32_MAX;

	t16 = (x2141+(x2142<<(x2143-x2144)));

	if (t16 != 1019) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x2238 = 399LL;
	volatile int64_t t17 = -2017155198409427LL;

	t17 = (x2237+(x2238<<(x2239-x2240)));

	if (t17 != 67131LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x2325 = 398381U;
	uint64_t x2326 = 17812601475271137LLU;
	static uint64_t x2328 = UINT64_MAX;
	static uint64_t t18 = 88487457875633LLU;

	t18 = (x2325+(x2326<<(x2327-x2328)));

	if (t18 != 17812601475669518LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x2442 = 7U;
	volatile int8_t x2443 = INT8_MIN;
	static volatile uint32_t t19 = 1900079806U;

	t19 = (x2441+(x2442<<(x2443-x2444)));

	if (t19 != 2147483654U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x2633 = -1;
	uint64_t x2635 = UINT64_MAX;
	int32_t x2636 = -1;
	volatile int32_t t20 = 97;

	t20 = (x2633+(x2634<<(x2635-x2636)));

	if (t20 != 5) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x2757 = -81623224077454976LL;
	int16_t x2759 = -1;
	static int64_t x2760 = -1LL;

	t21 = (x2757+(x2758<<(x2759-x2760)));

	if (t21 != -81623224060245887LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x2849 = -1;
	volatile uint8_t x2850 = UINT8_MAX;
	uint16_t x2851 = 3U;
	static int16_t x2852 = -1;
	static int32_t t22 = -1;

	t22 = (x2849+(x2850<<(x2851-x2852)));

	if (t22 != 4079) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x2955 = -1;
	int16_t x2956 = -1;
	volatile uint32_t t23 = 23748062U;

	t23 = (x2953+(x2954<<(x2955-x2956)));

	if (t23 != 507755276U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x2965 = UINT16_MAX;
	uint8_t x2966 = UINT8_MAX;
	volatile int8_t x2967 = 2;
	static int16_t x2968 = -1;
	static volatile int32_t t24 = 70599;

	t24 = (x2965+(x2966<<(x2967-x2968)));

	if (t24 != 67575) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x2977 = -1;
	int32_t x2978 = 14721;
	int16_t x2979 = INT16_MIN;
	int16_t x2980 = INT16_MIN;
	static int32_t t25 = -7982722;

	t25 = (x2977+(x2978<<(x2979-x2980)));

	if (t25 != 14720) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x3105 = -1;
	int8_t x3106 = 13;
	int64_t x3107 = INT64_MAX;
	int64_t x3108 = INT64_MAX;

	t26 = (x3105+(x3106<<(x3107-x3108)));

	if (t26 != 12) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x3301 = 62937388U;
	uint32_t x3302 = 197850239U;
	static uint64_t x3303 = UINT64_MAX;
	volatile uint32_t t27 = 464U;

	t27 = (x3301+(x3302<<(x3303-x3304)));

	if (t27 != 260787627U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x3458 = 126U;
	volatile int64_t x3459 = -1LL;
	volatile int64_t x3460 = -1LL;
	static volatile int64_t t28 = 89791677726577LL;

	t28 = (x3457+(x3458<<(x3459-x3460)));

	if (t28 != 38802026LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x3561 = INT8_MIN;
	uint64_t x3562 = 4317808242238004LLU;
	static uint16_t x3563 = UINT16_MAX;
	uint16_t x3564 = UINT16_MAX;
	volatile uint64_t t29 = 191084584645058LLU;

	t29 = (x3561+(x3562<<(x3563-x3564)));

	if (t29 != 4317808242237876LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x3629 = -1LL;
	volatile int32_t x3631 = INT32_MIN;
	volatile uint64_t t30 = 96LLU;

	t30 = (x3629+(x3630<<(x3631-x3632)));

	if (t30 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x3685 = -99LL;
	int16_t x3686 = 9;
	uint8_t x3687 = 7U;
	int8_t x3688 = -5;

	t31 = (x3685+(x3686<<(x3687-x3688)));

	if (t31 != 36765LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x3829 = -1;
	int8_t x3830 = INT8_MAX;
	uint64_t x3831 = UINT64_MAX;
	static uint64_t x3832 = UINT64_MAX;
	static int32_t t32 = 4221;

	t32 = (x3829+(x3830<<(x3831-x3832)));

	if (t32 != 126) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x3901 = 92U;
	uint32_t x3902 = 48301178U;
	int64_t x3903 = INT64_MIN;
	static volatile int64_t x3904 = INT64_MIN;
	uint32_t t33 = 893U;

	t33 = (x3901+(x3902<<(x3903-x3904)));

	if (t33 != 48301270U) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x4025 = -1LL;
	int16_t x4027 = INT16_MIN;
	int16_t x4028 = INT16_MIN;
	int64_t t34 = -3656157LL;

	t34 = (x4025+(x4026<<(x4027-x4028)));

	if (t34 != 32766LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x4122 = UINT8_MAX;
	int8_t x4123 = -1;
	volatile int8_t x4124 = -1;
	volatile int32_t t35 = 1;

	t35 = (x4121+(x4122<<(x4123-x4124)));

	if (t35 != -32513) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x4173 = INT8_MIN;
	uint8_t x4174 = 3U;
	int8_t x4175 = -1;
	int8_t x4176 = -1;

	t36 = (x4173+(x4174<<(x4175-x4176)));

	if (t36 != -125) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x4181 = INT8_MAX;
	volatile int32_t t37 = 6488;

	t37 = (x4181+(x4182<<(x4183-x4184)));

	if (t37 != 254) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x4197 = INT32_MIN;
	volatile int64_t x4198 = 3597664LL;
	int8_t x4199 = 9;

	t38 = (x4197+(x4198<<(x4199-x4200)));

	if (t38 != -305479680LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x4321 = -1;
	int16_t x4322 = INT16_MAX;
	uint8_t x4323 = 0U;
	int16_t x4324 = -1;
	static volatile int32_t t39 = 0;

	t39 = (x4321+(x4322<<(x4323-x4324)));

	if (t39 != 65533) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x4437 = INT64_MIN;
	int32_t x4438 = 510;
	static int8_t x4439 = -1;
	int64_t x4440 = -1LL;

	t40 = (x4437+(x4438<<(x4439-x4440)));

	if (t40 != -9223372036854775298LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x4549 = 967568U;
	static int8_t x4552 = INT8_MIN;
	static volatile uint32_t t41 = 3U;

	t41 = (x4549+(x4550<<(x4551-x4552)));

	if (t41 != 2148451215U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x4733 = 57U;
	volatile uint8_t x4734 = UINT8_MAX;
	int32_t t42 = -122;

	t42 = (x4733+(x4734<<(x4735-x4736)));

	if (t42 != 1077) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x4741 = INT16_MIN;
	int8_t x4743 = -1;
	static int16_t x4744 = -9;

	t43 = (x4741+(x4742<<(x4743-x4744)));

	if (t43 != 16744192) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x4789 = UINT16_MAX;
	uint16_t x4790 = UINT16_MAX;
	int8_t x4791 = -1;
	int16_t x4792 = -1;
	int32_t t44 = 45;

	t44 = (x4789+(x4790<<(x4791-x4792)));

	if (t44 != 131070) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x4821 = -292;
	volatile int16_t x4823 = 50;
	static uint16_t x4824 = 30U;
	int64_t t45 = -357624141LL;

	t45 = (x4821+(x4822<<(x4823-x4824)));

	if (t45 != 15847538211946204LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x4829 = 293912618LLU;
	uint8_t x4830 = 1U;
	uint32_t x4831 = 6U;
	uint8_t x4832 = 0U;
	uint64_t t46 = 600633672995677582LLU;

	t46 = (x4829+(x4830<<(x4831-x4832)));

	if (t46 != 293912682LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x4917 = 31653;
	uint8_t x4918 = 28U;
	volatile int32_t x4919 = -1;
	uint32_t x4920 = UINT32_MAX;
	int32_t t47 = -47245446;

	t47 = (x4917+(x4918<<(x4919-x4920)));

	if (t47 != 31681) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x4973 = INT8_MIN;
	uint32_t x4974 = UINT32_MAX;
	uint32_t x4975 = 1U;
	int32_t x4976 = -1;
	volatile uint32_t t48 = 6916385U;

	t48 = (x4973+(x4974<<(x4975-x4976)));

	if (t48 != 4294967164U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x4977 = 30U;
	static int16_t x4978 = INT16_MAX;
	static uint8_t x4979 = 12U;
	int8_t x4980 = -1;
	uint32_t t49 = 119U;

	t49 = (x4977+(x4978<<(x4979-x4980)));

	if (t49 != 268427294U) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x5077 = INT16_MAX;
	volatile uint32_t x5079 = UINT32_MAX;
	uint32_t x5080 = UINT32_MAX;
	int32_t t50 = -1724128;

	t50 = (x5077+(x5078<<(x5079-x5080)));

	if (t50 != 65534) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x5173 = INT8_MAX;
	int16_t x5174 = INT16_MAX;
	int8_t x5175 = -1;
	static volatile int32_t t51 = 5;

	t51 = (x5173+(x5174<<(x5175-x5176)));

	if (t51 != 32894) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x5205 = -1;
	static volatile uint16_t x5208 = UINT16_MAX;
	int32_t t52 = 3147;

	t52 = (x5205+(x5206<<(x5207-x5208)));

	if (t52 != 103) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x5249 = 83U;
	volatile int8_t x5250 = INT8_MAX;
	static int32_t x5251 = -1;
	static int32_t t53 = 460716424;

	t53 = (x5249+(x5250<<(x5251-x5252)));

	if (t53 != 210) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x5285 = -1;
	uint64_t x5286 = 113LLU;
	volatile int64_t x5287 = INT64_MIN;
	static int64_t x5288 = INT64_MIN;
	uint64_t t54 = 58920348988028LLU;

	t54 = (x5285+(x5286<<(x5287-x5288)));

	if (t54 != 112LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x5357 = UINT64_MAX;
	uint16_t x5358 = 7U;
	volatile int64_t x5359 = -1LL;
	int32_t x5360 = -1;
	volatile uint64_t t55 = 91547815619LLU;

	t55 = (x5357+(x5358<<(x5359-x5360)));

	if (t55 != 6LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x5481 = -110544450432LL;
	uint64_t x5482 = UINT64_MAX;
	uint64_t x5483 = 42LLU;
	volatile uint8_t x5484 = 4U;
	volatile uint64_t t56 = 1898LLU;

	t56 = (x5481+(x5482<<(x5483-x5484)));

	if (t56 != 18446743688287194240LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x5693 = 5U;
	int32_t x5694 = 33153;
	int32_t x5696 = -1;
	int32_t t57 = -356;

	t57 = (x5693+(x5694<<(x5695-x5696)));

	if (t57 != 33158) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x5698 = UINT16_MAX;
	int32_t x5699 = -1;
	int8_t x5700 = -3;
	volatile int32_t t58 = 997694659;

	t58 = (x5697+(x5698<<(x5699-x5700)));

	if (t58 != 260820) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x5713 = INT8_MIN;
	uint8_t x5714 = UINT8_MAX;
	int64_t x5715 = INT64_MAX;
	int64_t x5716 = INT64_MAX;
	volatile int32_t t59 = -9619;

	t59 = (x5713+(x5714<<(x5715-x5716)));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x5737 = UINT32_MAX;
	int16_t x5739 = 59;
	uint16_t x5740 = 57U;
	uint32_t t60 = 1368377631U;

	t60 = (x5737+(x5738<<(x5739-x5740)));

	if (t60 != 3987U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x5813 = 2;
	int32_t x5814 = 10118586;
	int16_t x5815 = 1;
	int8_t x5816 = -3;
	static volatile int32_t t61 = 106425;

	t61 = (x5813+(x5814<<(x5815-x5816)));

	if (t61 != 161897378) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x5870 = 4U;
	static uint32_t x5871 = UINT32_MAX;
	volatile int32_t x5872 = -1;
	int64_t t62 = 856873768760LL;

	t62 = (x5869+(x5870<<(x5871-x5872)));

	if (t62 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x6097 = INT32_MIN;
	uint64_t x6098 = 2380069641737LLU;
	static volatile int8_t x6099 = INT8_MIN;
	static uint64_t t63 = 28845064LLU;

	t63 = (x6097+(x6098<<(x6099-x6100)));

	if (t63 != 2377922158089LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x6181 = INT32_MIN;
	volatile int8_t x6183 = 6;
	int16_t x6184 = 0;

	t64 = (x6181+(x6182<<(x6183-x6184)));

	if (t64 != 2147483584U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x6201 = -1;
	int8_t x6203 = 2;
	static int8_t x6204 = 1;
	volatile int32_t t65 = 185897;

	t65 = (x6201+(x6202<<(x6203-x6204)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x6285 = INT16_MAX;
	int8_t x6286 = INT8_MAX;
	int64_t x6287 = INT64_MIN;
	int64_t x6288 = INT64_MIN;
	int32_t t66 = 20;

	t66 = (x6285+(x6286<<(x6287-x6288)));

	if (t66 != 32894) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x6321 = 13554U;
	uint8_t x6323 = 15U;
	int64_t x6324 = -1LL;
	volatile int32_t t67 = 898701422;

	t67 = (x6321+(x6322<<(x6323-x6324)));

	if (t67 != 210162) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x6406 = 108450280284536770LLU;
	uint8_t x6407 = 28U;
	static uint8_t x6408 = 7U;
	static uint64_t t68 = 256594672774463LLU;

	t68 = (x6405+(x6406<<(x6407-x6408)));

	if (t68 != 6814514511938171546LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x6633 = 33033796229001809LL;
	static uint64_t x6634 = UINT64_MAX;
	uint32_t x6635 = 58U;
	int16_t x6636 = -1;
	volatile uint64_t t69 = 592084044728LLU;

	t69 = (x6633+(x6634<<(x6635-x6636)));

	if (t69 != 17903317117635129937LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x6717 = INT8_MAX;
	volatile uint64_t x6718 = UINT64_MAX;
	int8_t x6719 = 2;
	int32_t x6720 = 0;

	t70 = (x6717+(x6718<<(x6719-x6720)));

	if (t70 != 123LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x6829 = UINT64_MAX;
	uint32_t x6830 = 335181411U;
	uint64_t x6832 = UINT64_MAX;

	t71 = (x6829+(x6830<<(x6831-x6832)));

	if (t71 != 335181410LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x6902 = UINT64_MAX;
	int32_t x6904 = -1;

	t72 = (x6901+(x6902<<(x6903-x6904)));

	if (t72 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x6905 = 12U;
	int16_t x6906 = INT16_MAX;
	volatile int32_t x6907 = -1;
	volatile int64_t x6908 = -1LL;
	int32_t t73 = 2246;

	t73 = (x6905+(x6906<<(x6907-x6908)));

	if (t73 != 32779) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x6948 = -1;
	static uint64_t t74 = 1LLU;

	t74 = (x6945+(x6946<<(x6947-x6948)));

	if (t74 != 23832408671003880LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x6993 = 1;
	uint32_t x6995 = 1U;
	int8_t x6996 = -2;
	int32_t t75 = 119;

	t75 = (x6993+(x6994<<(x6995-x6996)));

	if (t75 != 25) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x7254 = 3900U;
	static int8_t x7255 = -1;
	volatile int8_t x7256 = -7;
	volatile int32_t t76 = 21207233;

	t76 = (x7253+(x7254<<(x7255-x7256)));

	if (t76 != 216832) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x7265 = 6U;
	uint16_t x7266 = 53U;
	int16_t x7267 = -1;
	int8_t x7268 = -1;
	int32_t t77 = -37277;

	t77 = (x7265+(x7266<<(x7267-x7268)));

	if (t77 != 59) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x7341 = -1;
	int16_t x7342 = INT16_MAX;
	int32_t t78 = -367113;

	t78 = (x7341+(x7342<<(x7343-x7344)));

	if (t78 != 134213631) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x7406 = INT16_MAX;
	volatile int8_t x7408 = -7;
	int32_t t79 = 7;

	t79 = (x7405+(x7406<<(x7407-x7408)));

	if (t79 != 2162623) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x7425 = UINT32_MAX;
	volatile uint16_t x7426 = 6513U;
	static uint64_t x7427 = UINT64_MAX;
	static int8_t x7428 = -1;
	volatile uint32_t t80 = 687336U;

	t80 = (x7425+(x7426<<(x7427-x7428)));

	if (t80 != 6512U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x7445 = 60U;
	volatile uint16_t x7446 = UINT16_MAX;
	static volatile uint32_t x7447 = 0U;
	int16_t x7448 = -1;

	t81 = (x7445+(x7446<<(x7447-x7448)));

	if (t81 != 131130) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x7584 = INT16_MIN;

	t82 = (x7581+(x7582<<(x7583-x7584)));

	if (t82 != 902557557U) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x7645 = 1277;
	int64_t x7646 = 19648909222984991LL;
	static int64_t x7648 = -3LL;
	int64_t t83 = -13749LL;

	t83 = (x7645+(x7646<<(x7647-x7648)));

	if (t83 != 157191273783881205LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x7649 = 11425U;
	static int32_t x7651 = -1;
	int64_t x7652 = -1LL;
	uint64_t t84 = 256678249LLU;

	t84 = (x7649+(x7650<<(x7651-x7652)));

	if (t84 != 11424LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x7925 = INT32_MIN;
	uint16_t x7926 = 0U;
	static uint8_t x7927 = 11U;
	uint64_t x7928 = UINT64_MAX;
	volatile int32_t t85 = INT32_MIN;

	t85 = (x7925+(x7926<<(x7927-x7928)));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x7957 = 225U;
	volatile uint16_t x7958 = UINT16_MAX;
	volatile uint32_t x7959 = 2U;
	uint64_t x7960 = UINT64_MAX;
	uint32_t t86 = 2U;

	t86 = (x7957+(x7958<<(x7959-x7960)));

	if (t86 != 524505U) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x7977 = -1;
	static uint16_t x7978 = UINT16_MAX;
	int32_t x7979 = -1;
	uint64_t x7980 = UINT64_MAX;
	volatile int32_t t87 = 533107038;

	t87 = (x7977+(x7978<<(x7979-x7980)));

	if (t87 != 65534) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x7981 = -5777;
	int64_t x7982 = INT64_MAX;
	int32_t x7983 = -1;
	int32_t x7984 = -1;
	int64_t t88 = -10833469LL;

	t88 = (x7981+(x7982<<(x7983-x7984)));

	if (t88 != 9223372036854770030LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x7991 = 24U;
	int64_t x7992 = -1LL;
	static volatile int64_t t89 = 125676LL;

	t89 = (x7989+(x7990<<(x7991-x7992)));

	if (t89 != 9936467069867516LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x8067 = -1;
	static int8_t x8068 = -1;
	volatile int32_t t90 = 1;

	t90 = (x8065+(x8066<<(x8067-x8068)));

	if (t90 != 65538) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x8069 = INT32_MAX;
	static uint64_t x8070 = UINT64_MAX;
	int16_t x8071 = 17;
	static uint16_t x8072 = 0U;

	t91 = (x8069+(x8070<<(x8071-x8072)));

	if (t91 != 2147352575LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x8173 = INT8_MIN;
	static uint16_t x8174 = UINT16_MAX;
	volatile int32_t t92 = -430826;

	t92 = (x8173+(x8174<<(x8175-x8176)));

	if (t92 != 65407) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x8337 = -1;
	int32_t x8340 = -1;
	volatile int32_t t93 = -15;

	t93 = (x8337+(x8338<<(x8339-x8340)));

	if (t93 != 4607) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x8509 = UINT8_MAX;
	volatile uint32_t x8510 = 13117785U;
	static int64_t x8511 = INT64_MIN;
	volatile uint32_t t94 = 45433U;

	t94 = (x8509+(x8510<<(x8511-x8512)));

	if (t94 != 13118040U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x8641 = INT64_MIN;
	uint8_t x8642 = 4U;
	int16_t x8643 = INT16_MAX;
	static volatile int64_t t95 = -16739404038LL;

	t95 = (x8641+(x8642<<(x8643-x8644)));

	if (t95 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x8673 = INT8_MAX;
	static volatile uint32_t x8674 = 739344098U;
	uint16_t x8675 = 2U;
	uint64_t x8676 = UINT64_MAX;

	t96 = (x8673+(x8674<<(x8675-x8676)));

	if (t96 != 1619785615U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x8725 = -37337180047742972LL;
	int32_t x8726 = 82974;
	int64_t x8727 = INT64_MIN;
	static int64_t x8728 = INT64_MIN;
	volatile int64_t t97 = 10462922LL;

	t97 = (x8725+(x8726<<(x8727-x8728)));

	if (t97 != -37337180047659998LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x8773 = -1;
	int64_t x8774 = INT64_MAX;
	uint32_t x8775 = UINT32_MAX;
	static int64_t t98 = -6933024677187LL;

	t98 = (x8773+(x8774<<(x8775-x8776)));

	if (t98 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x8793 = -178;
	int8_t x8795 = -1;
	int64_t t99 = -58LL;

	t99 = (x8793+(x8794<<(x8795-x8796)));

	if (t99 != 9223372036854775629LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

