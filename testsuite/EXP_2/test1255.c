#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x47 = INT64_MAX;
volatile int8_t x141 = 14;
static volatile int16_t x395 = INT16_MIN;
static uint64_t t6 = 41141465749LLU;
int8_t x465 = INT8_MAX;
int8_t x466 = INT8_MAX;
int16_t x467 = -1;
static uint8_t x577 = 25U;
static volatile int32_t t11 = -201;
uint16_t x676 = 11U;
uint64_t x765 = 885338783259LLU;
volatile int16_t x766 = -2;
uint32_t x775 = UINT32_MAX;
static volatile uint32_t t15 = 17U;
uint8_t x862 = UINT8_MAX;
uint8_t x864 = 55U;
uint16_t x868 = 0U;
uint32_t t19 = 7912U;
uint16_t x1047 = 18343U;
int8_t x1102 = -1;
uint64_t x1166 = 5291048080424861LLU;
uint64_t x1305 = 2131198919860446LLU;
volatile uint64_t x1307 = 1945415723LLU;
volatile uint32_t x1327 = 7617241U;
uint32_t x1341 = 143550392U;
int64_t x1342 = -1527271LL;
int16_t x1343 = INT16_MAX;
int16_t x1475 = INT16_MIN;
volatile int32_t t27 = -12716;
volatile int8_t x1587 = INT8_MAX;
static uint8_t x1605 = 0U;
int8_t x1606 = 5;
volatile uint64_t x1607 = 16073269LLU;
uint8_t x1672 = 24U;
uint32_t t33 = 15358U;
static uint8_t x2092 = 31U;
int32_t t34 = -305696688;
int32_t x2119 = INT32_MAX;
int8_t x2274 = 0;
int8_t x2276 = 10;
uint16_t x2409 = UINT16_MAX;
volatile uint8_t x2411 = UINT8_MAX;
int8_t x2412 = 3;
int32_t t40 = -11;
static int8_t x2762 = INT8_MIN;
int64_t x2994 = INT64_MIN;
volatile int32_t t43 = 949870;
uint32_t x3157 = 161U;
static int64_t x3217 = 24769LL;
int64_t x3315 = 4366696548393LL;
int8_t x3316 = 1;
int64_t x3438 = INT64_MIN;
int8_t x3440 = 7;
int64_t x3483 = -1LL;
uint16_t x3484 = 1U;
int32_t t54 = 1343832;
volatile uint32_t x3493 = UINT32_MAX;
uint8_t x3495 = 13U;
int16_t x3496 = 1;
static uint16_t x3575 = 16U;
volatile uint64_t x3717 = UINT64_MAX;
int16_t x3826 = INT16_MIN;
static uint32_t t60 = 22U;
int8_t x3920 = 5;
int8_t x3976 = 1;
int16_t x4118 = -6651;
volatile uint16_t x4142 = 905U;
uint64_t t69 = 1267625270237LLU;
uint32_t t72 = 27U;
static int64_t x4685 = 35266LL;
volatile int16_t x4687 = -1;
uint32_t x4785 = 491U;
int8_t x4805 = INT8_MAX;
int16_t x4806 = INT16_MIN;
volatile uint8_t x4807 = 40U;
static volatile int32_t t77 = 2052051;
volatile uint64_t t78 = 36092037289175464LLU;
int16_t x5006 = -4126;
static volatile int32_t x5010 = INT32_MIN;
static uint64_t x5253 = 65LLU;
static int16_t x5256 = 2;
volatile uint64_t t82 = 26664544LLU;
uint16_t x5407 = 330U;
volatile int32_t x5503 = -1;
int8_t x5605 = INT8_MAX;
uint32_t x5606 = 1970459088U;
volatile int32_t x5607 = INT32_MIN;
volatile int8_t x5813 = 0;
static uint8_t x5816 = 1U;
volatile int32_t x5827 = 952;
static uint32_t x5828 = 3U;
uint32_t x5841 = 7550189U;
int32_t t95 = 9465023;
static uint8_t x6073 = 79U;
static volatile uint32_t x6076 = 12U;
volatile uint16_t x6189 = 3949U;
int8_t x6195 = INT8_MIN;
int64_t x6277 = INT64_MAX;
int16_t x6279 = INT16_MIN;


