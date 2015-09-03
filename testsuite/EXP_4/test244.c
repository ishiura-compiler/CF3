#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x33 = 4458716021899LLU;
static uint8_t x35 = 0U;
int8_t x169 = INT8_MAX;
uint64_t x226 = 66587880LLU;
volatile int32_t t3 = -169979293;
volatile int32_t t4 = -802028792;
volatile uint16_t x444 = 4U;
volatile uint64_t x447 = UINT64_MAX;
static volatile int32_t t6 = -3;
int16_t x609 = INT16_MAX;
static int32_t t7 = -50;
uint8_t x625 = 6U;
static uint32_t x627 = UINT32_MAX;
int8_t x742 = INT8_MAX;
int32_t x744 = INT32_MAX;
static volatile int32_t x745 = INT32_MIN;
int32_t t11 = 40;
volatile uint32_t x1058 = UINT32_MAX;
uint8_t x1068 = 15U;
int16_t x1112 = -1;
int32_t x1170 = 74047;
uint8_t x1185 = 46U;
uint8_t x1978 = 9U;
int32_t x1990 = INT32_MAX;
uint32_t x1991 = UINT32_MAX;
uint64_t x2068 = UINT64_MAX;
int16_t x2142 = 11070;
int8_t x2143 = 2;
volatile int32_t t28 = 43;
volatile int16_t x2219 = INT16_MAX;
volatile int16_t x2220 = INT16_MAX;
volatile int8_t x2255 = INT8_MIN;
int64_t x2352 = -1LL;
uint8_t x2590 = 19U;
int8_t x2591 = INT8_MIN;
static uint32_t x2935 = 32U;
static uint64_t x3134 = 239199591006833LLU;
static int16_t x3281 = INT16_MAX;
int8_t x3283 = -1;
int32_t t36 = -28;
int32_t x3704 = -1;
volatile uint64_t x3710 = 6832593851957LLU;
int32_t t39 = 31;
static volatile int32_t x3765 = -3652196;
volatile int32_t x3768 = -1;
uint8_t x4014 = 0U;
static int64_t x4020 = -1LL;
static uint64_t x4062 = 129275058123LLU;
static int64_t x4221 = INT64_MIN;
static uint16_t x4222 = 7U;
int64_t x4224 = INT64_MAX;
uint16_t x4253 = 0U;
volatile int32_t t48 = -31958805;
uint8_t x4431 = 57U;
static uint16_t x4470 = 48U;
uint16_t x4810 = 7U;
int32_t t52 = -134596;
volatile int32_t t55 = -62032849;
int8_t x5182 = INT8_MAX;
int32_t x5226 = 1;
uint16_t x5274 = 5813U;
volatile uint32_t x5275 = UINT32_MAX;
volatile int32_t t60 = -372535690;
volatile uint16_t x5921 = 397U;
static volatile int32_t t66 = -1882828;
int8_t x6227 = 7;
uint16_t x6228 = 7U;
int32_t x6412 = -1;
uint16_t x6489 = 180U;
uint8_t x6490 = 0U;
int32_t x6491 = -1;
uint64_t x6571 = 5LLU;
volatile int32_t t73 = 1;
volatile int8_t x6820 = -1;
uint64_t x7011 = UINT64_MAX;
int8_t x7231 = INT8_MIN;
int8_t x7232 = INT8_MIN;
int8_t x7571 = 0;
int64_t x7639 = INT64_MAX;
uint8_t x7839 = 23U;
volatile int32_t t86 = 3565;
uint16_t x8015 = 1U;
int8_t x8016 = -1;
volatile uint32_t x8149 = UINT32_MAX;
int32_t x8277 = INT32_MIN;
uint32_t x8278 = 129595862U;
int32_t x8279 = -1;
int64_t x8281 = INT64_MIN;
static uint16_t x8282 = 1013U;
uint8_t x8283 = 1U;
int8_t x8309 = -1;
static uint64_t x8567 = 5LLU;
int8_t x8568 = -1;
int32_t t92 = 782847;
static uint32_t x8729 = UINT32_MAX;
int16_t x8732 = -1;
int32_t t94 = -63595;
static int32_t t95 = -1;


