#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x6 = 228886284LLU;
static volatile int32_t t2 = 8;
volatile int64_t x13 = -1LL;
volatile int32_t t4 = 3063;
int32_t t5 = -45354957;
uint16_t x26 = UINT16_MAX;
int16_t x27 = INT16_MIN;
volatile int32_t t6 = -5225;
int16_t x36 = -1;
uint32_t x37 = 495162U;
volatile int64_t x38 = -174229222158LL;
int32_t x40 = -881550288;
int32_t t9 = -72557;
uint32_t x44 = 2235472U;
static volatile int32_t x46 = 297276614;
static uint32_t x49 = 14U;
static int32_t x53 = INT32_MAX;
uint16_t x54 = UINT16_MAX;
int32_t x55 = 0;
int64_t x59 = INT64_MIN;
int32_t x61 = INT32_MIN;
uint16_t x62 = 931U;
int8_t x69 = INT8_MIN;
int8_t x71 = 4;
uint8_t x76 = 1U;
int32_t t20 = 180853205;
static volatile uint64_t x85 = UINT64_MAX;
uint16_t x90 = UINT16_MAX;
volatile uint8_t x92 = 0U;
int64_t x94 = 4948505172LL;
volatile int32_t t24 = 41;
volatile int64_t x119 = -4893762LL;
int32_t x120 = -430984;
int64_t x121 = -1LL;
int16_t x124 = -14;
int16_t x128 = INT16_MIN;
uint16_t x134 = 14U;
uint8_t x144 = 1U;
static int32_t t35 = -7854333;
volatile uint32_t x156 = UINT32_MAX;
int32_t t38 = 7647121;
uint64_t x164 = 331770LLU;
int64_t x169 = INT64_MAX;
volatile int8_t x170 = INT8_MAX;
int64_t x171 = -1LL;
uint8_t x173 = 0U;
uint64_t x175 = 4265417613618655739LLU;
int32_t x178 = INT32_MIN;
uint16_t x189 = 986U;
static int64_t x197 = INT64_MIN;
int16_t x199 = -1;
int32_t t49 = -65623821;
uint32_t x212 = UINT32_MAX;
int64_t x218 = INT64_MIN;
volatile int16_t x223 = INT16_MIN;
int64_t x225 = 695099126LL;
static uint64_t x229 = 29113702513LLU;
static int16_t x235 = INT16_MAX;
volatile int32_t t58 = 28205;
int16_t x240 = 21;
int32_t t60 = -13552270;
int32_t x260 = INT32_MIN;
int32_t x263 = -1;
int8_t x267 = 0;
uint64_t x272 = 106449427LLU;
static int16_t x273 = 3659;
int8_t x302 = INT8_MAX;
int16_t x321 = INT16_MIN;
int32_t x323 = INT32_MIN;
int32_t t80 = -1;
int32_t x326 = 1491120;
int64_t x328 = 189175955468507836LL;
volatile uint32_t x332 = UINT32_MAX;
volatile uint16_t x355 = 572U;
uint8_t x357 = 7U;
static int64_t x360 = INT64_MIN;
uint64_t x364 = 9LLU;
int32_t t90 = 338525;
static volatile uint64_t x375 = 3345558100748LLU;
volatile int16_t x380 = INT16_MIN;
int16_t x382 = 28;
int32_t x385 = 11488;
int32_t x394 = 1807;
int16_t x398 = 619;
int16_t x400 = INT16_MIN;


