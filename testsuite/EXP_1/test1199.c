#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = INT8_MIN;
int64_t x3 = -1LL;
static uint16_t x9 = 16891U;
static int32_t x11 = INT32_MAX;
int64_t x12 = -678986LL;
uint64_t x13 = 242LLU;
static volatile int16_t x14 = -1;
volatile int16_t x20 = INT16_MAX;
uint16_t x27 = UINT16_MAX;
uint64_t t10 = UINT64_MAX;
volatile int8_t x64 = -1;
static int32_t x73 = INT32_MIN;
static int32_t x76 = 8296179;
static int64_t t14 = 3940525224108044LL;
volatile int64_t x81 = -489277LL;
int16_t x82 = INT16_MAX;
volatile uint32_t t22 = 4739U;
static int64_t x126 = 19865300471892LL;
volatile int32_t t24 = INT32_MIN;
uint16_t x146 = 330U;
uint32_t t27 = 573U;
int8_t x155 = INT8_MIN;
int16_t x161 = 0;
volatile uint64_t t30 = 202840322093925135LLU;
static volatile int8_t x168 = 0;
uint16_t x180 = 7U;
uint16_t x183 = UINT16_MAX;
uint8_t x189 = UINT8_MAX;
volatile int16_t x192 = 178;
uint16_t x215 = 21U;
uint32_t x219 = 2787176U;
volatile int64_t x228 = -96125366LL;
volatile int64_t t40 = 212168LL;
static int16_t x237 = INT16_MIN;
static int8_t x239 = -1;
static int8_t x243 = 24;
volatile int32_t t43 = 1063390084;
int8_t x250 = INT8_MIN;
uint16_t x258 = 30174U;
int8_t x270 = -6;
int16_t x271 = INT16_MAX;
volatile int32_t x304 = -1;
int8_t x321 = INT8_MIN;
uint16_t x322 = 17839U;
uint32_t x326 = UINT32_MAX;
volatile int32_t t57 = -424283;
volatile uint8_t x332 = UINT8_MAX;
int64_t t59 = -310772LL;
uint8_t x337 = 10U;
volatile uint64_t t60 = 946296LLU;
int64_t x348 = 1933373134LL;
int64_t t63 = -3781576502LL;
volatile int64_t t65 = 33840LL;
volatile int64_t t66 = -333062486781343LL;
volatile int16_t x375 = -315;
static volatile int32_t t68 = 57308399;
uint16_t x378 = UINT16_MAX;
int64_t x380 = 3421692LL;
volatile uint64_t t69 = 64289LLU;
static volatile int32_t t70 = 891858;
uint64_t x385 = 453LLU;
int64_t x386 = INT64_MAX;
static int16_t x390 = INT16_MAX;
uint16_t x408 = 416U;
uint8_t x411 = 7U;
volatile int16_t x412 = 7180;
int8_t x413 = INT8_MIN;
volatile int8_t x427 = INT8_MIN;
uint16_t x428 = 73U;
int8_t x438 = 7;
int64_t x439 = -1LL;
static uint32_t x441 = 151185U;
int64_t x448 = -1LL;
int32_t x454 = INT32_MIN;
int16_t x469 = INT16_MAX;
int32_t x493 = INT32_MIN;
static int16_t x497 = 8;
uint32_t x499 = UINT32_MAX;
static int64_t x500 = INT64_MIN;
static uint32_t x503 = 0U;
int32_t x510 = INT32_MIN;
int64_t x511 = -740LL;
uint64_t t96 = 58649LLU;
int32_t x513 = INT32_MIN;
int32_t t98 = 646388309;


