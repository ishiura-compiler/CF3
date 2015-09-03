#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MAX;
int32_t t0 = 881873;
static uint32_t x37 = UINT32_MAX;
int16_t x40 = 33;
int16_t x48 = -56;
volatile int64_t x54 = 3042603249940939351LL;
static uint32_t x55 = UINT32_MAX;
int64_t t5 = 3978851752LL;
uint32_t x83 = 47782U;
uint64_t x98 = 706LLU;
uint32_t x107 = 177895151U;
uint16_t x114 = UINT16_MAX;
int16_t x115 = INT16_MAX;
uint32_t x130 = UINT32_MAX;
int16_t x132 = -2;
volatile int16_t x138 = 1857;
int32_t x140 = INT32_MIN;
uint16_t x141 = 1872U;
int16_t x157 = -1;
int64_t x163 = INT64_MIN;
int32_t x164 = INT32_MIN;
volatile int32_t t20 = 824154;
volatile int32_t x166 = INT32_MAX;
uint64_t x167 = 11323757756LLU;
uint8_t x171 = 8U;
int8_t x173 = -4;
static int16_t x181 = -1;
uint32_t x184 = UINT32_MAX;
int32_t t24 = -142671386;
volatile uint32_t x185 = UINT32_MAX;
static int16_t x186 = 135;
volatile int64_t x187 = INT64_MIN;
uint32_t t25 = 3U;
int16_t x193 = 713;
static uint64_t t28 = 66672048LLU;
volatile int8_t x224 = INT8_MAX;
static volatile int32_t t30 = -1;
volatile uint64_t x231 = 4705943LLU;
int32_t x232 = -1;
volatile int16_t x233 = INT16_MAX;
int16_t x249 = -4;
uint64_t x252 = 7LLU;
volatile int32_t t33 = -132236609;
int16_t x258 = INT16_MAX;
int32_t t34 = 630;
uint64_t x272 = 205LLU;
static int16_t x281 = -1;
volatile int64_t x284 = INT64_MIN;
uint16_t x297 = 230U;
uint64_t x315 = 22006477110872202LLU;
int16_t x325 = INT16_MIN;
int64_t x330 = 1777597437300LL;
volatile uint32_t x354 = UINT32_MAX;
int32_t t45 = -55121;
static int32_t x372 = INT32_MIN;
volatile int32_t t47 = -16828;
uint32_t x382 = UINT32_MAX;
int32_t x396 = INT32_MAX;
static uint64_t x406 = UINT64_MAX;
static int64_t x407 = INT64_MIN;
static volatile int8_t x415 = -4;
volatile int64_t t51 = -869471LL;
int64_t t52 = -28LL;
uint8_t x423 = 0U;
volatile int8_t x424 = INT8_MIN;
static uint32_t x438 = 117U;
static uint16_t x439 = 2U;
volatile int8_t x450 = INT8_MAX;
int64_t x452 = INT64_MIN;
volatile int16_t x466 = 871;
volatile uint16_t x467 = 293U;
volatile uint16_t x472 = 4U;
volatile int64_t x474 = INT64_MAX;
int64_t x500 = -416496416LL;
uint8_t x502 = 3U;
volatile int32_t t66 = 3;
static int64_t x520 = -137742LL;
int32_t t69 = -87;
static int32_t x563 = INT32_MAX;
uint64_t t76 = 226360358257LLU;
uint16_t x577 = 7U;
volatile int8_t x579 = INT8_MIN;
uint32_t x581 = UINT32_MAX;
static int16_t x584 = INT16_MIN;
uint64_t t78 = 1865LLU;
uint64_t x590 = 8201410144618253342LLU;
volatile uint16_t x601 = UINT16_MAX;
int16_t x617 = INT16_MIN;
int8_t x627 = INT8_MIN;
static uint32_t x634 = 21382U;
int64_t x643 = INT64_MIN;
int16_t x656 = INT16_MIN;
uint32_t t90 = 98404587U;
volatile int16_t x673 = INT16_MIN;
int8_t x677 = INT8_MIN;
static int32_t t92 = -2;
static int16_t x681 = INT16_MIN;
int64_t x684 = -6094LL;
volatile uint16_t x686 = 2U;
static uint16_t x699 = 7465U;
int16_t x700 = -1;


