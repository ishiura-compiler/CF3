#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -4451935;
int16_t x13 = 117;
uint32_t x14 = 2567777U;
static uint16_t x25 = 333U;
uint16_t x26 = UINT16_MAX;
int64_t x66 = 1703242347158237LL;
volatile int32_t x81 = 3;
uint32_t t4 = 8983U;
int16_t x162 = -208;
uint16_t x167 = 12U;
int64_t t7 = -1LL;
int16_t x182 = 0;
int8_t x183 = INT8_MAX;
static int64_t t8 = -214353LL;
uint64_t x221 = 822259LLU;
uint32_t x226 = 2944055U;
int16_t x246 = INT16_MIN;
int8_t x317 = 0;
int32_t x318 = 189;
uint8_t x319 = 7U;
int16_t x323 = -23;
uint64_t x414 = 5LLU;
uint64_t x420 = UINT64_MAX;
int64_t x425 = 28745LL;
int64_t t17 = 90459LL;
uint8_t x454 = 2U;
static int32_t x501 = INT32_MIN;
volatile int8_t x502 = 0;
volatile int64_t t20 = -3LL;
uint32_t x563 = UINT32_MAX;
uint64_t x606 = 439093959LLU;
int8_t x613 = 63;
volatile int8_t x614 = INT8_MAX;
uint32_t x616 = 3U;
int32_t t26 = -185728806;
int32_t x639 = INT32_MAX;
static uint8_t x659 = 14U;
uint32_t t29 = 2046255U;
static volatile int32_t x675 = -257;
int64_t x703 = -1LL;
volatile int16_t x731 = 0;
static int16_t x732 = INT16_MAX;
static uint8_t x789 = 2U;
volatile int64_t x790 = 792976854067655LL;
uint16_t x792 = UINT16_MAX;
static int64_t t34 = -77429741LL;
int8_t x825 = 2;
int32_t t38 = -59088;
uint32_t x898 = 14288U;
volatile int64_t x975 = INT64_MIN;
int16_t x985 = 4;
volatile int16_t x1017 = INT16_MIN;
static uint8_t x1020 = UINT8_MAX;
int8_t x1073 = INT8_MIN;
uint8_t x1109 = 49U;
int32_t t48 = -9358345;
volatile uint64_t t49 = 20388LLU;
volatile int64_t x1214 = -1LL;
volatile int64_t t51 = 1056650606LL;
uint8_t x1219 = 1U;
int64_t t52 = -966LL;
int8_t x1226 = -2;
uint8_t x1264 = UINT8_MAX;
uint64_t t55 = 198526756381LLU;
int16_t x1361 = -1;
uint8_t x1363 = 7U;
uint16_t x1373 = 0U;
int64_t t60 = 16934375412325066LL;
uint64_t x1397 = 35698LLU;
static volatile uint64_t t61 = 186491467137525766LLU;
volatile int64_t x1457 = 3886LL;
int64_t x1469 = 1773169380LL;
int16_t x1471 = INT16_MIN;
int16_t x1527 = INT16_MIN;
int32_t x1540 = -1;
uint64_t x1549 = 14233LLU;
int32_t x1551 = -1;
volatile uint8_t x1579 = 25U;
uint64_t x1580 = 2005LLU;
static uint32_t t69 = 37U;
int8_t x1656 = -1;
uint32_t x1667 = 4U;
static int32_t t73 = 629014047;
int32_t x1732 = -445420;
uint16_t x1758 = 13U;
int16_t x1773 = INT16_MAX;
uint16_t x1774 = UINT16_MAX;
static volatile int8_t x1775 = INT8_MIN;
static int8_t x1776 = INT8_MIN;
uint64_t t80 = 61597852LLU;
volatile uint8_t x1846 = 2U;
uint64_t x1853 = 3548226LLU;
volatile uint64_t t82 = 8204663018127170411LLU;
int8_t x1876 = -1;
int64_t x1890 = 3LL;
int64_t x1931 = INT64_MIN;
volatile uint32_t x1957 = 478161276U;
uint32_t x2013 = 435799449U;
int16_t x2016 = INT16_MAX;
uint16_t x2037 = UINT16_MAX;
int8_t x2073 = INT8_MAX;
int16_t x2077 = -1;
static int64_t x2078 = -1LL;
volatile int8_t x2080 = -14;
int16_t x2122 = 14;
int16_t x2235 = INT16_MIN;
volatile uint32_t t98 = 7657115U;
uint32_t x2253 = 8816U;


