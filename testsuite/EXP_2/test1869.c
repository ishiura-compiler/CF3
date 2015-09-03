#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x4 = 83U;
int64_t x10 = -1LL;
int32_t t5 = -23689;
volatile int32_t t7 = 34350593;
volatile int64_t x35 = INT64_MIN;
volatile uint8_t x36 = UINT8_MAX;
int16_t x37 = INT16_MIN;
int16_t x38 = INT16_MAX;
static int64_t x57 = 21662LL;
int8_t x58 = INT8_MIN;
uint32_t x59 = 0U;
int16_t x60 = INT16_MAX;
volatile int32_t t14 = -1061;
int16_t x62 = INT16_MIN;
static uint8_t x77 = 13U;
static uint64_t x81 = 70116857LLU;
static int64_t x83 = -1LL;
volatile int32_t t20 = 128034678;
volatile int32_t x85 = INT32_MIN;
static volatile uint64_t x86 = 4010808276908708LLU;
volatile int64_t x90 = -2490688784025801977LL;
int64_t x100 = INT64_MIN;
int64_t x101 = -1LL;
int16_t x116 = INT16_MAX;
volatile int32_t t29 = 3;
static volatile int8_t x122 = -1;
volatile uint32_t x130 = 25U;
int8_t x131 = INT8_MIN;
static volatile int16_t x137 = -4480;
static int32_t t33 = 123;
static uint16_t x144 = 7037U;
int32_t t34 = 218064901;
volatile int32_t t35 = 100228914;
int16_t x149 = INT16_MAX;
static int32_t t37 = -124;
static int8_t x157 = INT8_MAX;
uint32_t x158 = 13772U;
static uint64_t x170 = 212951354129756LLU;
static volatile int64_t x173 = 33924163644533767LL;
int16_t x175 = -11985;
int32_t t42 = -21517;
int64_t x178 = INT64_MIN;
uint8_t x185 = 15U;
int16_t x186 = INT16_MAX;
int32_t x189 = 325038233;
volatile int32_t t45 = 0;
uint8_t x195 = 1U;
uint32_t x197 = UINT32_MAX;
volatile int8_t x200 = -3;
int16_t x213 = -4984;
int32_t x214 = 0;
int8_t x215 = 1;
volatile int32_t x219 = -1;
int8_t x229 = INT8_MIN;
volatile int16_t x235 = INT16_MIN;
int16_t x237 = INT16_MAX;
volatile int64_t x238 = INT64_MIN;
uint32_t x241 = 24U;
volatile uint64_t x248 = 3792954003506LLU;
static int64_t x252 = INT64_MAX;
volatile int8_t x254 = -13;
static volatile int32_t x262 = INT32_MIN;
volatile int32_t t62 = 1257470;
volatile uint8_t x268 = 3U;
int32_t x269 = 56;
uint64_t x271 = 13LLU;
volatile int32_t x279 = INT32_MIN;
static int32_t x289 = INT32_MIN;
int8_t x303 = INT8_MIN;
volatile uint16_t x310 = 30U;
uint32_t x320 = 218176U;
int16_t x333 = 1;
static uint8_t x340 = 3U;
static volatile int32_t t79 = -563;
uint32_t x342 = 150U;
volatile int32_t x343 = INT32_MIN;
static int32_t x359 = INT32_MAX;
int32_t x361 = -2;
static uint64_t x366 = UINT64_MAX;
static int16_t x390 = INT16_MAX;
int16_t x396 = 0;
int32_t t90 = 52;
static int32_t x409 = -1;
uint32_t x420 = UINT32_MAX;
uint64_t x424 = UINT64_MAX;
volatile uint64_t x427 = 25LLU;
int8_t x428 = 1;
int32_t t96 = 1535;
int64_t x430 = -3166379824230LL;
uint32_t x436 = 479289011U;
uint64_t x437 = 8401LLU;
int8_t x439 = INT8_MIN;
int32_t t99 = 13;