void f0(void) {
	int64_t x1 = INT64_MAX;
	uint8_t x2 = 38U;
	int16_t x3 = INT16_MIN;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -563111;

	t0 = ((x1==(x2^x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	uint8_t x7 = UINT8_MAX;
	volatile int8_t x8 = INT8_MIN;
	int32_t t1 = 1;

	t1 = ((x5==(x6^x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 27;
	int8_t x10 = -22;
	uint16_t x11 = UINT16_MAX;
	int32_t x12 = INT32_MAX;

	t2 = ((x9==(x10^x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x14 = 73805883;
	int64_t x15 = 341980312401139LL;
	static volatile int32_t x16 = -91324583;
	static int32_t t3 = -435;

	t3 = ((x13==(x14^x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 1U;
	uint64_t x18 = UINT64_MAX;
	uint16_t x19 = 5U;
	int32_t x20 = INT32_MAX;

	t4 = ((x17==(x18^x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -37;
	int16_t x22 = INT16_MIN;
	uint16_t x23 = 2629U;
	volatile uint16_t x24 = 27U;

	t5 = ((x21==(x22^x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	static int32_t x28 = INT32_MAX;

	t6 = ((x25==(x26^x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	volatile uint32_t x30 = 8U;
	uint32_t x31 = 17727276U;
	volatile int64_t x32 = -1LL;
	int32_t t7 = 15939910;

	t7 = ((x29==(x30^x31))<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 0;
	volatile int8_t x34 = INT8_MAX;
	int8_t x35 = -1;
	volatile int32_t t8 = -5454;

	t8 = ((x33==(x34^x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x39 = 32;

	t9 = ((x37==(x38^x39))<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 18539671U;
	int64_t x42 = -1LL;
	int32_t x43 = 1;
	volatile int32_t t10 = -1983553;

	t10 = ((x41==(x42^x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	static uint32_t x47 = UINT32_MAX;
	uint8_t x48 = 69U;
	int32_t t11 = -4808;

	t11 = ((x45==(x46^x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = -364;
	volatile int16_t x51 = -1;
	volatile int64_t x52 = INT64_MIN;
	volatile int32_t t12 = 962065496;

	t12 = ((x49==(x50^x51))<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x56 = 137441595LLU;
	volatile int32_t t13 = -632424;

	t13 = ((x53==(x54^x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = INT16_MIN;
	uint16_t x58 = 598U;
	volatile uint16_t x60 = 20652U;
	int32_t t14 = 62;

	t14 = ((x57==(x58^x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x63 = 44;
	volatile int8_t x64 = -1;
	static volatile int32_t t15 = 102801;

	t15 = ((x61==(x62^x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	int64_t x66 = 1352778217LL;
	int8_t x67 = INT8_MIN;
	static volatile int16_t x68 = INT16_MIN;
	static volatile int32_t t16 = 43348953;

	t16 = ((x65==(x66^x67))<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x70 = -1;
	volatile int16_t x72 = -1;
	int32_t t17 = 708792756;

	t17 = ((x69==(x70^x71))<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = 24741691;
	static uint8_t x74 = 43U;
	static uint16_t x75 = UINT16_MAX;
	int32_t t18 = -35627957;

	t18 = ((x73==(x74^x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MAX;
	int64_t x78 = INT64_MIN;
	int16_t x79 = INT16_MIN;
	uint32_t x80 = 1446407U;
	int32_t t19 = 359246;

	t19 = ((x77==(x78^x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int64_t x82 = INT64_MIN;
	int32_t x83 = INT32_MAX;
	int16_t x84 = 43;

	t20 = ((x81==(x82^x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = INT32_MAX;
	volatile int8_t x87 = INT8_MIN;
	volatile int32_t x88 = -6;
	volatile int32_t t21 = 4176389;

	t21 = ((x85==(x86^x87))<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	int64_t x91 = INT64_MIN;
	int32_t t22 = 65857;

	t22 = ((x89==(x90^x91))<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -663;
	static int8_t x95 = INT8_MAX;
	int16_t x96 = -1;
	static volatile int32_t t23 = 644;

	t23 = ((x93==(x94^x95))<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = 1;
	int64_t x98 = INT64_MIN;
	int64_t x99 = INT64_MIN;
	int16_t x100 = 338;

	t24 = ((x97==(x98^x99))<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	uint16_t x102 = 0U;
	static int8_t x103 = -12;
	int32_t x104 = INT32_MIN;
	int32_t t25 = -46573866;

	t25 = ((x101==(x102^x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	int32_t x106 = INT32_MAX;
	int16_t x107 = 45;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t26 = 246;

	t26 = ((x105==(x106^x107))<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	uint8_t x110 = UINT8_MAX;
	int8_t x111 = INT8_MIN;
	int32_t x112 = INT32_MIN;
	int32_t t27 = -145;

	t27 = ((x109==(x110^x111))<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1094;
	static volatile int8_t x114 = INT8_MAX;
	int64_t x115 = INT64_MIN;
	int32_t x116 = -1;
	volatile int32_t t28 = -54358;

	t28 = ((x113==(x114^x115))<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x117 = INT16_MIN;
	static int8_t x118 = 2;
	int32_t t29 = -26244950;

	t29 = ((x117==(x118^x119))<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = 217313213;
	volatile uint32_t x123 = UINT32_MAX;
	volatile int32_t t30 = -11060;

	t30 = ((x121==(x122^x123))<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = UINT16_MAX;
	int32_t x126 = -1;
	uint64_t x127 = 5908LLU;
	int32_t t31 = 201;

	t31 = ((x125==(x126^x127))<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -1;
	int32_t x130 = -59824058;
	int16_t x131 = -1;
	uint64_t x132 = 932422295845231LLU;
	volatile int32_t t32 = 709;

	t32 = ((x129==(x130^x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = -1LL;
	volatile int32_t x135 = -1;
	uint8_t x136 = 5U;
	volatile int32_t t33 = 1;

	t33 = ((x133==(x134^x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 0U;
	volatile uint8_t x138 = UINT8_MAX;
	int32_t x139 = 128674716;
	volatile int16_t x140 = INT16_MIN;
	int32_t t34 = -29941;

	t34 = ((x137==(x138^x139))<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 10U;
	static volatile int32_t x142 = INT32_MIN;
	int64_t x143 = -104392LL;

	t35 = ((x141==(x142^x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -1;
	uint8_t x146 = 3U;
	uint16_t x147 = UINT16_MAX;
	uint8_t x148 = 6U;
	int32_t t36 = 54;

	t36 = ((x145==(x146^x147))<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	int32_t x150 = -413;
	int8_t x151 = -13;
	int16_t x152 = -66;
	volatile int32_t t37 = -6080;

	t37 = ((x149==(x150^x151))<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = UINT16_MAX;
	volatile uint8_t x154 = 101U;
	int32_t x155 = -1;

	t38 = ((x153==(x154^x155))<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 1444368213060230LLU;
	uint64_t x158 = 1381LLU;
	uint64_t x159 = 901530664564715LLU;
	int16_t x160 = 95;
	int32_t t39 = -33;

	t39 = ((x157==(x158^x159))<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = 832349694744694LL;
	static int64_t x162 = INT64_MIN;
	volatile uint16_t x163 = 106U;
	volatile int32_t t40 = -2;

	t40 = ((x161==(x162^x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	int8_t x166 = INT8_MIN;
	int32_t x167 = -1;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = 0;

	t41 = ((x165==(x166^x167))<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x172 = INT64_MAX;
	int32_t t42 = 2997;

	t42 = ((x169==(x170^x171))<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x174 = UINT64_MAX;
	int16_t x176 = -1;
	int32_t t43 = 23466;

	t43 = ((x173==(x174^x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -405699343;
	int8_t x179 = INT8_MIN;
	uint64_t x180 = 57531403976LLU;
	int32_t t44 = 222881383;

	t44 = ((x177==(x178^x179))<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 5413583436902504759LLU;
	uint32_t x182 = UINT32_MAX;
	static int8_t x183 = -1;
	int64_t x184 = 231820173203974954LL;
	volatile int32_t t45 = -202167136;

	t45 = ((x181==(x182^x183))<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	volatile int16_t x186 = -1;
	int8_t x187 = INT8_MIN;
	static int8_t x188 = INT8_MIN;
	volatile int32_t t46 = -12137;

	t46 = ((x185==(x186^x187))<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = INT8_MAX;
	int8_t x191 = INT8_MIN;
	volatile uint32_t x192 = 0U;
	static volatile int32_t t47 = 254144779;

	t47 = ((x189==(x190^x191))<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x193 = 3U;
	int8_t x194 = INT8_MAX;
	static int8_t x195 = INT8_MIN;
	int16_t x196 = -43;
	int32_t t48 = -10662912;

	t48 = ((x193==(x194^x195))<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x198 = UINT64_MAX;
	int64_t x200 = -1LL;

	t49 = ((x197==(x198^x199))<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = -7;
	uint16_t x202 = 32155U;
	volatile uint64_t x203 = UINT64_MAX;
	int16_t x204 = 53;
	static int32_t t50 = 1770783;

	t50 = ((x201==(x202^x203))<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -304;
	uint16_t x206 = 13707U;
	volatile int32_t x207 = -313;
	volatile uint64_t x208 = 436192145873LLU;
	volatile int32_t t51 = 503209;

	t51 = ((x205==(x206^x207))<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = INT64_MAX;
	volatile uint8_t x210 = 1U;
	int64_t x211 = INT64_MIN;
	int32_t t52 = 13484231;

	t52 = ((x209==(x210^x211))<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 80U;
	uint32_t x214 = 10885U;
	int64_t x215 = INT64_MIN;
	int16_t x216 = -6;
	int32_t t53 = 565230539;

	t53 = ((x213==(x214^x215))<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -286195;
	int64_t x219 = INT64_MAX;
	int16_t x220 = INT16_MAX;
	volatile int32_t t54 = 38937;

	t54 = ((x217==(x218^x219))<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 12711U;
	uint8_t x222 = 69U;
	volatile uint16_t x224 = 1U;
	int32_t t55 = -7130706;

	t55 = ((x221==(x222^x223))<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x226 = -14676513822020LL;
	int16_t x227 = -1;
	volatile int32_t x228 = INT32_MIN;
	int32_t t56 = -1;

	t56 = ((x225==(x226^x227))<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = 54165;
	static int8_t x231 = -58;
	int16_t x232 = INT16_MAX;
	static int32_t t57 = -3;

	t57 = ((x229==(x230^x231))<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = -15;
	volatile int64_t x234 = INT64_MIN;
	int32_t x236 = INT32_MIN;

	t58 = ((x233==(x234^x235))<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = INT16_MIN;
	volatile uint8_t x238 = UINT8_MAX;
	static int32_t x239 = INT32_MIN;
	volatile int32_t t59 = 1;

	t59 = ((x237==(x238^x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MIN;
	int32_t x244 = -13;

	t60 = ((x241==(x242^x243))<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 11LLU;
	int16_t x246 = 59;
	uint8_t x247 = 10U;
	int64_t x248 = INT64_MAX;
	int32_t t61 = -6240;

	t61 = ((x245==(x246^x247))<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MAX;
	int8_t x250 = -1;
	uint64_t x251 = UINT64_MAX;
	int8_t x252 = -2;
	int32_t t62 = 1;

	t62 = ((x249==(x250^x251))<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = -1LL;
	int32_t x254 = -652541877;
	int16_t x255 = INT16_MIN;
	uint64_t x256 = UINT64_MAX;
	int32_t t63 = -309;

	t63 = ((x253==(x254^x255))<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = INT64_MIN;
	static int32_t x258 = INT32_MAX;
	int16_t x259 = -1;
	int32_t t64 = 164791761;

	t64 = ((x257==(x258^x259))<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	int64_t x262 = INT64_MIN;
	static int32_t x264 = INT32_MIN;
	int32_t t65 = 15277;

	t65 = ((x261==(x262^x263))<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MAX;
	static int8_t x266 = 0;
	int8_t x268 = 0;
	int32_t t66 = -2;

	t66 = ((x265==(x266^x267))<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = INT16_MIN;
	static volatile uint32_t x270 = 966219U;
	int32_t x271 = 65063779;
	static int32_t t67 = 12095869;

	t67 = ((x269==(x270^x271))<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = INT32_MIN;
	static int32_t x275 = INT32_MIN;
	volatile uint16_t x276 = 19U;
	int32_t t68 = 309;

	t68 = ((x273==(x274^x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	uint16_t x278 = UINT16_MAX;
	int64_t x279 = -92234314LL;
	volatile int64_t x280 = 0LL;
	int32_t t69 = 116460;

	t69 = ((x277==(x278^x279))<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x281 = UINT16_MAX;
	int16_t x282 = 8;
	int16_t x283 = -1;
	int64_t x284 = INT64_MIN;
	volatile int32_t t70 = -970846;

	t70 = ((x281==(x282^x283))<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = -1;
	uint32_t x286 = 148733535U;
	int32_t x287 = INT32_MIN;
	int16_t x288 = INT16_MIN;
	static int32_t t71 = -2015;

	t71 = ((x285==(x286^x287))<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	int64_t x290 = INT64_MAX;
	int32_t x291 = -629601;
	static int8_t x292 = 1;
	volatile int32_t t72 = 149724;

	t72 = ((x289==(x290^x291))<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	int64_t x294 = -1LL;
	volatile int64_t x295 = INT64_MAX;
	uint64_t x296 = 29906LLU;
	int32_t t73 = -599167;

	t73 = ((x293==(x294^x295))<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x297 = 53U;
	uint8_t x298 = 15U;
	volatile int64_t x299 = INT64_MIN;
	volatile int8_t x300 = 17;
	static volatile int32_t t74 = 66265920;

	t74 = ((x297==(x298^x299))<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	int16_t x303 = 74;
	uint64_t x304 = UINT64_MAX;
	static volatile int32_t t75 = 859701;

	t75 = ((x301==(x302^x303))<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x305 = -10;
	int32_t x306 = -1;
	int32_t x307 = -719939;
	int16_t x308 = INT16_MIN;
	static int32_t t76 = -44;

	t76 = ((x305==(x306^x307))<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = -1LL;
	volatile int32_t x310 = INT32_MIN;
	volatile int8_t x311 = INT8_MAX;
	static int64_t x312 = -819971053131LL;
	int32_t t77 = -250;

	t77 = ((x309==(x310^x311))<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x313 = 46555437780081872LL;
	uint16_t x314 = UINT16_MAX;
	int8_t x315 = INT8_MIN;
	uint16_t x316 = UINT16_MAX;
	int32_t t78 = -1810399;

	t78 = ((x313==(x314^x315))<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	int8_t x318 = 0;
	volatile int8_t x319 = INT8_MIN;
	static int16_t x320 = -1;
	int32_t t79 = -7;

	t79 = ((x317==(x318^x319))<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x322 = 1U;
	uint64_t x324 = UINT64_MAX;

	t80 = ((x321==(x322^x323))<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x325 = UINT8_MAX;
	volatile int16_t x327 = 10;
	volatile int32_t t81 = -1;

	t81 = ((x325==(x326^x327))<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	int32_t x330 = INT32_MIN;
	int16_t x331 = 2;
	volatile int32_t t82 = -12867021;

	t82 = ((x329==(x330^x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	uint16_t x334 = 21069U;
	int8_t x335 = INT8_MAX;
	int32_t x336 = 111186;
	int32_t t83 = 60192;

	t83 = ((x333==(x334^x335))<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x337 = 485U;
	int64_t x338 = INT64_MIN;
	static int16_t x339 = INT16_MAX;
	int8_t x340 = -1;
	int32_t t84 = 999588;

	t84 = ((x337==(x338^x339))<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 520154LLU;
	uint32_t x342 = 3U;
	static uint64_t x343 = 463982095278891LLU;
	static uint64_t x344 = UINT64_MAX;
	int32_t t85 = 6025542;

	t85 = ((x341==(x342^x343))<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 16308U;
	int64_t x346 = 470701660998LL;
	static int8_t x347 = -2;
	volatile int32_t x348 = -1;
	int32_t t86 = -2003973;

	t86 = ((x345==(x346^x347))<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x349 = UINT64_MAX;
	uint8_t x350 = 81U;
	static volatile int64_t x351 = INT64_MAX;
	int16_t x352 = -362;
	int32_t t87 = -1904792;

	t87 = ((x349==(x350^x351))<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	uint16_t x354 = 22007U;
	int16_t x356 = -1;
	static volatile int32_t t88 = -234559126;

	t88 = ((x353==(x354^x355))<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x358 = 51;
	int32_t x359 = INT32_MIN;
	volatile int32_t t89 = -81187361;

	t89 = ((x357==(x358^x359))<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = 0;
	volatile int32_t x362 = 24;
	int32_t x363 = -1;

	t90 = ((x361==(x362^x363))<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	int64_t x366 = -1LL;
	int16_t x367 = 810;
	uint32_t x368 = 4900U;
	int32_t t91 = 22986534;

	t91 = ((x365==(x366^x367))<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -1;
	uint16_t x370 = UINT16_MAX;
	uint8_t x371 = 1U;
	static int16_t x372 = -253;
	volatile int32_t t92 = 2892;

	t92 = ((x369==(x370^x371))<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 2U;
	int16_t x374 = -1653;
	int32_t x376 = INT32_MAX;
	volatile int32_t t93 = 13904031;

	t93 = ((x373==(x374^x375))<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x377 = 9U;
	int8_t x378 = INT8_MIN;
	int32_t x379 = INT32_MIN;
	volatile int32_t t94 = -768286279;

	t94 = ((x377==(x378^x379))<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = -1;
	int16_t x383 = INT16_MAX;
	int32_t x384 = 31853803;
	static int32_t t95 = 2128;

	t95 = ((x381==(x382^x383))<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x386 = -1;
	uint32_t x387 = 72987U;
	volatile uint32_t x388 = 101U;
	volatile int32_t t96 = 0;

	t96 = ((x385==(x386^x387))<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -1;
	static volatile uint32_t x390 = 56270U;
	static int8_t x391 = INT8_MIN;
	int8_t x392 = INT8_MAX;
	static volatile int32_t t97 = 7079;

	t97 = ((x389==(x390^x391))<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x393 = -1;
	int16_t x395 = -1;
	uint64_t x396 = 91LLU;
	volatile int32_t t98 = 121630404;

	t98 = ((x393==(x394^x395))<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 907U;
	int8_t x399 = -1;
	int32_t t99 = -973837;

	t99 = ((x397==(x398^x399))<=x400);

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

