#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x11 = 2U;
int32_t x12 = 3558;
uint8_t x19 = 3U;
volatile int16_t x20 = INT16_MIN;
volatile int32_t x24 = INT32_MIN;
volatile int32_t t4 = 354;
volatile uint64_t x29 = 3215468674002470107LLU;
static int32_t t6 = -39625;
int8_t x56 = 1;
static uint64_t x57 = 111281975732261018LLU;
uint32_t x61 = 143563U;
int32_t x66 = INT32_MAX;
uint8_t x69 = 28U;
int8_t x72 = -1;
volatile int32_t t17 = 73;
static uint32_t x77 = UINT32_MAX;
uint64_t x83 = 56LLU;
uint8_t x90 = 1U;
int16_t x98 = INT16_MIN;
uint16_t x100 = UINT16_MAX;
uint64_t x110 = 1216925656LLU;
volatile uint16_t x112 = UINT16_MAX;
int32_t t25 = 490200;
volatile int32_t x118 = -126;
uint64_t x126 = 414728438344542LLU;
int16_t x130 = INT16_MIN;
int32_t x135 = 13;
int32_t t29 = -962248;
int16_t x138 = 4352;
volatile int64_t x141 = 270289229256LL;
uint64_t x149 = UINT64_MAX;
static uint64_t x152 = 1323LLU;
int8_t x154 = -1;
int16_t x155 = INT16_MAX;
int32_t x156 = INT32_MIN;
int32_t x157 = INT32_MIN;
volatile int32_t t34 = -396884;
int32_t t35 = -83228970;
int16_t x165 = -1;
int32_t x168 = -1;
uint32_t x170 = 1U;
int64_t x177 = -1LL;
volatile int32_t t39 = -1142;
static uint64_t x186 = UINT64_MAX;
int8_t x187 = -1;
static volatile int8_t x188 = INT8_MIN;
uint16_t x189 = 31622U;
uint32_t x204 = 685290290U;
int16_t x209 = INT16_MAX;
int8_t x217 = INT8_MIN;
int32_t x219 = INT32_MAX;
int32_t t48 = 37;
uint8_t x228 = UINT8_MAX;
int8_t x231 = -2;
int32_t t50 = 402026892;
int16_t x239 = -1;
static volatile uint64_t x250 = 35865259536802538LLU;
static int64_t x252 = -2248005621LL;
uint64_t x257 = 13251030038043813LLU;
static volatile int8_t x261 = INT8_MIN;
static int8_t x262 = INT8_MAX;
int8_t x265 = -1;
int16_t x271 = 0;
static int16_t x281 = INT16_MIN;
int32_t t59 = -177511;
uint16_t x300 = 452U;
volatile int32_t t60 = -2979255;
static int32_t x317 = INT32_MAX;
static uint32_t x318 = 132U;
int32_t x320 = -1;
uint64_t x321 = 7162159058LLU;
static int32_t t65 = 3;
static int8_t x334 = INT8_MIN;
int32_t t69 = 869;
static int32_t t70 = 23229;
volatile int8_t x367 = INT8_MIN;
volatile int32_t x368 = 2;
volatile int32_t t73 = -417520;
int64_t x377 = -1LL;
static int32_t x391 = INT32_MAX;
int32_t x392 = INT32_MIN;
int32_t t79 = 20185327;
uint64_t x395 = 2224835LLU;
uint8_t x398 = 38U;
int32_t t81 = -994939960;
int32_t x402 = -304302;
volatile uint16_t x404 = 7U;
int32_t t83 = -11414869;
volatile int64_t x410 = -55430298LL;
int16_t x412 = INT16_MIN;
static int16_t x429 = INT16_MIN;
uint64_t x434 = UINT64_MAX;
uint32_t x437 = UINT32_MAX;
volatile int64_t x439 = -1LL;
static uint8_t x444 = UINT8_MAX;
int32_t t91 = 48;
int16_t x447 = 61;
int32_t t92 = -967;
volatile int16_t x449 = INT16_MIN;
volatile uint32_t x450 = 15114U;
volatile int8_t x451 = INT8_MAX;
volatile uint32_t x453 = UINT32_MAX;
int32_t x456 = -2;
volatile int32_t t94 = 650800;
volatile int16_t x461 = 3057;
static int8_t x462 = -1;
int32_t x464 = -1;
volatile int8_t x471 = INT8_MIN;
static int32_t x472 = -118164576;
int16_t x475 = INT16_MIN;
int16_t x476 = 1;
volatile int32_t t99 = -3366;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	uint64_t x2 = 2948964597644181390LLU;
	volatile int8_t x3 = 7;
	int64_t x4 = 106372578029270717LL;
	volatile int32_t t0 = 549702;

	t0 = ((x1*(x2|x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x9 = INT32_MIN;
	int64_t x10 = 3797LL;
	volatile int32_t t1 = 14651;

	t1 = ((x9*(x10|x11))==x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x13 = 3998U;
	int64_t x14 = 1215492014238173LL;
	int8_t x15 = 3;
	int64_t x16 = 2893528451LL;
	int32_t t2 = -498;

	t2 = ((x13*(x14|x15))==x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = 29LL;
	int32_t x18 = 242946717;
	volatile int32_t t3 = 19739034;

	t3 = ((x17*(x18|x19))==x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	int64_t x22 = -1LL;
	int8_t x23 = -31;

	t4 = ((x21*(x22|x23))==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = 129024981119362LL;
	int16_t x26 = INT16_MIN;
	volatile int16_t x27 = -1;
	int8_t x28 = INT8_MIN;
	int32_t t5 = 361683;

	t5 = ((x25*(x26|x27))==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x30 = 3724U;
	int32_t x31 = -28;
	static int32_t x32 = -3995449;

	t6 = ((x29*(x30|x31))==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = 41;
	int64_t x34 = 29688484406LL;
	int8_t x35 = INT8_MIN;
	int8_t x36 = INT8_MIN;
	static int32_t t7 = 122;

	t7 = ((x33*(x34|x35))==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = -1;
	uint16_t x38 = 250U;
	int64_t x39 = INT64_MAX;
	static int16_t x40 = 239;
	static int32_t t8 = -16;

	t8 = ((x37*(x38|x39))==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 52U;
	int16_t x42 = -707;
	uint32_t x43 = 696443U;
	int8_t x44 = INT8_MAX;
	int32_t t9 = 317013383;

	t9 = ((x41*(x42|x43))==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = -3442;
	int8_t x46 = -1;
	int64_t x47 = INT64_MAX;
	volatile uint64_t x48 = 3008433348LLU;
	volatile int32_t t10 = 7564;

	t10 = ((x45*(x46|x47))==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x49 = 454;
	volatile uint32_t x50 = 8U;
	volatile int16_t x51 = INT16_MAX;
	uint32_t x52 = UINT32_MAX;
	int32_t t11 = -594083;

	t11 = ((x49*(x50|x51))==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MAX;
	uint32_t x54 = UINT32_MAX;
	int64_t x55 = 3790326LL;
	static volatile int32_t t12 = 94;

	t12 = ((x53*(x54|x55))==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x58 = -1;
	volatile int16_t x59 = INT16_MAX;
	int16_t x60 = INT16_MAX;
	volatile int32_t t13 = 781889;

	t13 = ((x57*(x58|x59))==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x62 = INT16_MIN;
	int64_t x63 = -1LL;
	volatile uint16_t x64 = UINT16_MAX;
	volatile int32_t t14 = -82239408;

	t14 = ((x61*(x62|x63))==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	volatile uint64_t x67 = 116LLU;
	uint16_t x68 = 46U;
	int32_t t15 = -10919;

	t15 = ((x65*(x66|x67))==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x70 = INT8_MIN;
	static int8_t x71 = 8;
	int32_t t16 = 116356247;

	t16 = ((x69*(x70|x71))==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x73 = 15U;
	int8_t x74 = 1;
	uint64_t x75 = 4362272728650LLU;
	int8_t x76 = INT8_MIN;

	t17 = ((x73*(x74|x75))==x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x78 = UINT64_MAX;
	int32_t x79 = INT32_MIN;
	int32_t x80 = 0;
	volatile int32_t t18 = 12;

	t18 = ((x77*(x78|x79))==x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = -1;
	static int32_t x82 = 129766;
	int32_t x84 = -1;
	volatile int32_t t19 = 0;

	t19 = ((x81*(x82|x83))==x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MIN;
	uint8_t x86 = UINT8_MAX;
	uint16_t x87 = UINT16_MAX;
	volatile uint16_t x88 = UINT16_MAX;
	static volatile int32_t t20 = 14630623;

	t20 = ((x85*(x86|x87))==x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x89 = 3U;
	static volatile int8_t x91 = -1;
	static int64_t x92 = -1LL;
	static volatile int32_t t21 = -35;

	t21 = ((x89*(x90|x91))==x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = 27U;
	static uint16_t x94 = UINT16_MAX;
	uint64_t x95 = UINT64_MAX;
	int16_t x96 = -1;
	int32_t t22 = 6;

	t22 = ((x93*(x94|x95))==x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 21U;
	volatile int8_t x99 = -1;
	static volatile int32_t t23 = 233058492;

	t23 = ((x97*(x98|x99))==x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = -1;
	uint64_t x106 = 923768217472191564LLU;
	int8_t x107 = INT8_MIN;
	int16_t x108 = -1;
	int32_t t24 = 117451304;

	t24 = ((x105*(x106|x107))==x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x109 = UINT32_MAX;
	static int16_t x111 = INT16_MIN;

	t25 = ((x109*(x110|x111))==x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x117 = INT16_MAX;
	static uint16_t x119 = UINT16_MAX;
	static volatile int8_t x120 = INT8_MIN;
	int32_t t26 = -10971144;

	t26 = ((x117*(x118|x119))==x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = -45;
	volatile uint64_t x127 = 2LLU;
	uint64_t x128 = 424424494697329593LLU;
	int32_t t27 = -161954;

	t27 = ((x125*(x126|x127))==x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x129 = 9547065566495LLU;
	static volatile int8_t x131 = INT8_MAX;
	static int32_t x132 = 22;
	int32_t t28 = -1217;

	t28 = ((x129*(x130|x131))==x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = -1;
	static int32_t x134 = INT32_MIN;
	volatile int8_t x136 = INT8_MIN;

	t29 = ((x133*(x134|x135))==x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = -1;
	static int16_t x139 = -1;
	int16_t x140 = 32;
	static volatile int32_t t30 = 1077734;

	t30 = ((x137*(x138|x139))==x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x142 = -1;
	static uint8_t x143 = 1U;
	int32_t x144 = 125247;
	int32_t t31 = 1013880717;

	t31 = ((x141*(x142|x143))==x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x150 = 11;
	volatile uint32_t x151 = UINT32_MAX;
	static int32_t t32 = -450702;

	t32 = ((x149*(x150|x151))==x152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x153 = UINT16_MAX;
	int32_t t33 = -5;

	t33 = ((x153*(x154|x155))==x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x158 = 74;
	uint64_t x159 = 1930LLU;
	volatile int64_t x160 = INT64_MIN;

	t34 = ((x157*(x158|x159))==x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x161 = INT8_MAX;
	int32_t x162 = -1;
	int64_t x163 = INT64_MIN;
	static int16_t x164 = -1;

	t35 = ((x161*(x162|x163))==x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x166 = -1;
	int8_t x167 = INT8_MAX;
	int32_t t36 = -41895890;

	t36 = ((x165*(x166|x167))==x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x169 = UINT64_MAX;
	volatile int16_t x171 = -7;
	volatile uint16_t x172 = 14U;
	volatile int32_t t37 = 5;

	t37 = ((x169*(x170|x171))==x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x178 = INT32_MIN;
	int8_t x179 = 0;
	int16_t x180 = 1;
	volatile int32_t t38 = -5952093;

	t38 = ((x177*(x178|x179))==x180);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x181 = -1LL;
	static int32_t x182 = INT32_MIN;
	uint16_t x183 = 168U;
	int32_t x184 = INT32_MIN;

	t39 = ((x181*(x182|x183))==x184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x185 = UINT32_MAX;
	int32_t t40 = -343;

	t40 = ((x185*(x186|x187))==x188);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x190 = 408691010U;
	static uint8_t x191 = UINT8_MAX;
	volatile uint32_t x192 = 3955740U;
	static int32_t t41 = 147986;

	t41 = ((x189*(x190|x191))==x192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x193 = UINT64_MAX;
	static int64_t x194 = INT64_MAX;
	int8_t x195 = INT8_MIN;
	uint8_t x196 = 89U;
	int32_t t42 = 393420490;

	t42 = ((x193*(x194|x195))==x196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x201 = -1;
	int64_t x202 = INT64_MIN;
	int16_t x203 = 165;
	volatile int32_t t43 = 230719841;

	t43 = ((x201*(x202|x203))==x204);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x205 = 6;
	static int64_t x206 = -458734156079LL;
	static uint16_t x207 = 95U;
	static int64_t x208 = INT64_MIN;
	volatile int32_t t44 = -5834;

	t44 = ((x205*(x206|x207))==x208);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x210 = 1974399346538LLU;
	uint8_t x211 = 16U;
	static uint16_t x212 = 1U;
	static volatile int32_t t45 = 27;

	t45 = ((x209*(x210|x211))==x212);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x213 = -1;
	uint8_t x214 = UINT8_MAX;
	volatile int64_t x215 = INT64_MIN;
	int64_t x216 = INT64_MAX;
	static int32_t t46 = -66825;

	t46 = ((x213*(x214|x215))==x216);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x218 = 2579LLU;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t47 = 1539092;

	t47 = ((x217*(x218|x219))==x220);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x221 = -1;
	uint64_t x222 = UINT64_MAX;
	int64_t x223 = -5053526LL;
	int16_t x224 = 3;

	t48 = ((x221*(x222|x223))==x224);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x225 = INT16_MIN;
	static uint64_t x226 = UINT64_MAX;
	static int32_t x227 = INT32_MAX;
	static int32_t t49 = -2;

	t49 = ((x225*(x226|x227))==x228);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x229 = 2U;
	int16_t x230 = 7;
	int16_t x232 = INT16_MAX;

	t50 = ((x229*(x230|x231))==x232);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x237 = UINT64_MAX;
	volatile int64_t x238 = -1LL;
	volatile uint32_t x240 = 23930184U;
	int32_t t51 = 6;

	t51 = ((x237*(x238|x239))==x240);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x249 = 3372330368939023282LL;
	int32_t x251 = 380024;
	volatile int32_t t52 = 0;

	t52 = ((x249*(x250|x251))==x252);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x258 = 1939534183053LLU;
	volatile uint32_t x259 = UINT32_MAX;
	int64_t x260 = INT64_MAX;
	int32_t t53 = -46831431;

	t53 = ((x257*(x258|x259))==x260);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x263 = 4U;
	int32_t x264 = -6;
	volatile int32_t t54 = -59353;

	t54 = ((x261*(x262|x263))==x264);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x266 = UINT16_MAX;
	volatile int32_t x267 = -36678;
	int16_t x268 = INT16_MAX;
	int32_t t55 = 309531;

	t55 = ((x265*(x266|x267))==x268);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x269 = INT64_MAX;
	volatile int8_t x270 = -1;
	static int8_t x272 = INT8_MIN;
	volatile int32_t t56 = -39298;

	t56 = ((x269*(x270|x271))==x272);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x277 = INT8_MIN;
	volatile uint32_t x278 = UINT32_MAX;
	static volatile int8_t x279 = INT8_MIN;
	uint32_t x280 = UINT32_MAX;
	int32_t t57 = -506;

	t57 = ((x277*(x278|x279))==x280);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x282 = 210LL;
	int16_t x283 = 1;
	static uint32_t x284 = 252396537U;
	int32_t t58 = 100306974;

	t58 = ((x281*(x282|x283))==x284);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x285 = INT16_MAX;
	int64_t x286 = 2LL;
	static int16_t x287 = INT16_MIN;
	int64_t x288 = -1LL;

	t59 = ((x285*(x286|x287))==x288);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x297 = -3;
	int8_t x298 = INT8_MAX;
	uint64_t x299 = UINT64_MAX;

	t60 = ((x297*(x298|x299))==x300);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x301 = UINT16_MAX;
	uint64_t x302 = 143902104259586LLU;
	uint32_t x303 = UINT32_MAX;
	int64_t x304 = INT64_MIN;
	int32_t t61 = -55109;

	t61 = ((x301*(x302|x303))==x304);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x309 = UINT16_MAX;
	volatile int8_t x310 = INT8_MIN;
	int16_t x311 = INT16_MAX;
	int8_t x312 = 33;
	int32_t t62 = 1149128;

	t62 = ((x309*(x310|x311))==x312);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x313 = INT16_MAX;
	static uint64_t x314 = 12754414LLU;
	uint8_t x315 = 0U;
	int64_t x316 = INT64_MIN;
	static int32_t t63 = -1256739;

	t63 = ((x313*(x314|x315))==x316);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x319 = INT8_MIN;
	volatile int32_t t64 = -3;

	t64 = ((x317*(x318|x319))==x320);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x322 = UINT64_MAX;
	int64_t x323 = INT64_MAX;
	uint32_t x324 = 5814U;

	t65 = ((x321*(x322|x323))==x324);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x329 = -1;
	int16_t x330 = -1;
	uint16_t x331 = UINT16_MAX;
	volatile uint16_t x332 = UINT16_MAX;
	int32_t t66 = -1922;

	t66 = ((x329*(x330|x331))==x332);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x333 = 1;
	int8_t x335 = INT8_MIN;
	int8_t x336 = INT8_MIN;
	int32_t t67 = -196;

	t67 = ((x333*(x334|x335))==x336);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x341 = 20213U;
	uint64_t x342 = UINT64_MAX;
	uint8_t x343 = 28U;
	int32_t x344 = -1;
	volatile int32_t t68 = 456431052;

	t68 = ((x341*(x342|x343))==x344);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x345 = 25U;
	volatile int32_t x346 = INT32_MIN;
	volatile int32_t x347 = INT32_MAX;
	uint32_t x348 = 110U;

	t69 = ((x345*(x346|x347))==x348);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x349 = INT16_MAX;
	uint32_t x350 = 167616986U;
	int64_t x351 = -4961658577182LL;
	static uint32_t x352 = UINT32_MAX;

	t70 = ((x349*(x350|x351))==x352);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x353 = -1;
	int64_t x354 = INT64_MIN;
	int16_t x355 = INT16_MAX;
	volatile int16_t x356 = INT16_MAX;
	volatile int32_t t71 = -2791;

	t71 = ((x353*(x354|x355))==x356);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x357 = -1LL;
	static int64_t x358 = -392707062723LL;
	uint64_t x359 = UINT64_MAX;
	int8_t x360 = -1;
	int32_t t72 = 10106250;

	t72 = ((x357*(x358|x359))==x360);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x365 = 248U;
	uint8_t x366 = 20U;

	t73 = ((x365*(x366|x367))==x368);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x369 = INT32_MAX;
	int16_t x370 = -329;
	volatile int64_t x371 = -1LL;
	int16_t x372 = INT16_MIN;
	volatile int32_t t74 = 1;

	t74 = ((x369*(x370|x371))==x372);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x373 = 4U;
	volatile uint16_t x374 = 7110U;
	uint32_t x375 = 7U;
	int16_t x376 = -1;
	volatile int32_t t75 = -7;

	t75 = ((x373*(x374|x375))==x376);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x378 = INT16_MAX;
	int64_t x379 = INT64_MIN;
	static int16_t x380 = -7;
	volatile int32_t t76 = -9;

	t76 = ((x377*(x378|x379))==x380);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x381 = -1;
	uint32_t x382 = 48249U;
	static int64_t x383 = INT64_MIN;
	int8_t x384 = 1;
	int32_t t77 = 8680;

	t77 = ((x381*(x382|x383))==x384);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x385 = 1002280LL;
	int16_t x386 = INT16_MIN;
	int32_t x387 = INT32_MIN;
	int32_t x388 = INT32_MIN;
	static int32_t t78 = -9;

	t78 = ((x385*(x386|x387))==x388);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x389 = -1LL;
	int16_t x390 = INT16_MIN;

	t79 = ((x389*(x390|x391))==x392);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x393 = 59U;
	int32_t x394 = 130088;
	static volatile int64_t x396 = INT64_MIN;
	volatile int32_t t80 = 5089;

	t80 = ((x393*(x394|x395))==x396);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x397 = -1;
	int16_t x399 = INT16_MIN;
	int32_t x400 = INT32_MIN;

	t81 = ((x397*(x398|x399))==x400);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x401 = -1;
	static int16_t x403 = -137;
	volatile int32_t t82 = -22564;

	t82 = ((x401*(x402|x403))==x404);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x405 = INT64_MAX;
	static int32_t x406 = -85500;
	uint64_t x407 = 277785074210698174LLU;
	uint32_t x408 = UINT32_MAX;

	t83 = ((x405*(x406|x407))==x408);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x409 = 63LL;
	static int32_t x411 = -301;
	static volatile int32_t t84 = -33061684;

	t84 = ((x409*(x410|x411))==x412);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x413 = -22710;
	static uint64_t x414 = 59774932LLU;
	int64_t x415 = INT64_MIN;
	int64_t x416 = INT64_MIN;
	volatile int32_t t85 = 39;

	t85 = ((x413*(x414|x415))==x416);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x417 = UINT16_MAX;
	int32_t x418 = INT32_MAX;
	static int16_t x419 = -1;
	int8_t x420 = INT8_MIN;
	static volatile int32_t t86 = -46032;

	t86 = ((x417*(x418|x419))==x420);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x421 = INT32_MAX;
	int16_t x422 = -1;
	int64_t x423 = 34LL;
	uint64_t x424 = 79LLU;
	int32_t t87 = -2452063;

	t87 = ((x421*(x422|x423))==x424);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x430 = INT8_MIN;
	int64_t x431 = INT64_MIN;
	uint16_t x432 = UINT16_MAX;
	int32_t t88 = -1273223;

	t88 = ((x429*(x430|x431))==x432);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x433 = -1;
	uint8_t x435 = UINT8_MAX;
	uint16_t x436 = 821U;
	static int32_t t89 = 1654104;

	t89 = ((x433*(x434|x435))==x436);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x438 = 27;
	int32_t x440 = -89;
	static int32_t t90 = 172674;

	t90 = ((x437*(x438|x439))==x440);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x441 = INT64_MAX;
	volatile uint64_t x442 = 1313510455761040LLU;
	int8_t x443 = -1;

	t91 = ((x441*(x442|x443))==x444);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x445 = INT8_MIN;
	int8_t x446 = INT8_MAX;
	int16_t x448 = INT16_MIN;

	t92 = ((x445*(x446|x447))==x448);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x452 = 1;
	volatile int32_t t93 = 202729306;

	t93 = ((x449*(x450|x451))==x452);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x454 = -285;
	static int16_t x455 = INT16_MIN;

	t94 = ((x453*(x454|x455))==x456);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x457 = -1LL;
	int16_t x458 = -1;
	int32_t x459 = INT32_MIN;
	volatile int32_t x460 = INT32_MIN;
	int32_t t95 = -9301;

	t95 = ((x457*(x458|x459))==x460);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x463 = 129271U;
	int32_t t96 = 275;

	t96 = ((x461*(x462|x463))==x464);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x469 = 464U;
	volatile uint64_t x470 = 88LLU;
	int32_t t97 = 47;

	t97 = ((x469*(x470|x471))==x472);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x473 = INT16_MIN;
	static int16_t x474 = 26;
	volatile int32_t t98 = -252024;

	t98 = ((x473*(x474|x475))==x476);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x477 = 81910LLU;
	static int64_t x478 = INT64_MIN;
	static int32_t x479 = -1;
	volatile uint32_t x480 = 490U;

	t99 = ((x477*(x478|x479))==x480);

	if (t99 != 0) { NG(); } else { ; }
	
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