void f0(void) {
	static int16_t x1 = -2;
	uint8_t x2 = 15U;
	int64_t x3 = INT64_MAX;
	static int32_t t0 = -407;

	t0 = ((x1+(x2|x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 73U;
	int16_t x6 = INT16_MAX;
	int8_t x7 = INT8_MIN;
	int64_t x8 = 107753064LL;
	int32_t t1 = -42904;

	t1 = ((x5+(x6|x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	uint64_t x11 = UINT64_MAX;
	int64_t x12 = -1LL;
	static volatile int32_t t2 = 1;

	t2 = ((x9+(x10|x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	static uint64_t x14 = UINT64_MAX;
	static uint32_t x15 = 158878337U;
	volatile uint32_t x16 = 177U;
	volatile int32_t t3 = 12;

	t3 = ((x13+(x14|x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	uint16_t x18 = UINT16_MAX;
	static int8_t x19 = INT8_MAX;
	int16_t x20 = -2039;
	int32_t t4 = -44;

	t4 = ((x17+(x18|x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 91;
	uint32_t x22 = 48588U;
	static int64_t x23 = 372380636899LL;
	int32_t x24 = INT32_MIN;

	t5 = ((x21+(x22|x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = -35;
	uint32_t x26 = 953249U;
	uint64_t x27 = 32237LLU;
	int64_t x28 = 3LL;
	volatile int32_t t6 = -46576619;

	t6 = ((x25+(x26|x27))<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = 0U;
	static int32_t x30 = INT32_MAX;
	volatile int32_t x31 = INT32_MIN;
	static int64_t x32 = INT64_MAX;

	t7 = ((x29+(x30|x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	static int32_t x34 = -1;
	int32_t t8 = -12927332;

	t8 = ((x33+(x34|x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x39 = -1LL;
	int16_t x40 = INT16_MIN;
	int32_t t9 = -32748115;

	t9 = ((x37+(x38|x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	int32_t x42 = INT32_MAX;
	volatile int32_t x43 = -1;
	uint64_t x44 = 5457319813984953009LLU;
	int32_t t10 = 74953;

	t10 = ((x41+(x42|x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	int64_t x46 = -1LL;
	uint32_t x47 = 1U;
	volatile uint16_t x48 = UINT16_MAX;
	int32_t t11 = 972954766;

	t11 = ((x45+(x46|x47))<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	int32_t x50 = INT32_MAX;
	uint32_t x51 = 7611466U;
	int8_t x52 = INT8_MAX;
	static int32_t t12 = -1;

	t12 = ((x49+(x50|x51))<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	volatile int8_t x54 = -1;
	volatile int16_t x55 = 13;
	uint16_t x56 = 4125U;
	static int32_t t13 = -40615;

	t13 = ((x53+(x54|x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {


	t14 = ((x57+(x58|x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	uint32_t x63 = 119183477U;
	volatile uint32_t x64 = 401469U;
	volatile int32_t t15 = 244564915;

	t15 = ((x61+(x62|x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = UINT32_MAX;
	int64_t x66 = -1666530576984LL;
	int32_t x67 = -726;
	int8_t x68 = INT8_MIN;
	volatile int32_t t16 = -2047;

	t16 = ((x65+(x66|x67))<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = -196;
	uint32_t x70 = 90203U;
	int32_t x71 = -14159;
	int64_t x72 = -210995LL;
	int32_t t17 = 925434;

	t17 = ((x69+(x70|x71))<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -642423565;
	uint16_t x74 = UINT16_MAX;
	static int64_t x75 = 353641LL;
	uint32_t x76 = 124796U;
	volatile int32_t t18 = 91633;

	t18 = ((x73+(x74|x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = 16U;
	int64_t x79 = INT64_MIN;
	int64_t x80 = -1LL;
	int32_t t19 = 1706890;

	t19 = ((x77+(x78|x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x82 = 99U;
	int8_t x84 = 16;

	t20 = ((x81+(x82|x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x87 = INT16_MAX;
	int64_t x88 = -1LL;
	int32_t t21 = -6904;

	t21 = ((x85+(x86|x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = -1;
	int8_t x91 = 13;
	int32_t x92 = INT32_MIN;
	int32_t t22 = -152982;

	t22 = ((x89+(x90|x91))<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	static int8_t x94 = INT8_MIN;
	int64_t x95 = INT64_MAX;
	int8_t x96 = INT8_MIN;
	volatile int32_t t23 = -545928;

	t23 = ((x93+(x94|x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = 11668125;
	int64_t x98 = INT64_MIN;
	int16_t x99 = INT16_MAX;
	volatile int32_t t24 = -651645;

	t24 = ((x97+(x98|x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x102 = UINT16_MAX;
	int32_t x103 = 0;
	int32_t x104 = INT32_MIN;
	volatile int32_t t25 = 7;

	t25 = ((x101+(x102|x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 8;
	static int16_t x106 = 1;
	int16_t x107 = 1506;
	uint64_t x108 = UINT64_MAX;
	int32_t t26 = 238462994;

	t26 = ((x105+(x106|x107))<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 3419273890LLU;
	static int16_t x110 = INT16_MIN;
	int8_t x111 = INT8_MIN;
	int16_t x112 = 11;
	volatile int32_t t27 = 243;

	t27 = ((x109+(x110|x111))<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	volatile uint32_t x114 = 42833916U;
	static int16_t x115 = 1;
	volatile int32_t t28 = 324052281;

	t28 = ((x113+(x114|x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	int32_t x118 = -16741760;
	static volatile int32_t x119 = INT32_MIN;
	int32_t x120 = INT32_MIN;

	t29 = ((x117+(x118|x119))<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x121 = 6245699LLU;
	uint32_t x123 = UINT32_MAX;
	volatile uint8_t x124 = UINT8_MAX;
	volatile int32_t t30 = -159343;

	t30 = ((x121+(x122|x123))<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	volatile int32_t x126 = -12980341;
	int16_t x127 = 241;
	int64_t x128 = INT64_MAX;
	static volatile int32_t t31 = 5;

	t31 = ((x125+(x126|x127))<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -187;
	uint16_t x132 = UINT16_MAX;
	volatile int32_t t32 = 3;

	t32 = ((x129+(x130|x131))<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x138 = INT8_MAX;
	volatile int64_t x139 = INT64_MAX;
	volatile uint32_t x140 = UINT32_MAX;

	t33 = ((x137+(x138|x139))<=x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MIN;
	volatile uint8_t x142 = 15U;
	uint16_t x143 = 14U;

	t34 = ((x141+(x142|x143))<=x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = 35;
	int64_t x146 = INT64_MIN;
	volatile int16_t x147 = 9608;
	volatile int16_t x148 = -1;

	t35 = ((x145+(x146|x147))<=x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x150 = INT16_MIN;
	int32_t x151 = INT32_MAX;
	int64_t x152 = -4838LL;
	volatile int32_t t36 = -15;

	t36 = ((x149+(x150|x151))<=x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x153 = UINT16_MAX;
	int64_t x154 = INT64_MIN;
	int32_t x155 = 389311;
	int8_t x156 = 0;

	t37 = ((x153+(x154|x155))<=x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x159 = INT32_MAX;
	uint8_t x160 = 39U;
	volatile int32_t t38 = 3182375;

	t38 = ((x157+(x158|x159))<=x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = -1;
	volatile uint64_t x162 = UINT64_MAX;
	volatile uint32_t x163 = UINT32_MAX;
	static uint32_t x164 = UINT32_MAX;
	int32_t t39 = 7969;

	t39 = ((x161+(x162|x163))<=x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = INT32_MAX;
	int8_t x166 = INT8_MAX;
	int32_t x167 = -13;
	uint32_t x168 = 488535211U;
	static volatile int32_t t40 = -3652;

	t40 = ((x165+(x166|x167))<=x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = UINT16_MAX;
	int64_t x171 = -1LL;
	static uint64_t x172 = UINT64_MAX;
	int32_t t41 = 63;

	t41 = ((x169+(x170|x171))<=x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x174 = UINT32_MAX;
	int8_t x176 = -1;

	t42 = ((x173+(x174|x175))<=x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = -1;
	uint64_t x179 = 58095194716511LLU;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t43 = -120;

	t43 = ((x177+(x178|x179))<=x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x187 = 23LLU;
	int8_t x188 = INT8_MAX;
	int32_t t44 = -95;

	t44 = ((x185+(x186|x187))<=x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x190 = INT64_MIN;
	int64_t x191 = INT64_MAX;
	uint64_t x192 = 583733472LLU;

	t45 = ((x189+(x190|x191))<=x192);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x193 = 0U;
	int8_t x194 = INT8_MIN;
	int32_t x196 = INT32_MIN;
	static volatile int32_t t46 = -100515;

	t46 = ((x193+(x194|x195))<=x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x198 = 470U;
	uint32_t x199 = UINT32_MAX;
	volatile int32_t t47 = 190007;

	t47 = ((x197+(x198|x199))<=x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x201 = 436U;
	int8_t x202 = 13;
	int64_t x203 = -1LL;
	static uint32_t x204 = UINT32_MAX;
	int32_t t48 = -6;

	t48 = ((x201+(x202|x203))<=x204);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x209 = UINT16_MAX;
	int16_t x210 = INT16_MIN;
	static int16_t x211 = INT16_MIN;
	int32_t x212 = INT32_MIN;
	volatile int32_t t49 = 0;

	t49 = ((x209+(x210|x211))<=x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x216 = INT32_MAX;
	int32_t t50 = 5;

	t50 = ((x213+(x214|x215))<=x216);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = -1;
	int32_t x218 = 4843;
	int8_t x220 = -1;
	volatile int32_t t51 = -7;

	t51 = ((x217+(x218|x219))<=x220);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x221 = UINT64_MAX;
	int32_t x222 = 1;
	static int8_t x223 = 30;
	volatile int32_t x224 = 2;
	static volatile int32_t t52 = -12;

	t52 = ((x221+(x222|x223))<=x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x225 = -1;
	uint8_t x226 = 36U;
	static int32_t x227 = INT32_MIN;
	static uint32_t x228 = 34896739U;
	volatile int32_t t53 = 385;

	t53 = ((x225+(x226|x227))<=x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x230 = 53593704U;
	int64_t x231 = -80141297715932968LL;
	int32_t x232 = 6572;
	int32_t t54 = -2581;

	t54 = ((x229+(x230|x231))<=x232);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x233 = -315LL;
	int8_t x234 = INT8_MIN;
	int64_t x236 = INT64_MIN;
	static int32_t t55 = -243561;

	t55 = ((x233+(x234|x235))<=x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x239 = INT8_MAX;
	uint64_t x240 = 90LLU;
	int32_t t56 = 1217374;

	t56 = ((x237+(x238|x239))<=x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x242 = UINT32_MAX;
	uint8_t x243 = 12U;
	static uint32_t x244 = UINT32_MAX;
	int32_t t57 = 17700939;

	t57 = ((x241+(x242|x243))<=x244);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = INT16_MIN;
	int8_t x246 = INT8_MIN;
	uint16_t x247 = 1U;
	volatile int32_t t58 = -243826233;

	t58 = ((x245+(x246|x247))<=x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x249 = UINT8_MAX;
	int16_t x250 = -1;
	int32_t x251 = INT32_MIN;
	int32_t t59 = -1035227;

	t59 = ((x249+(x250|x251))<=x252);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = INT16_MIN;
	uint32_t x255 = 9347410U;
	static volatile int64_t x256 = INT64_MAX;
	volatile int32_t t60 = 13;

	t60 = ((x253+(x254|x255))<=x256);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x257 = UINT64_MAX;
	static int16_t x258 = INT16_MIN;
	volatile int16_t x259 = 1;
	volatile uint32_t x260 = UINT32_MAX;
	int32_t t61 = -6130;

	t61 = ((x257+(x258|x259))<=x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x261 = 23U;
	volatile int8_t x263 = INT8_MIN;
	uint8_t x264 = 0U;

	t62 = ((x261+(x262|x263))<=x264);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = INT64_MAX;
	int64_t x266 = INT64_MIN;
	volatile uint16_t x267 = 49U;
	static int32_t t63 = -2002946;

	t63 = ((x265+(x266|x267))<=x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x270 = INT8_MIN;
	static int16_t x272 = INT16_MIN;
	volatile int32_t t64 = 172880;

	t64 = ((x269+(x270|x271))<=x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x273 = 81286U;
	int8_t x274 = INT8_MAX;
	volatile int64_t x275 = -1LL;
	uint64_t x276 = 1430LLU;
	volatile int32_t t65 = -55;

	t65 = ((x273+(x274|x275))<=x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x277 = 1427745U;
	int8_t x278 = 24;
	int32_t x280 = INT32_MIN;
	static volatile int32_t t66 = -31;

	t66 = ((x277+(x278|x279))<=x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x281 = 84U;
	int64_t x282 = -1LL;
	int64_t x283 = 3791845754128482LL;
	uint16_t x284 = UINT16_MAX;
	static volatile int32_t t67 = 13;

	t67 = ((x281+(x282|x283))<=x284);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x285 = -183811040230LL;
	static volatile int16_t x286 = -1;
	int16_t x287 = INT16_MIN;
	int32_t x288 = INT32_MAX;
	volatile int32_t t68 = -32636451;

	t68 = ((x285+(x286|x287))<=x288);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x290 = UINT64_MAX;
	static int16_t x291 = 51;
	int16_t x292 = 1;
	int32_t t69 = -1526;

	t69 = ((x289+(x290|x291))<=x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x293 = INT8_MIN;
	uint32_t x294 = UINT32_MAX;
	uint64_t x295 = 943873LLU;
	int16_t x296 = INT16_MIN;
	volatile int32_t t70 = 102837010;

	t70 = ((x293+(x294|x295))<=x296);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x297 = 2015523U;
	volatile int32_t x298 = INT32_MIN;
	uint32_t x299 = 162788775U;
	volatile uint16_t x300 = UINT16_MAX;
	static int32_t t71 = 226;

	t71 = ((x297+(x298|x299))<=x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x301 = 696168570U;
	volatile int8_t x302 = INT8_MIN;
	static volatile uint16_t x304 = 15697U;
	int32_t t72 = -1;

	t72 = ((x301+(x302|x303))<=x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x305 = -1;
	static volatile int64_t x306 = 484785773LL;
	int8_t x307 = -1;
	int8_t x308 = INT8_MAX;
	static int32_t t73 = -1;

	t73 = ((x305+(x306|x307))<=x308);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x309 = INT8_MAX;
	volatile uint8_t x311 = 26U;
	int8_t x312 = INT8_MIN;
	int32_t t74 = 116807782;

	t74 = ((x309+(x310|x311))<=x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x313 = 2U;
	int8_t x314 = -1;
	int16_t x315 = INT16_MIN;
	int16_t x316 = -1;
	static volatile int32_t t75 = -15;

	t75 = ((x313+(x314|x315))<=x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x317 = 134191U;
	volatile uint16_t x318 = UINT16_MAX;
	volatile uint32_t x319 = UINT32_MAX;
	static int32_t t76 = -7455;

	t76 = ((x317+(x318|x319))<=x320);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x325 = UINT32_MAX;
	int16_t x326 = -1;
	int64_t x327 = -357LL;
	int16_t x328 = -1;
	volatile int32_t t77 = -31977;

	t77 = ((x325+(x326|x327))<=x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x334 = UINT64_MAX;
	int16_t x335 = INT16_MIN;
	int32_t x336 = -1;
	int32_t t78 = 0;

	t78 = ((x333+(x334|x335))<=x336);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x337 = INT32_MIN;
	uint16_t x338 = 299U;
	uint64_t x339 = 17398934832487LLU;

	t79 = ((x337+(x338|x339))<=x340);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = -1;
	int64_t x344 = -1LL;
	static int32_t t80 = -6201930;

	t80 = ((x341+(x342|x343))<=x344);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x345 = UINT16_MAX;
	uint16_t x346 = UINT16_MAX;
	static uint8_t x347 = 2U;
	int8_t x348 = -4;
	volatile int32_t t81 = 133390;

	t81 = ((x345+(x346|x347))<=x348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x349 = INT16_MAX;
	uint32_t x350 = 57864U;
	int64_t x351 = INT64_MIN;
	uint32_t x352 = UINT32_MAX;
	volatile int32_t t82 = 289612;

	t82 = ((x349+(x350|x351))<=x352);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x357 = -2806;
	volatile int16_t x358 = -4;
	static int64_t x360 = INT64_MIN;
	volatile int32_t t83 = 40;

	t83 = ((x357+(x358|x359))<=x360);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x362 = 20638143U;
	int8_t x363 = INT8_MAX;
	static uint8_t x364 = 13U;
	volatile int32_t t84 = 231877179;

	t84 = ((x361+(x362|x363))<=x364);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x365 = 1114LL;
	volatile int32_t x367 = INT32_MIN;
	volatile int32_t x368 = 3;
	static int32_t t85 = -408912;

	t85 = ((x365+(x366|x367))<=x368);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x369 = INT16_MIN;
	int16_t x370 = INT16_MIN;
	uint64_t x371 = 3833LLU;
	volatile uint8_t x372 = UINT8_MAX;
	volatile int32_t t86 = 7876484;

	t86 = ((x369+(x370|x371))<=x372);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x381 = 3711LLU;
	static int16_t x382 = INT16_MIN;
	static int32_t x383 = 1404997;
	uint32_t x384 = UINT32_MAX;
	volatile int32_t t87 = 674926854;

	t87 = ((x381+(x382|x383))<=x384);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x385 = INT8_MAX;
	static int32_t x386 = -14195433;
	volatile int32_t x387 = INT32_MAX;
	int8_t x388 = 21;
	int32_t t88 = 1;

	t88 = ((x385+(x386|x387))<=x388);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x389 = -8648LL;
	int16_t x391 = -1;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t89 = -45615;

	t89 = ((x389+(x390|x391))<=x392);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x393 = -1;
	uint16_t x394 = 82U;
	uint16_t x395 = UINT16_MAX;

	t90 = ((x393+(x394|x395))<=x396);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x397 = 56;
	static int8_t x398 = INT8_MIN;
	static uint32_t x399 = 24417986U;
	int16_t x400 = -50;
	static volatile int32_t t91 = -13377;

	t91 = ((x397+(x398|x399))<=x400);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x405 = UINT8_MAX;
	uint64_t x406 = UINT64_MAX;
	uint8_t x407 = UINT8_MAX;
	int64_t x408 = INT64_MIN;
	int32_t t92 = -276;

	t92 = ((x405+(x406|x407))<=x408);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x410 = 98831152U;
	uint64_t x411 = 6229739LLU;
	uint8_t x412 = 84U;
	int32_t t93 = 0;

	t93 = ((x409+(x410|x411))<=x412);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x417 = 4;
	int16_t x418 = -1;
	uint8_t x419 = 4U;
	int32_t t94 = 12093066;

	t94 = ((x417+(x418|x419))<=x420);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x421 = 135604400700889LLU;
	int16_t x422 = 109;
	int64_t x423 = 7434758271654175LL;
	volatile int32_t t95 = 7863922;

	t95 = ((x421+(x422|x423))<=x424);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x425 = UINT64_MAX;
	int32_t x426 = -1;

	t96 = ((x425+(x426|x427))<=x428);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x429 = 657;
	volatile uint32_t x431 = 97922U;
	uint64_t x432 = 10012LLU;
	volatile int32_t t97 = -2;

	t97 = ((x429+(x430|x431))<=x432);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x433 = 19766U;
	int16_t x434 = INT16_MIN;
	int8_t x435 = -1;
	int32_t t98 = 552;

	t98 = ((x433+(x434|x435))<=x436);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x438 = -961;
	static uint32_t x440 = 20U;

	t99 = ((x437+(x438|x439))<=x440);

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

