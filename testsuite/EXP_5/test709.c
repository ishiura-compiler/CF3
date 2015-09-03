#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x12 = -1LL;
int16_t x21 = 117;
int32_t x24 = INT32_MAX;
int8_t x51 = INT8_MAX;
uint32_t x93 = 908620U;
int8_t x100 = INT8_MIN;
int64_t x103 = -51927941722262594LL;
volatile int32_t t6 = 232;
int16_t x173 = 0;
static volatile uint8_t x174 = 39U;
static int16_t x175 = -1;
static volatile int8_t x181 = INT8_MAX;
int8_t x229 = 15;
int8_t x294 = 0;
uint16_t x296 = 25670U;
int32_t t12 = -2;
uint32_t x321 = 2U;
uint8_t x333 = UINT8_MAX;
int32_t t14 = -40615;
static volatile int32_t t17 = 505884;
static volatile int64_t x393 = INT64_MAX;
uint16_t x395 = 15U;
uint64_t t20 = 3945345456868364LLU;
int64_t t22 = INT64_MAX;
static uint16_t x453 = 18U;
volatile int64_t x482 = 453LL;
uint64_t t24 = 628205034488LLU;
volatile int32_t x546 = INT32_MIN;
static volatile int16_t x548 = -16;
static uint32_t t27 = 26093U;
int32_t x558 = -16131;
volatile uint64_t x560 = 114968560LLU;
static uint8_t x561 = 0U;
volatile int64_t x562 = 320406267732003LL;
uint64_t t30 = 33800794LLU;
static uint32_t t31 = 124471881U;
volatile int16_t x670 = INT16_MAX;
uint16_t x683 = 964U;
uint64_t x684 = 0LLU;
uint64_t x783 = UINT64_MAX;
uint64_t x784 = 28996361850648LLU;
static int16_t x824 = INT16_MIN;
uint16_t x877 = 47U;
volatile int16_t x880 = INT16_MAX;
volatile int32_t t39 = -688;
volatile int16_t x897 = INT16_MAX;
uint64_t x899 = 1LLU;
volatile int32_t t40 = -3;
int8_t x908 = INT8_MIN;
uint8_t x956 = 3U;
int16_t x973 = INT16_MAX;
int64_t x976 = INT64_MIN;
uint64_t x1025 = 2117843661623644LLU;
volatile uint8_t x1028 = 18U;
uint8_t x1039 = 1U;
int64_t x1050 = -5742716374564LL;
volatile int8_t x1118 = -26;
int32_t x1176 = INT32_MIN;
int16_t x1200 = INT16_MIN;
volatile int32_t t54 = 524363803;
uint8_t x1206 = UINT8_MAX;
uint8_t x1207 = UINT8_MAX;
volatile int32_t t55 = 104005156;
int32_t x1223 = -1;
uint64_t t57 = 2914454173236268735LLU;
uint64_t x1252 = UINT64_MAX;
static int64_t x1315 = 366LL;
volatile int64_t x1316 = -1LL;
volatile int64_t x1370 = -981919325829LL;
static int32_t x1416 = -1;
static int32_t x1430 = INT32_MIN;
static volatile int32_t x1431 = INT32_MIN;
int64_t x1437 = 8076601376937536LL;
int64_t x1439 = -1LL;
static uint8_t x1456 = UINT8_MAX;
int64_t x1499 = -112610328904168LL;
static int64_t x1654 = 97683115LL;
static int16_t x1670 = -828;
volatile int8_t x1672 = -13;
volatile int32_t t71 = 470893;
uint8_t x1700 = 0U;
uint8_t x1785 = 91U;
int64_t x1786 = INT64_MIN;
int64_t x1787 = INT64_MIN;
static int8_t x1788 = INT8_MIN;
static uint16_t x1796 = 287U;
uint64_t t78 = UINT64_MAX;
volatile int8_t x1798 = -1;
int64_t x1890 = -1LL;
uint8_t x1913 = UINT8_MAX;
int32_t t83 = 0;
int32_t x1922 = INT32_MIN;
int8_t x1923 = INT8_MIN;
uint64_t x2000 = UINT64_MAX;
int32_t t87 = 289701232;
int16_t x2043 = INT16_MIN;
uint64_t x2065 = 43672781514693943LLU;
uint8_t x2068 = 0U;
int64_t x2106 = INT64_MAX;
volatile int32_t x2108 = 0;
volatile uint32_t x2144 = UINT32_MAX;
uint16_t x2181 = 38U;
int64_t x2192 = -1LL;
int64_t t97 = 88793735010LL;
static volatile uint16_t x2229 = 3U;
int16_t x2231 = 1;
volatile uint16_t x2232 = UINT16_MAX;
uint32_t x2239 = UINT32_MAX;


