#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x87 = -320;
static volatile int32_t x245 = 41;
int32_t x246 = -1;
volatile int16_t x256 = INT16_MIN;
volatile int32_t t9 = 2869769;
int8_t x361 = 6;
static volatile int64_t x394 = INT64_MAX;
uint32_t x407 = UINT32_MAX;
static volatile int32_t t13 = -4913;
static int32_t t14 = 787723;
volatile uint64_t x441 = 59532806018LLU;
int32_t x472 = 379336173;
int32_t t16 = 9;
uint8_t x477 = UINT8_MAX;
int8_t x479 = 1;
int16_t x545 = INT16_MAX;
int8_t x566 = 7;
int16_t x598 = 3;
static volatile uint32_t x599 = UINT32_MAX;
uint32_t x661 = 1665578U;
int8_t x674 = -1;
int16_t x756 = -1;
static volatile int32_t t31 = -107;
volatile int8_t x798 = 0;
int32_t t32 = -7657112;
volatile int32_t x806 = 13;
volatile int32_t t33 = -2;
int64_t x929 = 111207973499478793LL;
static int8_t x930 = INT8_MIN;
static int8_t x931 = -1;
volatile uint16_t x932 = 2U;
int64_t t35 = -9377LL;
uint8_t x941 = 2U;
volatile int32_t t37 = 1;
volatile uint8_t x974 = 5U;
int16_t x976 = 1;
volatile int32_t t39 = 6095913;
static int8_t x1035 = -1;
int8_t x1068 = 2;
int16_t x1147 = -31;
uint8_t x1148 = 0U;
static int8_t x1256 = 1;
int32_t t50 = -900700;
static int8_t x1281 = 1;
uint32_t x1289 = 44U;
int64_t x1291 = 0LL;
int64_t x1292 = INT64_MIN;
uint32_t t52 = 5U;
volatile int32_t t53 = -663078876;
int64_t x1363 = 57275887394LL;
int8_t x1412 = 4;
int8_t x1438 = INT8_MIN;
static int32_t x1440 = -1;
uint32_t x1446 = UINT32_MAX;
int16_t x1507 = INT16_MIN;
int64_t x1508 = INT64_MIN;
int64_t x1530 = 700LL;
int8_t x1573 = 1;
uint16_t x1718 = 92U;
int32_t x1726 = INT32_MAX;
static volatile uint8_t x1731 = 3U;
uint16_t x1744 = UINT16_MAX;
uint64_t x1759 = UINT64_MAX;
volatile uint64_t t71 = 139852221618LLU;
static int64_t x1781 = 77LL;
static int64_t x1783 = INT64_MIN;
static volatile uint32_t x1829 = 1U;
int32_t x1868 = 878229262;
volatile uint8_t x1905 = 103U;
static int16_t x1906 = 1025;
int32_t t81 = 3654;
uint8_t x1969 = 10U;
int32_t x1972 = INT32_MIN;
int32_t x2006 = INT32_MIN;
static int16_t x2007 = -3;
uint16_t x2036 = 6U;
volatile int32_t t86 = 140497015;
volatile uint8_t x2098 = 18U;
uint8_t x2103 = UINT8_MAX;
volatile int64_t x2137 = 3793951297LL;
int64_t x2139 = -1LL;
volatile int64_t x2140 = INT64_MIN;
uint32_t t95 = 588993781U;
volatile uint8_t x2382 = UINT8_MAX;
volatile uint8_t x2402 = 2U;