void f0(void) {
	static int32_t x2 = INT32_MAX;
	uint16_t x4 = 3820U;
	int64_t t0 = 3736374198470196LL;

	t0 = (((x1==x2)-x3)*x4);

	if (t0 != 3820LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -13978721989LL;
	int8_t x6 = -1;
	int8_t x7 = INT8_MIN;
	uint64_t x8 = 28LLU;
	static volatile uint64_t t1 = 84043554949LLU;

	t1 = (((x5==x6)-x7)*x8);

	if (t1 != 3584LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 471996441630879LLU;
	volatile int64_t t2 = 3472719264283409LL;

	t2 = (((x9==x10)-x11)*x12);

	if (t2 != 1458111331541942LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x15 = 10596U;
	volatile uint32_t x16 = 5898811U;
	volatile uint32_t t3 = 23557U;

	t3 = (((x13==x14)-x15)*x16);

	if (t3 != 1920708084U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	static uint16_t x18 = 5U;
	int8_t x19 = INT8_MIN;
	volatile int32_t t4 = -90296863;

	t4 = (((x17==x18)-x19)*x20);

	if (t4 != 4194176) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	uint16_t x22 = 0U;
	uint64_t x23 = 782111264538600195LLU;
	static volatile uint64_t x24 = UINT64_MAX;
	uint64_t t5 = 14816403LLU;

	t5 = (((x21==x22)-x23)*x24);

	if (t5 != 782111264538600195LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 2455039269082134LLU;
	volatile int16_t x26 = INT16_MAX;
	uint8_t x28 = 0U;
	volatile int32_t t6 = 45182861;

	t6 = (((x25==x26)-x27)*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = 127LLU;
	int64_t x30 = -26802803458556324LL;
	uint16_t x31 = 0U;
	int8_t x32 = INT8_MAX;
	int32_t t7 = -76083064;

	t7 = (((x29==x30)-x31)*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 3;
	int64_t x34 = INT64_MIN;
	static uint32_t x35 = UINT32_MAX;
	uint16_t x36 = 21732U;
	volatile uint32_t t8 = 199242249U;

	t8 = (((x33==x34)-x35)*x36);

	if (t8 != 21732U) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MIN;
	uint16_t x38 = 0U;
	uint8_t x39 = UINT8_MAX;
	volatile int8_t x40 = 15;
	static int32_t t9 = -3;

	t9 = (((x37==x38)-x39)*x40);

	if (t9 != -3825) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = UINT32_MAX;
	int64_t x50 = INT64_MIN;
	volatile uint64_t x51 = UINT64_MAX;
	int16_t x52 = -1;

	t10 = (((x49==x50)-x51)*x52);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = 69;
	static volatile uint64_t x58 = 247785119LLU;
	uint16_t x59 = 64U;
	static int8_t x60 = -1;
	int32_t t11 = -4038422;

	t11 = (((x57==x58)-x59)*x60);

	if (t11 != 64) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x61 = UINT32_MAX;
	volatile int64_t x62 = -7LL;
	int8_t x63 = INT8_MIN;
	int32_t t12 = 3097;

	t12 = (((x61==x62)-x63)*x64);

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x69 = INT8_MIN;
	volatile uint64_t x70 = 536670952851065LLU;
	int64_t x71 = -1LL;
	static int64_t x72 = INT64_MIN;
	int64_t t13 = INT64_MIN;

	t13 = (((x69==x70)-x71)*x72);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x74 = 0U;
	static int64_t x75 = 363LL;

	t14 = (((x73==x74)-x75)*x76);

	if (t14 != -3011512977LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = INT32_MAX;
	static volatile uint32_t x78 = 586U;
	volatile uint32_t x79 = UINT32_MAX;
	int32_t x80 = 27;
	uint32_t t15 = 5546977U;

	t15 = (((x77==x78)-x79)*x80);

	if (t15 != 27U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x83 = INT16_MIN;
	volatile int8_t x84 = INT8_MIN;
	int32_t t16 = -1;

	t16 = (((x81==x82)-x83)*x84);

	if (t16 != -4194304) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x89 = UINT8_MAX;
	volatile int64_t x90 = INT64_MIN;
	int64_t x91 = 1LL;
	int64_t x92 = -2285236050419100127LL;
	volatile int64_t t17 = -434180082LL;

	t17 = (((x89==x90)-x91)*x92);

	if (t17 != 2285236050419100127LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x97 = INT16_MAX;
	uint16_t x98 = 23U;
	int8_t x99 = INT8_MIN;
	int16_t x100 = INT16_MIN;
	int32_t t18 = -1;

	t18 = (((x97==x98)-x99)*x100);

	if (t18 != -4194304) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x105 = 115U;
	int32_t x106 = INT32_MIN;
	volatile int64_t x107 = -3399068207351658LL;
	int32_t x108 = -923;
	int64_t t19 = 1383879495LL;

	t19 = (((x105==x106)-x107)*x108);

	if (t19 != -3137339955385580334LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x113 = 9970888U;
	uint64_t x114 = UINT64_MAX;
	volatile int16_t x115 = INT16_MIN;
	uint16_t x116 = 1U;
	static int32_t t20 = 1443305;

	t20 = (((x113==x114)-x115)*x116);

	if (t20 != 32768) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x117 = UINT16_MAX;
	int8_t x118 = INT8_MAX;
	int16_t x119 = -10;
	int8_t x120 = -1;
	int32_t t21 = -15628;

	t21 = (((x117==x118)-x119)*x120);

	if (t21 != -10) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x121 = INT64_MIN;
	static int32_t x122 = 400159;
	uint32_t x123 = 9136355U;
	volatile int8_t x124 = INT8_MIN;

	t22 = (((x121==x122)-x123)*x124);

	if (t22 != 1169453440U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x125 = 919U;
	int16_t x127 = 1;
	int8_t x128 = 48;
	int32_t t23 = -1;

	t23 = (((x125==x126)-x127)*x128);

	if (t23 != -48) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x129 = 7105U;
	volatile uint32_t x130 = 146253U;
	int8_t x131 = -1;
	volatile int32_t x132 = INT32_MIN;

	t24 = (((x129==x130)-x131)*x132);

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x133 = 20710902U;
	int32_t x134 = INT32_MIN;
	static uint32_t x135 = 5U;
	static uint64_t x136 = UINT64_MAX;
	volatile uint64_t t25 = 302179LLU;

	t25 = (((x133==x134)-x135)*x136);

	if (t25 != 18446744069414584325LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x137 = 19LLU;
	int32_t x138 = INT32_MIN;
	volatile int8_t x139 = -1;
	volatile int16_t x140 = INT16_MIN;
	volatile int32_t t26 = -418958;

	t26 = (((x137==x138)-x139)*x140);

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x145 = 1U;
	uint32_t x147 = 287U;
	uint8_t x148 = 9U;

	t27 = (((x145==x146)-x147)*x148);

	if (t27 != 4294964713U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x153 = 4U;
	volatile uint32_t x154 = 881U;
	volatile int64_t x156 = -2512986317LL;
	volatile int64_t t28 = -41773LL;

	t28 = (((x153==x154)-x155)*x156);

	if (t28 != -321662248576LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x157 = INT16_MAX;
	int32_t x158 = INT32_MIN;
	uint64_t x159 = 123LLU;
	int64_t x160 = INT64_MIN;
	static volatile uint64_t t29 = 133945561046LLU;

	t29 = (((x157==x158)-x159)*x160);

	if (t29 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x162 = 57U;
	int32_t x163 = -100883640;
	uint64_t x164 = 3953668231654792468LLU;

	t30 = (((x161==x162)-x163)*x164);

	if (t30 != 16919283082124990048LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x165 = INT64_MIN;
	uint32_t x166 = 7527897U;
	uint16_t x167 = UINT16_MAX;
	volatile int32_t t31 = -456590;

	t31 = (((x165==x166)-x167)*x168);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x169 = INT32_MIN;
	volatile int16_t x170 = -1;
	uint64_t x171 = UINT64_MAX;
	volatile uint16_t x172 = 0U;
	volatile uint64_t t32 = 0LLU;

	t32 = (((x169==x170)-x171)*x172);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x177 = 3;
	static int8_t x178 = INT8_MIN;
	uint64_t x179 = 76614027291032741LLU;
	static uint64_t t33 = 24926843682986582LLU;

	t33 = (((x177==x178)-x179)*x180);

	if (t33 != 17910445882672322429LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x181 = 23U;
	volatile uint8_t x182 = 49U;
	static volatile int32_t x184 = -13;
	static volatile int32_t t34 = 604312035;

	t34 = (((x181==x182)-x183)*x184);

	if (t34 != 851955) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x190 = 240425455LL;
	uint64_t x191 = 428731LLU;
	uint64_t t35 = 1370272057743231336LLU;

	t35 = (((x189==x190)-x191)*x192);

	if (t35 != 18446744073633237498LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x209 = 172;
	uint16_t x210 = 1664U;
	uint32_t x211 = 1948970231U;
	volatile uint8_t x212 = UINT8_MAX;
	volatile uint32_t t36 = 6U;

	t36 = (((x209==x210)-x211)*x212);

	if (t36 != 1228797431U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x213 = 11U;
	volatile uint64_t x214 = 25852466541451LLU;
	int16_t x216 = INT16_MAX;
	volatile int32_t t37 = -407207;

	t37 = (((x213==x214)-x215)*x216);

	if (t37 != -688107) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x217 = -4111864LL;
	static uint8_t x218 = 122U;
	static int32_t x220 = INT32_MIN;
	uint32_t t38 = 14879500U;

	t38 = (((x217==x218)-x219)*x220);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x221 = 17431U;
	uint64_t x222 = 146LLU;
	int16_t x223 = INT16_MIN;
	int8_t x224 = INT8_MIN;
	int32_t t39 = -3814;

	t39 = (((x221==x222)-x223)*x224);

	if (t39 != -4194304) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x225 = 22;
	static uint16_t x226 = 2562U;
	uint8_t x227 = 108U;

	t40 = (((x225==x226)-x227)*x228);

	if (t40 != 10381539528LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x233 = UINT16_MAX;
	volatile int16_t x234 = -1;
	volatile int8_t x235 = -1;
	uint32_t x236 = UINT32_MAX;
	static uint32_t t41 = UINT32_MAX;

	t41 = (((x233==x234)-x235)*x236);

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x238 = INT64_MIN;
	int16_t x240 = INT16_MIN;
	int32_t t42 = -7;

	t42 = (((x237==x238)-x239)*x240);

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x241 = UINT16_MAX;
	uint16_t x242 = UINT16_MAX;
	int32_t x244 = -107;

	t43 = (((x241==x242)-x243)*x244);

	if (t43 != 2461) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x249 = 0U;
	static int32_t x251 = -307463015;
	uint64_t x252 = 1802458316LLU;
	volatile uint64_t t44 = 956526968146LLU;

	t44 = (((x249==x250)-x251)*x252);

	if (t44 != 554189268249182740LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x253 = -1;
	volatile int16_t x254 = -1;
	int32_t x255 = INT32_MAX;
	volatile uint32_t x256 = UINT32_MAX;
	uint32_t t45 = 3U;

	t45 = (((x253==x254)-x255)*x256);

	if (t45 != 2147483646U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x257 = INT16_MIN;
	static uint16_t x259 = 67U;
	uint32_t x260 = UINT32_MAX;
	volatile uint32_t t46 = 23338385U;

	t46 = (((x257==x258)-x259)*x260);

	if (t46 != 67U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x265 = 121;
	static int16_t x266 = INT16_MIN;
	uint32_t x267 = 1U;
	uint32_t x268 = UINT32_MAX;
	uint32_t t47 = 7429917U;

	t47 = (((x265==x266)-x267)*x268);

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x269 = -11;
	uint8_t x272 = UINT8_MAX;
	int32_t t48 = -58;

	t48 = (((x269==x270)-x271)*x272);

	if (t48 != -8355585) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x281 = INT16_MIN;
	static int64_t x282 = INT64_MIN;
	int8_t x283 = 10;
	int32_t x284 = -2;
	volatile int32_t t49 = 15771433;

	t49 = (((x281==x282)-x283)*x284);

	if (t49 != 20) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x289 = UINT64_MAX;
	uint8_t x290 = 54U;
	int8_t x291 = -1;
	int32_t x292 = -1;
	volatile int32_t t50 = -14;

	t50 = (((x289==x290)-x291)*x292);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x297 = UINT8_MAX;
	int8_t x298 = -7;
	int8_t x299 = 3;
	int16_t x300 = INT16_MIN;
	volatile int32_t t51 = 17569109;

	t51 = (((x297==x298)-x299)*x300);

	if (t51 != 98304) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x301 = 15276U;
	int16_t x302 = -1;
	int64_t x303 = -232007LL;
	int64_t t52 = 5211810917542299LL;

	t52 = (((x301==x302)-x303)*x304);

	if (t52 != -232007LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x305 = 105;
	static volatile uint64_t x306 = 4800LLU;
	int32_t x307 = 1285043;
	volatile int16_t x308 = -1;
	int32_t t53 = 371406;

	t53 = (((x305==x306)-x307)*x308);

	if (t53 != 1285043) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x313 = 801900181LLU;
	int8_t x314 = INT8_MIN;
	int8_t x315 = INT8_MIN;
	volatile int16_t x316 = 0;
	volatile int32_t t54 = 1969997;

	t54 = (((x313==x314)-x315)*x316);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x317 = -105LL;
	uint64_t x318 = 3160716LLU;
	int16_t x319 = INT16_MIN;
	volatile int64_t x320 = 2377LL;
	static volatile int64_t t55 = 14217867LL;

	t55 = (((x317==x318)-x319)*x320);

	if (t55 != 77889536LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x323 = -1LL;
	int16_t x324 = INT16_MAX;
	volatile int64_t t56 = -713LL;

	t56 = (((x321==x322)-x323)*x324);

	if (t56 != 32767LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x325 = -375358LL;
	int32_t x327 = 462218;
	int16_t x328 = -137;

	t57 = (((x325==x326)-x327)*x328);

	if (t57 != 63323866) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x329 = 1;
	int32_t x330 = INT32_MIN;
	uint32_t x331 = 54626512U;
	volatile uint32_t t58 = 184205450U;

	t58 = (((x329==x330)-x331)*x332);

	if (t58 != 3250108624U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x333 = 1831U;
	static int8_t x334 = INT8_MAX;
	volatile int64_t x335 = -6LL;
	int8_t x336 = INT8_MAX;

	t59 = (((x333==x334)-x335)*x336);

	if (t59 != 762LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x338 = INT32_MAX;
	volatile uint64_t x339 = UINT64_MAX;
	int8_t x340 = INT8_MIN;

	t60 = (((x337==x338)-x339)*x340);

	if (t60 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x345 = INT32_MIN;
	int16_t x346 = INT16_MIN;
	uint8_t x347 = 69U;
	static volatile int64_t t61 = -54012LL;

	t61 = (((x345==x346)-x347)*x348);

	if (t61 != -133402746246LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x349 = INT16_MIN;
	int32_t x350 = 2868;
	static volatile uint32_t x351 = UINT32_MAX;
	int64_t x352 = INT64_MIN;
	static int64_t t62 = INT64_MIN;

	t62 = (((x349==x350)-x351)*x352);

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x353 = -6;
	int16_t x354 = -218;
	int16_t x355 = -1;
	volatile int64_t x356 = 416596LL;

	t63 = (((x353==x354)-x355)*x356);

	if (t63 != 416596LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x357 = 0U;
	static volatile uint32_t x358 = UINT32_MAX;
	int32_t x359 = -608232;
	static volatile int16_t x360 = -16;
	volatile int32_t t64 = 2549709;

	t64 = (((x357==x358)-x359)*x360);

	if (t64 != -9731712) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x361 = 38476774514695441LL;
	int64_t x362 = -737017298LL;
	static int32_t x363 = -261;
	int64_t x364 = 330551LL;

	t65 = (((x361==x362)-x363)*x364);

	if (t65 != 86273811LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x365 = -2;
	int8_t x366 = 0;
	int64_t x367 = 14738LL;
	static volatile int16_t x368 = 2;

	t66 = (((x365==x366)-x367)*x368);

	if (t66 != -29476LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x369 = UINT16_MAX;
	static volatile uint8_t x370 = UINT8_MAX;
	uint8_t x371 = 13U;
	int8_t x372 = INT8_MIN;
	int32_t t67 = -1;

	t67 = (((x369==x370)-x371)*x372);

	if (t67 != 1664) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x373 = INT32_MIN;
	volatile int32_t x374 = INT32_MIN;
	int16_t x376 = -1;

	t68 = (((x373==x374)-x375)*x376);

	if (t68 != -316) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x377 = UINT64_MAX;
	uint64_t x379 = UINT64_MAX;

	t69 = (((x377==x378)-x379)*x380);

	if (t69 != 3421692LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x381 = INT32_MAX;
	int64_t x382 = INT64_MIN;
	uint8_t x383 = 0U;
	volatile uint8_t x384 = UINT8_MAX;

	t70 = (((x381==x382)-x383)*x384);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x387 = 1;
	int16_t x388 = INT16_MIN;
	volatile int32_t t71 = 1;

	t71 = (((x385==x386)-x387)*x388);

	if (t71 != 32768) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x389 = INT8_MIN;
	int32_t x391 = -1;
	int8_t x392 = INT8_MIN;
	volatile int32_t t72 = -84;

	t72 = (((x389==x390)-x391)*x392);

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x393 = -1;
	int64_t x394 = INT64_MIN;
	uint8_t x395 = 0U;
	int32_t x396 = 1;
	int32_t t73 = -31334;

	t73 = (((x393==x394)-x395)*x396);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x401 = UINT16_MAX;
	static int16_t x402 = INT16_MIN;
	static volatile uint16_t x403 = UINT16_MAX;
	uint8_t x404 = 1U;
	int32_t t74 = -3896066;

	t74 = (((x401==x402)-x403)*x404);

	if (t74 != -65535) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x405 = 30U;
	volatile uint64_t x406 = 101099875LLU;
	volatile uint32_t x407 = 4217710U;
	uint32_t t75 = 7577964U;

	t75 = (((x405==x406)-x407)*x408);

	if (t75 != 2540399936U) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x409 = -500;
	volatile uint8_t x410 = 55U;
	volatile int32_t t76 = -15;

	t76 = (((x409==x410)-x411)*x412);

	if (t76 != -50260) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x414 = 17U;
	static uint64_t x415 = 14759812698805779LLU;
	int16_t x416 = INT16_MIN;
	static uint64_t t77 = 74252707593427LLU;

	t77 = (((x413==x414)-x415)*x416);

	if (t77 != 4034196598019424256LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x421 = INT8_MAX;
	int8_t x422 = 1;
	uint64_t x423 = 433290930764262322LLU;
	static volatile uint8_t x424 = 10U;
	volatile uint64_t t78 = 30463590600954835LLU;

	t78 = (((x421==x422)-x423)*x424);

	if (t78 != 14113834766066928396LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x425 = INT32_MAX;
	volatile int32_t x426 = -1;
	volatile int32_t t79 = -58;

	t79 = (((x425==x426)-x427)*x428);

	if (t79 != 9344) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x429 = INT8_MIN;
	volatile int64_t x430 = 836LL;
	static int8_t x431 = INT8_MAX;
	int16_t x432 = -1;
	volatile int32_t t80 = 366;

	t80 = (((x429==x430)-x431)*x432);

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x433 = INT16_MIN;
	static int8_t x434 = INT8_MIN;
	uint32_t x435 = UINT32_MAX;
	int8_t x436 = INT8_MIN;
	uint32_t t81 = 7U;

	t81 = (((x433==x434)-x435)*x436);

	if (t81 != 4294967168U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x437 = 2179098783821554LLU;
	int16_t x440 = INT16_MAX;
	int64_t t82 = -323302LL;

	t82 = (((x437==x438)-x439)*x440);

	if (t82 != 32767LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint16_t x442 = 603U;
	uint8_t x443 = 6U;
	uint16_t x444 = UINT16_MAX;
	int32_t t83 = -124673;

	t83 = (((x441==x442)-x443)*x444);

	if (t83 != -393210) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x445 = INT8_MIN;
	uint64_t x446 = 696908137142746LLU;
	static uint64_t x447 = 46684LLU;
	uint64_t t84 = 983322287200961305LLU;

	t84 = (((x445==x446)-x447)*x448);

	if (t84 != 46684LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x453 = -18732;
	volatile int8_t x455 = INT8_MIN;
	static int64_t x456 = 0LL;
	static int64_t t85 = 6353LL;

	t85 = (((x453==x454)-x455)*x456);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x457 = -2;
	int32_t x458 = INT32_MIN;
	uint8_t x459 = UINT8_MAX;
	int8_t x460 = INT8_MAX;
	volatile int32_t t86 = -79967637;

	t86 = (((x457==x458)-x459)*x460);

	if (t86 != -32385) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x461 = 510U;
	static int64_t x462 = INT64_MIN;
	int16_t x463 = -1;
	int64_t x464 = INT64_MIN;
	int64_t t87 = INT64_MIN;

	t87 = (((x461==x462)-x463)*x464);

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x465 = 996602885;
	int8_t x466 = -1;
	uint32_t x467 = 17U;
	uint8_t x468 = UINT8_MAX;
	volatile uint32_t t88 = 1821696U;

	t88 = (((x465==x466)-x467)*x468);

	if (t88 != 4294962961U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x470 = 10;
	uint32_t x471 = 3361U;
	uint8_t x472 = 2U;
	volatile uint32_t t89 = 2U;

	t89 = (((x469==x470)-x471)*x472);

	if (t89 != 4294960574U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x477 = 7900;
	uint16_t x478 = 25515U;
	int32_t x479 = -160394;
	uint16_t x480 = 250U;
	int32_t t90 = 13;

	t90 = (((x477==x478)-x479)*x480);

	if (t90 != 40098500) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x485 = 27394U;
	int16_t x486 = INT16_MIN;
	int8_t x487 = 7;
	int8_t x488 = INT8_MAX;
	int32_t t91 = 309311;

	t91 = (((x485==x486)-x487)*x488);

	if (t91 != -889) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x494 = -1;
	uint64_t x495 = 32965LLU;
	uint64_t x496 = UINT64_MAX;
	uint64_t t92 = 4306LLU;

	t92 = (((x493==x494)-x495)*x496);

	if (t92 != 32965LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x498 = -395330385439458LL;
	int64_t t93 = INT64_MIN;

	t93 = (((x497==x498)-x499)*x500);

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x501 = INT16_MIN;
	volatile int8_t x502 = -1;
	volatile uint8_t x504 = UINT8_MAX;
	volatile uint32_t t94 = 12456774U;

	t94 = (((x501==x502)-x503)*x504);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x505 = UINT16_MAX;
	volatile uint32_t x506 = 2U;
	static uint64_t x507 = 2624990309065043294LLU;
	int64_t x508 = -719160271884572712LL;
	uint64_t t95 = 1023139303198248LLU;

	t95 = (((x505==x506)-x507)*x508);

	if (t95 != 11329313008760284848LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x509 = UINT8_MAX;
	uint64_t x512 = UINT64_MAX;

	t96 = (((x509==x510)-x511)*x512);

	if (t96 != 18446744073709550876LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x514 = INT8_MIN;
	volatile int32_t x515 = -1;
	static int64_t x516 = -51093516102812LL;
	static int64_t t97 = 2227830771498578LL;

	t97 = (((x513==x514)-x515)*x516);

	if (t97 != -51093516102812LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x517 = -3;
	int8_t x518 = INT8_MIN;
	uint16_t x519 = 33U;
	static int16_t x520 = INT16_MIN;

	t98 = (((x517==x518)-x519)*x520);

	if (t98 != 1081344) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x521 = 2U;
	uint32_t x522 = 29U;
	uint8_t x523 = UINT8_MAX;
	uint8_t x524 = 49U;
	volatile int32_t t99 = 1799;

	t99 = (((x521==x522)-x523)*x524);

	if (t99 != -12495) { NG(); } else { ; }
	
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