void f0(void) {
	int8_t x9 = INT8_MIN;
	int8_t x10 = INT8_MIN;
	static int32_t x11 = INT32_MIN;
	static int32_t x12 = INT32_MIN;

	t0 = ((x9*x10)<<(x11%x12));

	if (t0 != 16384) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x15 = 5131U;
	int32_t x16 = 1;
	volatile uint32_t t1 = 21U;

	t1 = ((x13*x14)<<(x15%x16));

	if (t1 != 300429909U) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x27 = 4;
	static int16_t x28 = INT16_MAX;
	int32_t t2 = -1029835;

	t2 = ((x25*x26)<<(x27%x28));

	if (t2 != 349170480) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x65 = UINT8_MAX;
	int64_t x67 = -1LL;
	volatile uint64_t x68 = UINT64_MAX;
	int64_t t3 = 13345933LL;

	t3 = ((x65*x66)<<(x67%x68));

	if (t3 != 434326798525350435LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x82 = UINT32_MAX;
	uint8_t x83 = 0U;
	volatile int32_t x84 = INT32_MIN;

	t4 = ((x81*x82)<<(x83%x84));

	if (t4 != 4294967293U) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x133 = 0;
	uint8_t x134 = 14U;
	static uint8_t x135 = 2U;
	int16_t x136 = INT16_MAX;
	int32_t t5 = -14519;

	t5 = ((x133*x134)<<(x135%x136));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x161 = UINT32_MAX;
	static volatile uint8_t x163 = 0U;
	static volatile int32_t x164 = -1;
	uint32_t t6 = 174U;

	t6 = ((x161*x162)<<(x163%x164));

	if (t6 != 208U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x165 = -171;
	static int64_t x166 = -9913163635LL;
	volatile int16_t x168 = -1;

	t7 = ((x165*x166)<<(x167%x168));

	if (t7 != 1695150981585LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x181 = INT64_MIN;
	int8_t x184 = -16;

	t8 = ((x181*x182)<<(x183%x184));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x222 = 560399U;
	volatile uint8_t x223 = 4U;
	int32_t x224 = INT32_MIN;
	volatile uint64_t t9 = 133085893268721385LLU;

	t9 = ((x221*x222)<<(x223%x224));

	if (t9 != 7372689941456LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x225 = 0;
	int16_t x227 = -1;
	uint32_t x228 = UINT32_MAX;
	uint32_t t10 = 43710U;

	t10 = ((x225*x226)<<(x227%x228));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x245 = 0;
	uint32_t x247 = 1U;
	volatile int64_t x248 = -54511790641088202LL;
	int32_t t11 = 31;

	t11 = ((x245*x246)<<(x247%x248));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x305 = 26U;
	static uint64_t x306 = UINT64_MAX;
	volatile int8_t x307 = INT8_MIN;
	int16_t x308 = -1;
	uint64_t t12 = 196951LLU;

	t12 = ((x305*x306)<<(x307%x308));

	if (t12 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x320 = INT64_MAX;
	int32_t t13 = 13444334;

	t13 = ((x317*x318)<<(x319%x320));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x321 = INT64_MAX;
	uint64_t x322 = UINT64_MAX;
	int64_t x324 = -1LL;
	uint64_t t14 = 1042526LLU;

	t14 = ((x321*x322)<<(x323%x324));

	if (t14 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x413 = INT16_MIN;
	uint16_t x415 = 21052U;
	int8_t x416 = -4;
	uint64_t t15 = 560220LLU;

	t15 = ((x413*x414)<<(x415%x416));

	if (t15 != 18446744073709387776LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x417 = UINT8_MAX;
	static uint64_t x418 = 27LLU;
	int16_t x419 = -1;
	volatile uint64_t t16 = 67571990665057795LLU;

	t16 = ((x417*x418)<<(x419%x420));

	if (t16 != 6885LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x426 = 8U;
	int16_t x427 = INT16_MIN;
	static int16_t x428 = INT16_MIN;

	t17 = ((x425*x426)<<(x427%x428));

	if (t17 != 229960LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x453 = 121U;
	int64_t x455 = INT64_MAX;
	static int16_t x456 = -1;
	int32_t t18 = -4411;

	t18 = ((x453*x454)<<(x455%x456));

	if (t18 != 242) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x503 = -7;
	static int16_t x504 = -1;
	volatile int32_t t19 = 22;

	t19 = ((x501*x502)<<(x503%x504));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x537 = -1LL;
	int8_t x538 = -2;
	uint32_t x539 = UINT32_MAX;
	uint64_t x540 = 9LLU;

	t20 = ((x537*x538)<<(x539%x540));

	if (t20 != 16LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x561 = 251536771209952LLU;
	int8_t x562 = INT8_MIN;
	int8_t x564 = -4;
	uint64_t t21 = 5998516767276LLU;

	t21 = ((x561*x562)<<(x563%x564));

	if (t21 != 18189170419990560768LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x573 = 6947U;
	volatile int8_t x574 = 24;
	uint64_t x575 = UINT64_MAX;
	int8_t x576 = -6;
	volatile int32_t t22 = 23621;

	t22 = ((x573*x574)<<(x575%x576));

	if (t22 != 5335296) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x581 = 139U;
	int8_t x582 = 0;
	int8_t x583 = INT8_MIN;
	int64_t x584 = -1LL;
	int32_t t23 = 13016629;

	t23 = ((x581*x582)<<(x583%x584));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x593 = INT16_MIN;
	int8_t x594 = INT8_MIN;
	static volatile int8_t x595 = INT8_MIN;
	int16_t x596 = -1;
	static int32_t t24 = -29752;

	t24 = ((x593*x594)<<(x595%x596));

	if (t24 != 4194304) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x605 = 16U;
	int64_t x607 = -938LL;
	volatile int8_t x608 = -1;
	uint64_t t25 = 18035693291LLU;

	t25 = ((x605*x606)<<(x607%x608));

	if (t25 != 7025503344LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x615 = 41;

	t26 = ((x613*x614)<<(x615%x616));

	if (t26 != 32004) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x637 = 817945630;
	static uint32_t x638 = 1U;
	int16_t x640 = -55;
	uint32_t t27 = 139816595U;

	t27 = ((x637*x638)<<(x639%x640));

	if (t27 != 230809600U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x645 = INT16_MIN;
	uint64_t x646 = 205559LLU;
	static uint64_t x647 = 92540789494510LLU;
	uint16_t x648 = 25U;
	static volatile uint64_t t28 = 2531314LLU;

	t28 = ((x645*x646)<<(x647%x648));

	if (t28 != 18446737176294064128LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x657 = 55U;
	uint8_t x658 = UINT8_MAX;
	static int8_t x660 = INT8_MAX;

	t29 = ((x657*x658)<<(x659%x660));

	if (t29 != 229785600U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x673 = UINT64_MAX;
	int16_t x674 = -26;
	int32_t x676 = -1;
	static volatile uint64_t t30 = 5LLU;

	t30 = ((x673*x674)<<(x675%x676));

	if (t30 != 26LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x701 = 47U;
	int32_t x702 = 42;
	int32_t x704 = -1;
	static volatile uint32_t t31 = 712U;

	t31 = ((x701*x702)<<(x703%x704));

	if (t31 != 1974U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x729 = 0;
	uint16_t x730 = 7403U;
	int32_t t32 = 26;

	t32 = ((x729*x730)<<(x731%x732));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x791 = UINT16_MAX;
	volatile int64_t t33 = -78391473890310077LL;

	t33 = ((x789*x790)<<(x791%x792));

	if (t33 != 1585953708135310LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x821 = INT16_MIN;
	int64_t x822 = -285031246LL;
	int64_t x823 = -1LL;
	int32_t x824 = -1;

	t34 = ((x821*x822)<<(x823%x824));

	if (t34 != 9339903868928LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x826 = 1852LLU;
	static int32_t x827 = 8886;
	int16_t x828 = -1;
	static uint64_t t35 = 225LLU;

	t35 = ((x825*x826)<<(x827%x828));

	if (t35 != 3704LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x829 = 46157U;
	static int32_t x830 = INT32_MAX;
	uint16_t x831 = 5U;
	static int16_t x832 = INT16_MIN;
	volatile uint32_t t36 = 6683U;

	t36 = ((x829*x830)<<(x831%x832));

	if (t36 != 4293490272U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x841 = INT16_MIN;
	int64_t x842 = -1LL;
	volatile uint16_t x843 = 27U;
	static volatile int8_t x844 = INT8_MIN;
	volatile int64_t t37 = -49250852140021LL;

	t37 = ((x841*x842)<<(x843%x844));

	if (t37 != 4398046511104LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x857 = 0U;
	int32_t x858 = 1;
	uint16_t x859 = 6U;
	uint16_t x860 = 1U;

	t38 = ((x857*x858)<<(x859%x860));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x869 = 0;
	static int64_t x870 = INT64_MIN;
	int8_t x871 = 4;
	int64_t x872 = INT64_MAX;
	int64_t t39 = -11LL;

	t39 = ((x869*x870)<<(x871%x872));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x897 = INT8_MIN;
	uint16_t x899 = 1U;
	int32_t x900 = INT32_MIN;
	static volatile uint32_t t40 = 48023U;

	t40 = ((x897*x898)<<(x899%x900));

	if (t40 != 4291309568U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x945 = -1;
	int16_t x946 = INT16_MIN;
	static volatile int8_t x947 = 60;
	int16_t x948 = 6;
	int32_t t41 = -15073;

	t41 = ((x945*x946)<<(x947%x948));

	if (t41 != 32768) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x973 = UINT8_MAX;
	uint8_t x974 = 0U;
	int32_t x976 = -1;
	volatile int32_t t42 = 1499;

	t42 = ((x973*x974)<<(x975%x976));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint8_t x986 = 0U;
	int64_t x987 = INT64_MIN;
	static int64_t x988 = INT64_MIN;
	volatile int32_t t43 = 9592;

	t43 = ((x985*x986)<<(x987%x988));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x1018 = 73661538LLU;
	int16_t x1019 = 13018;
	volatile uint64_t t44 = 2226144125935LLU;

	t44 = ((x1017*x1018)<<(x1019%x1020));

	if (t44 != 18426970705166860288LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1057 = 0;
	volatile int64_t x1058 = INT64_MIN;
	int64_t x1059 = INT64_MAX;
	volatile int16_t x1060 = INT16_MAX;
	volatile int64_t t45 = -7LL;

	t45 = ((x1057*x1058)<<(x1059%x1060));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1074 = INT8_MIN;
	int16_t x1075 = INT16_MAX;
	int16_t x1076 = 1;
	volatile int32_t t46 = -169;

	t46 = ((x1073*x1074)<<(x1075%x1076));

	if (t46 != 16384) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x1110 = 46427799LLU;
	static int16_t x1111 = 0;
	uint32_t x1112 = UINT32_MAX;
	volatile uint64_t t47 = 102179773LLU;

	t47 = ((x1109*x1110)<<(x1111%x1112));

	if (t47 != 2274962151LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1129 = UINT16_MAX;
	uint8_t x1130 = 22U;
	static int8_t x1131 = INT8_MAX;
	int8_t x1132 = -3;

	t48 = ((x1129*x1130)<<(x1131%x1132));

	if (t48 != 2883540) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1145 = 48308438889075LLU;
	int16_t x1146 = INT16_MIN;
	static int32_t x1147 = 1;
	static int32_t x1148 = INT32_MIN;

	t49 = ((x1145*x1146)<<(x1147%x1148));

	if (t49 != 15280802222675132416LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x1149 = -1LL;
	static int64_t x1150 = -162462659731174LL;
	uint16_t x1151 = 6116U;
	uint8_t x1152 = 21U;
	int64_t t50 = 107557362128109LL;

	t50 = ((x1149*x1150)<<(x1151%x1152));

	if (t50 != 5198805111397568LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1213 = -2;
	uint8_t x1215 = 25U;
	uint16_t x1216 = UINT16_MAX;

	t51 = ((x1213*x1214)<<(x1215%x1216));

	if (t51 != 67108864LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1217 = 115756825LL;
	int16_t x1218 = 2500;
	int8_t x1220 = -1;

	t52 = ((x1217*x1218)<<(x1219%x1220));

	if (t52 != 289392062500LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x1225 = 479538U;
	volatile uint16_t x1227 = 302U;
	volatile int32_t x1228 = -26;
	uint32_t t53 = 2U;

	t53 = ((x1225*x1226)<<(x1227%x1228));

	if (t53 != 1570504704U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1261 = 1011815795100329LLU;
	uint64_t x1262 = 1149LLU;
	uint32_t x1263 = UINT32_MAX;
	uint64_t t54 = 31546LLU;

	t54 = ((x1261*x1262)<<(x1263%x1264));

	if (t54 != 1162576348570278021LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x1265 = 3853983218198LLU;
	static int32_t x1266 = -1;
	static int16_t x1267 = INT16_MIN;
	uint8_t x1268 = 2U;

	t55 = ((x1265*x1266)<<(x1267%x1268));

	if (t55 != 18446740219726333418LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x1317 = UINT64_MAX;
	int16_t x1318 = -1;
	uint8_t x1319 = 31U;
	uint64_t x1320 = 4690359604LLU;
	uint64_t t56 = 2787613933LLU;

	t56 = ((x1317*x1318)<<(x1319%x1320));

	if (t56 != 2147483648LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1333 = 249U;
	static int32_t x1334 = 1;
	int16_t x1335 = 1;
	int32_t x1336 = INT32_MIN;
	volatile int32_t t57 = 3831223;

	t57 = ((x1333*x1334)<<(x1335%x1336));

	if (t57 != 498) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x1341 = -1428;
	volatile uint64_t x1342 = 709296943932077LLU;
	uint8_t x1343 = 1U;
	uint16_t x1344 = UINT16_MAX;
	uint64_t t58 = 7872696LLU;

	t58 = ((x1341*x1342)<<(x1343%x1344));

	if (t58 != 16420992001839539704LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1362 = 0;
	int8_t x1364 = INT8_MIN;
	int32_t t59 = 0;

	t59 = ((x1361*x1362)<<(x1363%x1364));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1374 = INT64_MAX;
	static uint16_t x1375 = UINT16_MAX;
	static int16_t x1376 = -1;

	t60 = ((x1373*x1374)<<(x1375%x1376));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x1398 = 5U;
	int32_t x1399 = INT32_MIN;
	int32_t x1400 = INT32_MIN;

	t61 = ((x1397*x1398)<<(x1399%x1400));

	if (t61 != 178490LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x1401 = 1015;
	uint32_t x1402 = 7U;
	static int32_t x1403 = INT32_MAX;
	int8_t x1404 = INT8_MAX;
	volatile uint32_t t62 = 194355U;

	t62 = ((x1401*x1402)<<(x1403%x1404));

	if (t62 != 909440U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x1458 = 2918179037LLU;
	static int8_t x1459 = 11;
	int64_t x1460 = 10122694804038LL;
	volatile uint64_t t63 = 351825095319735373LLU;

	t63 = ((x1457*x1458)<<(x1459%x1460));

	if (t63 != 23224409574977536LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x1470 = UINT8_MAX;
	static int32_t x1472 = -1;
	static int64_t t64 = 0LL;

	t64 = ((x1469*x1470)<<(x1471%x1472));

	if (t64 != 452158191900LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x1489 = -475;
	uint64_t x1490 = 42597450089313LLU;
	uint64_t x1491 = UINT64_MAX;
	uint8_t x1492 = 7U;
	volatile uint64_t t65 = 10541167640960LLU;

	t65 = ((x1489*x1490)<<(x1491%x1492));

	if (t65 != 18406276496124704266LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x1525 = 6538LLU;
	static int64_t x1526 = INT64_MIN;
	int8_t x1528 = -1;
	volatile uint64_t t66 = 63LLU;

	t66 = ((x1525*x1526)<<(x1527%x1528));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x1537 = INT8_MAX;
	int8_t x1538 = 15;
	static int16_t x1539 = INT16_MIN;
	volatile int32_t t67 = -9;

	t67 = ((x1537*x1538)<<(x1539%x1540));

	if (t67 != 1905) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x1550 = UINT8_MAX;
	int64_t x1552 = -1LL;
	volatile uint64_t t68 = 161304465889LLU;

	t68 = ((x1549*x1550)<<(x1551%x1552));

	if (t68 != 3629415LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x1577 = -1;
	uint32_t x1578 = 437729072U;

	t69 = ((x1577*x1578)<<(x1579%x1580));

	if (t69 != 2684354560U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x1653 = 225831;
	uint8_t x1654 = 11U;
	int64_t x1655 = -113061371572LL;
	volatile int32_t t70 = 686995;

	t70 = ((x1653*x1654)<<(x1655%x1656));

	if (t70 != 2484141) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x1665 = INT64_MAX;
	volatile uint64_t x1666 = 1842589370340915LLU;
	int16_t x1668 = INT16_MAX;
	static uint64_t t71 = 95947395072148LLU;

	t71 = ((x1665*x1666)<<(x1667%x1668));

	if (t71 != 18417262643784096976LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x1697 = UINT64_MAX;
	int64_t x1698 = -1LL;
	int64_t x1699 = 202834150905177178LL;
	int8_t x1700 = -1;
	uint64_t t72 = 26467LLU;

	t72 = ((x1697*x1698)<<(x1699%x1700));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x1717 = 568;
	int8_t x1718 = 1;
	int64_t x1719 = INT64_MIN;
	static int64_t x1720 = INT64_MIN;

	t73 = ((x1717*x1718)<<(x1719%x1720));

	if (t73 != 568) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x1729 = 9LLU;
	uint8_t x1730 = 42U;
	uint8_t x1731 = 9U;
	volatile uint64_t t74 = 88069LLU;

	t74 = ((x1729*x1730)<<(x1731%x1732));

	if (t74 != 193536LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x1733 = INT16_MIN;
	static volatile uint64_t x1734 = 19136431030LLU;
	int8_t x1735 = 1;
	int8_t x1736 = INT8_MIN;
	uint64_t t75 = 245LLU;

	t75 = ((x1733*x1734)<<(x1735%x1736));

	if (t75 != 18445489948565569536LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x1741 = INT8_MIN;
	int8_t x1742 = -4;
	int16_t x1743 = -4387;
	int32_t x1744 = -1;
	int32_t t76 = -1287035;

	t76 = ((x1741*x1742)<<(x1743%x1744));

	if (t76 != 512) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x1757 = 25009U;
	int8_t x1759 = INT8_MIN;
	static int8_t x1760 = INT8_MIN;
	volatile uint32_t t77 = 1931U;

	t77 = ((x1757*x1758)<<(x1759%x1760));

	if (t77 != 325117U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t t78 = -1;

	t78 = ((x1773*x1774)<<(x1775%x1776));

	if (t78 != 2147385345) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x1817 = UINT64_MAX;
	uint32_t x1818 = 4U;
	int64_t x1819 = 3925189924LL;
	int8_t x1820 = -6;
	static volatile uint64_t t79 = 152495570976LLU;

	t79 = ((x1817*x1818)<<(x1819%x1820));

	if (t79 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x1829 = 598978385LL;
	static uint64_t x1830 = UINT64_MAX;
	int16_t x1831 = -447;
	int8_t x1832 = -1;

	t80 = ((x1829*x1830)<<(x1831%x1832));

	if (t80 != 18446744073110573231LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x1845 = 945U;
	int64_t x1847 = INT64_MIN;
	volatile int8_t x1848 = INT8_MIN;
	volatile int32_t t81 = -357325;

	t81 = ((x1845*x1846)<<(x1847%x1848));

	if (t81 != 1890) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x1854 = INT64_MIN;
	uint8_t x1855 = UINT8_MAX;
	uint64_t x1856 = 1LLU;

	t82 = ((x1853*x1854)<<(x1855%x1856));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x1865 = INT32_MAX;
	static uint64_t x1866 = 13462LLU;
	uint16_t x1867 = UINT16_MAX;
	int8_t x1868 = INT8_MAX;
	uint64_t t83 = 129301588583565LLU;

	t83 = ((x1865*x1866)<<(x1867%x1868));

	if (t83 != 231275398847312LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x1873 = -1;
	static int16_t x1874 = -1;
	int32_t x1875 = -1;
	int32_t t84 = 282045456;

	t84 = ((x1873*x1874)<<(x1875%x1876));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x1889 = 1;
	int8_t x1891 = INT8_MIN;
	int32_t x1892 = 1;
	volatile int64_t t85 = -1131101699577020556LL;

	t85 = ((x1889*x1890)<<(x1891%x1892));

	if (t85 != 3LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x1901 = 1U;
	int16_t x1902 = INT16_MAX;
	static volatile int32_t x1903 = -1;
	static volatile int8_t x1904 = -1;
	volatile int32_t t86 = -28988104;

	t86 = ((x1901*x1902)<<(x1903%x1904));

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x1929 = UINT32_MAX;
	int8_t x1930 = INT8_MIN;
	static int8_t x1932 = INT8_MIN;
	uint32_t t87 = 41988503U;

	t87 = ((x1929*x1930)<<(x1931%x1932));

	if (t87 != 128U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x1958 = 20U;
	int16_t x1959 = INT16_MIN;
	int16_t x1960 = INT16_MIN;
	volatile uint32_t t88 = 266587U;

	t88 = ((x1957*x1958)<<(x1959%x1960));

	if (t88 != 973290928U) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x2014 = INT16_MIN;
	volatile uint16_t x2015 = UINT16_MAX;
	volatile uint32_t t89 = 1481U;

	t89 = ((x2013*x2014)<<(x2015%x2016));

	if (t89 != 979828736U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2038 = 8;
	volatile int8_t x2039 = -26;
	int16_t x2040 = 1;
	volatile int32_t t90 = 16377997;

	t90 = ((x2037*x2038)<<(x2039%x2040));

	if (t90 != 524280) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x2074 = UINT32_MAX;
	uint64_t x2075 = 6LLU;
	int16_t x2076 = INT16_MAX;
	static uint32_t t91 = 25696837U;

	t91 = ((x2073*x2074)<<(x2075%x2076));

	if (t91 != 4294959168U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint32_t x2079 = UINT32_MAX;
	int64_t t92 = -85171265943902LL;

	t92 = ((x2077*x2078)<<(x2079%x2080));

	if (t92 != 8192LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x2121 = INT16_MAX;
	uint64_t x2123 = 4LLU;
	uint32_t x2124 = UINT32_MAX;
	int32_t t93 = -18;

	t93 = ((x2121*x2122)<<(x2123%x2124));

	if (t93 != 7339808) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x2129 = 27U;
	volatile uint32_t x2130 = 28190U;
	volatile int8_t x2131 = INT8_MIN;
	int16_t x2132 = 1;
	volatile uint32_t t94 = 6041627U;

	t94 = ((x2129*x2130)<<(x2131%x2132));

	if (t94 != 761130U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x2173 = 47737693U;
	volatile int8_t x2174 = -1;
	uint8_t x2175 = 3U;
	uint8_t x2176 = UINT8_MAX;
	uint32_t t95 = 1995096U;

	t95 = ((x2173*x2174)<<(x2175%x2176));

	if (t95 != 3913065752U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x2213 = 3645U;
	static int8_t x2214 = INT8_MIN;
	volatile uint64_t x2215 = UINT64_MAX;
	uint8_t x2216 = 8U;
	uint32_t t96 = 330971U;

	t96 = ((x2213*x2214)<<(x2215%x2216));

	if (t96 != 4235247616U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x2233 = 345523722LLU;
	int8_t x2234 = INT8_MIN;
	uint8_t x2236 = 8U;
	volatile uint64_t t97 = 574841218LLU;

	t97 = ((x2233*x2234)<<(x2235%x2236));

	if (t97 != 18446744029482515200LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint32_t x2249 = UINT32_MAX;
	int32_t x2250 = INT32_MAX;
	uint32_t x2251 = UINT32_MAX;
	volatile int8_t x2252 = INT8_MAX;

	t98 = ((x2249*x2250)<<(x2251%x2252));

	if (t98 != 32768U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x2254 = UINT64_MAX;
	uint64_t x2255 = UINT64_MAX;
	static uint64_t x2256 = UINT64_MAX;
	uint64_t t99 = 10850964434LLU;

	t99 = ((x2253*x2254)<<(x2255%x2256));

	if (t99 != 18446744073709542800LLU) { NG(); } else { ; }
	
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

