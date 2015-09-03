#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x32 = 4U;
uint32_t t1 = 63784U;
int8_t x63 = 27;
uint8_t x64 = 94U;
volatile uint64_t x78 = UINT64_MAX;
uint8_t x80 = 4U;
static volatile uint64_t t3 = 3567038LLU;
uint16_t x91 = 393U;
int8_t x92 = 0;
uint64_t x150 = 182LLU;
uint8_t x151 = 0U;
volatile int64_t t7 = 2460385137937625047LL;
static uint16_t x241 = 212U;
int8_t x275 = INT8_MAX;
int32_t x276 = INT32_MIN;
int16_t x301 = INT16_MAX;
volatile uint64_t t12 = 397018013209274LLU;
uint32_t x340 = 56375U;
volatile int32_t t15 = 0;
volatile uint8_t x366 = 3U;
uint32_t x390 = 19U;
static volatile uint16_t x394 = 15U;
int32_t t19 = 121059483;
int8_t x416 = INT8_MIN;
int64_t x427 = 10733LL;
static volatile int32_t t22 = 1;
int64_t x477 = 113692859463153LL;
uint8_t x487 = 127U;
int8_t x500 = 52;
uint32_t x511 = 1705985035U;
volatile int8_t x512 = INT8_MAX;
volatile int32_t t27 = 1035;
static int64_t x547 = INT64_MIN;
static uint32_t t29 = 65451U;
static int16_t x609 = 1;
volatile uint64_t t30 = 4818559188LLU;
int32_t x698 = INT32_MAX;
volatile uint32_t t34 = 193252388U;
static int8_t x753 = INT8_MIN;
int16_t x756 = 541;
volatile uint8_t x768 = UINT8_MAX;
static uint8_t x799 = 38U;
static int64_t x800 = INT64_MIN;
int16_t x814 = 1;
static volatile int64_t x815 = INT64_MIN;
int16_t x827 = -1;
uint32_t x889 = 2738U;
int64_t x891 = INT64_MIN;
int64_t x920 = INT64_MIN;
volatile int32_t x1021 = -2772;
static volatile int32_t t45 = -88221;
uint64_t x1038 = UINT64_MAX;
int16_t x1040 = INT16_MAX;
volatile uint8_t x1058 = 92U;
int8_t x1060 = 1;
static int32_t t48 = 113453076;
int16_t x1121 = INT16_MIN;
uint8_t x1122 = UINT8_MAX;
int64_t x1177 = -1LL;
int16_t x1179 = 3;
uint32_t x1200 = 809U;
int64_t x1223 = INT64_MAX;
uint64_t x1243 = 1334671714LLU;
int32_t x1244 = INT32_MIN;
static int8_t x1266 = INT8_MAX;
uint64_t x1305 = 662LLU;
volatile int64_t x1307 = INT64_MAX;
uint32_t x1315 = 919228U;
static volatile int32_t t61 = 1052;
uint8_t x1322 = UINT8_MAX;
static volatile uint64_t x1323 = UINT64_MAX;
uint16_t x1330 = UINT16_MAX;
uint8_t x1343 = 3U;
static uint16_t x1357 = 53U;
int32_t x1380 = -9955;
volatile uint32_t t66 = 10467260U;
uint16_t x1412 = 8U;
int16_t x1436 = 7;
static uint16_t x1438 = UINT16_MAX;
static int64_t x1439 = INT64_MAX;
static int64_t x1447 = INT64_MIN;
int32_t t71 = -30;
int64_t x1458 = 413674134758LL;
int64_t x1460 = INT64_MIN;
int32_t x1493 = INT32_MIN;
uint32_t x1494 = 3U;
volatile uint64_t t74 = 2244LLU;
uint16_t x1638 = 0U;
uint64_t x1639 = 0LLU;
int8_t x1683 = 2;
static int16_t x1708 = 0;
int32_t x1709 = INT32_MIN;
volatile uint8_t x1746 = 0U;
uint64_t t81 = 16534925LLU;
uint32_t x1752 = 3U;
static int64_t t84 = 4275332426LL;
static uint8_t x1823 = 102U;
volatile uint32_t t87 = 68U;
volatile uint8_t x1830 = 24U;
volatile int32_t t88 = -35;
uint64_t t89 = 3485351333898999660LLU;
int64_t x1845 = INT64_MAX;
uint64_t t90 = 3971LLU;
uint64_t t91 = 72LLU;
static int64_t x1937 = -1LL;
volatile uint16_t x1938 = 3843U;
int8_t x1947 = INT8_MAX;
int16_t x1948 = INT16_MIN;
uint8_t x1973 = 0U;
int64_t x2037 = -1LL;
uint8_t x2038 = 0U;
int32_t t97 = 0;
volatile uint64_t t99 = 1167251772924280LLU;