void f0(void) {
	uint64_t x45 = UINT64_MAX;
	int32_t x46 = 4;
	volatile int8_t x48 = 1;
	static uint64_t t0 = 1328690367453267109LLU;

	t0 = ((x45<<(x46==x47))>>x48);

	if (t0 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x109 = UINT16_MAX;
	int8_t x110 = INT8_MIN;
	int64_t x111 = -1387756097203255LL;
	int16_t x112 = 4;
	static int32_t t1 = 6674953;

	t1 = ((x109<<(x110==x111))>>x112);

	if (t1 != 4095) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x142 = INT8_MAX;
	int16_t x143 = -14720;
	uint8_t x144 = 0U;
	volatile int32_t t2 = -4;

	t2 = ((x141<<(x142==x143))>>x144);

	if (t2 != 14) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x233 = 1U;
	uint16_t x234 = 1272U;
	int8_t x235 = INT8_MIN;
	uint8_t x236 = 2U;
	volatile int32_t t3 = 23657;

	t3 = ((x233<<(x234==x235))>>x236);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x253 = UINT8_MAX;
	static int8_t x254 = INT8_MIN;
	int16_t x255 = -1;
	static int64_t x256 = 5LL;
	int32_t t4 = -387349;

	t4 = ((x253<<(x254==x255))>>x256);

	if (t4 != 7) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x309 = INT16_MAX;
	static int8_t x310 = INT8_MIN;
	volatile int8_t x311 = INT8_MIN;
	uint8_t x312 = 2U;
	int32_t t5 = 1970629;

	t5 = ((x309<<(x310==x311))>>x312);

	if (t5 != 16383) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x393 = UINT64_MAX;
	volatile int8_t x394 = INT8_MAX;
	uint8_t x396 = 4U;

	t6 = ((x393<<(x394==x395))>>x396);

	if (t6 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x397 = UINT16_MAX;
	static uint32_t x398 = 4U;
	volatile int8_t x399 = INT8_MIN;
	static volatile uint32_t x400 = 1U;
	volatile int32_t t7 = -12;

	t7 = ((x397<<(x398==x399))>>x400);

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x468 = 24U;
	int32_t t8 = 66418085;

	t8 = ((x465<<(x466==x467))>>x468);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x541 = INT32_MAX;
	uint64_t x542 = 192865LLU;
	int32_t x543 = INT32_MIN;
	uint8_t x544 = 0U;
	int32_t t9 = INT32_MAX;

	t9 = ((x541<<(x542==x543))>>x544);

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x573 = 49U;
	int8_t x574 = 5;
	volatile int32_t x575 = INT32_MIN;
	static uint8_t x576 = 6U;
	volatile int32_t t10 = 831464;

	t10 = ((x573<<(x574==x575))>>x576);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x578 = 1;
	int16_t x579 = INT16_MAX;
	int8_t x580 = 0;

	t11 = ((x577<<(x578==x579))>>x580);

	if (t11 != 25) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x673 = 3259U;
	volatile int32_t x674 = 354257591;
	volatile int64_t x675 = 575591886313223LL;
	volatile int32_t t12 = -17;

	t12 = ((x673<<(x674==x675))>>x676);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x681 = 14U;
	volatile int16_t x682 = INT16_MIN;
	volatile int32_t x683 = 88293;
	static int32_t x684 = 1;
	volatile int32_t t13 = -59545;

	t13 = ((x681<<(x682==x683))>>x684);

	if (t13 != 7) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x767 = INT8_MAX;
	static uint8_t x768 = 0U;
	volatile uint64_t t14 = 836954LLU;

	t14 = ((x765<<(x766==x767))>>x768);

	if (t14 != 885338783259LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x773 = 21U;
	static uint16_t x774 = UINT16_MAX;
	int8_t x776 = 1;

	t15 = ((x773<<(x774==x775))>>x776);

	if (t15 != 10U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x805 = 2;
	uint64_t x806 = UINT64_MAX;
	volatile int8_t x807 = 35;
	int16_t x808 = 1;
	int32_t t16 = 48995;

	t16 = ((x805<<(x806==x807))>>x808);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x861 = INT64_MAX;
	int16_t x863 = -1;
	int64_t t17 = 954397LL;

	t17 = ((x861<<(x862==x863))>>x864);

	if (t17 != 255LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x865 = 1;
	int64_t x866 = INT64_MIN;
	int8_t x867 = 6;
	int32_t t18 = 925220351;

	t18 = ((x865<<(x866==x867))>>x868);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x1013 = 7556463U;
	static int8_t x1014 = -1;
	int16_t x1015 = INT16_MAX;
	volatile uint16_t x1016 = 12U;

	t19 = ((x1013<<(x1014==x1015))>>x1016);

	if (t19 != 1844U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x1045 = 1843U;
	int16_t x1046 = INT16_MIN;
	uint8_t x1048 = 4U;
	int32_t t20 = 84;

	t20 = ((x1045<<(x1046==x1047))>>x1048);

	if (t20 != 115) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1101 = UINT8_MAX;
	volatile uint16_t x1103 = 3U;
	uint8_t x1104 = 2U;
	int32_t t21 = 151649;

	t21 = ((x1101<<(x1102==x1103))>>x1104);

	if (t21 != 63) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1165 = UINT8_MAX;
	int16_t x1167 = 1702;
	volatile int16_t x1168 = 4;
	volatile int32_t t22 = 471;

	t22 = ((x1165<<(x1166==x1167))>>x1168);

	if (t22 != 15) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1306 = -1;
	uint8_t x1308 = 5U;
	uint64_t t23 = 138097058856LLU;

	t23 = ((x1305<<(x1306==x1307))>>x1308);

	if (t23 != 66599966245638LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x1325 = 3591076U;
	int8_t x1326 = 27;
	static int8_t x1328 = 0;
	uint32_t t24 = 2375U;

	t24 = ((x1325<<(x1326==x1327))>>x1328);

	if (t24 != 3591076U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1344 = 24U;
	volatile uint32_t t25 = 9517963U;

	t25 = ((x1341<<(x1342==x1343))>>x1344);

	if (t25 != 8U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1385 = UINT8_MAX;
	int64_t x1386 = INT64_MIN;
	static int32_t x1387 = INT32_MAX;
	static uint16_t x1388 = 3U;
	int32_t t26 = 9166427;

	t26 = ((x1385<<(x1386==x1387))>>x1388);

	if (t26 != 31) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x1473 = 1818;
	static volatile int16_t x1474 = INT16_MIN;
	volatile uint8_t x1476 = 1U;

	t27 = ((x1473<<(x1474==x1475))>>x1476);

	if (t27 != 1818) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1501 = UINT64_MAX;
	uint16_t x1502 = UINT16_MAX;
	volatile int16_t x1503 = INT16_MIN;
	uint8_t x1504 = 53U;
	volatile uint64_t t28 = 108LLU;

	t28 = ((x1501<<(x1502==x1503))>>x1504);

	if (t28 != 2047LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1549 = 13931U;
	volatile int16_t x1550 = -1;
	uint32_t x1551 = 4079U;
	volatile int16_t x1552 = 4;
	volatile uint32_t t29 = 4U;

	t29 = ((x1549<<(x1550==x1551))>>x1552);

	if (t29 != 870U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1585 = INT32_MAX;
	static int64_t x1586 = INT64_MIN;
	uint8_t x1588 = 1U;
	int32_t t30 = -97;

	t30 = ((x1585<<(x1586==x1587))>>x1588);

	if (t30 != 1073741823) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1608 = 21;
	static int32_t t31 = 59;

	t31 = ((x1605<<(x1606==x1607))>>x1608);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1669 = UINT8_MAX;
	uint8_t x1670 = UINT8_MAX;
	int8_t x1671 = INT8_MIN;
	int32_t t32 = -5;

	t32 = ((x1669<<(x1670==x1671))>>x1672);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1981 = UINT32_MAX;
	int16_t x1982 = 4751;
	int32_t x1983 = INT32_MIN;
	int32_t x1984 = 15;

	t33 = ((x1981<<(x1982==x1983))>>x1984);

	if (t33 != 131071U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2089 = UINT16_MAX;
	int8_t x2090 = INT8_MIN;
	volatile int32_t x2091 = 3179442;

	t34 = ((x2089<<(x2090==x2091))>>x2092);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2093 = 333U;
	int16_t x2094 = -1;
	volatile uint32_t x2095 = 581093394U;
	static volatile uint16_t x2096 = 31U;
	uint32_t t35 = 4152161U;

	t35 = ((x2093<<(x2094==x2095))>>x2096);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2117 = 3281U;
	static int16_t x2118 = -383;
	uint8_t x2120 = 16U;
	volatile int32_t t36 = 3614;

	t36 = ((x2117<<(x2118==x2119))>>x2120);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2125 = 1;
	uint64_t x2126 = 4232650LLU;
	volatile int16_t x2127 = INT16_MAX;
	uint8_t x2128 = 1U;
	volatile int32_t t37 = 3219682;

	t37 = ((x2125<<(x2126==x2127))>>x2128);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2273 = UINT32_MAX;
	int8_t x2275 = -1;
	volatile uint32_t t38 = 195035848U;

	t38 = ((x2273<<(x2274==x2275))>>x2276);

	if (t38 != 4194303U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x2293 = 9LL;
	int8_t x2294 = 2;
	uint32_t x2295 = 0U;
	volatile uint8_t x2296 = 7U;
	static int64_t t39 = 21084497LL;

	t39 = ((x2293<<(x2294==x2295))>>x2296);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2410 = -6958;

	t40 = ((x2409<<(x2410==x2411))>>x2412);

	if (t40 != 8191) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2689 = 71U;
	static volatile uint32_t x2690 = 7809U;
	int16_t x2691 = INT16_MIN;
	static uint16_t x2692 = 25U;
	volatile int32_t t41 = 29861;

	t41 = ((x2689<<(x2690==x2691))>>x2692);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2761 = UINT16_MAX;
	uint64_t x2763 = 59178611137521LLU;
	static int8_t x2764 = 9;
	volatile int32_t t42 = 7;

	t42 = ((x2761<<(x2762==x2763))>>x2764);

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2993 = 2U;
	int64_t x2995 = -1LL;
	static volatile uint8_t x2996 = 25U;

	t43 = ((x2993<<(x2994==x2995))>>x2996);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x3017 = 210U;
	static int16_t x3018 = INT16_MIN;
	static volatile uint64_t x3019 = 3649919LLU;
	int16_t x3020 = 0;
	int32_t t44 = -4512219;

	t44 = ((x3017<<(x3018==x3019))>>x3020);

	if (t44 != 210) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x3025 = 180LL;
	uint64_t x3026 = 5475641LLU;
	int64_t x3027 = -1LL;
	volatile uint16_t x3028 = 63U;
	volatile int64_t t45 = 293574033LL;

	t45 = ((x3025<<(x3026==x3027))>>x3028);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x3158 = -1;
	volatile int16_t x3159 = INT16_MIN;
	int16_t x3160 = 1;
	uint32_t t46 = 23U;

	t46 = ((x3157<<(x3158==x3159))>>x3160);

	if (t46 != 80U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x3173 = INT16_MAX;
	uint16_t x3174 = UINT16_MAX;
	int16_t x3175 = -1;
	int16_t x3176 = 0;
	static volatile int32_t t47 = -149;

	t47 = ((x3173<<(x3174==x3175))>>x3176);

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x3218 = INT8_MIN;
	int8_t x3219 = INT8_MIN;
	volatile int32_t x3220 = 29;
	volatile int64_t t48 = 26683546996267LL;

	t48 = ((x3217<<(x3218==x3219))>>x3220);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x3313 = UINT16_MAX;
	volatile uint64_t x3314 = 91809874673LLU;
	int32_t t49 = -9;

	t49 = ((x3313<<(x3314==x3315))>>x3316);

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x3353 = UINT32_MAX;
	int32_t x3354 = INT32_MAX;
	int8_t x3355 = 57;
	static volatile uint16_t x3356 = 3U;
	static uint32_t t50 = 583U;

	t50 = ((x3353<<(x3354==x3355))>>x3356);

	if (t50 != 536870911U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x3389 = UINT64_MAX;
	int32_t x3390 = -1;
	volatile uint16_t x3391 = 9U;
	int8_t x3392 = 0;
	uint64_t t51 = UINT64_MAX;

	t51 = ((x3389<<(x3390==x3391))>>x3392);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3437 = 1;
	int64_t x3439 = INT64_MAX;
	int32_t t52 = -94259;

	t52 = ((x3437<<(x3438==x3439))>>x3440);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3481 = 144539363199221944LLU;
	int64_t x3482 = 1LL;
	static uint64_t t53 = 2671659208LLU;

	t53 = ((x3481<<(x3482==x3483))>>x3484);

	if (t53 != 72269681599610972LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x3485 = 35U;
	volatile int32_t x3486 = INT32_MAX;
	int8_t x3487 = INT8_MAX;
	volatile uint16_t x3488 = 0U;

	t54 = ((x3485<<(x3486==x3487))>>x3488);

	if (t54 != 35) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x3494 = 1034130LLU;
	uint32_t t55 = 5817644U;

	t55 = ((x3493<<(x3494==x3495))>>x3496);

	if (t55 != 2147483647U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3573 = UINT16_MAX;
	static int16_t x3574 = INT16_MAX;
	uint16_t x3576 = 1U;
	int32_t t56 = 40713;

	t56 = ((x3573<<(x3574==x3575))>>x3576);

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3629 = 0U;
	volatile uint32_t x3630 = 396U;
	uint32_t x3631 = 1207042U;
	uint8_t x3632 = 3U;
	volatile uint32_t t57 = 254U;

	t57 = ((x3629<<(x3630==x3631))>>x3632);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3657 = INT64_MAX;
	int64_t x3658 = INT64_MAX;
	int64_t x3659 = 24268LL;
	uint8_t x3660 = 4U;
	int64_t t58 = -58LL;

	t58 = ((x3657<<(x3658==x3659))>>x3660);

	if (t58 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3718 = INT16_MIN;
	int16_t x3719 = INT16_MIN;
	volatile int64_t x3720 = 0LL;
	static volatile uint64_t t59 = 865816619LLU;

	t59 = ((x3717<<(x3718==x3719))>>x3720);

	if (t59 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3825 = UINT32_MAX;
	volatile uint32_t x3827 = 0U;
	volatile uint8_t x3828 = 7U;

	t60 = ((x3825<<(x3826==x3827))>>x3828);

	if (t60 != 33554431U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3849 = 7476U;
	volatile int16_t x3850 = INT16_MIN;
	static uint32_t x3851 = 59U;
	uint8_t x3852 = 3U;
	volatile uint32_t t61 = 98U;

	t61 = ((x3849<<(x3850==x3851))>>x3852);

	if (t61 != 934U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3917 = UINT32_MAX;
	volatile uint64_t x3918 = UINT64_MAX;
	volatile int32_t x3919 = INT32_MIN;
	uint32_t t62 = 2U;

	t62 = ((x3917<<(x3918==x3919))>>x3920);

	if (t62 != 134217727U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3953 = 1U;
	uint64_t x3954 = 2855154LLU;
	int16_t x3955 = -15109;
	int8_t x3956 = 1;
	static volatile int32_t t63 = -67641;

	t63 = ((x3953<<(x3954==x3955))>>x3956);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3957 = UINT16_MAX;
	static int64_t x3958 = INT64_MAX;
	int8_t x3959 = INT8_MIN;
	static uint32_t x3960 = 10U;
	int32_t t64 = -103865;

	t64 = ((x3957<<(x3958==x3959))>>x3960);

	if (t64 != 63) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3973 = 2040;
	int32_t x3974 = -254201;
	int32_t x3975 = -5;
	volatile int32_t t65 = -153;

	t65 = ((x3973<<(x3974==x3975))>>x3976);

	if (t65 != 1020) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4089 = 3U;
	static int32_t x4090 = INT32_MIN;
	uint16_t x4091 = UINT16_MAX;
	int16_t x4092 = 1;
	volatile int32_t t66 = 0;

	t66 = ((x4089<<(x4090==x4091))>>x4092);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x4117 = UINT32_MAX;
	int16_t x4119 = INT16_MIN;
	static volatile uint16_t x4120 = 3U;
	volatile uint32_t t67 = 23573U;

	t67 = ((x4117<<(x4118==x4119))>>x4120);

	if (t67 != 536870911U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x4141 = INT16_MAX;
	uint8_t x4143 = 1U;
	static volatile int8_t x4144 = 1;
	int32_t t68 = -28103;

	t68 = ((x4141<<(x4142==x4143))>>x4144);

	if (t68 != 16383) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4201 = 6692037424LLU;
	uint16_t x4202 = UINT16_MAX;
	static int8_t x4203 = INT8_MIN;
	uint32_t x4204 = 7U;

	t69 = ((x4201<<(x4202==x4203))>>x4204);

	if (t69 != 52281542LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x4265 = 28861560U;
	int8_t x4266 = INT8_MIN;
	int64_t x4267 = INT64_MIN;
	uint8_t x4268 = 1U;
	uint32_t t70 = 836022U;

	t70 = ((x4265<<(x4266==x4267))>>x4268);

	if (t70 != 14430780U) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x4305 = INT16_MAX;
	int16_t x4306 = INT16_MIN;
	volatile uint32_t x4307 = UINT32_MAX;
	uint32_t x4308 = 1U;
	volatile int32_t t71 = -96;

	t71 = ((x4305<<(x4306==x4307))>>x4308);

	if (t71 != 16383) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4333 = 7336165U;
	int16_t x4334 = INT16_MIN;
	int16_t x4335 = 37;
	static uint8_t x4336 = 5U;

	t72 = ((x4333<<(x4334==x4335))>>x4336);

	if (t72 != 229255U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4413 = 254U;
	volatile uint32_t x4414 = 425159U;
	volatile uint32_t x4415 = UINT32_MAX;
	uint8_t x4416 = 7U;
	int32_t t73 = -2649976;

	t73 = ((x4413<<(x4414==x4415))>>x4416);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4686 = INT32_MAX;
	int8_t x4688 = 25;
	int64_t t74 = 26LL;

	t74 = ((x4685<<(x4686==x4687))>>x4688);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x4757 = 212716282U;
	volatile int32_t x4758 = INT32_MIN;
	int32_t x4759 = INT32_MAX;
	int8_t x4760 = 1;
	volatile uint32_t t75 = 53746259U;

	t75 = ((x4757<<(x4758==x4759))>>x4760);

	if (t75 != 106358141U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4786 = 48977872LL;
	static uint16_t x4787 = 14U;
	volatile int8_t x4788 = 1;
	uint32_t t76 = 29U;

	t76 = ((x4785<<(x4786==x4787))>>x4788);

	if (t76 != 245U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x4808 = 0U;

	t77 = ((x4805<<(x4806==x4807))>>x4808);

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x4925 = 0LLU;
	uint32_t x4926 = 1064916198U;
	int32_t x4927 = 30340;
	int8_t x4928 = 0;

	t78 = ((x4925<<(x4926==x4927))>>x4928);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x4973 = 107U;
	volatile int8_t x4974 = INT8_MIN;
	uint32_t x4975 = 10U;
	volatile uint8_t x4976 = 12U;
	volatile int32_t t79 = -24368110;

	t79 = ((x4973<<(x4974==x4975))>>x4976);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x5005 = INT16_MAX;
	int32_t x5007 = -862;
	static volatile uint64_t x5008 = 10LLU;
	volatile int32_t t80 = 630;

	t80 = ((x5005<<(x5006==x5007))>>x5008);

	if (t80 != 31) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x5009 = 125506;
	int64_t x5011 = INT64_MIN;
	int16_t x5012 = 0;
	int32_t t81 = 6769967;

	t81 = ((x5009<<(x5010==x5011))>>x5012);

	if (t81 != 125506) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5254 = -2;
	static int64_t x5255 = -60838708229410820LL;

	t82 = ((x5253<<(x5254==x5255))>>x5256);

	if (t82 != 16LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x5405 = 5U;
	static uint64_t x5406 = 444LLU;
	volatile uint16_t x5408 = 0U;
	volatile int32_t t83 = -2276874;

	t83 = ((x5405<<(x5406==x5407))>>x5408);

	if (t83 != 5) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x5501 = UINT32_MAX;
	static int64_t x5502 = 86470458510542LL;
	int8_t x5504 = 15;
	static uint32_t t84 = 614689547U;

	t84 = ((x5501<<(x5502==x5503))>>x5504);

	if (t84 != 131071U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x5608 = 25U;
	static volatile int32_t t85 = -152959399;

	t85 = ((x5605<<(x5606==x5607))>>x5608);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x5633 = UINT64_MAX;
	int64_t x5634 = INT64_MIN;
	static uint16_t x5635 = 3647U;
	int32_t x5636 = 4;
	uint64_t t86 = 1LLU;

	t86 = ((x5633<<(x5634==x5635))>>x5636);

	if (t86 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x5797 = 198259364U;
	static int8_t x5798 = 1;
	static uint8_t x5799 = 20U;
	static uint8_t x5800 = 4U;
	static volatile uint32_t t87 = 430022040U;

	t87 = ((x5797<<(x5798==x5799))>>x5800);

	if (t87 != 12391210U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5814 = 17;
	static uint16_t x5815 = UINT16_MAX;
	static volatile int32_t t88 = 6;

	t88 = ((x5813<<(x5814==x5815))>>x5816);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x5825 = UINT32_MAX;
	int16_t x5826 = INT16_MIN;
	static uint32_t t89 = 81921007U;

	t89 = ((x5825<<(x5826==x5827))>>x5828);

	if (t89 != 536870911U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x5842 = UINT64_MAX;
	int16_t x5843 = INT16_MAX;
	int8_t x5844 = 7;
	uint32_t t90 = 336U;

	t90 = ((x5841<<(x5842==x5843))>>x5844);

	if (t90 != 58985U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x5845 = 5U;
	uint8_t x5846 = 3U;
	int8_t x5847 = INT8_MAX;
	int8_t x5848 = 0;
	static volatile int32_t t91 = 208097;

	t91 = ((x5845<<(x5846==x5847))>>x5848);

	if (t91 != 5) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x5873 = 911U;
	uint64_t x5874 = 831562520246759036LLU;
	int32_t x5875 = -73824526;
	static volatile int16_t x5876 = 0;
	static volatile int32_t t92 = 34456;

	t92 = ((x5873<<(x5874==x5875))>>x5876);

	if (t92 != 911) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint8_t x5913 = 1U;
	static uint64_t x5914 = 126730523641990606LLU;
	static int64_t x5915 = 2140LL;
	static uint8_t x5916 = 3U;
	volatile int32_t t93 = -443519;

	t93 = ((x5913<<(x5914==x5915))>>x5916);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x6013 = 18854972273LL;
	uint32_t x6014 = UINT32_MAX;
	uint64_t x6015 = 176437881482794781LLU;
	static uint16_t x6016 = 1U;
	int64_t t94 = -23077577046267586LL;

	t94 = ((x6013<<(x6014==x6015))>>x6016);

	if (t94 != 9427486136LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x6045 = 2503U;
	int64_t x6046 = INT64_MIN;
	uint32_t x6047 = 935366863U;
	static volatile int8_t x6048 = 1;

	t95 = ((x6045<<(x6046==x6047))>>x6048);

	if (t95 != 1251) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x6074 = -1;
	static uint8_t x6075 = UINT8_MAX;
	static int32_t t96 = -916555565;

	t96 = ((x6073<<(x6074==x6075))>>x6076);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x6190 = INT8_MIN;
	int16_t x6191 = INT16_MIN;
	static uint8_t x6192 = 0U;
	int32_t t97 = 8;

	t97 = ((x6189<<(x6190==x6191))>>x6192);

	if (t97 != 3949) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x6193 = 1U;
	int8_t x6194 = INT8_MAX;
	int16_t x6196 = 3;
	volatile int32_t t98 = 2680;

	t98 = ((x6193<<(x6194==x6195))>>x6196);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x6278 = INT8_MIN;
	static volatile uint16_t x6280 = 10U;
	static volatile int64_t t99 = -211784505LL;

	t99 = ((x6277<<(x6278==x6279))>>x6280);

	if (t99 != 9007199254740991LL) { NG(); } else { ; }
	
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

