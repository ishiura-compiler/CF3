#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -19;
int16_t x15 = INT16_MAX;
int16_t x16 = -1;
int8_t x17 = -1;
uint64_t x18 = UINT64_MAX;
volatile uint32_t t5 = 190660U;
static int8_t x37 = INT8_MAX;
uint16_t x41 = 0U;
int32_t x42 = INT32_MIN;
int16_t x43 = -590;
static int32_t x47 = -1;
int32_t t10 = 2074;
int64_t x50 = -79120203163LL;
uint32_t x52 = 2U;
uint64_t x65 = 1056LLU;
int8_t x67 = -1;
volatile uint64_t x81 = 417LLU;
uint64_t x82 = 13389LLU;
int16_t x83 = INT16_MIN;
int32_t x92 = -108799925;
int8_t x93 = INT8_MAX;
static int32_t x102 = INT32_MIN;
volatile int8_t x104 = INT8_MIN;
uint32_t x109 = 30029U;
int64_t t25 = -3817LL;
uint32_t x117 = 4U;
volatile uint32_t t26 = 18U;
uint8_t x127 = UINT8_MAX;
int64_t x129 = INT64_MAX;
static volatile int64_t t28 = -128833204LL;
int32_t x135 = 13597;
int16_t x140 = 5;
static volatile int64_t t30 = -3324612912839LL;
int32_t x143 = -1;
static volatile int64_t t31 = 19365LL;
int32_t x145 = 0;
uint64_t t32 = 3LLU;
static int32_t t33 = 486692;
int16_t x165 = INT16_MIN;
uint32_t x166 = 16119110U;
volatile int64_t x174 = INT64_MAX;
static int64_t x177 = 199252573557634LL;
static int64_t t40 = 5567LL;
int8_t x182 = INT8_MIN;
int16_t x184 = 14;
volatile uint16_t x187 = 26291U;
volatile uint64_t t43 = 2052166027LLU;
volatile uint8_t x196 = UINT8_MAX;
int16_t x197 = INT16_MIN;
static volatile int64_t x200 = INT64_MIN;
int16_t x202 = -1;
int16_t x204 = 10;
int16_t x209 = 25;
static int16_t x217 = INT16_MIN;
int32_t x219 = 844079;
uint32_t x225 = UINT32_MAX;
volatile uint32_t t51 = 25U;
volatile int8_t x230 = 18;
static int16_t x241 = INT16_MIN;
int8_t x243 = INT8_MAX;
volatile int8_t x244 = -1;
volatile int32_t t56 = -3318;
int32_t x250 = INT32_MIN;
int32_t x256 = -177;
static int16_t x258 = INT16_MIN;
static int16_t x262 = INT16_MAX;
uint8_t x264 = UINT8_MAX;
static volatile int32_t x265 = INT32_MIN;
int64_t x266 = 4172756LL;
uint16_t x275 = 98U;
int64_t t63 = -31LL;
volatile uint64_t x281 = 745503383912417LLU;
uint16_t x284 = UINT16_MAX;
static volatile uint64_t t65 = 4886465488LLU;
static int32_t x285 = -3;
int64_t x286 = -151167825775026032LL;
uint64_t x290 = 376LLU;
volatile uint64_t t67 = 5860628129937177LLU;
uint8_t x294 = 16U;
int16_t x303 = -1;
int8_t x307 = -1;
uint64_t t70 = 5635955992274LLU;
volatile int64_t x315 = -1LL;
int64_t t71 = 3LL;
volatile int16_t x330 = INT16_MIN;
int32_t x332 = -526075447;
int32_t t76 = -523823059;
uint16_t x352 = 8U;
uint32_t x354 = UINT32_MAX;
int16_t x361 = -9;
uint8_t x362 = 52U;
static int64_t x365 = -86763LL;
volatile int32_t x370 = INT32_MIN;
int16_t x372 = -55;
int32_t t84 = -36;
uint64_t x376 = UINT64_MAX;
uint64_t x382 = 2845460184054397055LLU;
volatile int64_t x389 = INT64_MAX;
int32_t x393 = -62186567;
uint64_t x400 = 9LLU;
uint64_t t90 = 128867LLU;
uint32_t x406 = UINT32_MAX;
uint8_t x407 = UINT8_MAX;
volatile int64_t t91 = 115907317235LL;
static uint32_t x416 = 144U;
uint64_t x418 = 17677LLU;
int64_t x419 = -1LL;
int64_t x420 = -1LL;
uint64_t t93 = 5847LLU;
uint64_t x429 = UINT64_MAX;
static uint16_t x432 = 573U;
uint64_t t95 = 263579988568269LLU;
int32_t x435 = -1013;
int8_t x440 = INT8_MAX;
int32_t x445 = 1;
volatile int64_t t99 = 4107649779LL;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int64_t x2 = 34LL;
	int16_t x3 = -1;
	static int64_t t0 = 1411278940485157896LL;

	t0 = (x1*((x2%x3)%x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	int16_t x6 = -1;
	static volatile int8_t x7 = -1;
	static uint16_t x8 = UINT16_MAX;
	static int32_t t1 = 77;

	t1 = (x5*((x6%x7)%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 5U;
	volatile uint32_t x14 = UINT32_MAX;
	volatile uint32_t t2 = 6U;

	t2 = (x13*((x14%x15)%x16));

	if (t2 != 15U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x19 = 13U;
	uint32_t x20 = 1156888U;
	uint64_t t3 = 353LLU;

	t3 = (x17*((x18%x19)%x20));

	if (t3 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x21 = INT16_MAX;
	static uint16_t x22 = 399U;
	int32_t x23 = INT32_MAX;
	static int64_t x24 = INT64_MAX;
	int64_t t4 = -2105LL;

	t4 = (x21*((x22%x23)%x24));

	if (t4 != 13074033LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	static uint32_t x26 = 1822916U;
	volatile uint8_t x27 = UINT8_MAX;
	int32_t x28 = -502;

	t5 = (x25*((x26%x27)%x28));

	if (t5 != 4294944768U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = -1;
	static volatile uint16_t x30 = UINT16_MAX;
	int32_t x31 = INT32_MAX;
	uint8_t x32 = UINT8_MAX;
	static int32_t t6 = -8267;

	t6 = (x29*((x30%x31)%x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x33 = 1U;
	int8_t x34 = 2;
	int32_t x35 = INT32_MIN;
	volatile int8_t x36 = INT8_MAX;
	static volatile int32_t t7 = 31;

	t7 = (x33*((x34%x35)%x36));

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x38 = UINT8_MAX;
	static uint16_t x39 = 14U;
	static int64_t x40 = -1LL;
	int64_t t8 = -57468471481297764LL;

	t8 = (x37*((x38%x39)%x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x44 = -2776;
	volatile int32_t t9 = 998780525;

	t9 = (x41*((x42%x43)%x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x45 = INT8_MIN;
	uint8_t x46 = 7U;
	int32_t x48 = 4534;

	t10 = (x45*((x46%x47)%x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MIN;
	static int32_t x51 = 31268;
	static volatile int64_t t11 = -985565327082LL;

	t11 = (x49*((x50%x51)%x52));

	if (t11 != 2147483648LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x53 = 7U;
	uint32_t x54 = 269U;
	uint16_t x55 = 6335U;
	volatile uint8_t x56 = UINT8_MAX;
	uint32_t t12 = 953670U;

	t12 = (x53*((x54%x55)%x56));

	if (t12 != 98U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = UINT64_MAX;
	int64_t x58 = -1LL;
	uint16_t x59 = 2U;
	static int8_t x60 = INT8_MIN;
	volatile uint64_t t13 = 7463939LLU;

	t13 = (x57*((x58%x59)%x60));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x66 = 27;
	static int64_t x68 = INT64_MIN;
	uint64_t t14 = 2301LLU;

	t14 = (x65*((x66%x67)%x68));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x69 = INT16_MIN;
	volatile int8_t x70 = -20;
	int16_t x71 = INT16_MIN;
	static uint8_t x72 = 2U;
	volatile int32_t t15 = 129782302;

	t15 = (x69*((x70%x71)%x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x77 = INT16_MAX;
	static int64_t x78 = INT64_MIN;
	int64_t x79 = INT64_MIN;
	int16_t x80 = INT16_MIN;
	static int64_t t16 = 3LL;

	t16 = (x77*((x78%x79)%x80));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x84 = 16U;
	uint64_t t17 = 3263819229108267LLU;

	t17 = (x81*((x82%x83)%x84));

	if (t17 != 5421LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x85 = UINT64_MAX;
	static int64_t x86 = INT64_MIN;
	uint16_t x87 = 1939U;
	int16_t x88 = INT16_MIN;
	volatile uint64_t t18 = 135290LLU;

	t18 = (x85*((x86%x87)%x88));

	if (t18 != 1611LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x89 = -1;
	volatile int8_t x90 = 0;
	volatile int64_t x91 = INT64_MIN;
	int64_t t19 = 8386095310LL;

	t19 = (x89*((x90%x91)%x92));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x94 = 2U;
	uint64_t x95 = 1LLU;
	int64_t x96 = -1LL;
	uint64_t t20 = 2496LLU;

	t20 = (x93*((x94%x95)%x96));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = INT32_MAX;
	int16_t x98 = -1;
	int8_t x99 = 1;
	uint32_t x100 = UINT32_MAX;
	uint32_t t21 = 3U;

	t21 = (x97*((x98%x99)%x100));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = -1;
	uint8_t x103 = 4U;
	volatile int32_t t22 = -154614517;

	t22 = (x101*((x102%x103)%x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = 2U;
	int8_t x106 = INT8_MIN;
	static int32_t x107 = -14409;
	uint16_t x108 = 14761U;
	int32_t t23 = 76798615;

	t23 = (x105*((x106%x107)%x108));

	if (t23 != -256) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x110 = 834637212U;
	int32_t x111 = INT32_MIN;
	static int16_t x112 = INT16_MIN;
	uint32_t t24 = 534U;

	t24 = (x109*((x110%x111)%x112));

	if (t24 != 2186666988U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x113 = 63U;
	int16_t x114 = INT16_MAX;
	volatile int64_t x115 = 69627073725924LL;
	int8_t x116 = 1;

	t25 = (x113*((x114%x115)%x116));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x118 = INT16_MIN;
	int16_t x119 = -15282;
	volatile uint32_t x120 = UINT32_MAX;

	t26 = (x117*((x118%x119)%x120));

	if (t26 != 4294958480U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x125 = 0U;
	int32_t x126 = INT32_MIN;
	uint32_t x128 = UINT32_MAX;
	uint32_t t27 = 272U;

	t27 = (x125*((x126%x127)%x128));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x130 = INT8_MIN;
	static int16_t x131 = INT16_MIN;
	volatile int8_t x132 = INT8_MAX;

	t28 = (x129*((x130%x131)%x132));

	if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x133 = UINT32_MAX;
	uint8_t x134 = 13U;
	uint8_t x136 = UINT8_MAX;
	volatile uint32_t t29 = 0U;

	t29 = (x133*((x134%x135)%x136));

	if (t29 != 4294967283U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = 30691LL;
	int16_t x138 = INT16_MIN;
	volatile int16_t x139 = INT16_MIN;

	t30 = (x137*((x138%x139)%x140));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x141 = 4U;
	int64_t x142 = -1115700010985888909LL;
	static uint32_t x144 = 7967U;

	t31 = (x141*((x142%x143)%x144));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x146 = 1LLU;
	int16_t x147 = INT16_MIN;
	int8_t x148 = INT8_MIN;

	t32 = (x145*((x146%x147)%x148));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x149 = UINT8_MAX;
	volatile int32_t x150 = INT32_MIN;
	int16_t x151 = INT16_MAX;
	static int32_t x152 = INT32_MAX;

	t33 = (x149*((x150%x151)%x152));

	if (t33 != -510) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = 8U;
	int8_t x154 = -39;
	volatile uint32_t x155 = 188068156U;
	int32_t x156 = 13375670;
	uint32_t t34 = 4075U;

	t34 = (x153*((x154%x155)%x156));

	if (t34 != 82683640U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = INT8_MAX;
	int16_t x158 = 3052;
	volatile int8_t x159 = -1;
	int32_t x160 = -320;
	int32_t t35 = -184;

	t35 = (x157*((x158%x159)%x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x161 = UINT64_MAX;
	static volatile int16_t x162 = -1;
	volatile int16_t x163 = 3;
	int8_t x164 = 1;
	uint64_t t36 = 21697940577013491LLU;

	t36 = (x161*((x162%x163)%x164));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x167 = INT16_MIN;
	volatile uint64_t x168 = 27590912323939LLU;
	volatile uint64_t t37 = 545658797252487367LLU;

	t37 = (x165*((x166%x167)%x168));

	if (t37 != 18446743545518555136LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x169 = 1744LLU;
	static uint32_t x170 = 49194371U;
	uint64_t x171 = 453202816200564492LLU;
	int16_t x172 = INT16_MIN;
	static volatile uint64_t t38 = 44100476LLU;

	t38 = (x169*((x170%x171)%x172));

	if (t38 != 85794983024LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = -1;
	static volatile int64_t x175 = INT64_MAX;
	int16_t x176 = INT16_MIN;
	volatile int64_t t39 = -38548LL;

	t39 = (x173*((x174%x175)%x176));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x178 = INT64_MAX;
	int16_t x179 = INT16_MAX;
	volatile int64_t x180 = -1LL;

	t40 = (x177*((x178%x179)%x180));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = UINT32_MAX;
	uint8_t x183 = 49U;
	uint32_t t41 = 1045869U;

	t41 = (x181*((x182%x183)%x184));

	if (t41 != 2U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x185 = UINT16_MAX;
	int16_t x186 = -128;
	static int32_t x188 = INT32_MAX;
	static volatile int32_t t42 = 237934402;

	t42 = (x185*((x186%x187)%x188));

	if (t42 != -8388480) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x189 = -8;
	volatile int64_t x190 = INT64_MIN;
	uint64_t x191 = 498140895327LLU;
	static uint64_t x192 = 139268918689188LLU;

	t43 = (x189*((x190%x191)%x192));

	if (t43 != 18446740449478203360LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x193 = INT8_MIN;
	static int32_t x194 = 0;
	volatile uint8_t x195 = 5U;
	volatile int32_t t44 = 3;

	t44 = (x193*((x194%x195)%x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x198 = -4;
	int16_t x199 = -1;
	static int64_t t45 = 12320869LL;

	t45 = (x197*((x198%x199)%x200));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = INT32_MAX;
	static int32_t x203 = INT32_MIN;
	static int32_t t46 = -9;

	t46 = (x201*((x202%x203)%x204));

	if (t46 != -2147483647) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x205 = INT8_MAX;
	int32_t x206 = 6993;
	volatile int8_t x207 = INT8_MAX;
	uint16_t x208 = 1U;
	volatile int32_t t47 = 1267609;

	t47 = (x205*((x206%x207)%x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x210 = UINT32_MAX;
	int32_t x211 = INT32_MIN;
	int16_t x212 = -1;
	volatile uint32_t t48 = 116820920U;

	t48 = (x209*((x210%x211)%x212));

	if (t48 != 2147483623U) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x218 = 4038995;
	int16_t x220 = INT16_MIN;
	static volatile int32_t t49 = 414802;

	t49 = (x217*((x218%x219)%x220));

	if (t49 != -239828992) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x221 = INT16_MIN;
	uint8_t x222 = UINT8_MAX;
	int8_t x223 = -15;
	static int16_t x224 = -4;
	volatile int32_t t50 = 105430734;

	t50 = (x221*((x222%x223)%x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x226 = -1;
	volatile int32_t x227 = -6370;
	static uint32_t x228 = 8585837U;

	t51 = (x225*((x226%x227)%x228));

	if (t51 != 4292918501U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x229 = -1;
	static uint64_t x231 = 1376893LLU;
	int32_t x232 = INT32_MIN;
	uint64_t t52 = 1LLU;

	t52 = (x229*((x230%x231)%x232));

	if (t52 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x233 = 4904798U;
	uint8_t x234 = 2U;
	static uint8_t x235 = 17U;
	uint64_t x236 = UINT64_MAX;
	uint64_t t53 = 2850770LLU;

	t53 = (x233*((x234%x235)%x236));

	if (t53 != 9809596LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x237 = INT16_MIN;
	static volatile uint64_t x238 = 25LLU;
	int32_t x239 = 10;
	int8_t x240 = INT8_MAX;
	volatile uint64_t t54 = 5085684813LLU;

	t54 = (x237*((x238%x239)%x240));

	if (t54 != 18446744073709387776LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x242 = 1;
	volatile int32_t t55 = 1637774;

	t55 = (x241*((x242%x243)%x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = -1;
	int32_t x246 = INT32_MAX;
	int8_t x247 = INT8_MIN;
	int16_t x248 = -119;

	t56 = (x245*((x246%x247)%x248));

	if (t56 != -8) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x249 = UINT32_MAX;
	volatile uint8_t x251 = UINT8_MAX;
	int32_t x252 = INT32_MIN;
	static uint32_t t57 = 159U;

	t57 = (x249*((x250%x251)%x252));

	if (t57 != 128U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x253 = INT16_MIN;
	volatile int64_t x254 = INT64_MAX;
	static uint16_t x255 = UINT16_MAX;
	int64_t t58 = 16034357009439LL;

	t58 = (x253*((x254%x255)%x256));

	if (t58 != -720896LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x257 = -1LL;
	uint32_t x259 = UINT32_MAX;
	int32_t x260 = INT32_MAX;
	int64_t t59 = -865884428009693783LL;

	t59 = (x257*((x258%x259)%x260));

	if (t59 != -2147450881LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = INT32_MAX;
	static int16_t x263 = INT16_MAX;
	int32_t t60 = 424241;

	t60 = (x261*((x262%x263)%x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x267 = UINT64_MAX;
	int32_t x268 = INT32_MIN;
	static volatile uint64_t t61 = 26LLU;

	t61 = (x265*((x266%x267)%x268));

	if (t61 != 18437783148432457728LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x269 = UINT32_MAX;
	uint64_t x270 = UINT64_MAX;
	int16_t x271 = INT16_MAX;
	uint64_t x272 = 638554545LLU;
	volatile uint64_t t62 = 71951001721505551LLU;

	t62 = (x269*((x270%x271)%x272));

	if (t62 != 64424509425LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x273 = 10U;
	int64_t x274 = 60276LL;
	static uint8_t x276 = UINT8_MAX;

	t63 = (x273*((x274%x275)%x276));

	if (t63 != 60LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x277 = 99U;
	static volatile int64_t x278 = INT64_MIN;
	static volatile int32_t x279 = -9;
	uint8_t x280 = 13U;
	int64_t t64 = -446LL;

	t64 = (x277*((x278%x279)%x280));

	if (t64 != -792LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x282 = UINT8_MAX;
	static uint32_t x283 = UINT32_MAX;

	t65 = (x281*((x282%x283)%x284));

	if (t65 != 190103362897666335LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x287 = 62;
	volatile int16_t x288 = INT16_MIN;
	volatile int64_t t66 = 40956275535811337LL;

	t66 = (x285*((x286%x287)%x288));

	if (t66 != 90LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x289 = UINT64_MAX;
	uint32_t x291 = UINT32_MAX;
	int16_t x292 = INT16_MIN;

	t67 = (x289*((x290%x291)%x292));

	if (t67 != 18446744073709551240LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x293 = INT64_MIN;
	int64_t x295 = -1LL;
	static int8_t x296 = -62;
	volatile int64_t t68 = -40LL;

	t68 = (x293*((x294%x295)%x296));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x301 = 733;
	int16_t x302 = INT16_MIN;
	volatile uint32_t x304 = UINT32_MAX;
	static volatile uint32_t t69 = 0U;

	t69 = (x301*((x302%x303)%x304));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x305 = INT32_MAX;
	int16_t x306 = 11;
	uint64_t x308 = UINT64_MAX;

	t70 = (x305*((x306%x307)%x308));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x313 = 2581;
	int64_t x314 = INT64_MAX;
	static int64_t x316 = -1LL;

	t71 = (x313*((x314%x315)%x316));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x317 = -1;
	int32_t x318 = INT32_MIN;
	int64_t x319 = -118589LL;
	int32_t x320 = INT32_MIN;
	static int64_t t72 = -1902LL;

	t72 = (x317*((x318%x319)%x320));

	if (t72 != 74036LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x321 = -1LL;
	uint8_t x322 = 127U;
	int32_t x323 = -1;
	volatile uint32_t x324 = 584311U;
	int64_t t73 = -136666990683250LL;

	t73 = (x321*((x322%x323)%x324));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x325 = 5U;
	uint8_t x326 = UINT8_MAX;
	volatile int8_t x327 = 16;
	int64_t x328 = 62271LL;
	volatile int64_t t74 = -4LL;

	t74 = (x325*((x326%x327)%x328));

	if (t74 != 75LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x329 = UINT16_MAX;
	int16_t x331 = INT16_MIN;
	volatile int32_t t75 = -128363419;

	t75 = (x329*((x330%x331)%x332));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x333 = INT16_MAX;
	int16_t x334 = -11821;
	int16_t x335 = INT16_MIN;
	int32_t x336 = INT32_MIN;

	t76 = (x333*((x334%x335)%x336));

	if (t76 != -387338707) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x341 = 699880400U;
	int32_t x342 = -1;
	int8_t x343 = 3;
	int8_t x344 = -6;
	uint32_t t77 = 6U;

	t77 = (x341*((x342%x343)%x344));

	if (t77 != 3595086896U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x345 = UINT16_MAX;
	uint32_t x346 = UINT32_MAX;
	static int64_t x347 = -146242445984245LL;
	int8_t x348 = INT8_MAX;
	static volatile int64_t t78 = 96LL;

	t78 = (x345*((x346%x347)%x348));

	if (t78 != 983025LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x349 = -1;
	volatile uint16_t x350 = 10615U;
	volatile int8_t x351 = 26;
	volatile int32_t t79 = -3;

	t79 = (x349*((x350%x351)%x352));

	if (t79 != -7) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x353 = INT64_MIN;
	int32_t x355 = -1;
	static uint64_t x356 = UINT64_MAX;
	volatile uint64_t t80 = 122483790101347LLU;

	t80 = (x353*((x354%x355)%x356));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x357 = 119U;
	uint64_t x358 = 2451LLU;
	int8_t x359 = -1;
	static uint64_t x360 = UINT64_MAX;
	uint64_t t81 = 6419134LLU;

	t81 = (x357*((x358%x359)%x360));

	if (t81 != 291669LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x363 = INT8_MAX;
	static uint32_t x364 = UINT32_MAX;
	volatile uint32_t t82 = 61U;

	t82 = (x361*((x362%x363)%x364));

	if (t82 != 4294966828U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x366 = -402859;
	volatile uint32_t x367 = 199U;
	int16_t x368 = -1;
	static volatile int64_t t83 = 186LL;

	t83 = (x365*((x366%x367)%x368));

	if (t83 != -14055606LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x369 = INT16_MIN;
	volatile int8_t x371 = INT8_MIN;

	t84 = (x369*((x370%x371)%x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x373 = 7U;
	int64_t x374 = INT64_MAX;
	int8_t x375 = INT8_MAX;
	uint64_t t85 = 977432868713511720LLU;

	t85 = (x373*((x374%x375)%x376));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x381 = 723595U;
	int32_t x383 = -1;
	uint64_t x384 = 2512LLU;
	volatile uint64_t t86 = 222364509218956547LLU;

	t86 = (x381*((x382%x383)%x384));

	if (t86 != 1319113685LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x385 = 0U;
	uint8_t x386 = UINT8_MAX;
	uint8_t x387 = 7U;
	volatile int8_t x388 = INT8_MIN;
	volatile int32_t t87 = -116273171;

	t87 = (x385*((x386%x387)%x388));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x390 = INT64_MIN;
	int8_t x391 = INT8_MIN;
	uint8_t x392 = 8U;
	volatile int64_t t88 = -7756658401LL;

	t88 = (x389*((x390%x391)%x392));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x394 = INT8_MIN;
	int64_t x395 = INT64_MIN;
	uint8_t x396 = 6U;
	int64_t t89 = -12LL;

	t89 = (x393*((x394%x395)%x396));

	if (t89 != 124373134LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x397 = INT16_MIN;
	uint32_t x398 = UINT32_MAX;
	static int16_t x399 = INT16_MIN;

	t90 = (x397*((x398%x399)%x400));

	if (t90 != 18446744073709322240LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x405 = INT64_MAX;
	volatile int64_t x408 = -15LL;

	t91 = (x405*((x406%x407)%x408));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x413 = INT8_MIN;
	static int16_t x414 = INT16_MAX;
	volatile int64_t x415 = -43101591771191933LL;
	static int64_t t92 = -1296426161880704731LL;

	t92 = (x413*((x414%x415)%x416));

	if (t92 != -10112LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x417 = -1;

	t93 = (x417*((x418%x419)%x420));

	if (t93 != 18446744073709533939LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x421 = -2;
	volatile int16_t x422 = INT16_MAX;
	uint8_t x423 = 44U;
	static int32_t x424 = INT32_MAX;
	static int32_t t94 = 3743;

	t94 = (x421*((x422%x423)%x424));

	if (t94 != -62) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x430 = -1;
	int8_t x431 = INT8_MAX;

	t95 = (x429*((x430%x431)%x432));

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x433 = UINT8_MAX;
	static uint8_t x434 = UINT8_MAX;
	int64_t x436 = -3415678508LL;
	int64_t t96 = -111LL;

	t96 = (x433*((x434%x435)%x436));

	if (t96 != 65025LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x437 = UINT16_MAX;
	static int16_t x438 = INT16_MAX;
	int32_t x439 = INT32_MIN;
	int32_t t97 = -84;

	t97 = (x437*((x438%x439)%x440));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x441 = -1;
	volatile int32_t x442 = INT32_MIN;
	uint8_t x443 = 50U;
	uint32_t x444 = 15717086U;
	static volatile uint32_t t98 = 237U;

	t98 = (x441*((x442%x443)%x444));

	if (t98 != 4290764526U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x446 = INT16_MAX;
	volatile int16_t x447 = INT16_MAX;
	static int64_t x448 = INT64_MIN;

	t99 = (x445*((x446%x447)%x448));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