void f0(void) {
	static uint32_t x9 = 102U;
	int16_t x10 = -3210;
	static int8_t x11 = -1;
	uint32_t t0 = 59707878U;

	t0 = (x9>>((x10%x11)*x12));

	if (t0 != 102U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x22 = INT32_MIN;
	int32_t x23 = -1;
	int32_t t1 = 3;

	t1 = (x21>>((x22%x23)*x24));

	if (t1 != 117) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x49 = 1;
	int64_t x50 = INT64_MIN;
	int8_t x52 = -1;
	volatile int32_t t2 = 651;

	t2 = (x49>>((x50%x51)*x52));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x94 = INT32_MIN;
	volatile int8_t x95 = -1;
	uint32_t x96 = 23801U;
	uint32_t t3 = 111831761U;

	t3 = (x93>>((x94%x95)*x96));

	if (t3 != 908620U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x97 = INT64_MAX;
	static volatile int16_t x98 = INT16_MIN;
	volatile int8_t x99 = -1;
	volatile int64_t t4 = INT64_MAX;

	t4 = (x97>>((x98%x99)*x100));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x101 = 7218274U;
	int64_t x102 = -1LL;
	volatile uint64_t x104 = UINT64_MAX;
	uint32_t t5 = 5352911U;

	t5 = (x101>>((x102%x103)*x104));

	if (t5 != 3609137U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x105 = UINT8_MAX;
	int16_t x106 = -18;
	uint16_t x107 = UINT16_MAX;
	uint64_t x108 = UINT64_MAX;

	t6 = (x105>>((x106%x107)*x108));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x169 = 184U;
	static volatile uint8_t x170 = 11U;
	static int16_t x171 = 1;
	static int64_t x172 = INT64_MAX;
	volatile int32_t t7 = -104426;

	t7 = (x169>>((x170%x171)*x172));

	if (t7 != 184) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x176 = 8633664472LLU;
	static int32_t t8 = -1;

	t8 = (x173>>((x174%x175)*x176));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x182 = INT64_MIN;
	int8_t x183 = INT8_MIN;
	static int64_t x184 = -1LL;
	volatile int32_t t9 = -84443803;

	t9 = (x181>>((x182%x183)*x184));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x230 = 4;
	uint8_t x231 = 2U;
	uint8_t x232 = 12U;
	static int32_t t10 = -1;

	t10 = (x229>>((x230%x231)*x232));

	if (t10 != 15) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x245 = UINT32_MAX;
	int64_t x246 = -1LL;
	uint8_t x247 = 2U;
	uint64_t x248 = UINT64_MAX;
	volatile uint32_t t11 = 123U;

	t11 = (x245>>((x246%x247)*x248));

	if (t11 != 2147483647U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x293 = INT16_MAX;
	int16_t x295 = INT16_MIN;

	t12 = (x293>>((x294%x295)*x296));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x322 = 7U;
	uint8_t x323 = 1U;
	volatile int8_t x324 = INT8_MAX;
	uint32_t t13 = 402060829U;

	t13 = (x321>>((x322%x323)*x324));

	if (t13 != 2U) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x334 = INT8_MIN;
	static uint32_t x335 = 10350657U;
	int32_t x336 = INT32_MIN;

	t14 = (x333>>((x334%x335)*x336));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x337 = 4;
	static int32_t x338 = INT32_MIN;
	int32_t x339 = -1;
	uint16_t x340 = UINT16_MAX;
	int32_t t15 = 12452808;

	t15 = (x337>>((x338%x339)*x340));

	if (t15 != 4) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x353 = 22U;
	int16_t x354 = INT16_MIN;
	static int16_t x355 = INT16_MIN;
	uint64_t x356 = 244966908326625347LLU;
	int32_t t16 = 1;

	t16 = (x353>>((x354%x355)*x356));

	if (t16 != 22) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x365 = UINT16_MAX;
	uint32_t x366 = 363976997U;
	volatile int8_t x367 = 13;
	static uint8_t x368 = 1U;

	t17 = (x365>>((x366%x367)*x368));

	if (t17 != 511) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x381 = 6925;
	int8_t x382 = -1;
	uint16_t x383 = UINT16_MAX;
	int8_t x384 = -1;
	int32_t t18 = -16246132;

	t18 = (x381>>((x382%x383)*x384));

	if (t18 != 3462) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x394 = UINT32_MAX;
	int8_t x396 = INT8_MIN;
	volatile int64_t t19 = INT64_MAX;

	t19 = (x393>>((x394%x395)*x396));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x401 = UINT64_MAX;
	int8_t x402 = -6;
	volatile int16_t x403 = INT16_MIN;
	int16_t x404 = -1;

	t20 = (x401>>((x402%x403)*x404));

	if (t20 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x405 = INT8_MAX;
	int64_t x406 = INT64_MIN;
	static volatile int32_t x407 = -1;
	static int32_t x408 = -1;
	volatile int32_t t21 = 18866758;

	t21 = (x405>>((x406%x407)*x408));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x441 = INT64_MAX;
	int8_t x442 = INT8_MIN;
	int8_t x443 = -1;
	uint32_t x444 = 999879698U;

	t22 = (x441>>((x442%x443)*x444));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x454 = 0U;
	uint64_t x455 = 66648705534LLU;
	int16_t x456 = INT16_MIN;
	volatile int32_t t23 = -4;

	t23 = (x453>>((x454%x455)*x456));

	if (t23 != 18) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x481 = 4117011262737938LLU;
	int64_t x483 = 47440185018122LL;
	static uint16_t x484 = 0U;

	t24 = (x481>>((x482%x483)*x484));

	if (t24 != 4117011262737938LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x505 = 0;
	volatile uint32_t x506 = UINT32_MAX;
	int32_t x507 = INT32_MIN;
	uint64_t x508 = 0LLU;
	int32_t t25 = 26077;

	t25 = (x505>>((x506%x507)*x508));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x533 = UINT8_MAX;
	uint64_t x534 = 6LLU;
	int32_t x535 = 1;
	static uint16_t x536 = 1U;
	volatile int32_t t26 = -15996;

	t26 = (x533>>((x534%x535)*x536));

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x545 = 31939U;
	volatile int16_t x547 = -1;

	t27 = (x545>>((x546%x547)*x548));

	if (t27 != 31939U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x557 = UINT8_MAX;
	volatile int64_t x559 = -1LL;
	static volatile int32_t t28 = -301;

	t28 = (x557>>((x558%x559)*x560));

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x563 = -1;
	int8_t x564 = -1;
	volatile int32_t t29 = 31450;

	t29 = (x561>>((x562%x563)*x564));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x577 = 2740903192982LLU;
	volatile int32_t x578 = INT32_MIN;
	int8_t x579 = INT8_MIN;
	int64_t x580 = INT64_MIN;

	t30 = (x577>>((x578%x579)*x580));

	if (t30 != 2740903192982LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x613 = 2050U;
	int8_t x614 = INT8_MIN;
	int8_t x615 = -1;
	static volatile uint8_t x616 = 84U;

	t31 = (x613>>((x614%x615)*x616));

	if (t31 != 2050U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x669 = INT8_MAX;
	static volatile int16_t x671 = INT16_MAX;
	uint16_t x672 = 2U;
	static volatile int32_t t32 = -1;

	t32 = (x669>>((x670%x671)*x672));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x681 = INT16_MAX;
	uint8_t x682 = 2U;
	volatile int32_t t33 = -24765;

	t33 = (x681>>((x682%x683)*x684));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x733 = INT64_MAX;
	volatile uint16_t x734 = 0U;
	volatile int8_t x735 = 1;
	int16_t x736 = INT16_MIN;
	int64_t t34 = INT64_MAX;

	t34 = (x733>>((x734%x735)*x736));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x781 = 782396;
	static int32_t x782 = -1;
	int32_t t35 = -57600;

	t35 = (x781>>((x782%x783)*x784));

	if (t35 != 782396) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x793 = 89U;
	uint8_t x794 = UINT8_MAX;
	int16_t x795 = 1;
	int8_t x796 = -1;
	int32_t t36 = -69266;

	t36 = (x793>>((x794%x795)*x796));

	if (t36 != 89) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x821 = INT16_MAX;
	int32_t x822 = INT32_MAX;
	static uint8_t x823 = 1U;
	int32_t t37 = -4;

	t37 = (x821>>((x822%x823)*x824));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x878 = -1;
	static uint64_t x879 = UINT64_MAX;
	int32_t t38 = 136861;

	t38 = (x877>>((x878%x879)*x880));

	if (t38 != 47) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x881 = INT16_MAX;
	int16_t x882 = INT16_MAX;
	static volatile uint16_t x883 = 1U;
	uint32_t x884 = 231U;

	t39 = (x881>>((x882%x883)*x884));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x898 = 6245U;
	uint8_t x900 = 32U;

	t40 = (x897>>((x898%x899)*x900));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x905 = INT8_MAX;
	volatile int16_t x906 = -1;
	uint64_t x907 = UINT64_MAX;
	volatile int32_t t41 = -3;

	t41 = (x905>>((x906%x907)*x908));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x953 = 10635;
	volatile int16_t x954 = 1;
	volatile uint16_t x955 = UINT16_MAX;
	volatile int32_t t42 = -41;

	t42 = (x953>>((x954%x955)*x956));

	if (t42 != 1329) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x957 = INT8_MAX;
	int8_t x958 = -1;
	static int32_t x959 = INT32_MAX;
	uint8_t x960 = 0U;
	volatile int32_t t43 = -6;

	t43 = (x957>>((x958%x959)*x960));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x974 = -1LL;
	int8_t x975 = -1;
	volatile int32_t t44 = 128822177;

	t44 = (x973>>((x974%x975)*x976));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x977 = INT16_MAX;
	int64_t x978 = 7694941391157LL;
	int16_t x979 = -1;
	uint32_t x980 = UINT32_MAX;
	int32_t t45 = 313;

	t45 = (x977>>((x978%x979)*x980));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x1017 = INT16_MAX;
	int64_t x1018 = 10LL;
	static volatile int8_t x1019 = -1;
	uint64_t x1020 = 1507973552906800LLU;
	static int32_t t46 = -14;

	t46 = (x1017>>((x1018%x1019)*x1020));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1026 = 3U;
	static int16_t x1027 = -1;
	static uint64_t t47 = 1112517428LLU;

	t47 = (x1025>>((x1026%x1027)*x1028));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x1037 = 0;
	int8_t x1038 = INT8_MIN;
	static int8_t x1040 = INT8_MAX;
	int32_t t48 = -22;

	t48 = (x1037>>((x1038%x1039)*x1040));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x1049 = 15;
	int32_t x1051 = -1;
	uint16_t x1052 = 28693U;
	volatile int32_t t49 = 1575;

	t49 = (x1049>>((x1050%x1051)*x1052));

	if (t49 != 15) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1081 = 47U;
	volatile uint64_t x1082 = UINT64_MAX;
	static int32_t x1083 = INT32_MAX;
	static int16_t x1084 = 0;
	volatile int32_t t50 = 25;

	t50 = (x1081>>((x1082%x1083)*x1084));

	if (t50 != 47) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x1117 = UINT8_MAX;
	int8_t x1119 = INT8_MIN;
	uint64_t x1120 = 0LLU;
	volatile int32_t t51 = -1843;

	t51 = (x1117>>((x1118%x1119)*x1120));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1125 = 2867478;
	static uint16_t x1126 = 989U;
	int64_t x1127 = -1LL;
	volatile uint64_t x1128 = UINT64_MAX;
	int32_t t52 = 10129;

	t52 = (x1125>>((x1126%x1127)*x1128));

	if (t52 != 2867478) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x1173 = 82577532872793702LL;
	static int8_t x1174 = INT8_MIN;
	int8_t x1175 = INT8_MIN;
	int64_t t53 = -7764638076LL;

	t53 = (x1173>>((x1174%x1175)*x1176));

	if (t53 != 82577532872793702LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x1197 = 3U;
	int32_t x1198 = INT32_MIN;
	int8_t x1199 = -1;

	t54 = (x1197>>((x1198%x1199)*x1200));

	if (t54 != 3) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x1205 = UINT8_MAX;
	int16_t x1208 = INT16_MIN;

	t55 = (x1205>>((x1206%x1207)*x1208));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1221 = INT16_MAX;
	static int8_t x1222 = INT8_MIN;
	int8_t x1224 = INT8_MAX;
	volatile int32_t t56 = 912245;

	t56 = (x1221>>((x1222%x1223)*x1224));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x1241 = 138916083453456LLU;
	static uint64_t x1242 = UINT64_MAX;
	uint16_t x1243 = UINT16_MAX;
	uint64_t x1244 = UINT64_MAX;

	t57 = (x1241>>((x1242%x1243)*x1244));

	if (t57 != 138916083453456LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x1249 = 8406858U;
	uint64_t x1250 = UINT64_MAX;
	uint16_t x1251 = 3U;
	uint32_t t58 = 10290U;

	t58 = (x1249>>((x1250%x1251)*x1252));

	if (t58 != 8406858U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x1313 = 4499U;
	int8_t x1314 = 0;
	int32_t t59 = -1;

	t59 = (x1313>>((x1314%x1315)*x1316));

	if (t59 != 4499) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x1369 = 2;
	static int32_t x1371 = -1;
	volatile uint16_t x1372 = 2650U;
	int32_t t60 = 40;

	t60 = (x1369>>((x1370%x1371)*x1372));

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x1413 = 42;
	int16_t x1414 = -1;
	int8_t x1415 = INT8_MIN;
	volatile int32_t t61 = -783;

	t61 = (x1413>>((x1414%x1415)*x1416));

	if (t61 != 21) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x1429 = 3LLU;
	static int16_t x1432 = INT16_MAX;
	volatile uint64_t t62 = 21227433466LLU;

	t62 = (x1429>>((x1430%x1431)*x1432));

	if (t62 != 3LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x1438 = INT16_MIN;
	uint64_t x1440 = 9673585514855LLU;
	static volatile int64_t t63 = -61278757681344LL;

	t63 = (x1437>>((x1438%x1439)*x1440));

	if (t63 != 8076601376937536LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x1453 = 12248;
	int32_t x1454 = INT32_MIN;
	uint8_t x1455 = 1U;
	static volatile int32_t t64 = -6371930;

	t64 = (x1453>>((x1454%x1455)*x1456));

	if (t64 != 12248) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x1477 = 5268936U;
	static int16_t x1478 = INT16_MIN;
	static uint64_t x1479 = UINT64_MAX;
	int64_t x1480 = INT64_MIN;
	volatile uint32_t t65 = 1273U;

	t65 = (x1477>>((x1478%x1479)*x1480));

	if (t65 != 5268936U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x1497 = 7U;
	static uint16_t x1498 = 2368U;
	static uint8_t x1500 = 0U;
	static volatile int32_t t66 = -54;

	t66 = (x1497>>((x1498%x1499)*x1500));

	if (t66 != 7) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x1585 = INT16_MAX;
	volatile int32_t x1586 = -55304147;
	volatile int32_t x1587 = -1;
	uint64_t x1588 = 31834766518435LLU;
	volatile int32_t t67 = 5563;

	t67 = (x1585>>((x1586%x1587)*x1588));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x1597 = INT32_MAX;
	int16_t x1598 = INT16_MIN;
	volatile int8_t x1599 = INT8_MIN;
	int8_t x1600 = -1;
	static int32_t t68 = INT32_MAX;

	t68 = (x1597>>((x1598%x1599)*x1600));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x1641 = INT32_MAX;
	int32_t x1642 = INT32_MIN;
	static int8_t x1643 = INT8_MIN;
	int16_t x1644 = INT16_MAX;
	volatile int32_t t69 = INT32_MAX;

	t69 = (x1641>>((x1642%x1643)*x1644));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x1653 = INT32_MAX;
	static int64_t x1655 = -1LL;
	static int16_t x1656 = INT16_MIN;
	static volatile int32_t t70 = INT32_MAX;

	t70 = (x1653>>((x1654%x1655)*x1656));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x1669 = 0;
	int32_t x1671 = -1;

	t71 = (x1669>>((x1670%x1671)*x1672));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x1697 = 18;
	volatile int16_t x1698 = INT16_MIN;
	uint8_t x1699 = UINT8_MAX;
	static volatile int32_t t72 = 324969784;

	t72 = (x1697>>((x1698%x1699)*x1700));

	if (t72 != 18) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x1721 = 234U;
	static int16_t x1722 = INT16_MIN;
	int8_t x1723 = INT8_MAX;
	int16_t x1724 = -1;
	int32_t t73 = 3638939;

	t73 = (x1721>>((x1722%x1723)*x1724));

	if (t73 != 58) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x1737 = 28258U;
	int8_t x1738 = INT8_MIN;
	int64_t x1739 = -1LL;
	uint8_t x1740 = 0U;
	volatile uint32_t t74 = 16928111U;

	t74 = (x1737>>((x1738%x1739)*x1740));

	if (t74 != 28258U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x1745 = INT64_MAX;
	int32_t x1746 = 142000;
	int32_t x1747 = -1;
	static int32_t x1748 = INT32_MIN;
	int64_t t75 = INT64_MAX;

	t75 = (x1745>>((x1746%x1747)*x1748));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x1781 = 419400;
	int64_t x1782 = INT64_MAX;
	volatile int32_t x1783 = INT32_MAX;
	uint8_t x1784 = 14U;
	volatile int32_t t76 = 43;

	t76 = (x1781>>((x1782%x1783)*x1784));

	if (t76 != 25) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t t77 = -340;

	t77 = (x1785>>((x1786%x1787)*x1788));

	if (t77 != 91) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x1793 = UINT64_MAX;
	int64_t x1794 = INT64_MIN;
	static int64_t x1795 = -1LL;

	t78 = (x1793>>((x1794%x1795)*x1796));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x1797 = INT16_MAX;
	int16_t x1799 = -1;
	volatile int32_t x1800 = INT32_MIN;
	int32_t t79 = 990011;

	t79 = (x1797>>((x1798%x1799)*x1800));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x1813 = 0;
	int64_t x1814 = INT64_MIN;
	volatile int64_t x1815 = INT64_MIN;
	int8_t x1816 = 1;
	volatile int32_t t80 = -12870323;

	t80 = (x1813>>((x1814%x1815)*x1816));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x1889 = 4868U;
	static volatile uint32_t x1891 = UINT32_MAX;
	int8_t x1892 = -4;
	volatile int32_t t81 = 101;

	t81 = (x1889>>((x1890%x1891)*x1892));

	if (t81 != 304) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x1897 = 557052342927833LLU;
	static uint16_t x1898 = 1U;
	volatile int32_t x1899 = -1;
	volatile int8_t x1900 = -41;
	uint64_t t82 = 1268056LLU;

	t82 = (x1897>>((x1898%x1899)*x1900));

	if (t82 != 557052342927833LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x1914 = -8079;
	int16_t x1915 = 3;
	uint8_t x1916 = 0U;

	t83 = (x1913>>((x1914%x1915)*x1916));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x1921 = 0U;
	static int32_t x1924 = 46406005;
	uint32_t t84 = 1058438498U;

	t84 = (x1921>>((x1922%x1923)*x1924));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x1957 = 0U;
	int16_t x1958 = -1;
	uint32_t x1959 = UINT32_MAX;
	int16_t x1960 = -1;
	static int32_t t85 = 3;

	t85 = (x1957>>((x1958%x1959)*x1960));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x1989 = 3U;
	static volatile int8_t x1990 = -1;
	int64_t x1991 = -483LL;
	static int8_t x1992 = -3;
	int32_t t86 = 250734056;

	t86 = (x1989>>((x1990%x1991)*x1992));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x1997 = 6U;
	uint16_t x1998 = 7U;
	uint8_t x1999 = 1U;

	t87 = (x1997>>((x1998%x1999)*x2000));

	if (t87 != 6) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2041 = INT64_MAX;
	int8_t x2042 = 0;
	static int16_t x2044 = INT16_MIN;
	volatile int64_t t88 = INT64_MAX;

	t88 = (x2041>>((x2042%x2043)*x2044));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x2061 = 25608U;
	volatile int32_t x2062 = INT32_MIN;
	int16_t x2063 = -1;
	int64_t x2064 = -1LL;
	uint32_t t89 = 0U;

	t89 = (x2061>>((x2062%x2063)*x2064));

	if (t89 != 25608U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x2066 = 1U;
	volatile int16_t x2067 = -1954;
	uint64_t t90 = 28597985329LLU;

	t90 = (x2065>>((x2066%x2067)*x2068));

	if (t90 != 43672781514693943LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x2105 = 6504U;
	uint16_t x2107 = 276U;
	volatile uint32_t t91 = 63859U;

	t91 = (x2105>>((x2106%x2107)*x2108));

	if (t91 != 6504U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x2129 = 102;
	int8_t x2130 = -1;
	int8_t x2131 = INT8_MAX;
	int8_t x2132 = -6;
	static int32_t t92 = -116;

	t92 = (x2129>>((x2130%x2131)*x2132));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x2141 = 0LLU;
	int16_t x2142 = -9628;
	volatile int8_t x2143 = -1;
	volatile uint64_t t93 = 535941611878245486LLU;

	t93 = (x2141>>((x2142%x2143)*x2144));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x2169 = 82529LLU;
	volatile int16_t x2170 = -1;
	volatile int8_t x2171 = -1;
	static volatile int16_t x2172 = INT16_MIN;
	uint64_t t94 = 131817261LLU;

	t94 = (x2169>>((x2170%x2171)*x2172));

	if (t94 != 82529LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x2182 = UINT64_MAX;
	volatile int8_t x2183 = 1;
	static int32_t x2184 = 2882;
	volatile int32_t t95 = 219;

	t95 = (x2181>>((x2182%x2183)*x2184));

	if (t95 != 38) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x2189 = 18;
	static volatile int64_t x2190 = INT64_MAX;
	uint8_t x2191 = 1U;
	volatile int32_t t96 = 17750;

	t96 = (x2189>>((x2190%x2191)*x2192));

	if (t96 != 18) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x2205 = 29LL;
	static int64_t x2206 = 2402485403LL;
	int64_t x2207 = -1LL;
	int32_t x2208 = -1;

	t97 = (x2205>>((x2206%x2207)*x2208));

	if (t97 != 29LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x2230 = 154891U;
	static int32_t t98 = -1417362;

	t98 = (x2229>>((x2230%x2231)*x2232));

	if (t98 != 3) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x2237 = 10U;
	int16_t x2238 = -1;
	uint8_t x2240 = UINT8_MAX;
	static volatile int32_t t99 = 543;

	t99 = (x2237>>((x2238%x2239)*x2240));

	if (t99 != 10) { NG(); } else { ; }
	
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