void f0(void) {
	uint16_t x34 = 7063U;
	int16_t x36 = -6;
	volatile int32_t t0 = 6815709;

	t0 = (x33<=(x34<<(x35-x36)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x170 = 18U;
	static int32_t x171 = -1;
	int32_t x172 = -1;
	int32_t t1 = -22059629;

	t1 = (x169<=(x170<<(x171-x172)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x225 = INT16_MAX;
	volatile int8_t x227 = INT8_MIN;
	static volatile int8_t x228 = INT8_MIN;
	volatile int32_t t2 = 127;

	t2 = (x225<=(x226<<(x227-x228)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x329 = INT32_MAX;
	volatile int64_t x330 = 63753343395897LL;
	static int8_t x331 = -1;
	uint32_t x332 = UINT32_MAX;

	t3 = (x329<=(x330<<(x331-x332)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x393 = INT64_MIN;
	static uint64_t x394 = 36119043149614779LLU;
	static volatile int16_t x395 = -1;
	static uint32_t x396 = UINT32_MAX;

	t4 = (x393<=(x394<<(x395-x396)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x441 = 2U;
	int32_t x442 = 4;
	int8_t x443 = 5;
	volatile int32_t t5 = -4;

	t5 = (x441<=(x442<<(x443-x444)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x445 = 1;
	uint16_t x446 = 80U;
	int16_t x448 = -1;

	t6 = (x445<=(x446<<(x447-x448)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x610 = 15089U;
	uint64_t x611 = UINT64_MAX;
	static int64_t x612 = -1LL;

	t7 = (x609<=(x610<<(x611-x612)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint8_t x626 = UINT8_MAX;
	volatile int8_t x628 = -1;
	volatile int32_t t8 = -191828299;

	t8 = (x625<=(x626<<(x627-x628)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x741 = 1044800128773024LL;
	static int32_t x743 = INT32_MAX;
	int32_t t9 = 60;

	t9 = (x741<=(x742<<(x743-x744)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x746 = INT8_MAX;
	int16_t x747 = 0;
	static volatile int16_t x748 = -1;
	int32_t t10 = 5;

	t10 = (x745<=(x746<<(x747-x748)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x817 = 517104856U;
	volatile uint32_t x818 = 1177155943U;
	volatile int8_t x819 = 3;
	int8_t x820 = 0;

	t11 = (x817<=(x818<<(x819-x820)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x961 = 4LLU;
	volatile uint32_t x962 = 200U;
	int32_t x963 = -1;
	uint32_t x964 = UINT32_MAX;
	volatile int32_t t12 = 1844173;

	t12 = (x961<=(x962<<(x963-x964)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x1057 = INT32_MAX;
	int8_t x1059 = 29;
	uint32_t x1060 = UINT32_MAX;
	int32_t t13 = -172238;

	t13 = (x1057<=(x1058<<(x1059-x1060)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x1065 = 19077U;
	uint16_t x1066 = 15U;
	uint16_t x1067 = 27U;
	volatile int32_t t14 = 251091;

	t14 = (x1065<=(x1066<<(x1067-x1068)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x1109 = UINT64_MAX;
	uint32_t x1110 = UINT32_MAX;
	int64_t x1111 = 0LL;
	volatile int32_t t15 = -44559;

	t15 = (x1109<=(x1110<<(x1111-x1112)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x1169 = 308855002U;
	uint32_t x1171 = 0U;
	volatile int8_t x1172 = -1;
	static volatile int32_t t16 = 104;

	t16 = (x1169<=(x1170<<(x1171-x1172)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1177 = INT64_MIN;
	volatile uint32_t x1178 = UINT32_MAX;
	uint16_t x1179 = UINT16_MAX;
	uint16_t x1180 = UINT16_MAX;
	volatile int32_t t17 = -62040;

	t17 = (x1177<=(x1178<<(x1179-x1180)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x1186 = 0U;
	uint16_t x1187 = 1U;
	int16_t x1188 = -1;
	volatile int32_t t18 = 11924109;

	t18 = (x1185<=(x1186<<(x1187-x1188)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1257 = 2432480545LLU;
	int8_t x1258 = 27;
	volatile int32_t x1259 = -1;
	volatile int64_t x1260 = -1LL;
	static int32_t t19 = -603557822;

	t19 = (x1257<=(x1258<<(x1259-x1260)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x1305 = -549;
	uint32_t x1306 = 2U;
	int8_t x1307 = -1;
	static int16_t x1308 = -1;
	static int32_t t20 = -57995346;

	t20 = (x1305<=(x1306<<(x1307-x1308)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1465 = -1000;
	volatile uint8_t x1466 = 30U;
	uint8_t x1467 = 7U;
	uint64_t x1468 = UINT64_MAX;
	static volatile int32_t t21 = 58585525;

	t21 = (x1465<=(x1466<<(x1467-x1468)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1753 = -1;
	volatile uint64_t x1754 = UINT64_MAX;
	int32_t x1755 = -1;
	uint64_t x1756 = UINT64_MAX;
	int32_t t22 = 0;

	t22 = (x1753<=(x1754<<(x1755-x1756)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1857 = INT8_MAX;
	int8_t x1858 = INT8_MAX;
	int32_t x1859 = INT32_MAX;
	static volatile int32_t x1860 = INT32_MAX;
	int32_t t23 = 58;

	t23 = (x1857<=(x1858<<(x1859-x1860)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1977 = -18;
	static volatile uint32_t x1979 = 22U;
	int16_t x1980 = -1;
	static volatile int32_t t24 = 767628;

	t24 = (x1977<=(x1978<<(x1979-x1980)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x1989 = INT16_MAX;
	uint32_t x1992 = UINT32_MAX;
	volatile int32_t t25 = -20913;

	t25 = (x1989<=(x1990<<(x1991-x1992)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x2033 = 97LLU;
	static uint64_t x2034 = 1696024984724866LLU;
	uint32_t x2035 = UINT32_MAX;
	static int8_t x2036 = -1;
	static volatile int32_t t26 = 1042007739;

	t26 = (x2033<=(x2034<<(x2035-x2036)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x2065 = INT64_MIN;
	uint32_t x2066 = 329736627U;
	volatile int32_t x2067 = -1;
	int32_t t27 = 26758219;

	t27 = (x2065<=(x2066<<(x2067-x2068)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x2141 = 2636LL;
	int64_t x2144 = 0LL;

	t28 = (x2141<=(x2142<<(x2143-x2144)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x2217 = INT32_MIN;
	static uint64_t x2218 = 68638LLU;
	static volatile int32_t t29 = -1514704;

	t29 = (x2217<=(x2218<<(x2219-x2220)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x2253 = INT32_MIN;
	uint8_t x2254 = 1U;
	static volatile int8_t x2256 = INT8_MIN;
	volatile int32_t t30 = -169714;

	t30 = (x2253<=(x2254<<(x2255-x2256)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint64_t x2349 = UINT64_MAX;
	int32_t x2350 = INT32_MAX;
	volatile uint64_t x2351 = UINT64_MAX;
	int32_t t31 = 70119;

	t31 = (x2349<=(x2350<<(x2351-x2352)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2589 = 15870465573LLU;
	int8_t x2592 = INT8_MIN;
	volatile int32_t t32 = -8;

	t32 = (x2589<=(x2590<<(x2591-x2592)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2837 = INT64_MAX;
	int8_t x2838 = 23;
	static volatile int8_t x2839 = -1;
	int16_t x2840 = -1;
	volatile int32_t t33 = 0;

	t33 = (x2837<=(x2838<<(x2839-x2840)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2933 = -1;
	static volatile uint16_t x2934 = 284U;
	uint8_t x2936 = 12U;
	static int32_t t34 = -91;

	t34 = (x2933<=(x2934<<(x2935-x2936)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x3133 = -32LL;
	static uint16_t x3135 = 38U;
	static uint8_t x3136 = 0U;
	int32_t t35 = -60168580;

	t35 = (x3133<=(x3134<<(x3135-x3136)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x3282 = UINT16_MAX;
	volatile int64_t x3284 = -3LL;

	t36 = (x3281<=(x3282<<(x3283-x3284)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x3325 = -1;
	uint64_t x3326 = UINT64_MAX;
	static volatile int32_t x3327 = -1;
	volatile int64_t x3328 = -1LL;
	int32_t t37 = 15;

	t37 = (x3325<=(x3326<<(x3327-x3328)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x3701 = INT32_MIN;
	int32_t x3702 = INT32_MAX;
	volatile int64_t x3703 = -1LL;
	static int32_t t38 = -51122343;

	t38 = (x3701<=(x3702<<(x3703-x3704)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x3709 = INT8_MIN;
	volatile uint64_t x3711 = UINT64_MAX;
	volatile int32_t x3712 = -1;

	t39 = (x3709<=(x3710<<(x3711-x3712)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x3733 = -6442;
	volatile uint8_t x3734 = 51U;
	static volatile int8_t x3735 = -1;
	uint64_t x3736 = UINT64_MAX;
	int32_t t40 = 55176;

	t40 = (x3733<=(x3734<<(x3735-x3736)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x3766 = INT16_MAX;
	uint8_t x3767 = 1U;
	static int32_t t41 = 4621619;

	t41 = (x3765<=(x3766<<(x3767-x3768)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x3817 = 313U;
	static uint64_t x3818 = 1992356210419125LLU;
	int64_t x3819 = INT64_MIN;
	int64_t x3820 = INT64_MIN;
	int32_t t42 = 800;

	t42 = (x3817<=(x3818<<(x3819-x3820)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x4013 = UINT16_MAX;
	int8_t x4015 = 6;
	static int32_t x4016 = -1;
	volatile int32_t t43 = 5296411;

	t43 = (x4013<=(x4014<<(x4015-x4016)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x4017 = 441483774;
	int64_t x4018 = 30971400LL;
	static uint32_t x4019 = 1U;
	int32_t t44 = -219631958;

	t44 = (x4017<=(x4018<<(x4019-x4020)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x4061 = UINT32_MAX;
	static int16_t x4063 = 0;
	volatile int32_t x4064 = -1;
	int32_t t45 = 4658258;

	t45 = (x4061<=(x4062<<(x4063-x4064)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x4189 = INT32_MAX;
	uint64_t x4190 = 1992252LLU;
	static uint8_t x4191 = 3U;
	int64_t x4192 = -1LL;
	int32_t t46 = -104318;

	t46 = (x4189<=(x4190<<(x4191-x4192)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x4223 = INT64_MAX;
	static volatile int32_t t47 = 6440;

	t47 = (x4221<=(x4222<<(x4223-x4224)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x4254 = 1699289LLU;
	volatile int32_t x4255 = -1;
	int16_t x4256 = -1;

	t48 = (x4253<=(x4254<<(x4255-x4256)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x4429 = INT32_MAX;
	static uint64_t x4430 = UINT64_MAX;
	uint32_t x4432 = 39U;
	int32_t t49 = -2;

	t49 = (x4429<=(x4430<<(x4431-x4432)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x4469 = UINT8_MAX;
	int32_t x4471 = INT32_MIN;
	int32_t x4472 = INT32_MIN;
	int32_t t50 = 0;

	t50 = (x4469<=(x4470<<(x4471-x4472)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x4737 = INT8_MIN;
	volatile int32_t x4738 = 249;
	uint8_t x4739 = 14U;
	uint8_t x4740 = 12U;
	int32_t t51 = -10780;

	t51 = (x4737<=(x4738<<(x4739-x4740)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x4809 = INT64_MIN;
	int32_t x4811 = INT32_MIN;
	int32_t x4812 = INT32_MIN;

	t52 = (x4809<=(x4810<<(x4811-x4812)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x4865 = -1;
	uint8_t x4866 = 2U;
	uint8_t x4867 = 2U;
	uint64_t x4868 = UINT64_MAX;
	volatile int32_t t53 = 44165284;

	t53 = (x4865<=(x4866<<(x4867-x4868)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x4965 = UINT32_MAX;
	int8_t x4966 = INT8_MAX;
	static uint8_t x4967 = 2U;
	int64_t x4968 = -1LL;
	volatile int32_t t54 = 16437;

	t54 = (x4965<=(x4966<<(x4967-x4968)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x5025 = UINT16_MAX;
	static int16_t x5026 = INT16_MAX;
	uint64_t x5027 = UINT64_MAX;
	int32_t x5028 = -1;

	t55 = (x5025<=(x5026<<(x5027-x5028)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x5181 = 1510510295084059LLU;
	volatile uint64_t x5183 = UINT64_MAX;
	static int8_t x5184 = -10;
	int32_t t56 = 2764;

	t56 = (x5181<=(x5182<<(x5183-x5184)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x5205 = 2672458301LLU;
	int8_t x5206 = 35;
	static int8_t x5207 = -1;
	int32_t x5208 = -1;
	volatile int32_t t57 = 3856997;

	t57 = (x5205<=(x5206<<(x5207-x5208)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x5225 = -39029349993205004LL;
	static volatile int8_t x5227 = 0;
	volatile uint64_t x5228 = UINT64_MAX;
	static volatile int32_t t58 = 2768172;

	t58 = (x5225<=(x5226<<(x5227-x5228)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x5273 = -1;
	int32_t x5276 = -1;
	volatile int32_t t59 = -1066;

	t59 = (x5273<=(x5274<<(x5275-x5276)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x5297 = INT32_MAX;
	uint32_t x5298 = 446798U;
	uint64_t x5299 = 7LLU;
	uint64_t x5300 = UINT64_MAX;

	t60 = (x5297<=(x5298<<(x5299-x5300)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x5533 = -14219099LL;
	int8_t x5534 = 1;
	static uint8_t x5535 = 4U;
	int32_t x5536 = -1;
	volatile int32_t t61 = 0;

	t61 = (x5533<=(x5534<<(x5535-x5536)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x5737 = INT16_MIN;
	int16_t x5738 = INT16_MAX;
	uint8_t x5739 = 4U;
	static volatile int8_t x5740 = -2;
	int32_t t62 = -6197752;

	t62 = (x5737<=(x5738<<(x5739-x5740)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x5753 = UINT8_MAX;
	volatile uint64_t x5754 = UINT64_MAX;
	uint16_t x5755 = 6U;
	int8_t x5756 = -1;
	volatile int32_t t63 = -46860627;

	t63 = (x5753<=(x5754<<(x5755-x5756)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x5821 = 0;
	static uint8_t x5822 = UINT8_MAX;
	volatile int8_t x5823 = 0;
	int32_t x5824 = -1;
	int32_t t64 = -3;

	t64 = (x5821<=(x5822<<(x5823-x5824)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x5922 = UINT64_MAX;
	int8_t x5923 = -1;
	volatile uint32_t x5924 = UINT32_MAX;
	volatile int32_t t65 = 60710;

	t65 = (x5921<=(x5922<<(x5923-x5924)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x6161 = 37LLU;
	uint64_t x6162 = 0LLU;
	static int8_t x6163 = -1;
	int64_t x6164 = -18LL;

	t66 = (x6161<=(x6162<<(x6163-x6164)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x6225 = INT32_MIN;
	uint32_t x6226 = UINT32_MAX;
	volatile int32_t t67 = 1;

	t67 = (x6225<=(x6226<<(x6227-x6228)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x6405 = 1U;
	uint8_t x6406 = 3U;
	uint32_t x6407 = 1U;
	volatile uint32_t x6408 = UINT32_MAX;
	static volatile int32_t t68 = -125;

	t68 = (x6405<=(x6406<<(x6407-x6408)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x6409 = UINT64_MAX;
	static volatile int8_t x6410 = 0;
	int64_t x6411 = -1LL;
	int32_t t69 = 5963651;

	t69 = (x6409<=(x6410<<(x6411-x6412)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x6445 = INT64_MIN;
	volatile uint16_t x6446 = 181U;
	static volatile uint32_t x6447 = UINT32_MAX;
	volatile int16_t x6448 = -1;
	static volatile int32_t t70 = 220;

	t70 = (x6445<=(x6446<<(x6447-x6448)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x6492 = -5;
	static volatile int32_t t71 = 12992;

	t71 = (x6489<=(x6490<<(x6491-x6492)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x6569 = INT64_MIN;
	uint16_t x6570 = UINT16_MAX;
	static int32_t x6572 = -1;
	static volatile int32_t t72 = -5595121;

	t72 = (x6569<=(x6570<<(x6571-x6572)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x6681 = 21305U;
	int32_t x6682 = 19390555;
	int8_t x6683 = 0;
	uint64_t x6684 = UINT64_MAX;

	t73 = (x6681<=(x6682<<(x6683-x6684)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x6781 = 28736U;
	volatile uint64_t x6782 = 3341195278LLU;
	int32_t x6783 = 3;
	volatile int32_t x6784 = -1;
	int32_t t74 = 380616;

	t74 = (x6781<=(x6782<<(x6783-x6784)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x6817 = INT16_MIN;
	int32_t x6818 = INT32_MAX;
	static int8_t x6819 = -1;
	int32_t t75 = -48355421;

	t75 = (x6817<=(x6818<<(x6819-x6820)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x7009 = 59215998LLU;
	int16_t x7010 = INT16_MAX;
	int8_t x7012 = -1;
	volatile int32_t t76 = 11325431;

	t76 = (x7009<=(x7010<<(x7011-x7012)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x7113 = UINT8_MAX;
	uint64_t x7114 = 110274836LLU;
	uint8_t x7115 = 1U;
	int16_t x7116 = 1;
	static int32_t t77 = 23;

	t77 = (x7113<=(x7114<<(x7115-x7116)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x7213 = -58585710;
	int64_t x7214 = 7LL;
	uint32_t x7215 = 4U;
	volatile int8_t x7216 = -1;
	int32_t t78 = 216564;

	t78 = (x7213<=(x7214<<(x7215-x7216)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x7229 = 25;
	static int16_t x7230 = 0;
	int32_t t79 = 72795148;

	t79 = (x7229<=(x7230<<(x7231-x7232)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x7305 = 21894;
	uint16_t x7306 = UINT16_MAX;
	static uint16_t x7307 = 8U;
	volatile int32_t x7308 = -1;
	static int32_t t80 = -2;

	t80 = (x7305<=(x7306<<(x7307-x7308)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x7397 = UINT32_MAX;
	uint64_t x7398 = 0LLU;
	volatile int8_t x7399 = -1;
	int8_t x7400 = -1;
	static int32_t t81 = 48764;

	t81 = (x7397<=(x7398<<(x7399-x7400)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x7513 = UINT64_MAX;
	volatile uint8_t x7514 = 3U;
	int8_t x7515 = 2;
	int16_t x7516 = -1;
	int32_t t82 = -28032;

	t82 = (x7513<=(x7514<<(x7515-x7516)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x7569 = UINT64_MAX;
	int64_t x7570 = 472242099916875LL;
	int64_t x7572 = -1LL;
	static volatile int32_t t83 = 1;

	t83 = (x7569<=(x7570<<(x7571-x7572)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x7621 = INT64_MIN;
	static volatile int32_t x7622 = 3;
	int16_t x7623 = INT16_MIN;
	int16_t x7624 = INT16_MIN;
	volatile int32_t t84 = 10;

	t84 = (x7621<=(x7622<<(x7623-x7624)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x7637 = 231356720LLU;
	int8_t x7638 = 2;
	int64_t x7640 = INT64_MAX;
	int32_t t85 = 31;

	t85 = (x7637<=(x7638<<(x7639-x7640)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x7837 = UINT16_MAX;
	volatile uint8_t x7838 = 0U;
	static volatile int16_t x7840 = -1;

	t86 = (x7837<=(x7838<<(x7839-x7840)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x8013 = -295;
	volatile uint16_t x8014 = UINT16_MAX;
	int32_t t87 = -27;

	t87 = (x8013<=(x8014<<(x8015-x8016)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x8150 = UINT64_MAX;
	int32_t x8151 = -1;
	static uint32_t x8152 = UINT32_MAX;
	volatile int32_t t88 = -991;

	t88 = (x8149<=(x8150<<(x8151-x8152)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x8280 = -1;
	volatile int32_t t89 = 588342;

	t89 = (x8277<=(x8278<<(x8279-x8280)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x8284 = 1U;
	int32_t t90 = 636;

	t90 = (x8281<=(x8282<<(x8283-x8284)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x8310 = 563U;
	int32_t x8311 = INT32_MAX;
	volatile int32_t x8312 = INT32_MAX;
	volatile int32_t t91 = -428529;

	t91 = (x8309<=(x8310<<(x8311-x8312)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x8565 = INT32_MIN;
	volatile int32_t x8566 = 104840;

	t92 = (x8565<=(x8566<<(x8567-x8568)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x8573 = INT8_MIN;
	uint16_t x8574 = 214U;
	uint16_t x8575 = 1U;
	volatile int32_t x8576 = -1;
	int32_t t93 = -580;

	t93 = (x8573<=(x8574<<(x8575-x8576)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x8730 = 12534971U;
	volatile int32_t x8731 = -1;

	t94 = (x8729<=(x8730<<(x8731-x8732)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x8965 = 941U;
	static uint64_t x8966 = UINT64_MAX;
	int8_t x8967 = 5;
	static uint64_t x8968 = UINT64_MAX;

	t95 = (x8965<=(x8966<<(x8967-x8968)));

	if (t95 != 1) { NG(); } else { ; }
	
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


    return 0;
}