void f0(void) {
	uint64_t x25 = UINT64_MAX;
	int16_t x26 = INT16_MIN;
	static int32_t x27 = INT32_MIN;
	int32_t x28 = INT32_MIN;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = (x25<<((x26-x27)&x28));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x53 = 13U;
	volatile int16_t x54 = 133;
	int16_t x55 = 7812;
	int16_t x56 = 216;
	int32_t t1 = -242233;

	t1 = (x53<<((x54-x55)&x56));

	if (t1 != 13) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x85 = 1344U;
	static uint32_t x86 = 47U;
	int32_t x88 = INT32_MIN;
	volatile int32_t t2 = 34104;

	t2 = (x85<<((x86-x87)&x88));

	if (t2 != 1344) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x101 = UINT64_MAX;
	static uint64_t x102 = UINT64_MAX;
	int16_t x103 = -29;
	volatile int16_t x104 = INT16_MIN;
	volatile uint64_t t3 = UINT64_MAX;

	t3 = (x101<<((x102-x103)&x104));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x105 = INT64_MAX;
	int8_t x106 = INT8_MIN;
	static int32_t x107 = INT32_MIN;
	volatile int8_t x108 = INT8_MAX;
	int64_t t4 = INT64_MAX;

	t4 = (x105<<((x106-x107)&x108));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x247 = INT16_MIN;
	int32_t x248 = INT32_MIN;
	int32_t t5 = 9293567;

	t5 = (x245<<((x246-x247)&x248));

	if (t5 != 41) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x253 = 11101U;
	int32_t x254 = -9;
	int16_t x255 = INT16_MIN;
	volatile int32_t t6 = -147308333;

	t6 = (x253<<((x254-x255)&x256));

	if (t6 != 11101) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x301 = 114493LLU;
	uint16_t x302 = UINT16_MAX;
	int8_t x303 = INT8_MIN;
	static uint8_t x304 = 0U;
	uint64_t t7 = 184819LLU;

	t7 = (x301<<((x302-x303)&x304));

	if (t7 != 114493LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x313 = 55741U;
	static int8_t x314 = -1;
	static int32_t x315 = -1;
	uint8_t x316 = UINT8_MAX;
	volatile uint32_t t8 = 24380U;

	t8 = (x313<<((x314-x315)&x316));

	if (t8 != 55741U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x349 = 585U;
	uint64_t x350 = UINT64_MAX;
	int32_t x351 = INT32_MIN;
	int8_t x352 = 14;

	t9 = (x349<<((x350-x351)&x352));

	if (t9 != 9584640) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x362 = -111;
	int32_t x363 = INT32_MIN;
	int32_t x364 = INT32_MIN;
	int32_t t10 = 233598389;

	t10 = (x361<<((x362-x363)&x364));

	if (t10 != 6) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x377 = 16U;
	int32_t x378 = INT32_MAX;
	uint16_t x379 = 75U;
	uint8_t x380 = 2U;
	int32_t t11 = -25;

	t11 = (x377<<((x378-x379)&x380));

	if (t11 != 16) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x393 = UINT64_MAX;
	uint8_t x395 = 116U;
	int8_t x396 = INT8_MAX;
	volatile uint64_t t12 = 269249366996LLU;

	t12 = (x393<<((x394-x395)&x396));

	if (t12 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x405 = 43U;
	int32_t x406 = INT32_MIN;
	int64_t x408 = INT64_MIN;

	t13 = (x405<<((x406-x407)&x408));

	if (t13 != 43) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x425 = INT16_MAX;
	volatile uint64_t x426 = UINT64_MAX;
	static uint64_t x427 = UINT64_MAX;
	static uint8_t x428 = 2U;

	t14 = (x425<<((x426-x427)&x428));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x442 = INT32_MIN;
	volatile int64_t x443 = INT64_MIN;
	static int64_t x444 = 238LL;
	uint64_t t15 = 2312912561928LLU;

	t15 = (x441<<((x442-x443)&x444));

	if (t15 != 59532806018LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x469 = INT16_MAX;
	int32_t x470 = INT32_MIN;
	uint64_t x471 = UINT64_MAX;

	t16 = (x469<<((x470-x471)&x472));

	if (t16 != 65534) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x478 = INT16_MAX;
	int16_t x480 = INT16_MIN;
	int32_t t17 = 3837814;

	t17 = (x477<<((x478-x479)&x480));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x489 = INT16_MAX;
	int16_t x490 = 26;
	int8_t x491 = -1;
	static int16_t x492 = INT16_MIN;
	static int32_t t18 = -855401;

	t18 = (x489<<((x490-x491)&x492));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x525 = 19U;
	static uint8_t x526 = 29U;
	uint8_t x527 = UINT8_MAX;
	uint8_t x528 = 3U;
	volatile int32_t t19 = -78;

	t19 = (x525<<((x526-x527)&x528));

	if (t19 != 76) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint64_t x546 = 3085410154340053LLU;
	volatile int64_t x547 = -1LL;
	volatile uint8_t x548 = 15U;
	volatile int32_t t20 = -8701936;

	t20 = (x545<<((x546-x547)&x548));

	if (t20 != 2097088) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x565 = 22444300U;
	static uint16_t x567 = 1U;
	uint16_t x568 = 10U;
	static uint32_t t21 = 8037U;

	t21 = (x565<<((x566-x567)&x568));

	if (t21 != 89777200U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x573 = INT8_MAX;
	static int8_t x574 = -1;
	uint32_t x575 = 851772U;
	int8_t x576 = 12;
	int32_t t22 = -578;

	t22 = (x573<<((x574-x575)&x576));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x581 = 377185238346LLU;
	static int8_t x582 = INT8_MIN;
	int32_t x583 = INT32_MIN;
	static int32_t x584 = INT32_MIN;
	static uint64_t t23 = 306207LLU;

	t23 = (x581<<((x582-x583)&x584));

	if (t23 != 377185238346LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x597 = 18U;
	volatile int32_t x600 = 117915;
	int32_t t24 = -50721;

	t24 = (x597<<((x598-x599)&x600));

	if (t24 != 18) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x629 = INT64_MAX;
	int8_t x630 = -1;
	uint64_t x631 = UINT64_MAX;
	uint32_t x632 = 1106U;
	volatile int64_t t25 = INT64_MAX;

	t25 = (x629<<((x630-x631)&x632));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x662 = -1;
	static uint32_t x663 = 1062U;
	static int8_t x664 = 5;
	uint32_t t26 = 47U;

	t26 = (x661<<((x662-x663)&x664));

	if (t26 != 3331156U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x673 = INT16_MAX;
	static uint32_t x675 = UINT32_MAX;
	int16_t x676 = INT16_MIN;
	volatile int32_t t27 = -118;

	t27 = (x673<<((x674-x675)&x676));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x729 = UINT64_MAX;
	int32_t x730 = INT32_MIN;
	int32_t x731 = INT32_MIN;
	volatile int16_t x732 = INT16_MAX;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = (x729<<((x730-x731)&x732));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x753 = INT8_MAX;
	int8_t x754 = 2;
	uint32_t x755 = UINT32_MAX;
	volatile int32_t t29 = -10;

	t29 = (x753<<((x754-x755)&x756));

	if (t29 != 1016) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x769 = 1750926433682719LL;
	int8_t x770 = INT8_MAX;
	static uint16_t x771 = UINT16_MAX;
	static volatile int8_t x772 = INT8_MAX;
	int64_t t30 = 1131306858LL;

	t30 = (x769<<((x770-x771)&x772));

	if (t30 != 1750926433682719LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x789 = 13;
	static int64_t x790 = -812763913209LL;
	static uint64_t x791 = UINT64_MAX;
	uint8_t x792 = UINT8_MAX;

	t31 = (x789<<((x790-x791)&x792));

	if (t31 != 3328) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x797 = 17;
	int16_t x799 = -1;
	uint16_t x800 = UINT16_MAX;

	t32 = (x797<<((x798-x799)&x800));

	if (t32 != 34) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x805 = 3U;
	uint16_t x807 = UINT16_MAX;
	uint8_t x808 = 1U;

	t33 = (x805<<((x806-x807)&x808));

	if (t33 != 3) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x833 = 18472U;
	int8_t x834 = INT8_MIN;
	int8_t x835 = INT8_MIN;
	int16_t x836 = -8935;
	static uint32_t t34 = 10433854U;

	t34 = (x833<<((x834-x835)&x836));

	if (t34 != 18472U) { NG(); } else { ; }
	
}

void f35(void) {


	t35 = (x929<<((x930-x931)&x932));

	if (t35 != 111207973499478793LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x942 = 1U;
	static int8_t x943 = -1;
	static int16_t x944 = INT16_MIN;
	volatile int32_t t36 = 39453;

	t36 = (x941<<((x942-x943)&x944));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x969 = INT8_MAX;
	int8_t x970 = INT8_MIN;
	int32_t x971 = -1;
	int8_t x972 = 5;

	t37 = (x969<<((x970-x971)&x972));

	if (t37 != 254) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x973 = INT32_MAX;
	volatile uint32_t x975 = UINT32_MAX;
	static int32_t t38 = INT32_MAX;

	t38 = (x973<<((x974-x975)&x976));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x989 = 1;
	static volatile int64_t x990 = -596555498997004LL;
	static volatile int16_t x991 = INT16_MIN;
	uint64_t x992 = 22LLU;

	t39 = (x989<<((x990-x991)&x992));

	if (t39 != 1048576) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x1017 = 11581U;
	static int32_t x1018 = INT32_MIN;
	uint64_t x1019 = UINT64_MAX;
	static uint32_t x1020 = 117U;
	volatile int32_t t40 = 79;

	t40 = (x1017<<((x1018-x1019)&x1020));

	if (t40 != 23162) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x1033 = 106LLU;
	int16_t x1034 = INT16_MIN;
	int8_t x1036 = 1;
	static uint64_t t41 = 90763115608480184LLU;

	t41 = (x1033<<((x1034-x1035)&x1036));

	if (t41 != 212LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1053 = INT64_MAX;
	int8_t x1054 = 3;
	int32_t x1055 = -1;
	int16_t x1056 = -502;
	static volatile int64_t t42 = INT64_MAX;

	t42 = (x1053<<((x1054-x1055)&x1056));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1065 = 91018U;
	volatile int32_t x1066 = INT32_MAX;
	volatile uint32_t x1067 = UINT32_MAX;
	uint32_t t43 = 1011U;

	t43 = (x1065<<((x1066-x1067)&x1068));

	if (t43 != 91018U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1077 = UINT64_MAX;
	uint64_t x1078 = UINT64_MAX;
	int32_t x1079 = -1;
	int32_t x1080 = INT32_MIN;
	volatile uint64_t t44 = UINT64_MAX;

	t44 = (x1077<<((x1078-x1079)&x1080));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1113 = UINT64_MAX;
	volatile int32_t x1114 = INT32_MIN;
	int8_t x1115 = INT8_MIN;
	static volatile uint64_t x1116 = 44679938LLU;
	static uint64_t t45 = UINT64_MAX;

	t45 = (x1113<<((x1114-x1115)&x1116));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x1137 = UINT64_MAX;
	uint32_t x1138 = UINT32_MAX;
	uint32_t x1139 = UINT32_MAX;
	volatile int16_t x1140 = INT16_MIN;
	uint64_t t46 = UINT64_MAX;

	t46 = (x1137<<((x1138-x1139)&x1140));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x1145 = 55072LLU;
	int8_t x1146 = 4;
	uint64_t t47 = 401926599119402LLU;

	t47 = (x1145<<((x1146-x1147)&x1148));

	if (t47 != 55072LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1149 = INT32_MAX;
	static volatile uint32_t x1150 = 3720U;
	int8_t x1151 = INT8_MAX;
	int32_t x1152 = INT32_MIN;
	int32_t t48 = INT32_MAX;

	t48 = (x1149<<((x1150-x1151)&x1152));

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1253 = 12U;
	uint16_t x1254 = UINT16_MAX;
	int16_t x1255 = INT16_MIN;
	volatile uint32_t t49 = 0U;

	t49 = (x1253<<((x1254-x1255)&x1256));

	if (t49 != 24U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x1273 = UINT8_MAX;
	uint16_t x1274 = UINT16_MAX;
	volatile int16_t x1275 = -23;
	volatile int8_t x1276 = INT8_MAX;

	t50 = (x1273<<((x1274-x1275)&x1276));

	if (t50 != 1069547520) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1282 = 24651LLU;
	uint32_t x1283 = 4U;
	uint16_t x1284 = 27U;
	int32_t t51 = 4279;

	t51 = (x1281<<((x1282-x1283)&x1284));

	if (t51 != 8) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x1290 = 3U;

	t52 = (x1289<<((x1290-x1291)&x1292));

	if (t52 != 44U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1305 = 7U;
	volatile int64_t x1306 = -1LL;
	uint16_t x1307 = 651U;
	int16_t x1308 = 0;

	t53 = (x1305<<((x1306-x1307)&x1308));

	if (t53 != 7) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x1361 = 249692U;
	volatile uint64_t x1362 = 711912437577047LLU;
	uint16_t x1364 = 0U;
	volatile uint32_t t54 = 2017U;

	t54 = (x1361<<((x1362-x1363)&x1364));

	if (t54 != 249692U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1409 = 7U;
	static uint64_t x1410 = UINT64_MAX;
	int16_t x1411 = -9554;
	int32_t t55 = -3;

	t55 = (x1409<<((x1410-x1411)&x1412));

	if (t55 != 7) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1437 = 0;
	volatile int8_t x1439 = INT8_MIN;
	int32_t t56 = -7300;

	t56 = (x1437<<((x1438-x1439)&x1440));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1445 = 0;
	int8_t x1447 = -3;
	static uint16_t x1448 = 342U;
	static int32_t t57 = -275659;

	t57 = (x1445<<((x1446-x1447)&x1448));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1497 = 0U;
	int8_t x1498 = INT8_MAX;
	int16_t x1499 = INT16_MAX;
	int32_t x1500 = 83;
	volatile int32_t t58 = 1002791359;

	t58 = (x1497<<((x1498-x1499)&x1500));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1501 = 0;
	int64_t x1502 = 0LL;
	int8_t x1503 = -1;
	volatile int8_t x1504 = INT8_MIN;
	static int32_t t59 = 63878934;

	t59 = (x1501<<((x1502-x1503)&x1504));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1505 = 41;
	volatile int16_t x1506 = INT16_MIN;
	volatile int32_t t60 = -117;

	t60 = (x1505<<((x1506-x1507)&x1508));

	if (t60 != 41) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x1529 = INT16_MAX;
	volatile int8_t x1531 = INT8_MIN;
	uint8_t x1532 = 12U;
	int32_t t61 = 39;

	t61 = (x1529<<((x1530-x1531)&x1532));

	if (t61 != 134213632) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1574 = INT8_MIN;
	static volatile int8_t x1575 = -1;
	int8_t x1576 = 6;
	volatile int32_t t62 = 18819;

	t62 = (x1573<<((x1574-x1575)&x1576));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x1649 = 0;
	static uint8_t x1650 = 53U;
	volatile int16_t x1651 = -1;
	int8_t x1652 = INT8_MIN;
	int32_t t63 = -488983;

	t63 = (x1649<<((x1650-x1651)&x1652));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x1713 = 29LLU;
	int64_t x1714 = -225197341799859LL;
	uint32_t x1715 = UINT32_MAX;
	uint8_t x1716 = 13U;
	uint64_t t64 = 8044436LLU;

	t64 = (x1713<<((x1714-x1715)&x1716));

	if (t64 != 118784LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1717 = 77LL;
	int8_t x1719 = -1;
	int64_t x1720 = INT64_MIN;
	volatile int64_t t65 = -9320146312539LL;

	t65 = (x1717<<((x1718-x1719)&x1720));

	if (t65 != 77LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x1725 = 5U;
	int8_t x1727 = INT8_MAX;
	uint8_t x1728 = 87U;
	uint32_t t66 = 13941U;

	t66 = (x1725<<((x1726-x1727)&x1728));

	if (t66 != 5U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1729 = INT32_MAX;
	uint32_t x1730 = 162U;
	int32_t x1732 = INT32_MIN;
	int32_t t67 = INT32_MAX;

	t67 = (x1729<<((x1730-x1731)&x1732));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x1737 = 27LL;
	int32_t x1738 = INT32_MIN;
	static int64_t x1739 = INT64_MIN;
	int16_t x1740 = 366;
	static volatile int64_t t68 = -148281462158696049LL;

	t68 = (x1737<<((x1738-x1739)&x1740));

	if (t68 != 27LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x1741 = INT8_MAX;
	static uint32_t x1742 = UINT32_MAX;
	uint64_t x1743 = UINT64_MAX;
	volatile int32_t t69 = 1040;

	t69 = (x1741<<((x1742-x1743)&x1744));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x1757 = 2;
	static int64_t x1758 = -1LL;
	int8_t x1760 = -1;
	volatile int32_t t70 = -13784795;

	t70 = (x1757<<((x1758-x1759)&x1760));

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x1761 = 176081LLU;
	static int16_t x1762 = INT16_MIN;
	int64_t x1763 = INT64_MIN;
	volatile int8_t x1764 = INT8_MAX;

	t71 = (x1761<<((x1762-x1763)&x1764));

	if (t71 != 176081LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x1782 = -745414763;
	static int16_t x1784 = 34;
	static int64_t t72 = 177LL;

	t72 = (x1781<<((x1782-x1783)&x1784));

	if (t72 != 77LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x1830 = -1;
	static int8_t x1831 = -1;
	int32_t x1832 = -1;
	uint32_t t73 = 287291U;

	t73 = (x1829<<((x1830-x1831)&x1832));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x1865 = 1604937;
	uint64_t x1866 = UINT64_MAX;
	static int8_t x1867 = -1;
	int32_t t74 = -2;

	t74 = (x1865<<((x1866-x1867)&x1868));

	if (t74 != 1604937) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x1873 = UINT8_MAX;
	static uint32_t x1874 = UINT32_MAX;
	int64_t x1875 = INT64_MAX;
	uint8_t x1876 = 3U;
	volatile int32_t t75 = -1557790;

	t75 = (x1873<<((x1874-x1875)&x1876));

	if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x1897 = INT32_MAX;
	static uint16_t x1898 = UINT16_MAX;
	uint8_t x1899 = UINT8_MAX;
	volatile int8_t x1900 = 3;
	static int32_t t76 = INT32_MAX;

	t76 = (x1897<<((x1898-x1899)&x1900));

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x1901 = UINT16_MAX;
	volatile int64_t x1902 = INT64_MIN;
	static int32_t x1903 = INT32_MIN;
	int8_t x1904 = INT8_MAX;
	static volatile int32_t t77 = 6502969;

	t77 = (x1901<<((x1902-x1903)&x1904));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x1907 = 10523116071121LL;
	uint16_t x1908 = 0U;
	volatile int32_t t78 = 798186157;

	t78 = (x1905<<((x1906-x1907)&x1908));

	if (t78 != 103) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x1941 = 7U;
	int32_t x1942 = INT32_MAX;
	static volatile uint8_t x1943 = 126U;
	volatile uint16_t x1944 = 58U;
	volatile int32_t t79 = 199970;

	t79 = (x1941<<((x1942-x1943)&x1944));

	if (t79 != 7) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x1949 = 1066552;
	int8_t x1950 = -8;
	int8_t x1951 = -1;
	static int8_t x1952 = 0;
	static int32_t t80 = -2;

	t80 = (x1949<<((x1950-x1951)&x1952));

	if (t80 != 1066552) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x1965 = 21U;
	uint16_t x1966 = UINT16_MAX;
	static int32_t x1967 = -1;
	uint64_t x1968 = 132122701305LLU;

	t81 = (x1965<<((x1966-x1967)&x1968));

	if (t81 != 21) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x1970 = 2668U;
	static volatile int8_t x1971 = INT8_MAX;
	int32_t t82 = -359279859;

	t82 = (x1969<<((x1970-x1971)&x1972));

	if (t82 != 10) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x1989 = 3;
	uint64_t x1990 = 21893777497LLU;
	static volatile uint64_t x1991 = 52236LLU;
	int64_t x1992 = INT64_MIN;
	int32_t t83 = 22;

	t83 = (x1989<<((x1990-x1991)&x1992));

	if (t83 != 3) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x1993 = 108392599085521483LL;
	static int8_t x1994 = -1;
	int16_t x1995 = -3185;
	int32_t x1996 = INT32_MIN;
	volatile int64_t t84 = -760144314001957LL;

	t84 = (x1993<<((x1994-x1995)&x1996));

	if (t84 != 108392599085521483LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2005 = 963925;
	volatile uint64_t x2008 = 1615598189LLU;
	volatile int32_t t85 = 119342;

	t85 = (x2005<<((x2006-x2007)&x2008));

	if (t85 != 1927850) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2033 = 12;
	int16_t x2034 = INT16_MIN;
	static int64_t x2035 = -1LL;

	t86 = (x2033<<((x2034-x2035)&x2036));

	if (t86 != 12) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2093 = 41;
	uint16_t x2094 = UINT16_MAX;
	int16_t x2095 = 1;
	volatile int8_t x2096 = 4;
	int32_t t87 = 123035995;

	t87 = (x2093<<((x2094-x2095)&x2096));

	if (t87 != 656) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x2097 = 1LL;
	volatile int8_t x2099 = -1;
	uint64_t x2100 = 51LLU;
	int64_t t88 = 7LL;

	t88 = (x2097<<((x2098-x2099)&x2100));

	if (t88 != 524288LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2101 = INT32_MAX;
	int16_t x2102 = -7;
	uint8_t x2104 = 5U;
	volatile int32_t t89 = INT32_MAX;

	t89 = (x2101<<((x2102-x2103)&x2104));

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x2117 = UINT64_MAX;
	uint8_t x2118 = 0U;
	uint32_t x2119 = UINT32_MAX;
	uint64_t x2120 = 147692276112166LLU;
	static uint64_t t90 = UINT64_MAX;

	t90 = (x2117<<((x2118-x2119)&x2120));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2138 = INT32_MAX;
	int64_t t91 = 10095273372916LL;

	t91 = (x2137<<((x2138-x2139)&x2140));

	if (t91 != 3793951297LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x2153 = 73419U;
	static volatile int8_t x2154 = -1;
	int16_t x2155 = INT16_MAX;
	uint8_t x2156 = 21U;
	uint32_t t92 = 1U;

	t92 = (x2153<<((x2154-x2155)&x2156));

	if (t92 != 73419U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x2181 = 3U;
	static volatile int8_t x2182 = 10;
	volatile int8_t x2183 = -1;
	int32_t x2184 = INT32_MIN;
	int32_t t93 = 0;

	t93 = (x2181<<((x2182-x2183)&x2184));

	if (t93 != 3) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x2185 = UINT16_MAX;
	int32_t x2186 = INT32_MIN;
	int64_t x2187 = INT64_MIN;
	int32_t x2188 = INT32_MAX;
	int32_t t94 = -7777;

	t94 = (x2185<<((x2186-x2187)&x2188));

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x2245 = 43U;
	uint32_t x2246 = UINT32_MAX;
	static int16_t x2247 = INT16_MAX;
	int8_t x2248 = INT8_MAX;

	t95 = (x2245<<((x2246-x2247)&x2248));

	if (t95 != 43U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x2293 = 1;
	int8_t x2294 = 5;
	int16_t x2295 = -1;
	static int8_t x2296 = INT8_MAX;
	volatile int32_t t96 = -31749;

	t96 = (x2293<<((x2294-x2295)&x2296));

	if (t96 != 64) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x2381 = UINT64_MAX;
	uint32_t x2383 = 17U;
	volatile int32_t x2384 = 23;
	volatile uint64_t t97 = 1541608LLU;

	t97 = (x2381<<((x2382-x2383)&x2384));

	if (t97 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x2401 = 2;
	uint64_t x2403 = 2LLU;
	int32_t x2404 = 123370;
	int32_t t98 = 2380;

	t98 = (x2401<<((x2402-x2403)&x2404));

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x2405 = 854;
	int8_t x2406 = INT8_MAX;
	static int32_t x2407 = -3;
	static uint8_t x2408 = 1U;
	int32_t t99 = -589;

	t99 = (x2405<<((x2406-x2407)&x2408));

	if (t99 != 854) { NG(); } else { ; }
	
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

