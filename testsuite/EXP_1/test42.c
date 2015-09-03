#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x11 = 1696787066U;
static int64_t t2 = 145020895291LL;
uint16_t x17 = 45U;
uint64_t x18 = 229LLU;
int8_t x19 = INT8_MIN;
int32_t x40 = -1;
int64_t x66 = -200973LL;
uint32_t x68 = UINT32_MAX;
uint64_t x75 = 98990678798470288LLU;
int16_t x85 = -1;
int64_t x86 = -1LL;
int32_t x102 = -1;
static volatile int64_t x115 = -54275LL;
int64_t x119 = 122124361987405LL;
volatile int32_t x130 = -22;
int64_t x140 = -3509793LL;
uint64_t x145 = 5350113731041102LLU;
int16_t x146 = -1;
int32_t x147 = INT32_MAX;
static volatile uint32_t t29 = 159680U;
static volatile int64_t t31 = -186898137470LL;
int32_t x183 = INT32_MAX;
volatile int64_t t33 = -438237451711746017LL;
uint64_t x201 = 1310657368536364250LLU;
uint16_t x207 = UINT16_MAX;
volatile uint16_t x215 = UINT16_MAX;
volatile uint64_t t38 = 457162779089LLU;
int64_t x233 = 138574763152394282LL;
int16_t x238 = INT16_MIN;
int32_t x241 = INT32_MIN;
volatile int32_t x242 = INT32_MAX;
int16_t x248 = 50;
static uint32_t x265 = 0U;
int64_t x269 = INT64_MIN;
int16_t x273 = INT16_MIN;
int64_t t48 = -33LL;
int16_t x277 = INT16_MIN;
static uint8_t x280 = 0U;
volatile int32_t x286 = -1;
uint32_t x292 = 106141U;
static uint32_t t51 = 3895U;
uint64_t t52 = 58266102959LLU;
uint64_t x299 = 3785363LLU;
static int64_t x300 = INT64_MIN;
int64_t t55 = -1LL;
uint64_t x310 = UINT64_MAX;
int32_t x311 = INT32_MAX;
static int16_t x313 = 105;
static int64_t x329 = 130777408782LL;
int8_t x334 = INT8_MAX;
int64_t x336 = -2940807524LL;
int16_t x339 = -1;
uint64_t x341 = UINT64_MAX;
static int16_t x348 = INT16_MIN;
static volatile uint64_t t65 = 10LLU;
static uint8_t x365 = UINT8_MAX;
volatile int64_t x370 = INT64_MIN;
static volatile uint64_t t68 = 535766844LLU;
int16_t x376 = 0;
int16_t x378 = -1;
uint16_t x385 = 1555U;
int8_t x388 = INT8_MAX;
uint64_t t71 = 3508464426882LLU;
int64_t x389 = 15LL;
int32_t x390 = -5;
uint16_t x392 = UINT16_MAX;
uint64_t x398 = 69112462703LLU;
volatile int32_t x409 = -122694958;
static int16_t x411 = INT16_MAX;
int8_t x414 = 4;
volatile int8_t x416 = 0;
static uint32_t x421 = 18485U;
uint8_t x425 = 6U;
static int32_t x427 = INT32_MAX;
volatile int64_t x428 = -9464260816632LL;
volatile int8_t x430 = INT8_MAX;
int64_t x432 = INT64_MIN;
volatile int64_t t79 = 51LL;
uint32_t x433 = UINT32_MAX;
uint16_t x441 = 219U;
int32_t t81 = 193564110;
int16_t x446 = 1037;
volatile int64_t x447 = -70889212737045617LL;
uint8_t x453 = UINT8_MAX;
volatile int16_t x454 = -142;
int8_t x458 = INT8_MAX;
volatile uint32_t x469 = UINT32_MAX;
static int16_t x472 = -29;
static volatile uint64_t t87 = 194907798LLU;
static int64_t x507 = -1LL;
static uint16_t x522 = UINT16_MAX;
int32_t x523 = INT32_MIN;
static volatile int64_t t94 = -893LL;
volatile int16_t x534 = -1;
int8_t x541 = -1;
uint32_t x547 = 22775272U;
uint32_t x548 = UINT32_MAX;
static uint8_t x551 = UINT8_MAX;
static int32_t x552 = 2030908;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int8_t x2 = INT8_MAX;
	static uint16_t x3 = 4U;
	int64_t x4 = -22583LL;
	int64_t t0 = -7910630281307LL;

	t0 = (((x1+x2)/x3)*x4);

	if (t0 != -1422729LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 1053245074883LLU;
	int8_t x6 = INT8_MIN;
	int32_t x7 = INT32_MIN;
	int32_t x8 = -32324033;
	volatile uint64_t t1 = 17LLU;

	t1 = (((x5+x6)/x7)*x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static uint32_t x10 = UINT32_MAX;
	volatile int8_t x12 = 0;

	t2 = (((x9+x10)/x11)*x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -3655;
	static uint64_t x14 = 1LLU;
	uint8_t x15 = UINT8_MAX;
	int8_t x16 = -1;
	static uint64_t t3 = 20366LLU;

	t3 = (((x13+x14)/x15)*x16);

	if (t3 != 18374403900871474958LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x20 = INT64_MIN;
	uint64_t t4 = 6098635512241LLU;

	t4 = (((x17+x18)/x19)*x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MIN;
	static volatile int8_t x22 = -1;
	static int32_t x23 = INT32_MIN;
	int16_t x24 = INT16_MIN;
	int32_t t5 = -395148738;

	t5 = (((x21+x22)/x23)*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = 43U;
	volatile int64_t x26 = -1LL;
	int16_t x27 = -1;
	int64_t x28 = -64LL;
	int64_t t6 = 4356078LL;

	t6 = (((x25+x26)/x27)*x28);

	if (t6 != 2688LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x37 = INT8_MAX;
	uint64_t x38 = UINT64_MAX;
	int8_t x39 = 13;
	static volatile uint64_t t7 = 4238890964044133LLU;

	t7 = (((x37+x38)/x39)*x40);

	if (t7 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = INT32_MAX;
	static volatile uint32_t x42 = 1116707321U;
	int16_t x43 = -1;
	uint8_t x44 = 5U;
	uint32_t t8 = 287386621U;

	t8 = (((x41+x42)/x43)*x44);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = 251U;
	int8_t x46 = -9;
	uint16_t x47 = UINT16_MAX;
	uint16_t x48 = 192U;
	volatile int32_t t9 = -1;

	t9 = (((x45+x46)/x47)*x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MIN;
	int8_t x50 = INT8_MAX;
	int8_t x51 = -1;
	int8_t x52 = -1;
	int32_t t10 = -106;

	t10 = (((x49+x50)/x51)*x52);

	if (t10 != -2147483521) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = -1871;
	static int16_t x54 = INT16_MAX;
	int8_t x55 = INT8_MAX;
	int16_t x56 = INT16_MAX;
	static volatile int32_t t11 = -37453116;

	t11 = (((x53+x54)/x55)*x56);

	if (t11 != 7962381) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x61 = 9;
	static uint16_t x62 = 11156U;
	int16_t x63 = -1;
	static uint64_t x64 = UINT64_MAX;
	static volatile uint64_t t12 = 7689379379648462501LLU;

	t12 = (((x61+x62)/x63)*x64);

	if (t12 != 11165LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = INT8_MIN;
	uint8_t x67 = UINT8_MAX;
	int64_t t13 = 1522LL;

	t13 = (((x65+x66)/x67)*x68);

	if (t13 != -3384434228460LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = INT32_MIN;
	int16_t x70 = 15;
	int8_t x71 = INT8_MAX;
	static uint8_t x72 = 23U;
	int32_t t14 = -2448077;

	t14 = (((x69+x70)/x71)*x72);

	if (t14 != -388914337) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 2103393924U;
	int32_t x74 = 8888;
	static uint16_t x76 = 34U;
	uint64_t t15 = 3208778LLU;

	t15 = (((x73+x74)/x75)*x76);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x87 = -1;
	uint64_t x88 = 5291767991322LLU;
	static volatile uint64_t t16 = 604041446717954LLU;

	t16 = (((x85+x86)/x87)*x88);

	if (t16 != 10583535982644LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x93 = -1;
	int16_t x94 = INT16_MIN;
	uint16_t x95 = 11U;
	int16_t x96 = INT16_MIN;
	volatile int32_t t17 = 52644;

	t17 = (((x93+x94)/x95)*x96);

	if (t17 != 97615872) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x97 = 433;
	int8_t x98 = INT8_MIN;
	static int32_t x99 = INT32_MIN;
	uint8_t x100 = 103U;
	static int32_t t18 = 508;

	t18 = (((x97+x98)/x99)*x100);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x101 = 8560218238746LLU;
	uint8_t x103 = UINT8_MAX;
	volatile uint8_t x104 = 10U;
	uint64_t t19 = 1109821515391343846LLU;

	t19 = (((x101+x102)/x103)*x104);

	if (t19 != 335694832890LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x113 = UINT8_MAX;
	volatile int64_t x114 = -1LL;
	int16_t x116 = 212;
	volatile int64_t t20 = -122LL;

	t20 = (((x113+x114)/x115)*x116);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x117 = 32158U;
	uint16_t x118 = UINT16_MAX;
	uint16_t x120 = UINT16_MAX;
	int64_t t21 = -379924LL;

	t21 = (((x117+x118)/x119)*x120);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x125 = -1;
	uint8_t x126 = 3U;
	static volatile int8_t x127 = INT8_MIN;
	int16_t x128 = -1;
	int32_t t22 = 1651935;

	t22 = (((x125+x126)/x127)*x128);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x129 = 0U;
	int32_t x131 = INT32_MIN;
	int64_t x132 = -1LL;
	int64_t t23 = -337472426769724110LL;

	t23 = (((x129+x130)/x131)*x132);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x137 = INT16_MIN;
	static int8_t x138 = -58;
	int16_t x139 = -15256;
	int64_t t24 = -14776316LL;

	t24 = (((x137+x138)/x139)*x140);

	if (t24 != -7019586LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x141 = -1;
	int64_t x142 = -214618LL;
	volatile int64_t x143 = INT64_MIN;
	uint16_t x144 = 251U;
	int64_t t25 = 3129946315627LL;

	t25 = (((x141+x142)/x143)*x144);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x148 = 114965062857830LLU;
	volatile uint64_t t26 = 1869630214759829725LLU;

	t26 = (((x145+x146)/x147)*x148);

	if (t26 != 9715898594582917960LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x149 = -4;
	uint16_t x150 = 19U;
	uint32_t x151 = UINT32_MAX;
	int16_t x152 = INT16_MIN;
	uint32_t t27 = 674297U;

	t27 = (((x149+x150)/x151)*x152);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x153 = 3;
	uint16_t x154 = UINT16_MAX;
	uint64_t x155 = 798750LLU;
	static volatile int32_t x156 = INT32_MIN;
	uint64_t t28 = 2490LLU;

	t28 = (((x153+x154)/x155)*x156);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x161 = 10U;
	int8_t x162 = 1;
	static uint32_t x163 = 1236287U;
	int16_t x164 = -1;

	t29 = (((x161+x162)/x163)*x164);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x165 = -1;
	static uint64_t x166 = 4866674309150LLU;
	static volatile uint16_t x167 = 503U;
	static int16_t x168 = -3;
	volatile uint64_t t30 = 91467013242LLU;

	t30 = (((x165+x166)/x167)*x168);

	if (t30 != 18446744044683661105LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x169 = -1LL;
	int16_t x170 = -1;
	int8_t x171 = INT8_MIN;
	volatile int8_t x172 = -1;

	t31 = (((x169+x170)/x171)*x172);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x181 = INT64_MIN;
	static uint8_t x182 = 14U;
	uint32_t x184 = 1986U;
	static volatile int64_t t32 = -872174596516967768LL;

	t32 = (((x181+x182)/x183)*x184);

	if (t32 != -8529805051842LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x197 = UINT16_MAX;
	int64_t x198 = 3120472908259553LL;
	int32_t x199 = -1;
	static int16_t x200 = 1;

	t33 = (((x197+x198)/x199)*x200);

	if (t33 != -3120472908325088LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x202 = 134;
	static int16_t x203 = INT16_MAX;
	int16_t x204 = -9;
	volatile uint64_t t34 = 1703238LLU;

	t34 = (((x201+x202)/x203)*x204);

	if (t34 != 18446384079925658458LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x205 = -24;
	uint8_t x206 = UINT8_MAX;
	int8_t x208 = INT8_MAX;
	int32_t t35 = -47072;

	t35 = (((x205+x206)/x207)*x208);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x213 = INT8_MAX;
	static int8_t x214 = INT8_MIN;
	static int64_t x216 = -1LL;
	volatile int64_t t36 = 19282LL;

	t36 = (((x213+x214)/x215)*x216);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x217 = 5830641U;
	int64_t x218 = INT64_MIN;
	static int16_t x219 = INT16_MAX;
	static uint64_t x220 = UINT64_MAX;
	uint64_t t37 = 500LLU;

	t37 = (((x217+x218)/x219)*x220);

	if (t37 != 281483566907222LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x221 = 14711222292974LLU;
	int64_t x222 = INT64_MIN;
	int8_t x223 = INT8_MIN;
	int32_t x224 = -3;

	t38 = (((x221+x222)/x223)*x224);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x225 = -1492;
	uint64_t x226 = 731409457LLU;
	volatile int64_t x227 = INT64_MIN;
	static int64_t x228 = 11248168368250559LL;
	uint64_t t39 = 1972667248796LLU;

	t39 = (((x225+x226)/x227)*x228);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x234 = 2;
	uint32_t x235 = UINT32_MAX;
	int16_t x236 = 939;
	static volatile int64_t t40 = 725206241129495LL;

	t40 = (((x233+x234)/x235)*x236);

	if (t40 != 30296319489LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x237 = -1;
	uint8_t x239 = UINT8_MAX;
	volatile int32_t x240 = -29186;
	static volatile int32_t t41 = 0;

	t41 = (((x237+x238)/x239)*x240);

	if (t41 != 3735808) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x243 = -1;
	uint64_t x244 = 6873027700964368384LLU;
	volatile uint64_t t42 = 104552LLU;

	t42 = (((x241+x242)/x243)*x244);

	if (t42 != 6873027700964368384LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x245 = 37;
	int16_t x246 = -1;
	uint16_t x247 = 75U;
	int32_t t43 = 2696924;

	t43 = (((x245+x246)/x247)*x248);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x253 = UINT32_MAX;
	uint8_t x254 = UINT8_MAX;
	uint16_t x255 = UINT16_MAX;
	uint8_t x256 = 29U;
	static uint32_t t44 = 47174638U;

	t44 = (((x253+x254)/x255)*x256);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x257 = UINT64_MAX;
	uint32_t x258 = 125064839U;
	uint16_t x259 = 468U;
	int16_t x260 = -1;
	uint64_t t45 = 737183718812408533LLU;

	t45 = (((x257+x258)/x259)*x260);

	if (t45 != 18446744073709284384LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x266 = 11U;
	uint16_t x267 = UINT16_MAX;
	static int32_t x268 = -1;
	uint32_t t46 = 30U;

	t46 = (((x265+x266)/x267)*x268);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x270 = 214069814U;
	int32_t x271 = -6106161;
	uint64_t x272 = 7489LLU;
	uint64_t t47 = 98153833533LLU;

	t47 = (((x269+x270)/x271)*x272);

	if (t47 != 11312153934748834LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x274 = INT16_MIN;
	static volatile int64_t x275 = INT64_MIN;
	int16_t x276 = 1;

	t48 = (((x273+x274)/x275)*x276);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x278 = INT16_MIN;
	static volatile uint64_t x279 = 448591157436LLU;
	volatile uint64_t t49 = 770616240340LLU;

	t49 = (((x277+x278)/x279)*x280);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x285 = INT8_MIN;
	static int64_t x287 = INT64_MAX;
	int32_t x288 = INT32_MAX;
	int64_t t50 = -428LL;

	t50 = (((x285+x286)/x287)*x288);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x289 = 357U;
	int32_t x290 = INT32_MIN;
	uint32_t x291 = UINT32_MAX;

	t51 = (((x289+x290)/x291)*x292);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x293 = 900655780042640LLU;
	int8_t x294 = -3;
	static uint16_t x295 = UINT16_MAX;
	uint16_t x296 = 29U;

	t52 = (((x293+x294)/x295)*x296);

	if (t52 != 398550661801LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x297 = 16U;
	int8_t x298 = 1;
	static uint64_t t53 = 171548988285LLU;

	t53 = (((x297+x298)/x299)*x300);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x301 = INT32_MAX;
	int16_t x302 = INT16_MIN;
	volatile uint64_t x303 = 237956067LLU;
	uint64_t x304 = UINT64_MAX;
	static volatile uint64_t t54 = 113772154884647983LLU;

	t54 = (((x301+x302)/x303)*x304);

	if (t54 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x305 = -1;
	volatile int8_t x306 = -54;
	static int64_t x307 = -1LL;
	volatile int32_t x308 = INT32_MIN;

	t55 = (((x305+x306)/x307)*x308);

	if (t55 != -118111600640LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x309 = UINT16_MAX;
	static int64_t x312 = -378LL;
	uint64_t t56 = 63782LLU;

	t56 = (((x309+x310)/x311)*x312);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x314 = INT16_MAX;
	int16_t x315 = INT16_MIN;
	uint32_t x316 = 148U;
	uint32_t t57 = 652475007U;

	t57 = (((x313+x314)/x315)*x316);

	if (t57 != 4294967148U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x317 = 5;
	volatile int64_t x318 = -23012821956079557LL;
	uint32_t x319 = 45562U;
	static volatile int32_t x320 = -4157890;
	int64_t t58 = -48907838525269952LL;

	t58 = (((x317+x318)/x319)*x320);

	if (t58 != 2100100572471740080LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint8_t x330 = UINT8_MAX;
	uint32_t x331 = UINT32_MAX;
	int32_t x332 = 249086847;
	int64_t t59 = 1759246450445LL;

	t59 = (((x329+x330)/x331)*x332);

	if (t59 != 7472605410LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x333 = INT16_MIN;
	volatile int32_t x335 = 2897474;
	int64_t t60 = 42260340358430LL;

	t60 = (((x333+x334)/x335)*x336);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x337 = 3406954216LLU;
	int64_t x338 = INT64_MAX;
	static int64_t x340 = INT64_MAX;
	uint64_t t61 = 100071LLU;

	t61 = (((x337+x338)/x339)*x340);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x342 = 15133LLU;
	static int64_t x343 = 59184918014118LL;
	int8_t x344 = 31;
	uint64_t t62 = 4288902472514260LLU;

	t62 = (((x341+x342)/x343)*x344);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x345 = UINT64_MAX;
	int8_t x346 = 12;
	static int8_t x347 = -1;
	static uint64_t t63 = 185974313246LLU;

	t63 = (((x345+x346)/x347)*x348);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x353 = -1;
	int8_t x354 = -20;
	uint8_t x355 = UINT8_MAX;
	uint64_t x356 = 48197235LLU;
	volatile uint64_t t64 = 51LLU;

	t64 = (((x353+x354)/x355)*x356);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x357 = INT16_MIN;
	static volatile uint64_t x358 = 26LLU;
	int64_t x359 = -54LL;
	uint64_t x360 = 698900809LLU;

	t65 = (((x357+x358)/x359)*x360);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x361 = 442;
	int32_t x362 = INT32_MIN;
	int32_t x363 = INT32_MIN;
	volatile uint8_t x364 = UINT8_MAX;
	volatile int32_t t66 = 38361;

	t66 = (((x361+x362)/x363)*x364);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x366 = INT16_MIN;
	int64_t x367 = -1LL;
	uint16_t x368 = 194U;
	int64_t t67 = -5LL;

	t67 = (((x365+x366)/x367)*x368);

	if (t67 != 6307522LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x369 = INT16_MAX;
	uint64_t x371 = UINT64_MAX;
	uint8_t x372 = UINT8_MAX;

	t68 = (((x369+x370)/x371)*x372);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x373 = 6U;
	volatile uint8_t x374 = UINT8_MAX;
	int16_t x375 = INT16_MIN;
	static volatile int32_t t69 = -2081634;

	t69 = (((x373+x374)/x375)*x376);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x377 = UINT16_MAX;
	int16_t x379 = -1;
	int32_t x380 = 0;
	int32_t t70 = -2;

	t70 = (((x377+x378)/x379)*x380);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x386 = UINT64_MAX;
	int32_t x387 = INT32_MAX;

	t71 = (((x385+x386)/x387)*x388);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x391 = UINT32_MAX;
	static volatile int64_t t72 = 1LL;

	t72 = (((x389+x390)/x391)*x392);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x397 = INT32_MIN;
	int16_t x399 = INT16_MIN;
	volatile int8_t x400 = INT8_MAX;
	static volatile uint64_t t73 = 29LLU;

	t73 = (((x397+x398)/x399)*x400);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x405 = 0;
	volatile int32_t x406 = -16;
	int16_t x407 = -1;
	int8_t x408 = 0;
	volatile int32_t t74 = -448778;

	t74 = (((x405+x406)/x407)*x408);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x410 = INT16_MAX;
	volatile int64_t x412 = -72300450069772LL;
	int64_t t75 = -8621735714454LL;

	t75 = (((x409+x410)/x411)*x412);

	if (t75 != 270620584611156596LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x413 = 56;
	int16_t x415 = 3;
	int32_t t76 = -62;

	t76 = (((x413+x414)/x415)*x416);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x422 = 0U;
	int16_t x423 = INT16_MIN;
	int16_t x424 = INT16_MIN;
	uint32_t t77 = 52301U;

	t77 = (((x421+x422)/x423)*x424);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x426 = INT8_MIN;
	int64_t t78 = 13680995346LL;

	t78 = (((x425+x426)/x427)*x428);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x429 = 769U;
	int16_t x431 = -121;

	t79 = (((x429+x430)/x431)*x432);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x434 = 11707950374LLU;
	uint32_t x435 = 65790756U;
	static int16_t x436 = -1;
	static uint64_t t80 = 92LLU;

	t80 = (((x433+x434)/x435)*x436);

	if (t80 != 18446744073709551373LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x442 = INT8_MIN;
	int32_t x443 = INT32_MAX;
	static int16_t x444 = 2;

	t81 = (((x441+x442)/x443)*x444);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x445 = UINT64_MAX;
	int32_t x448 = INT32_MIN;
	uint64_t t82 = 1620978298373LLU;

	t82 = (((x445+x446)/x447)*x448);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x449 = 1U;
	static uint64_t x450 = 446LLU;
	static volatile int8_t x451 = INT8_MIN;
	uint8_t x452 = 1U;
	uint64_t t83 = 427975153408559898LLU;

	t83 = (((x449+x450)/x451)*x452);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x455 = UINT64_MAX;
	int8_t x456 = INT8_MIN;
	volatile uint64_t t84 = 31982033LLU;

	t84 = (((x453+x454)/x455)*x456);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x457 = 618153009U;
	static volatile int8_t x459 = -1;
	uint64_t x460 = UINT64_MAX;
	uint64_t t85 = 119363162538301LLU;

	t85 = (((x457+x458)/x459)*x460);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x470 = -1;
	int16_t x471 = -1;
	uint32_t t86 = 6885984U;

	t86 = (((x469+x470)/x471)*x472);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x473 = -65633174;
	int16_t x474 = 5;
	uint64_t x475 = 48578221765LLU;
	uint8_t x476 = 73U;

	t87 = (((x473+x474)/x475)*x476);

	if (t87 != 27720494254LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x477 = 25;
	uint64_t x478 = 4385176LLU;
	static int32_t x479 = -1;
	int64_t x480 = -3883634149550LL;
	uint64_t t88 = 263213205521LLU;

	t88 = (((x477+x478)/x479)*x480);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x481 = INT8_MIN;
	static int8_t x482 = INT8_MIN;
	volatile int32_t x483 = 5525;
	int8_t x484 = 2;
	int32_t t89 = -5860897;

	t89 = (((x481+x482)/x483)*x484);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x493 = 1LLU;
	int8_t x494 = INT8_MAX;
	int16_t x495 = 6363;
	static volatile int16_t x496 = INT16_MAX;
	uint64_t t90 = 31868371086092LLU;

	t90 = (((x493+x494)/x495)*x496);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x505 = 424981LL;
	static uint8_t x506 = 0U;
	volatile uint32_t x508 = 1U;
	volatile int64_t t91 = 34504699802771LL;

	t91 = (((x505+x506)/x507)*x508);

	if (t91 != -424981LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x513 = INT8_MIN;
	int64_t x514 = -1LL;
	static uint8_t x515 = UINT8_MAX;
	volatile int16_t x516 = INT16_MAX;
	int64_t t92 = 1834835836218614941LL;

	t92 = (((x513+x514)/x515)*x516);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x517 = UINT8_MAX;
	int8_t x518 = 52;
	volatile int32_t x519 = INT32_MIN;
	static int16_t x520 = INT16_MIN;
	int32_t t93 = -951164517;

	t93 = (((x517+x518)/x519)*x520);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x521 = -1LL;
	static int8_t x524 = INT8_MIN;

	t94 = (((x521+x522)/x523)*x524);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x529 = 2U;
	volatile uint32_t x530 = UINT32_MAX;
	int64_t x531 = -2735227761134LL;
	static int8_t x532 = INT8_MIN;
	int64_t t95 = -748830932834LL;

	t95 = (((x529+x530)/x531)*x532);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x533 = 1718LL;
	int16_t x535 = INT16_MAX;
	volatile int16_t x536 = INT16_MAX;
	volatile int64_t t96 = -23005893056LL;

	t96 = (((x533+x534)/x535)*x536);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x542 = -1;
	static int32_t x543 = 1619457;
	volatile int8_t x544 = INT8_MAX;
	volatile int32_t t97 = -245537560;

	t97 = (((x541+x542)/x543)*x544);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x545 = UINT32_MAX;
	int32_t x546 = INT32_MIN;
	volatile uint32_t t98 = 1528U;

	t98 = (((x545+x546)/x547)*x548);

	if (t98 != 4294967202U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x549 = UINT64_MAX;
	int8_t x550 = 35;
	uint64_t t99 = 281005212LLU;

	t99 = (((x549+x550)/x551)*x552);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