void f0(void) {
	int32_t x1 = -1;
	int16_t x2 = 2358;
	int32_t x4 = INT32_MAX;

	t0 = (x1+(x2>>(x3==x4)));

	if (t0 != 2357) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x17 = INT16_MIN;
	int8_t x18 = INT8_MAX;
	static volatile int8_t x19 = INT8_MAX;
	int32_t x20 = -1;
	int32_t t1 = -10;

	t1 = (x17+(x18>>(x19==x20)));

	if (t1 != -32641) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x21 = INT16_MAX;
	uint8_t x22 = 39U;
	volatile int32_t x23 = -1;
	int16_t x24 = INT16_MIN;
	int32_t t2 = -2650;

	t2 = (x21+(x22>>(x23==x24)));

	if (t2 != 32806) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x38 = 2490882593334LL;
	volatile int64_t x39 = -1LL;
	volatile int64_t t3 = -55LL;

	t3 = (x37+(x38>>(x39==x40)));

	if (t3 != 2495177560629LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x45 = 7632337344320944LLU;
	volatile uint8_t x46 = 3U;
	volatile int16_t x47 = INT16_MAX;
	volatile uint64_t t4 = 206238798589LLU;

	t4 = (x45+(x46>>(x47==x48)));

	if (t4 != 7632337344320947LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x53 = 35U;
	int32_t x56 = -482738685;

	t5 = (x53+(x54>>(x55==x56)));

	if (t5 != 3042603249940939386LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x57 = -1LL;
	static int8_t x58 = 6;
	int64_t x59 = -1LL;
	static uint8_t x60 = UINT8_MAX;
	static volatile int64_t t6 = -31945468984LL;

	t6 = (x57+(x58>>(x59==x60)));

	if (t6 != 5LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x69 = 1U;
	static uint16_t x70 = 25U;
	uint32_t x71 = UINT32_MAX;
	volatile int16_t x72 = INT16_MAX;
	static uint32_t t7 = 1045U;

	t7 = (x69+(x70>>(x71==x72)));

	if (t7 != 26U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x81 = INT8_MAX;
	uint32_t x82 = 1220411621U;
	int16_t x84 = INT16_MAX;
	uint32_t t8 = 1007932707U;

	t8 = (x81+(x82>>(x83==x84)));

	if (t8 != 1220411748U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x93 = -1;
	static int8_t x94 = INT8_MAX;
	int64_t x95 = INT64_MIN;
	volatile int16_t x96 = -1;
	volatile int32_t t9 = -137089;

	t9 = (x93+(x94>>(x95==x96)));

	if (t9 != 126) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x97 = 66857897246003003LLU;
	uint32_t x99 = UINT32_MAX;
	int8_t x100 = INT8_MIN;
	uint64_t t10 = 57089925LLU;

	t10 = (x97+(x98>>(x99==x100)));

	if (t10 != 66857897246003709LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x105 = UINT16_MAX;
	volatile int32_t x106 = 6823258;
	uint32_t x108 = UINT32_MAX;
	static volatile int32_t t11 = 119683;

	t11 = (x105+(x106>>(x107==x108)));

	if (t11 != 6888793) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x109 = 3508LLU;
	uint64_t x110 = 806957764LLU;
	uint8_t x111 = UINT8_MAX;
	int8_t x112 = INT8_MIN;
	static volatile uint64_t t12 = 2LLU;

	t12 = (x109+(x110>>(x111==x112)));

	if (t12 != 806961272LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x113 = -199880;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t13 = 0;

	t13 = (x113+(x114>>(x115==x116)));

	if (t13 != -134345) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x129 = 51U;
	int64_t x131 = INT64_MIN;
	static uint32_t t14 = 724691U;

	t14 = (x129+(x130>>(x131==x132)));

	if (t14 != 50U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x137 = INT8_MAX;
	static int64_t x139 = INT64_MIN;
	static volatile int32_t t15 = -42;

	t15 = (x137+(x138>>(x139==x140)));

	if (t15 != 1984) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x142 = 0U;
	int64_t x143 = INT64_MIN;
	static int8_t x144 = 1;
	volatile int32_t t16 = 268357647;

	t16 = (x141+(x142>>(x143==x144)));

	if (t16 != 1872) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x145 = INT16_MAX;
	static uint16_t x146 = 8U;
	volatile int8_t x147 = INT8_MIN;
	static int32_t x148 = 122499;
	static int32_t t17 = -86;

	t17 = (x145+(x146>>(x147==x148)));

	if (t17 != 32775) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x149 = UINT16_MAX;
	volatile uint16_t x150 = 15991U;
	int8_t x151 = INT8_MAX;
	static volatile uint8_t x152 = 1U;
	volatile int32_t t18 = -40516;

	t18 = (x149+(x150>>(x151==x152)));

	if (t18 != 81526) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x158 = UINT64_MAX;
	volatile int32_t x159 = 11;
	int32_t x160 = INT32_MIN;
	volatile uint64_t t19 = 26830129344715448LLU;

	t19 = (x157+(x158>>(x159==x160)));

	if (t19 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x161 = INT8_MIN;
	volatile uint16_t x162 = 1820U;

	t20 = (x161+(x162>>(x163==x164)));

	if (t20 != 1692) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x165 = UINT32_MAX;
	volatile int16_t x168 = -7102;
	uint32_t t21 = 15U;

	t21 = (x165+(x166>>(x167==x168)));

	if (t21 != 2147483646U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x169 = INT8_MIN;
	int8_t x170 = INT8_MAX;
	int64_t x172 = 504120985553LL;
	static volatile int32_t t22 = 1;

	t22 = (x169+(x170>>(x171==x172)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x174 = UINT8_MAX;
	static volatile uint64_t x175 = 495789467062451589LLU;
	int64_t x176 = INT64_MIN;
	volatile int32_t t23 = -2407;

	t23 = (x173+(x174>>(x175==x176)));

	if (t23 != 251) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x182 = 13U;
	uint8_t x183 = 4U;

	t24 = (x181+(x182>>(x183==x184)));

	if (t24 != 12) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x188 = -1;

	t25 = (x185+(x186>>(x187==x188)));

	if (t25 != 134U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x194 = UINT16_MAX;
	int32_t x195 = INT32_MAX;
	uint16_t x196 = 31U;
	int32_t t26 = 256;

	t26 = (x193+(x194>>(x195==x196)));

	if (t26 != 66248) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x197 = -1;
	volatile uint16_t x198 = UINT16_MAX;
	int64_t x199 = -1LL;
	uint8_t x200 = 1U;
	volatile int32_t t27 = 1055866;

	t27 = (x197+(x198>>(x199==x200)));

	if (t27 != 65534) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x201 = UINT64_MAX;
	uint64_t x202 = UINT64_MAX;
	uint64_t x203 = 3362595017211446802LLU;
	int16_t x204 = INT16_MIN;

	t28 = (x201+(x202>>(x203==x204)));

	if (t28 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x213 = -1LL;
	static int64_t x214 = INT64_MAX;
	uint16_t x215 = 14U;
	volatile uint64_t x216 = 7LLU;
	volatile int64_t t29 = 50466036271LL;

	t29 = (x213+(x214>>(x215==x216)));

	if (t29 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x221 = INT8_MAX;
	uint16_t x222 = 1227U;
	static int32_t x223 = INT32_MIN;

	t30 = (x221+(x222>>(x223==x224)));

	if (t30 != 1354) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x229 = UINT64_MAX;
	int64_t x230 = INT64_MAX;
	static volatile uint64_t t31 = 1507814997LLU;

	t31 = (x229+(x230>>(x231==x232)));

	if (t31 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x234 = 68240443779LLU;
	int16_t x235 = -10;
	int8_t x236 = INT8_MAX;
	volatile uint64_t t32 = 270105681247138LLU;

	t32 = (x233+(x234>>(x235==x236)));

	if (t32 != 68240476546LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x250 = INT32_MAX;
	int32_t x251 = INT32_MAX;

	t33 = (x249+(x250>>(x251==x252)));

	if (t33 != 2147483643) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x257 = 6383;
	int32_t x259 = INT32_MAX;
	int32_t x260 = -47;

	t34 = (x257+(x258>>(x259==x260)));

	if (t34 != 39150) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x269 = 122107938U;
	uint32_t x270 = UINT32_MAX;
	uint64_t x271 = 5973550981222877880LLU;
	uint32_t t35 = 664439582U;

	t35 = (x269+(x270>>(x271==x272)));

	if (t35 != 122107937U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x282 = UINT16_MAX;
	volatile int8_t x283 = 55;
	volatile int32_t t36 = 0;

	t36 = (x281+(x282>>(x283==x284)));

	if (t36 != 65534) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x289 = 615;
	int32_t x290 = 31694;
	volatile uint64_t x291 = 399482993LLU;
	int64_t x292 = -45379659LL;
	int32_t t37 = 1926679;

	t37 = (x289+(x290>>(x291==x292)));

	if (t37 != 32309) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x298 = 11U;
	volatile uint32_t x299 = UINT32_MAX;
	static int32_t x300 = INT32_MAX;
	int32_t t38 = 5134;

	t38 = (x297+(x298>>(x299==x300)));

	if (t38 != 241) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x309 = INT64_MIN;
	uint64_t x310 = 906904441800LLU;
	int32_t x311 = INT32_MIN;
	int32_t x312 = INT32_MIN;
	volatile uint64_t t39 = 3674658472551LLU;

	t39 = (x309+(x310>>(x311==x312)));

	if (t39 != 9223372490306996708LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x313 = 2372;
	static uint64_t x314 = UINT64_MAX;
	int32_t x316 = -1;
	volatile uint64_t t40 = 373523LLU;

	t40 = (x313+(x314>>(x315==x316)));

	if (t40 != 2371LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x326 = 30475076604172034LL;
	int16_t x327 = INT16_MAX;
	static uint64_t x328 = UINT64_MAX;
	int64_t t41 = -9287LL;

	t41 = (x325+(x326>>(x327==x328)));

	if (t41 != 30475076604139266LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x329 = 4427U;
	static uint32_t x331 = UINT32_MAX;
	uint64_t x332 = UINT64_MAX;
	int64_t t42 = -461801831500543LL;

	t42 = (x329+(x330>>(x331==x332)));

	if (t42 != 1777597441727LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x345 = 0U;
	static uint16_t x346 = UINT16_MAX;
	static int64_t x347 = -52904475040661267LL;
	int8_t x348 = INT8_MAX;
	int32_t t43 = 961394392;

	t43 = (x345+(x346>>(x347==x348)));

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x353 = INT32_MIN;
	volatile uint16_t x355 = 2752U;
	uint64_t x356 = 432338443415LLU;
	uint32_t t44 = 19535U;

	t44 = (x353+(x354>>(x355==x356)));

	if (t44 != 2147483647U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x361 = 5U;
	int16_t x362 = INT16_MAX;
	int16_t x363 = INT16_MIN;
	static volatile uint32_t x364 = 1U;

	t45 = (x361+(x362>>(x363==x364)));

	if (t45 != 32772) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x369 = INT8_MAX;
	uint32_t x370 = UINT32_MAX;
	uint32_t x371 = 349373133U;
	volatile uint32_t t46 = 602U;

	t46 = (x369+(x370>>(x371==x372)));

	if (t46 != 126U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x373 = INT16_MAX;
	uint8_t x374 = 12U;
	uint32_t x375 = 118440988U;
	volatile int64_t x376 = -606LL;

	t47 = (x373+(x374>>(x375==x376)));

	if (t47 != 32779) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x381 = 46U;
	volatile int64_t x383 = 4238915097LL;
	int64_t x384 = -1LL;
	uint32_t t48 = 16U;

	t48 = (x381+(x382>>(x383==x384)));

	if (t48 != 45U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x393 = UINT32_MAX;
	volatile int32_t x394 = INT32_MAX;
	static uint64_t x395 = UINT64_MAX;
	uint32_t t49 = 236250444U;

	t49 = (x393+(x394>>(x395==x396)));

	if (t49 != 2147483646U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x405 = UINT64_MAX;
	int8_t x408 = -9;
	uint64_t t50 = 10246797629LLU;

	t50 = (x405+(x406>>(x407==x408)));

	if (t50 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x413 = INT64_MIN;
	static uint32_t x414 = UINT32_MAX;
	volatile uint8_t x416 = 2U;

	t51 = (x413+(x414>>(x415==x416)));

	if (t51 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x417 = INT64_MIN;
	volatile int8_t x418 = INT8_MAX;
	int8_t x419 = INT8_MIN;
	int16_t x420 = INT16_MIN;

	t52 = (x417+(x418>>(x419==x420)));

	if (t52 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x421 = -1;
	volatile int16_t x422 = 7989;
	static int32_t t53 = 125;

	t53 = (x421+(x422>>(x423==x424)));

	if (t53 != 7988) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x425 = 12U;
	uint16_t x426 = 365U;
	int64_t x427 = INT64_MAX;
	uint32_t x428 = UINT32_MAX;
	int32_t t54 = -404831;

	t54 = (x425+(x426>>(x427==x428)));

	if (t54 != 377) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x437 = -9995;
	int32_t x440 = -88415;
	uint32_t t55 = 15U;

	t55 = (x437+(x438>>(x439==x440)));

	if (t55 != 4294957418U) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x441 = 475162;
	uint32_t x442 = 16219474U;
	int8_t x443 = 1;
	int32_t x444 = 2063809;
	uint32_t t56 = 0U;

	t56 = (x441+(x442>>(x443==x444)));

	if (t56 != 16694636U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x445 = 0;
	static uint64_t x446 = 29LLU;
	static volatile uint16_t x447 = 945U;
	int8_t x448 = -1;
	uint64_t t57 = 0LLU;

	t57 = (x445+(x446>>(x447==x448)));

	if (t57 != 29LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x449 = UINT16_MAX;
	static int32_t x451 = INT32_MIN;
	int32_t t58 = -1;

	t58 = (x449+(x450>>(x451==x452)));

	if (t58 != 65662) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x465 = -1;
	uint8_t x468 = 27U;
	int32_t t59 = -77767;

	t59 = (x465+(x466>>(x467==x468)));

	if (t59 != 870) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x469 = INT16_MAX;
	static volatile uint16_t x470 = UINT16_MAX;
	int8_t x471 = -53;
	int32_t t60 = 13070;

	t60 = (x469+(x470>>(x471==x472)));

	if (t60 != 98302) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x473 = -1;
	int32_t x475 = -1;
	static uint64_t x476 = 122572LLU;
	volatile int64_t t61 = -6267618LL;

	t61 = (x473+(x474>>(x475==x476)));

	if (t61 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x477 = -8921088;
	volatile uint8_t x478 = UINT8_MAX;
	uint64_t x479 = 20311LLU;
	volatile uint64_t x480 = UINT64_MAX;
	static int32_t t62 = 148272930;

	t62 = (x477+(x478>>(x479==x480)));

	if (t62 != -8920833) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x481 = UINT16_MAX;
	uint8_t x482 = UINT8_MAX;
	uint32_t x483 = 384841U;
	static uint64_t x484 = 0LLU;
	static volatile int32_t t63 = 837;

	t63 = (x481+(x482>>(x483==x484)));

	if (t63 != 65790) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x485 = -1;
	uint8_t x486 = UINT8_MAX;
	int64_t x487 = -1LL;
	int8_t x488 = INT8_MIN;
	int32_t t64 = 51807047;

	t64 = (x485+(x486>>(x487==x488)));

	if (t64 != 254) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x497 = INT16_MIN;
	uint64_t x498 = 3801904059837LLU;
	static uint32_t x499 = UINT32_MAX;
	volatile uint64_t t65 = 117442356272877LLU;

	t65 = (x497+(x498>>(x499==x500)));

	if (t65 != 3801904027069LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x501 = UINT8_MAX;
	int64_t x503 = INT64_MIN;
	static int64_t x504 = -1LL;

	t66 = (x501+(x502>>(x503==x504)));

	if (t66 != 258) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x513 = -1;
	uint64_t x514 = 591095762300156779LLU;
	static int16_t x515 = INT16_MIN;
	int32_t x516 = INT32_MIN;
	uint64_t t67 = 5LLU;

	t67 = (x513+(x514>>(x515==x516)));

	if (t67 != 591095762300156778LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x517 = 1;
	uint64_t x518 = 189883619563820LLU;
	int32_t x519 = INT32_MAX;
	static volatile uint64_t t68 = 4170127LLU;

	t68 = (x517+(x518>>(x519==x520)));

	if (t68 != 189883619563821LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x521 = -15;
	uint16_t x522 = 115U;
	uint16_t x523 = 394U;
	volatile uint16_t x524 = UINT16_MAX;

	t69 = (x521+(x522>>(x523==x524)));

	if (t69 != 100) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x529 = UINT8_MAX;
	uint8_t x530 = 1U;
	int16_t x531 = INT16_MIN;
	uint32_t x532 = 51106662U;
	int32_t t70 = 1;

	t70 = (x529+(x530>>(x531==x532)));

	if (t70 != 256) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x533 = -1;
	uint32_t x534 = 109479U;
	int64_t x535 = 2LL;
	volatile int16_t x536 = -3649;
	uint32_t t71 = 0U;

	t71 = (x533+(x534>>(x535==x536)));

	if (t71 != 109478U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x541 = 1LLU;
	volatile int8_t x542 = 57;
	uint16_t x543 = UINT16_MAX;
	volatile int8_t x544 = INT8_MIN;
	volatile uint64_t t72 = 9880LLU;

	t72 = (x541+(x542>>(x543==x544)));

	if (t72 != 58LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x553 = INT32_MIN;
	uint16_t x554 = 2217U;
	volatile int16_t x555 = INT16_MAX;
	int8_t x556 = INT8_MAX;
	int32_t t73 = 2;

	t73 = (x553+(x554>>(x555==x556)));

	if (t73 != -2147481431) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x561 = 214578378U;
	static uint8_t x562 = UINT8_MAX;
	static volatile uint16_t x564 = 1783U;
	uint32_t t74 = 1U;

	t74 = (x561+(x562>>(x563==x564)));

	if (t74 != 214578633U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x569 = -1;
	uint16_t x570 = 12U;
	static int8_t x571 = -12;
	static uint8_t x572 = 4U;
	int32_t t75 = -871235;

	t75 = (x569+(x570>>(x571==x572)));

	if (t75 != 11) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x573 = 318LLU;
	static uint8_t x574 = UINT8_MAX;
	volatile uint8_t x575 = 1U;
	volatile uint32_t x576 = 31U;

	t76 = (x573+(x574>>(x575==x576)));

	if (t76 != 573LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x578 = 10373472389LL;
	static uint32_t x580 = 2335U;
	volatile int64_t t77 = -57721055LL;

	t77 = (x577+(x578>>(x579==x580)));

	if (t77 != 10373472396LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x582 = 282LLU;
	int32_t x583 = INT32_MIN;

	t78 = (x581+(x582>>(x583==x584)));

	if (t78 != 4294967577LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x589 = 7;
	volatile uint16_t x591 = 2U;
	static int16_t x592 = 827;
	static uint64_t t79 = 7330050361997LLU;

	t79 = (x589+(x590>>(x591==x592)));

	if (t79 != 8201410144618253349LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x593 = 477854LL;
	uint16_t x594 = 52U;
	int32_t x595 = INT32_MIN;
	int32_t x596 = INT32_MAX;
	int64_t t80 = -835LL;

	t80 = (x593+(x594>>(x595==x596)));

	if (t80 != 477906LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x602 = INT8_MAX;
	static uint32_t x603 = UINT32_MAX;
	uint16_t x604 = 638U;
	volatile int32_t t81 = 391751542;

	t81 = (x601+(x602>>(x603==x604)));

	if (t81 != 65662) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x613 = -867956;
	int16_t x614 = INT16_MAX;
	int8_t x615 = INT8_MIN;
	int8_t x616 = 42;
	int32_t t82 = -6877;

	t82 = (x613+(x614>>(x615==x616)));

	if (t82 != -835189) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x618 = 20550169U;
	int64_t x619 = INT64_MAX;
	int32_t x620 = INT32_MIN;
	uint32_t t83 = 2816548U;

	t83 = (x617+(x618>>(x619==x620)));

	if (t83 != 20517401U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x625 = 6U;
	uint8_t x626 = UINT8_MAX;
	volatile uint8_t x628 = 3U;
	volatile int32_t t84 = -3410;

	t84 = (x625+(x626>>(x627==x628)));

	if (t84 != 261) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x633 = 148849536688621099LLU;
	static volatile int32_t x635 = INT32_MAX;
	volatile uint8_t x636 = UINT8_MAX;
	static volatile uint64_t t85 = 3442648645LLU;

	t85 = (x633+(x634>>(x635==x636)));

	if (t85 != 148849536688642481LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x637 = INT32_MIN;
	uint8_t x638 = UINT8_MAX;
	int8_t x639 = INT8_MAX;
	volatile int64_t x640 = INT64_MIN;
	int32_t t86 = 24;

	t86 = (x637+(x638>>(x639==x640)));

	if (t86 != -2147483393) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x641 = INT64_MIN;
	static uint32_t x642 = 834U;
	volatile int8_t x644 = 57;
	volatile int64_t t87 = 7LL;

	t87 = (x641+(x642>>(x643==x644)));

	if (t87 != -9223372036854774974LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x653 = -3758211444LL;
	volatile int16_t x654 = 187;
	int16_t x655 = -1;
	static int64_t t88 = -255519843LL;

	t88 = (x653+(x654>>(x655==x656)));

	if (t88 != -3758211257LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x657 = INT32_MIN;
	volatile uint64_t x658 = 670413LLU;
	uint64_t x659 = UINT64_MAX;
	int32_t x660 = -1;
	uint64_t t89 = 7667503068735563LLU;

	t89 = (x657+(x658>>(x659==x660)));

	if (t89 != 18446744071562403174LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x669 = 21U;
	uint32_t x670 = 2107U;
	volatile uint32_t x671 = 108228076U;
	volatile uint64_t x672 = 535177591506200409LLU;

	t90 = (x669+(x670>>(x671==x672)));

	if (t90 != 2128U) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x674 = INT16_MAX;
	static volatile uint8_t x675 = 36U;
	int8_t x676 = -1;
	int32_t t91 = -930;

	t91 = (x673+(x674>>(x675==x676)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x678 = 7;
	volatile int64_t x679 = -1LL;
	int64_t x680 = 1608LL;

	t92 = (x677+(x678>>(x679==x680)));

	if (t92 != -121) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x682 = 1961024279539823LLU;
	uint64_t x683 = 15759063202039142LLU;
	volatile uint64_t t93 = 7338499766088933228LLU;

	t93 = (x681+(x682>>(x683==x684)));

	if (t93 != 1961024279507055LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x685 = -707;
	static uint32_t x687 = UINT32_MAX;
	static int64_t x688 = -7LL;
	static volatile int32_t t94 = 0;

	t94 = (x685+(x686>>(x687==x688)));

	if (t94 != -705) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x689 = -1;
	int64_t x690 = 26603736857883LL;
	int32_t x691 = -1;
	int16_t x692 = INT16_MAX;
	volatile int64_t t95 = -18737545082599LL;

	t95 = (x689+(x690>>(x691==x692)));

	if (t95 != 26603736857882LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x697 = 152591U;
	volatile int16_t x698 = INT16_MAX;
	volatile uint32_t t96 = 12190664U;

	t96 = (x697+(x698>>(x699==x700)));

	if (t96 != 185358U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x701 = INT64_MIN;
	static int16_t x702 = INT16_MAX;
	uint16_t x703 = UINT16_MAX;
	static uint64_t x704 = 290508998453LLU;
	int64_t t97 = -197827497428748LL;

	t97 = (x701+(x702>>(x703==x704)));

	if (t97 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x705 = UINT32_MAX;
	static uint32_t x706 = 8019923U;
	static uint64_t x707 = 7663397010527203918LLU;
	volatile int64_t x708 = -1LL;
	static volatile uint32_t t98 = 3091U;

	t98 = (x705+(x706>>(x707==x708)));

	if (t98 != 8019922U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x709 = 2324200761246748LLU;
	int16_t x710 = 1;
	int16_t x711 = -1;
	int64_t x712 = INT64_MIN;
	volatile uint64_t t99 = 2743851233LLU;

	t99 = (x709+(x710>>(x711==x712)));

	if (t99 != 2324200761246749LLU) { NG(); } else { ; }
	
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

