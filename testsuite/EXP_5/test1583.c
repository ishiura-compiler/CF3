#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = -1;
volatile int32_t t1 = 964431;
uint64_t x13 = 32086409368440LLU;
int16_t x20 = 196;
int16_t x21 = -1784;
volatile int32_t t5 = -150229;
int8_t x26 = -1;
int8_t x28 = INT8_MAX;
uint8_t x33 = UINT8_MAX;
uint16_t x34 = 1154U;
int8_t x35 = INT8_MIN;
int32_t t9 = -328;
uint8_t x44 = 24U;
uint32_t x46 = 762837U;
static volatile int32_t t11 = 11759;
int32_t x50 = INT32_MAX;
static int8_t x59 = INT8_MIN;
int16_t x60 = -16368;
uint8_t x61 = 6U;
static int32_t x62 = -1;
volatile int32_t t15 = 5;
int32_t t17 = -617;
int8_t x82 = INT8_MAX;
static int32_t t20 = 18286360;
static volatile int32_t t21 = 3003120;
int16_t x91 = INT16_MAX;
uint64_t x104 = 99868158341806901LLU;
uint64_t x109 = UINT64_MAX;
int32_t x113 = -1;
int64_t x115 = -97312LL;
static int64_t x117 = INT64_MAX;
int32_t t27 = 814;
uint64_t x129 = 36999304733280LLU;
volatile uint64_t x132 = UINT64_MAX;
uint8_t x135 = 27U;
static int32_t t31 = 13;
static uint8_t x143 = UINT8_MAX;
int32_t t33 = -263;
volatile uint64_t x147 = UINT64_MAX;
int8_t x153 = INT8_MAX;
int32_t x157 = INT32_MAX;
static int64_t x159 = 22871501023920799LL;
volatile int32_t t37 = -6487;
volatile int64_t x161 = 190416766LL;
volatile uint8_t x162 = 8U;
static volatile int8_t x164 = -1;
uint16_t x165 = 29U;
uint64_t x169 = 9084878800LLU;
int32_t x171 = 138112;
static volatile int32_t t40 = -335484;
volatile int64_t x173 = INT64_MAX;
int64_t x174 = 20955286975201LL;
int16_t x177 = -1;
uint16_t x180 = 13U;
uint16_t x190 = 0U;
uint16_t x193 = 1288U;
uint64_t x195 = 2LLU;
static uint8_t x203 = 26U;
static volatile int32_t t50 = 4676;
int64_t x214 = -1LL;
static int8_t x218 = 20;
int64_t x223 = -1409LL;
int16_t x224 = INT16_MAX;
static volatile int32_t t53 = -18;
int32_t t54 = 5318;
int16_t x233 = 4516;
int16_t x234 = -186;
static volatile int32_t x240 = 687721365;
uint64_t x241 = 110692632907LLU;
static int64_t x244 = 12180LL;
volatile int32_t t59 = 2487254;
volatile uint64_t x249 = 230LLU;
uint32_t x255 = 3U;
int8_t x256 = 3;
volatile int8_t x266 = -1;
int8_t x268 = -31;
int32_t t64 = 7270351;
int8_t x270 = INT8_MIN;
static int16_t x276 = INT16_MAX;
int16_t x277 = INT16_MIN;
volatile uint16_t x279 = 0U;
uint64_t x280 = 227486493665124537LLU;
static int64_t x286 = 79298130491136LL;
int32_t x290 = INT32_MIN;
volatile uint8_t x293 = UINT8_MAX;
int16_t x295 = INT16_MAX;
uint32_t x298 = UINT32_MAX;
volatile int32_t x300 = INT32_MIN;
volatile uint32_t x302 = 1U;
volatile int8_t x306 = INT8_MIN;
volatile int32_t t74 = -1491;
static int32_t x310 = INT32_MIN;
int16_t x314 = INT16_MIN;
uint32_t x317 = 27U;
static uint64_t x318 = UINT64_MAX;
static uint16_t x319 = UINT16_MAX;
uint8_t x322 = 7U;
static volatile int64_t x328 = -1LL;
int32_t x335 = 3129;
volatile int64_t x338 = INT64_MIN;
int64_t x340 = INT64_MIN;
static volatile int16_t x341 = INT16_MIN;
static int16_t x345 = -1;
volatile uint8_t x356 = UINT8_MAX;
static uint64_t x363 = 32365888LLU;
uint64_t x366 = 7496LLU;
int16_t x368 = -184;
static volatile int32_t t90 = -2979818;
volatile uint32_t x380 = 675U;
uint32_t x383 = 2055U;
int64_t x388 = INT64_MIN;
int32_t t94 = 1680;
int8_t x395 = 0;
int8_t x408 = INT8_MIN;
static volatile int32_t t99 = 515360;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	int8_t x2 = INT8_MIN;
	int64_t x3 = -1337LL;
	volatile uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = 64781983;

	t0 = (x1<=((x2<=x3)%x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int32_t x7 = INT32_MAX;
	static volatile int16_t x8 = -715;

	t1 = (x5<=((x6<=x7)%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 913LLU;
	static volatile uint16_t x10 = 435U;
	int16_t x11 = -1;
	static volatile uint8_t x12 = 7U;
	int32_t t2 = 245231;

	t2 = (x9<=((x10<=x11)%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = UINT8_MAX;
	uint32_t x15 = UINT32_MAX;
	static volatile uint16_t x16 = 78U;
	int32_t t3 = 1022;

	t3 = (x13<=((x14<=x15)%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	static volatile int32_t x18 = INT32_MIN;
	uint16_t x19 = 39U;
	static int32_t t4 = 14;

	t4 = (x17<=((x18<=x19)%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -1;
	int64_t x23 = INT64_MAX;
	int16_t x24 = INT16_MAX;

	t5 = (x21<=((x22<=x23)%x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	uint16_t x27 = 1906U;
	int32_t t6 = 529;

	t6 = (x25<=((x26<=x27)%x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 97815U;
	int32_t x30 = -1;
	uint32_t x31 = UINT32_MAX;
	int16_t x32 = 4;
	int32_t t7 = -489838;

	t7 = (x29<=((x30<=x31)%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x36 = INT64_MAX;
	volatile int32_t t8 = 13811865;

	t8 = (x33<=((x34<=x35)%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = UINT32_MAX;
	int64_t x38 = INT64_MIN;
	int32_t x39 = -1;
	volatile int8_t x40 = -1;

	t9 = (x37<=((x38<=x39)%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -1;
	uint32_t x42 = 819U;
	int64_t x43 = -14661112LL;
	volatile int32_t t10 = 19564102;

	t10 = (x41<=((x42<=x43)%x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int32_t x47 = -1;
	uint16_t x48 = UINT16_MAX;

	t11 = (x45<=((x46<=x47)%x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	int32_t x51 = -9027189;
	int64_t x52 = 2490833LL;
	static int32_t t12 = -30927780;

	t12 = (x49<=((x50<=x51)%x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 19U;
	int64_t x54 = -1LL;
	int32_t x55 = -1;
	static int64_t x56 = INT64_MIN;
	int32_t t13 = 28982;

	t13 = (x53<=((x54<=x55)%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MIN;
	int8_t x58 = -1;
	int32_t t14 = -234215128;

	t14 = (x57<=((x58<=x59)%x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x63 = 28U;
	int32_t x64 = INT32_MIN;

	t15 = (x61<=((x62<=x63)%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	int64_t x66 = 7334231LL;
	int8_t x67 = INT8_MAX;
	int16_t x68 = 54;
	int32_t t16 = -405;

	t16 = (x65<=((x66<=x67)%x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x69 = UINT16_MAX;
	uint32_t x70 = 372474U;
	int32_t x71 = INT32_MAX;
	uint8_t x72 = 7U;

	t17 = (x69<=((x70<=x71)%x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -3;
	int8_t x74 = -1;
	volatile uint32_t x75 = UINT32_MAX;
	int64_t x76 = INT64_MIN;
	int32_t t18 = -508206;

	t18 = (x73<=((x74<=x75)%x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -16;
	volatile int64_t x78 = -35978LL;
	uint32_t x79 = 1242196805U;
	uint64_t x80 = 45413464788LLU;
	volatile int32_t t19 = 26253;

	t19 = (x77<=((x78<=x79)%x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 77U;
	volatile int8_t x83 = 1;
	volatile int64_t x84 = 29918204559LL;

	t20 = (x81<=((x82<=x83)%x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 953235269225528640LLU;
	uint32_t x86 = UINT32_MAX;
	uint16_t x87 = 47U;
	volatile int8_t x88 = INT8_MIN;

	t21 = (x85<=((x86<=x87)%x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	static volatile int64_t x90 = INT64_MIN;
	volatile uint8_t x92 = 3U;
	static volatile int32_t t22 = 371;

	t22 = (x89<=((x90<=x91)%x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x101 = INT32_MIN;
	static int64_t x102 = -1840908917636LL;
	volatile int32_t x103 = INT32_MIN;
	static volatile int32_t t23 = 24;

	t23 = (x101<=((x102<=x103)%x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = 7710U;
	static uint16_t x106 = 406U;
	int32_t x107 = 1050628857;
	int16_t x108 = -1;
	volatile int32_t t24 = -76655137;

	t24 = (x105<=((x106<=x107)%x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x110 = INT64_MIN;
	int64_t x111 = INT64_MIN;
	static int16_t x112 = -1;
	volatile int32_t t25 = -706030726;

	t25 = (x109<=((x110<=x111)%x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x114 = INT32_MIN;
	int64_t x116 = INT64_MIN;
	int32_t t26 = -47;

	t26 = (x113<=((x114<=x115)%x116));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x118 = UINT32_MAX;
	int16_t x119 = INT16_MIN;
	volatile int16_t x120 = INT16_MIN;

	t27 = (x117<=((x118<=x119)%x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = 12U;
	static int16_t x122 = -161;
	int64_t x123 = INT64_MIN;
	volatile int32_t x124 = INT32_MAX;
	volatile int32_t t28 = -267058;

	t28 = (x121<=((x122<=x123)%x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = 625;
	int32_t x126 = INT32_MIN;
	int16_t x127 = -1;
	int32_t x128 = -1;
	int32_t t29 = -67521;

	t29 = (x125<=((x126<=x127)%x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x130 = 1U;
	int32_t x131 = 563210553;
	static int32_t t30 = -355286;

	t30 = (x129<=((x130<=x131)%x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = 0LLU;
	int8_t x134 = -1;
	uint64_t x136 = 413LLU;

	t31 = (x133<=((x134<=x135)%x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x137 = 0U;
	uint64_t x138 = 418607773LLU;
	int16_t x139 = INT16_MAX;
	int8_t x140 = -1;
	volatile int32_t t32 = -26;

	t32 = (x137<=((x138<=x139)%x140));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = 10000177LLU;
	int8_t x142 = -1;
	int16_t x144 = 7095;

	t33 = (x141<=((x142<=x143)%x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = UINT32_MAX;
	int8_t x146 = -30;
	uint8_t x148 = 30U;
	volatile int32_t t34 = 135479;

	t34 = (x145<=((x146<=x147)%x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = INT16_MIN;
	int64_t x150 = 252921LL;
	uint64_t x151 = 2754741371115018LLU;
	uint8_t x152 = 21U;
	volatile int32_t t35 = -9;

	t35 = (x149<=((x150<=x151)%x152));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x154 = INT16_MAX;
	int32_t x155 = INT32_MIN;
	volatile int16_t x156 = INT16_MIN;
	volatile int32_t t36 = -3;

	t36 = (x153<=((x154<=x155)%x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x158 = UINT32_MAX;
	volatile uint64_t x160 = UINT64_MAX;

	t37 = (x157<=((x158<=x159)%x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x163 = 1465;
	volatile int32_t t38 = 3190735;

	t38 = (x161<=((x162<=x163)%x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x166 = INT32_MIN;
	uint16_t x167 = UINT16_MAX;
	static int16_t x168 = -10;
	volatile int32_t t39 = 22510611;

	t39 = (x165<=((x166<=x167)%x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x170 = INT64_MAX;
	static volatile int8_t x172 = 1;

	t40 = (x169<=((x170<=x171)%x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x175 = INT16_MIN;
	uint16_t x176 = 7069U;
	int32_t t41 = 133493685;

	t41 = (x173<=((x174<=x175)%x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x178 = UINT8_MAX;
	static int16_t x179 = 7331;
	static int32_t t42 = -24073;

	t42 = (x177<=((x178<=x179)%x180));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x181 = 142911931607823884LL;
	int32_t x182 = INT32_MAX;
	uint32_t x183 = UINT32_MAX;
	static int8_t x184 = -3;
	volatile int32_t t43 = -17;

	t43 = (x181<=((x182<=x183)%x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x185 = 1142U;
	static uint16_t x186 = 911U;
	int8_t x187 = -1;
	uint64_t x188 = 14368381LLU;
	volatile int32_t t44 = 4172279;

	t44 = (x185<=((x186<=x187)%x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = INT8_MIN;
	volatile int64_t x191 = INT64_MIN;
	volatile int8_t x192 = INT8_MAX;
	int32_t t45 = -297520564;

	t45 = (x189<=((x190<=x191)%x192));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x194 = -1;
	int64_t x196 = INT64_MAX;
	int32_t t46 = 1169;

	t46 = (x193<=((x194<=x195)%x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x197 = 14187838U;
	int64_t x198 = INT64_MIN;
	int8_t x199 = INT8_MIN;
	static int8_t x200 = INT8_MIN;
	int32_t t47 = -804824;

	t47 = (x197<=((x198<=x199)%x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MIN;
	static int64_t x202 = 1LL;
	int32_t x204 = INT32_MAX;
	volatile int32_t t48 = 112715;

	t48 = (x201<=((x202<=x203)%x204));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = -1;
	static uint64_t x206 = 247528645622670LLU;
	uint64_t x207 = 3626945352756412LLU;
	static volatile int16_t x208 = -82;
	volatile int32_t t49 = 204439543;

	t49 = (x205<=((x206<=x207)%x208));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = -1LL;
	static int64_t x210 = -1LL;
	int64_t x211 = 1053027905111597LL;
	uint8_t x212 = 39U;

	t50 = (x209<=((x210<=x211)%x212));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x213 = 2U;
	int64_t x215 = INT64_MIN;
	static volatile uint64_t x216 = 124853967LLU;
	volatile int32_t t51 = 4;

	t51 = (x213<=((x214<=x215)%x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = INT64_MIN;
	volatile int8_t x219 = -2;
	int64_t x220 = -32016701030LL;
	int32_t t52 = -12;

	t52 = (x217<=((x218<=x219)%x220));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = -1;
	int32_t x222 = INT32_MAX;

	t53 = (x221<=((x222<=x223)%x224));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = INT32_MAX;
	uint32_t x226 = 178152U;
	int16_t x227 = INT16_MIN;
	int64_t x228 = INT64_MIN;

	t54 = (x225<=((x226<=x227)%x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = INT8_MAX;
	int64_t x230 = -102322LL;
	int32_t x231 = -1;
	int8_t x232 = -1;
	int32_t t55 = 100665044;

	t55 = (x229<=((x230<=x231)%x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x235 = INT8_MIN;
	static int64_t x236 = -1LL;
	int32_t t56 = -18685902;

	t56 = (x233<=((x234<=x235)%x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x237 = INT8_MIN;
	int32_t x238 = INT32_MIN;
	uint32_t x239 = 644094U;
	int32_t t57 = -21571;

	t57 = (x237<=((x238<=x239)%x240));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x242 = -51;
	int8_t x243 = -7;
	int32_t t58 = -251721957;

	t58 = (x241<=((x242<=x243)%x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = 101LL;
	int32_t x246 = 128529639;
	int64_t x247 = INT64_MIN;
	int16_t x248 = INT16_MAX;

	t59 = (x245<=((x246<=x247)%x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x250 = INT16_MIN;
	uint64_t x251 = 1811101LLU;
	volatile int32_t x252 = INT32_MIN;
	static int32_t t60 = -131083048;

	t60 = (x249<=((x250<=x251)%x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x253 = -1;
	int64_t x254 = INT64_MIN;
	int32_t t61 = 91;

	t61 = (x253<=((x254<=x255)%x256));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = -1;
	uint8_t x258 = UINT8_MAX;
	volatile uint64_t x259 = UINT64_MAX;
	uint64_t x260 = 2182659043481245928LLU;
	int32_t t62 = -3078;

	t62 = (x257<=((x258<=x259)%x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = INT64_MIN;
	uint64_t x262 = UINT64_MAX;
	uint32_t x263 = 9U;
	int16_t x264 = INT16_MIN;
	volatile int32_t t63 = 231844;

	t63 = (x261<=((x262<=x263)%x264));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x265 = 2;
	uint32_t x267 = 2633U;

	t64 = (x265<=((x266<=x267)%x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = 79;
	static int64_t x271 = -1LL;
	volatile int8_t x272 = INT8_MAX;
	int32_t t65 = -6880242;

	t65 = (x269<=((x270<=x271)%x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x273 = 3005U;
	static volatile int8_t x274 = 1;
	int32_t x275 = INT32_MIN;
	volatile int32_t t66 = 57;

	t66 = (x273<=((x274<=x275)%x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x278 = -1;
	static int32_t t67 = 83;

	t67 = (x277<=((x278<=x279)%x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x281 = -4511;
	uint64_t x282 = 348696828633487LLU;
	int16_t x283 = -5417;
	static int8_t x284 = INT8_MAX;
	static int32_t t68 = -921070;

	t68 = (x281<=((x282<=x283)%x284));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x285 = UINT8_MAX;
	int64_t x287 = 119LL;
	int32_t x288 = INT32_MIN;
	volatile int32_t t69 = -14039;

	t69 = (x285<=((x286<=x287)%x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x289 = 11751U;
	int64_t x291 = -1LL;
	int16_t x292 = 500;
	int32_t t70 = -931174231;

	t70 = (x289<=((x290<=x291)%x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x294 = 11717262537146LLU;
	uint16_t x296 = 14U;
	volatile int32_t t71 = -226;

	t71 = (x293<=((x294<=x295)%x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = 2008;
	int16_t x299 = 5272;
	volatile int32_t t72 = 2;

	t72 = (x297<=((x298<=x299)%x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x301 = 6960428LL;
	int32_t x303 = -13832;
	static int16_t x304 = -7720;
	int32_t t73 = 56;

	t73 = (x301<=((x302<=x303)%x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x305 = 0;
	uint16_t x307 = UINT16_MAX;
	volatile uint8_t x308 = 89U;

	t74 = (x305<=((x306<=x307)%x308));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x309 = UINT32_MAX;
	uint16_t x311 = UINT16_MAX;
	int8_t x312 = -1;
	static int32_t t75 = -2249085;

	t75 = (x309<=((x310<=x311)%x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x313 = UINT64_MAX;
	int16_t x315 = INT16_MIN;
	int16_t x316 = INT16_MIN;
	volatile int32_t t76 = -280989;

	t76 = (x313<=((x314<=x315)%x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x320 = INT64_MAX;
	volatile int32_t t77 = -1541732;

	t77 = (x317<=((x318<=x319)%x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x321 = 0;
	static int16_t x323 = 1;
	int32_t x324 = INT32_MIN;
	volatile int32_t t78 = -356;

	t78 = (x321<=((x322<=x323)%x324));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x325 = 647U;
	uint16_t x326 = UINT16_MAX;
	static volatile int64_t x327 = 114951015620554374LL;
	static int32_t t79 = 1;

	t79 = (x325<=((x326<=x327)%x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = -1LL;
	uint16_t x330 = UINT16_MAX;
	volatile uint32_t x331 = 62U;
	int8_t x332 = INT8_MAX;
	int32_t t80 = 0;

	t80 = (x329<=((x330<=x331)%x332));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x333 = UINT32_MAX;
	uint8_t x334 = 6U;
	int32_t x336 = 8;
	static int32_t t81 = -35004;

	t81 = (x333<=((x334<=x335)%x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x337 = 25U;
	uint8_t x339 = 12U;
	volatile int32_t t82 = 171;

	t82 = (x337<=((x338<=x339)%x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x342 = UINT8_MAX;
	uint32_t x343 = 102452U;
	uint8_t x344 = 42U;
	volatile int32_t t83 = 49280426;

	t83 = (x341<=((x342<=x343)%x344));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x346 = 226526591502434250LLU;
	int8_t x347 = INT8_MIN;
	int8_t x348 = -1;
	int32_t t84 = -2259676;

	t84 = (x345<=((x346<=x347)%x348));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x349 = INT32_MIN;
	int32_t x350 = INT32_MIN;
	int64_t x351 = 5824065711LL;
	volatile uint32_t x352 = 1450085U;
	volatile int32_t t85 = 534;

	t85 = (x349<=((x350<=x351)%x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x353 = -6506;
	static int32_t x354 = INT32_MIN;
	volatile uint32_t x355 = 15329U;
	int32_t t86 = 453;

	t86 = (x353<=((x354<=x355)%x356));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x357 = INT8_MIN;
	int64_t x358 = -259243089846031LL;
	volatile uint64_t x359 = 79505LLU;
	static volatile int64_t x360 = -1LL;
	static volatile int32_t t87 = 410829431;

	t87 = (x357<=((x358<=x359)%x360));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x361 = UINT16_MAX;
	volatile int32_t x362 = -1;
	int32_t x364 = INT32_MAX;
	static volatile int32_t t88 = -56101;

	t88 = (x361<=((x362<=x363)%x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x365 = 1U;
	int64_t x367 = INT64_MAX;
	volatile int32_t t89 = -2060254;

	t89 = (x365<=((x366<=x367)%x368));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x369 = 12;
	int8_t x370 = -1;
	int8_t x371 = INT8_MAX;
	uint8_t x372 = 1U;

	t90 = (x369<=((x370<=x371)%x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = INT32_MIN;
	uint64_t x374 = UINT64_MAX;
	int16_t x375 = -1;
	volatile int8_t x376 = INT8_MIN;
	int32_t t91 = 25513609;

	t91 = (x373<=((x374<=x375)%x376));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x377 = 100689U;
	int8_t x378 = 1;
	static volatile int64_t x379 = -1LL;
	int32_t t92 = 1694;

	t92 = (x377<=((x378<=x379)%x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x381 = 11U;
	int8_t x382 = INT8_MIN;
	int64_t x384 = INT64_MAX;
	static volatile int32_t t93 = 10455870;

	t93 = (x381<=((x382<=x383)%x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x385 = -1;
	int16_t x386 = INT16_MAX;
	static int32_t x387 = INT32_MIN;

	t94 = (x385<=((x386<=x387)%x388));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x389 = UINT16_MAX;
	uint16_t x390 = UINT16_MAX;
	static int64_t x391 = INT64_MAX;
	int8_t x392 = 1;
	volatile int32_t t95 = -708695185;

	t95 = (x389<=((x390<=x391)%x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x393 = UINT32_MAX;
	int16_t x394 = -1;
	int32_t x396 = -2;
	static int32_t t96 = 117388;

	t96 = (x393<=((x394<=x395)%x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x397 = 2U;
	volatile int16_t x398 = -1;
	uint32_t x399 = 28858U;
	uint8_t x400 = 4U;
	volatile int32_t t97 = 1088513;

	t97 = (x397<=((x398<=x399)%x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x401 = -122;
	int8_t x402 = INT8_MIN;
	int32_t x403 = INT32_MIN;
	static int64_t x404 = -1LL;
	volatile int32_t t98 = -184;

	t98 = (x401<=((x402<=x403)%x404));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x405 = INT32_MIN;
	int64_t x406 = INT64_MIN;
	volatile int64_t x407 = INT64_MIN;

	t99 = (x405<=((x406<=x407)%x408));

	if (t99 != 1) { NG(); } else { ; }
	
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