void f0(void) {
	int16_t x17 = -1;
	uint8_t x18 = 10U;
	int8_t x19 = 1;
	int16_t x20 = -1;
	int32_t t0 = -12192138;

	t0 = (x17-(x18<<(x19&x20)));

	if (t0 != -21) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x29 = -1;
	volatile uint32_t x30 = UINT32_MAX;
	int32_t x31 = -75822;

	t1 = (x29-(x30<<(x31&x32)));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x61 = 454769199785LL;
	uint32_t x62 = 1965208U;
	int64_t t2 = -2427683LL;

	t2 = (x61-(x62<<(x63&x64)));

	if (t2 != 453158587049LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x77 = INT8_MIN;
	int16_t x79 = 0;

	t3 = (x77-(x78<<(x79&x80)));

	if (t3 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x89 = UINT8_MAX;
	uint16_t x90 = 62U;
	int32_t t4 = 1308;

	t4 = (x89-(x90<<(x91&x92)));

	if (t4 != 193) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x149 = INT8_MIN;
	uint32_t x152 = UINT32_MAX;
	static uint64_t t5 = 3155289013696570LLU;

	t5 = (x149-(x150<<(x151&x152)));

	if (t5 != 18446744073709551306LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x189 = 4055U;
	static uint16_t x190 = 120U;
	static int8_t x191 = -11;
	uint16_t x192 = 0U;
	volatile int32_t t6 = 18564;

	t6 = (x189-(x190<<(x191&x192)));

	if (t6 != 3935) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x205 = UINT32_MAX;
	int64_t x206 = 12216857023386LL;
	static int32_t x207 = INT32_MAX;
	int8_t x208 = 11;

	t7 = (x205-(x206<<(x207&x208)));

	if (t7 != -25020118888927233LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x242 = 136;
	volatile uint32_t x243 = 4U;
	uint32_t x244 = 831989U;
	int32_t t8 = 1362;

	t8 = (x241-(x242<<(x243&x244)));

	if (t8 != -1964) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x265 = INT16_MIN;
	volatile uint8_t x266 = UINT8_MAX;
	int8_t x267 = INT8_MAX;
	int32_t x268 = INT32_MIN;
	int32_t t9 = -1;

	t9 = (x265-(x266<<(x267&x268)));

	if (t9 != -33023) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x273 = UINT32_MAX;
	static int32_t x274 = 0;
	volatile uint32_t t10 = UINT32_MAX;

	t10 = (x273-(x274<<(x275&x276)));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x302 = 89655LL;
	int8_t x303 = 7;
	volatile int64_t x304 = INT64_MIN;
	volatile int64_t t11 = -5888175027076969LL;

	t11 = (x301-(x302<<(x303&x304)));

	if (t11 != -56888LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x305 = -503LL;
	volatile uint64_t x306 = 152039938LLU;
	uint8_t x307 = 0U;
	uint64_t x308 = 649LLU;

	t12 = (x305-(x306<<(x307&x308)));

	if (t12 != 18446744073557511175LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x325 = 2077423LLU;
	int16_t x326 = 21;
	uint16_t x327 = UINT16_MAX;
	volatile int16_t x328 = 0;
	volatile uint64_t t13 = 13LLU;

	t13 = (x325-(x326<<(x327&x328)));

	if (t13 != 2077402LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x337 = -399574511684LL;
	uint16_t x338 = 7201U;
	int32_t x339 = 79;
	volatile int64_t t14 = 16LL;

	t14 = (x337-(x338<<(x339&x340)));

	if (t14 != -399575433412LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x361 = UINT8_MAX;
	volatile uint16_t x362 = UINT16_MAX;
	uint8_t x363 = 2U;
	static uint8_t x364 = 1U;

	t15 = (x361-(x362<<(x363&x364)));

	if (t15 != -65280) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x365 = -406878910098LL;
	static int16_t x367 = INT16_MIN;
	int16_t x368 = INT16_MAX;
	int64_t t16 = 50LL;

	t16 = (x365-(x366<<(x367&x368)));

	if (t16 != -406878910101LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x377 = INT8_MIN;
	static volatile int16_t x378 = INT16_MAX;
	uint64_t x379 = 115LLU;
	uint8_t x380 = 20U;
	volatile int32_t t17 = -7;

	t17 = (x377-(x378<<(x379&x380)));

	if (t17 != -2147418240) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x389 = 23130124582244LL;
	int8_t x391 = INT8_MAX;
	int16_t x392 = INT16_MIN;
	volatile int64_t t18 = -7637868624174909LL;

	t18 = (x389-(x390<<(x391&x392)));

	if (t18 != 23130124582225LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x393 = UINT16_MAX;
	static int64_t x395 = -1LL;
	volatile uint16_t x396 = 3U;

	t19 = (x393-(x394<<(x395&x396)));

	if (t19 != 65415) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x413 = -1;
	static int8_t x414 = 0;
	uint8_t x415 = 1U;
	volatile int32_t t20 = -1;

	t20 = (x413-(x414<<(x415&x416)));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x425 = INT8_MIN;
	int32_t x426 = 0;
	uint8_t x428 = 10U;
	static volatile int32_t t21 = 5964627;

	t21 = (x425-(x426<<(x427&x428)));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x433 = INT16_MAX;
	static int8_t x434 = 0;
	uint8_t x435 = 0U;
	int8_t x436 = INT8_MIN;

	t22 = (x433-(x434<<(x435&x436)));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x465 = UINT16_MAX;
	uint32_t x466 = 20509215U;
	int16_t x467 = INT16_MIN;
	int16_t x468 = 228;
	volatile uint32_t t23 = 1192U;

	t23 = (x465-(x466<<(x467&x468)));

	if (t23 != 4274523616U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x478 = 1U;
	int16_t x479 = INT16_MIN;
	int16_t x480 = 160;
	static volatile int64_t t24 = 918LL;

	t24 = (x477-(x478<<(x479&x480)));

	if (t24 != 113692859463152LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x485 = INT32_MAX;
	uint16_t x486 = 2039U;
	volatile int32_t x488 = INT32_MIN;
	static volatile int32_t t25 = 260000734;

	t25 = (x485-(x486<<(x487&x488)));

	if (t25 != 2147481608) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x497 = UINT64_MAX;
	uint32_t x498 = 64U;
	uint16_t x499 = 67U;
	volatile uint64_t t26 = 25LLU;

	t26 = (x497-(x498<<(x499&x500)));

	if (t26 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x509 = 46U;
	static uint16_t x510 = 1312U;

	t27 = (x509-(x510<<(x511&x512)));

	if (t27 != -2686930) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x545 = 1U;
	uint32_t x546 = 384654U;
	volatile uint32_t x548 = 258765065U;
	volatile uint32_t t28 = 1836331031U;

	t28 = (x545-(x546<<(x547&x548)));

	if (t28 != 4294582643U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x569 = -1;
	uint32_t x570 = 354U;
	uint64_t x571 = 1LLU;
	static uint64_t x572 = UINT64_MAX;

	t29 = (x569-(x570<<(x571&x572)));

	if (t29 != 4294966587U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x610 = 144167738LLU;
	volatile int16_t x611 = 8343;
	uint64_t x612 = 11LLU;

	t30 = (x609-(x610<<(x611&x612)));

	if (t30 != 18446744072556209713LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x625 = -1;
	int8_t x626 = INT8_MAX;
	int32_t x627 = INT32_MIN;
	uint64_t x628 = 966398282LLU;
	volatile int32_t t31 = 501764578;

	t31 = (x625-(x626<<(x627&x628)));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x637 = -1;
	uint8_t x638 = UINT8_MAX;
	int16_t x639 = INT16_MIN;
	volatile int32_t x640 = 14;
	volatile int32_t t32 = 4589;

	t32 = (x637-(x638<<(x639&x640)));

	if (t32 != -256) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x681 = INT32_MIN;
	uint64_t x682 = 24291364085LLU;
	static int16_t x683 = INT16_MIN;
	uint32_t x684 = 11U;
	static uint64_t t33 = 164458584083LLU;

	t33 = (x681-(x682<<(x683&x684)));

	if (t33 != 18446744047270703883LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x697 = 22U;
	static volatile int32_t x699 = INT32_MAX;
	int64_t x700 = INT64_MIN;

	t34 = (x697-(x698<<(x699&x700)));

	if (t34 != 2147483671U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x754 = 4U;
	static int16_t x755 = 1390;
	int32_t t35 = 545392804;

	t35 = (x753-(x754<<(x755&x756)));

	if (t35 != -16512) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x765 = -1;
	uint8_t x766 = 9U;
	volatile int64_t x767 = INT64_MIN;
	volatile int32_t t36 = 64646;

	t36 = (x765-(x766<<(x767&x768)));

	if (t36 != -10) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x793 = 0U;
	volatile int16_t x794 = 28;
	int32_t x795 = INT32_MIN;
	static uint8_t x796 = 7U;
	static int32_t t37 = 475755394;

	t37 = (x793-(x794<<(x795&x796)));

	if (t37 != -28) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x797 = 17420U;
	static uint8_t x798 = UINT8_MAX;
	static volatile int32_t t38 = -1024498;

	t38 = (x797-(x798<<(x799&x800)));

	if (t38 != 17165) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x805 = 3437690272727LLU;
	uint16_t x806 = 16U;
	volatile int8_t x807 = 14;
	int8_t x808 = INT8_MAX;
	static uint64_t t39 = 65790857728318LLU;

	t39 = (x805-(x806<<(x807&x808)));

	if (t39 != 3437690010583LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x813 = INT16_MAX;
	uint8_t x816 = 3U;
	volatile int32_t t40 = -16;

	t40 = (x813-(x814<<(x815&x816)));

	if (t40 != 32766) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x825 = UINT8_MAX;
	static int32_t x826 = 12856;
	volatile uint16_t x828 = 15U;
	volatile int32_t t41 = -1773;

	t41 = (x825-(x826<<(x827&x828)));

	if (t41 != -421265153) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x890 = UINT8_MAX;
	uint8_t x892 = UINT8_MAX;
	uint32_t t42 = 2052U;

	t42 = (x889-(x890<<(x891&x892)));

	if (t42 != 2483U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x917 = INT64_MIN;
	uint64_t x918 = UINT64_MAX;
	int16_t x919 = INT16_MAX;
	uint64_t t43 = 96LLU;

	t43 = (x917-(x918<<(x919&x920)));

	if (t43 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x945 = -39734257747993867LL;
	static uint64_t x946 = 2861553998944LLU;
	uint32_t x947 = 361275U;
	int64_t x948 = INT64_MIN;
	volatile uint64_t t44 = 4417LLU;

	t44 = (x945-(x946<<(x947&x948)));

	if (t44 != 18407006954407558805LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x1022 = 330U;
	uint32_t x1023 = 7U;
	int64_t x1024 = -1LL;

	t45 = (x1021-(x1022<<(x1023&x1024)));

	if (t45 != -45012) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1037 = -1LL;
	volatile int32_t x1039 = INT32_MIN;
	volatile uint64_t t46 = 17321014300257514LLU;

	t46 = (x1037-(x1038<<(x1039&x1040)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1057 = -1LL;
	static int8_t x1059 = INT8_MIN;
	volatile int64_t t47 = 2057787728947LL;

	t47 = (x1057-(x1058<<(x1059&x1060)));

	if (t47 != -93LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1061 = -11;
	int16_t x1062 = 34;
	uint64_t x1063 = 14LLU;
	int32_t x1064 = INT32_MIN;

	t48 = (x1061-(x1062<<(x1063&x1064)));

	if (t48 != -45) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1123 = INT16_MIN;
	uint8_t x1124 = UINT8_MAX;
	int32_t t49 = 2;

	t49 = (x1121-(x1122<<(x1123&x1124)));

	if (t49 != -33023) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1145 = -202987LL;
	volatile uint16_t x1146 = 22318U;
	static uint64_t x1147 = 9031780987801773487LLU;
	int8_t x1148 = 3;
	volatile int64_t t50 = 3643948217702752099LL;

	t50 = (x1145-(x1146<<(x1147&x1148)));

	if (t50 != -381531LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x1169 = 18178704475342142LLU;
	uint64_t x1170 = 271772LLU;
	static int8_t x1171 = -1;
	int16_t x1172 = 14;
	volatile uint64_t t51 = 125629622669059LLU;

	t51 = (x1169-(x1170<<(x1171&x1172)));

	if (t51 != 18178700022629694LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1178 = 24;
	int8_t x1180 = INT8_MIN;
	volatile int64_t t52 = -5LL;

	t52 = (x1177-(x1178<<(x1179&x1180)));

	if (t52 != -25LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x1197 = -1;
	static uint8_t x1198 = UINT8_MAX;
	int64_t x1199 = INT64_MIN;
	int32_t t53 = 97869;

	t53 = (x1197-(x1198<<(x1199&x1200)));

	if (t53 != -256) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1221 = -1;
	volatile uint32_t x1222 = UINT32_MAX;
	uint16_t x1224 = 12U;
	uint32_t t54 = 50564097U;

	t54 = (x1221-(x1222<<(x1223&x1224)));

	if (t54 != 4095U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1241 = INT32_MAX;
	volatile uint16_t x1242 = 78U;
	int32_t t55 = 646;

	t55 = (x1241-(x1242<<(x1243&x1244)));

	if (t55 != 2147483569) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1253 = -5538;
	static uint64_t x1254 = 119767603LLU;
	static int32_t x1255 = 91;
	int8_t x1256 = 7;
	volatile uint64_t t56 = 548046931LLU;

	t56 = (x1253-(x1254<<(x1255&x1256)));

	if (t56 != 18446744072751405254LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x1265 = UINT32_MAX;
	uint8_t x1267 = 7U;
	int8_t x1268 = -63;
	static uint32_t t57 = 539824319U;

	t57 = (x1265-(x1266<<(x1267&x1268)));

	if (t57 != 4294967041U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x1277 = -1;
	uint32_t x1278 = UINT32_MAX;
	volatile int16_t x1279 = 3;
	int16_t x1280 = -1;
	volatile uint32_t t58 = 3536913U;

	t58 = (x1277-(x1278<<(x1279&x1280)));

	if (t58 != 7U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x1285 = 10U;
	int8_t x1286 = INT8_MAX;
	volatile int16_t x1287 = 1;
	volatile uint16_t x1288 = 12344U;
	volatile int32_t t59 = 10;

	t59 = (x1285-(x1286<<(x1287&x1288)));

	if (t59 != -117) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1306 = 3286LL;
	int64_t x1308 = INT64_MIN;
	uint64_t t60 = 1896985LLU;

	t60 = (x1305-(x1306<<(x1307&x1308)));

	if (t60 != 18446744073709548992LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x1313 = UINT8_MAX;
	int32_t x1314 = 25744;
	int16_t x1316 = 2378;

	t61 = (x1313-(x1314<<(x1315&x1316)));

	if (t61 != -6590209) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1321 = 0;
	uint8_t x1324 = 1U;
	int32_t t62 = 51;

	t62 = (x1321-(x1322<<(x1323&x1324)));

	if (t62 != -510) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1329 = INT32_MAX;
	volatile uint64_t x1331 = UINT64_MAX;
	int32_t x1332 = 1;
	volatile int32_t t63 = 165720;

	t63 = (x1329-(x1330<<(x1331&x1332)));

	if (t63 != 2147352577) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x1341 = INT16_MIN;
	volatile int16_t x1342 = 15;
	uint16_t x1344 = UINT16_MAX;
	volatile int32_t t64 = 2453994;

	t64 = (x1341-(x1342<<(x1343&x1344)));

	if (t64 != -32888) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x1358 = 65965270838635296LLU;
	static int16_t x1359 = 0;
	int32_t x1360 = -321314253;
	static volatile uint64_t t65 = 1312130LLU;

	t65 = (x1357-(x1358<<(x1359&x1360)));

	if (t65 != 18380778802870916373LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x1377 = 17952872U;
	volatile uint32_t x1378 = UINT32_MAX;
	int8_t x1379 = 30;

	t66 = (x1377-(x1378<<(x1379&x1380)));

	if (t66 != 286388328U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x1409 = 524910323LL;
	int64_t x1410 = INT64_MAX;
	uint8_t x1411 = 19U;
	int64_t t67 = 15LL;

	t67 = (x1409-(x1410<<(x1411&x1412)));

	if (t67 != -9223372036329865484LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x1433 = UINT8_MAX;
	volatile uint32_t x1434 = 214525U;
	int64_t x1435 = 2848920033402LL;
	static uint32_t t68 = 504024223U;

	t68 = (x1433-(x1434<<(x1435&x1436)));

	if (t68 != 4294109451U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x1437 = INT16_MIN;
	uint8_t x1440 = 10U;
	volatile int32_t t69 = 948887;

	t69 = (x1437-(x1438<<(x1439&x1440)));

	if (t69 != -67140608) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x1441 = INT16_MAX;
	volatile uint64_t x1442 = 313733LLU;
	uint32_t x1443 = UINT32_MAX;
	int32_t x1444 = 0;
	uint64_t t70 = 729469LLU;

	t70 = (x1441-(x1442<<(x1443&x1444)));

	if (t70 != 18446744073709270650LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x1445 = 4U;
	int8_t x1446 = INT8_MAX;
	static uint32_t x1448 = 1826224940U;

	t71 = (x1445-(x1446<<(x1447&x1448)));

	if (t71 != -123) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x1457 = -19903717;
	uint32_t x1459 = UINT32_MAX;
	int64_t t72 = -130027050068LL;

	t72 = (x1457-(x1458<<(x1459&x1460)));

	if (t72 != -413694038475LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x1495 = 102U;
	int32_t x1496 = INT32_MIN;
	volatile uint32_t t73 = 280U;

	t73 = (x1493-(x1494<<(x1495&x1496)));

	if (t73 != 2147483645U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x1501 = UINT64_MAX;
	volatile uint64_t x1502 = 85403604062LLU;
	static int8_t x1503 = INT8_MIN;
	uint8_t x1504 = 1U;

	t74 = (x1501-(x1502<<(x1503&x1504)));

	if (t74 != 18446743988305947553LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x1545 = INT64_MAX;
	int8_t x1546 = 0;
	int8_t x1547 = 0;
	static volatile uint16_t x1548 = 16099U;
	int64_t t75 = INT64_MAX;

	t75 = (x1545-(x1546<<(x1547&x1548)));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x1585 = 480640U;
	uint16_t x1586 = 22381U;
	int32_t x1587 = INT32_MIN;
	uint16_t x1588 = UINT16_MAX;
	uint32_t t76 = 5U;

	t76 = (x1585-(x1586<<(x1587&x1588)));

	if (t76 != 458259U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x1637 = INT16_MAX;
	uint16_t x1640 = UINT16_MAX;
	static int32_t t77 = 50760296;

	t77 = (x1637-(x1638<<(x1639&x1640)));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x1681 = 0;
	int32_t x1682 = INT32_MAX;
	int16_t x1684 = INT16_MIN;
	int32_t t78 = -2672812;

	t78 = (x1681-(x1682<<(x1683&x1684)));

	if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x1705 = 3U;
	static uint32_t x1706 = 305595552U;
	static volatile int32_t x1707 = INT32_MIN;
	uint32_t t79 = 4941718U;

	t79 = (x1705-(x1706<<(x1707&x1708)));

	if (t79 != 3989371747U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x1710 = UINT32_MAX;
	static int8_t x1711 = 28;
	uint16_t x1712 = 25U;
	static uint32_t t80 = 143U;

	t80 = (x1709-(x1710<<(x1711&x1712)));

	if (t80 != 2164260864U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x1745 = 33816658625618LLU;
	static uint8_t x1747 = UINT8_MAX;
	int8_t x1748 = 1;

	t81 = (x1745-(x1746<<(x1747&x1748)));

	if (t81 != 33816658625618LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x1749 = -1;
	uint16_t x1750 = 609U;
	int8_t x1751 = INT8_MIN;
	static int32_t t82 = 349;

	t82 = (x1749-(x1750<<(x1751&x1752)));

	if (t82 != -610) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x1781 = INT8_MIN;
	uint16_t x1782 = 13661U;
	volatile int16_t x1783 = INT16_MIN;
	int16_t x1784 = INT16_MAX;
	static int32_t t83 = -18463;

	t83 = (x1781-(x1782<<(x1783&x1784)));

	if (t83 != -13789) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x1809 = UINT8_MAX;
	int64_t x1810 = 2725LL;
	uint32_t x1811 = 1U;
	int32_t x1812 = -1;

	t84 = (x1809-(x1810<<(x1811&x1812)));

	if (t84 != -5195LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x1813 = -83952681009228LL;
	int32_t x1814 = 178299962;
	static int8_t x1815 = 15;
	int16_t x1816 = 0;
	volatile int64_t t85 = -1768356400574701860LL;

	t85 = (x1813-(x1814<<(x1815&x1816)));

	if (t85 != -83952859309190LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x1817 = INT32_MAX;
	uint8_t x1818 = UINT8_MAX;
	static int32_t x1819 = -8;
	uint8_t x1820 = 13U;
	volatile int32_t t86 = 3908;

	t86 = (x1817-(x1818<<(x1819&x1820)));

	if (t86 != 2147418367) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x1821 = INT8_MIN;
	uint32_t x1822 = 183757534U;
	uint8_t x1824 = 24U;

	t87 = (x1821-(x1822<<(x1823&x1824)));

	if (t87 != 4111209634U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x1829 = 3709U;
	volatile uint64_t x1831 = 0LLU;
	int32_t x1832 = -1;

	t88 = (x1829-(x1830<<(x1831&x1832)));

	if (t88 != 3685) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x1837 = UINT16_MAX;
	static volatile uint64_t x1838 = 120849LLU;
	int8_t x1839 = INT8_MAX;
	int8_t x1840 = INT8_MIN;

	t89 = (x1837-(x1838<<(x1839&x1840)));

	if (t89 != 18446744073709496302LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x1846 = 960427886LLU;
	static int8_t x1847 = 9;
	volatile int32_t x1848 = -70014;

	t90 = (x1845-(x1846<<(x1847&x1848)));

	if (t90 != 9223372035894347921LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x1853 = 1228;
	uint64_t x1854 = 273906117658496LLU;
	int32_t x1855 = 7;
	int64_t x1856 = INT64_MIN;

	t91 = (x1853-(x1854<<(x1855&x1856)));

	if (t91 != 18446470167591894348LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x1939 = 140LLU;
	int8_t x1940 = 3;
	static volatile int64_t t92 = -26990593LL;

	t92 = (x1937-(x1938<<(x1939&x1940)));

	if (t92 != -3844LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x1945 = 21U;
	volatile uint64_t x1946 = UINT64_MAX;
	volatile uint64_t t93 = 128262LLU;

	t93 = (x1945-(x1946<<(x1947&x1948)));

	if (t93 != 22LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x1974 = 1;
	int8_t x1975 = 1;
	static int8_t x1976 = -1;
	volatile int32_t t94 = 0;

	t94 = (x1973-(x1974<<(x1975&x1976)));

	if (t94 != -2) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1985 = INT8_MIN;
	uint64_t x1986 = 2148900767876920LLU;
	volatile int64_t x1987 = INT64_MIN;
	static int16_t x1988 = INT16_MAX;
	uint64_t t95 = 44336150192404558LLU;

	t95 = (x1985-(x1986<<(x1987&x1988)));

	if (t95 != 18444595172941674568LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x2039 = 266U;
	static int64_t x2040 = INT64_MIN;
	static volatile int64_t t96 = 58LL;

	t96 = (x2037-(x2038<<(x2039&x2040)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x2041 = -1;
	int16_t x2042 = 1;
	uint16_t x2043 = 3U;
	static uint16_t x2044 = 375U;

	t97 = (x2041-(x2042<<(x2043&x2044)));

	if (t97 != -9) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x2077 = 7327140;
	uint64_t x2078 = UINT64_MAX;
	volatile int32_t x2079 = INT32_MIN;
	volatile int32_t x2080 = INT32_MAX;
	volatile uint64_t t98 = 30LLU;

	t98 = (x2077-(x2078<<(x2079&x2080)));

	if (t98 != 7327141LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x2085 = INT32_MAX;
	uint64_t x2086 = UINT64_MAX;
	volatile int32_t x2087 = INT32_MIN;
	static uint8_t x2088 = 106U;

	t99 = (x2085-(x2086<<(x2087&x2088)));

	if (t99 != 2147483648LLU) { NG(); } else { ; }
	
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

