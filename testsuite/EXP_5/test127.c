#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x16 = -27005LL;
int32_t x27 = 357338086;
int32_t t6 = -79;
volatile uint16_t x42 = 21455U;
volatile int16_t x46 = -94;
static volatile int32_t t9 = 176;
static int8_t x49 = -1;
uint16_t x50 = UINT16_MAX;
static int32_t x51 = 1;
static volatile int32_t t10 = 5972;
uint16_t x61 = 19U;
volatile int64_t x62 = -8099LL;
uint8_t x66 = 15U;
volatile int32_t t15 = 132;
static uint64_t x73 = 366LLU;
int16_t x77 = -45;
int64_t x80 = INT64_MIN;
static volatile int32_t t19 = 1996;
int16_t x94 = INT16_MAX;
uint64_t x96 = 5708784LLU;
int8_t x98 = INT8_MAX;
uint32_t x113 = 882689U;
static int8_t x114 = 0;
int64_t x117 = 516583LL;
volatile int64_t x118 = INT64_MAX;
int16_t x122 = -408;
int8_t x124 = INT8_MAX;
static int16_t x129 = 3;
uint32_t x139 = UINT32_MAX;
static int32_t x140 = INT32_MIN;
volatile int32_t t28 = 171998296;
int64_t x148 = INT64_MAX;
static int8_t x152 = INT8_MIN;
uint64_t x154 = 93891LLU;
int8_t x156 = -1;
int8_t x157 = 63;
int64_t x160 = INT64_MIN;
volatile int8_t x171 = -1;
volatile int64_t x172 = 1LL;
uint64_t x177 = 36718040570221624LLU;
int8_t x178 = INT8_MIN;
int8_t x180 = 14;
int32_t t38 = 8;
static uint32_t x185 = 833126U;
volatile int32_t t39 = 40727;
static int8_t x189 = INT8_MIN;
int32_t x191 = INT32_MIN;
static volatile int32_t t42 = 817705;
volatile int64_t x204 = 361480416373839898LL;
int32_t x207 = INT32_MAX;
int16_t x209 = 68;
volatile int16_t x211 = INT16_MIN;
static uint16_t x213 = 2022U;
uint8_t x214 = 3U;
int32_t t46 = -50080;
uint16_t x218 = 2U;
int8_t x219 = INT8_MIN;
volatile uint16_t x231 = 5U;
volatile int16_t x251 = 60;
int32_t t55 = 629932828;
volatile int32_t x255 = INT32_MIN;
volatile int16_t x260 = 14448;
uint64_t x263 = 11683749425020242LLU;
volatile int64_t x265 = INT64_MIN;
volatile int16_t x276 = INT16_MIN;
static volatile int32_t t61 = 120222;
volatile int16_t x280 = INT16_MIN;
int32_t x285 = INT32_MIN;
int64_t x288 = -1LL;
int8_t x291 = INT8_MIN;
volatile int32_t t66 = 51458;
int64_t x297 = -1LL;
uint16_t x299 = UINT16_MAX;
int32_t t67 = -188546;
volatile int32_t x307 = INT32_MIN;
static uint64_t x320 = UINT64_MAX;
static int32_t t71 = -11235280;
int32_t t72 = -995;
uint64_t x334 = UINT64_MAX;
volatile uint16_t x340 = 2U;
int64_t x341 = INT64_MIN;
volatile uint16_t x345 = 17U;
int8_t x349 = INT8_MAX;
volatile uint64_t x352 = 819364235LLU;
uint32_t x357 = 79172776U;
static volatile int32_t t79 = 911264930;
uint32_t x365 = UINT32_MAX;
volatile int16_t x366 = INT16_MAX;
int8_t x368 = 4;
int64_t x372 = -982LL;
volatile uint16_t x375 = 158U;
static int32_t x376 = INT32_MIN;
int8_t x381 = INT8_MIN;
volatile uint64_t x387 = UINT64_MAX;
int16_t x394 = -32;
int16_t x395 = -10;
uint64_t x396 = 246889318626868777LLU;
int32_t t88 = -644;
volatile int32_t x397 = INT32_MIN;
int16_t x398 = -1818;
int16_t x401 = INT16_MIN;
uint32_t x405 = 5294762U;
static int64_t x408 = INT64_MAX;
static uint8_t x418 = 112U;
volatile int32_t t93 = 624;
uint16_t x421 = 6U;
int32_t t94 = 695;
uint32_t x431 = 2333U;
uint32_t x443 = 45834U;


void f0(void) {
	int64_t x5 = -1LL;
	int16_t x6 = INT16_MIN;
	volatile int8_t x7 = INT8_MIN;
	volatile uint64_t x8 = 7LLU;
	int32_t t0 = 1;

	t0 = (x5<=((x6+x7)<=x8));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x9 = 1569U;
	static int32_t x10 = INT32_MAX;
	int8_t x11 = -1;
	uint32_t x12 = UINT32_MAX;
	volatile int32_t t1 = 7655;

	t1 = (x9<=((x10+x11)<=x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	int16_t x14 = INT16_MIN;
	uint32_t x15 = 58868U;
	int32_t t2 = 222855086;

	t2 = (x13<=((x14+x15)<=x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x21 = -1LL;
	static uint64_t x22 = UINT64_MAX;
	static volatile int8_t x23 = INT8_MIN;
	static int32_t x24 = -6095;
	volatile int32_t t3 = -4187250;

	t3 = (x21<=((x22+x23)<=x24));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x25 = UINT8_MAX;
	static int8_t x26 = 1;
	int16_t x28 = -70;
	volatile int32_t t4 = -1913901;

	t4 = (x25<=((x26+x27)<=x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = 15U;
	static volatile int16_t x30 = INT16_MAX;
	int8_t x31 = -1;
	int64_t x32 = INT64_MAX;
	static int32_t t5 = -406;

	t5 = (x29<=((x30+x31)<=x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = -1;
	static int8_t x34 = 0;
	int32_t x35 = -5716239;
	static int16_t x36 = INT16_MIN;

	t6 = (x33<=((x34+x35)<=x36));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = UINT16_MAX;
	int16_t x38 = -1;
	static uint16_t x39 = 1U;
	uint16_t x40 = 2230U;
	static volatile int32_t t7 = 24960;

	t7 = (x37<=((x38+x39)<=x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MAX;
	static int64_t x43 = -1LL;
	static int64_t x44 = -1LL;
	int32_t t8 = 647134;

	t8 = (x41<=((x42+x43)<=x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = 3;
	volatile int64_t x47 = 3LL;
	volatile uint32_t x48 = UINT32_MAX;

	t9 = (x45<=((x46+x47)<=x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x52 = 0U;

	t10 = (x49<=((x50+x51)<=x52));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MIN;
	uint32_t x54 = 1367517U;
	int16_t x55 = 0;
	static volatile int16_t x56 = -1;
	static int32_t t11 = 22298167;

	t11 = (x53<=((x54+x55)<=x56));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x57 = INT16_MAX;
	int16_t x58 = 5745;
	volatile int16_t x59 = -1;
	int8_t x60 = INT8_MAX;
	volatile int32_t t12 = 1846;

	t12 = (x57<=((x58+x59)<=x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x63 = 361144;
	int64_t x64 = INT64_MIN;
	static volatile int32_t t13 = 33;

	t13 = (x61<=((x62+x63)<=x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = -9452;
	uint64_t x67 = UINT64_MAX;
	uint32_t x68 = 2094968450U;
	int32_t t14 = 5641870;

	t14 = (x65<=((x66+x67)<=x68));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MIN;
	uint16_t x70 = 58U;
	int16_t x71 = INT16_MIN;
	uint64_t x72 = 68LLU;

	t15 = (x69<=((x70+x71)<=x72));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x74 = INT8_MIN;
	int8_t x75 = INT8_MAX;
	volatile int8_t x76 = -1;
	volatile int32_t t16 = 2233;

	t16 = (x73<=((x74+x75)<=x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x78 = 16464U;
	int64_t x79 = -1LL;
	volatile int32_t t17 = 321631990;

	t17 = (x77<=((x78+x79)<=x80));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x81 = -153;
	static volatile uint64_t x82 = 11388881LLU;
	static int32_t x83 = -1;
	static uint16_t x84 = 1211U;
	static int32_t t18 = 31571;

	t18 = (x81<=((x82+x83)<=x84));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = INT8_MIN;
	static int16_t x90 = 15349;
	volatile uint8_t x91 = UINT8_MAX;
	int8_t x92 = -7;

	t19 = (x89<=((x90+x91)<=x92));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x93 = 0U;
	uint64_t x95 = 1177254LLU;
	volatile int32_t t20 = -652;

	t20 = (x93<=((x94+x95)<=x96));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x97 = INT32_MIN;
	volatile uint64_t x99 = UINT64_MAX;
	int16_t x100 = INT16_MIN;
	volatile int32_t t21 = -26;

	t21 = (x97<=((x98+x99)<=x100));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x101 = 18596111U;
	volatile int64_t x102 = 5LL;
	int8_t x103 = INT8_MAX;
	uint32_t x104 = 201U;
	volatile int32_t t22 = -1;

	t22 = (x101<=((x102+x103)<=x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x115 = -2974914768746320LL;
	volatile int8_t x116 = 1;
	volatile int32_t t23 = -13653893;

	t23 = (x113<=((x114+x115)<=x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x119 = INT32_MIN;
	int16_t x120 = INT16_MIN;
	static int32_t t24 = -449842;

	t24 = (x117<=((x118+x119)<=x120));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x121 = -3047;
	static int8_t x123 = INT8_MIN;
	static int32_t t25 = 231;

	t25 = (x121<=((x122+x123)<=x124));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x125 = INT32_MIN;
	volatile int8_t x126 = INT8_MIN;
	static int8_t x127 = 42;
	int32_t x128 = INT32_MAX;
	volatile int32_t t26 = -850;

	t26 = (x125<=((x126+x127)<=x128));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x130 = -1;
	uint16_t x131 = 3331U;
	volatile uint64_t x132 = UINT64_MAX;
	volatile int32_t t27 = 59494053;

	t27 = (x129<=((x130+x131)<=x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x137 = -8372326011763LL;
	uint16_t x138 = 13U;

	t28 = (x137<=((x138+x139)<=x140));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x141 = -4523;
	int64_t x142 = 186870LL;
	volatile uint64_t x143 = 545605062LLU;
	uint64_t x144 = 55730864726LLU;
	volatile int32_t t29 = -401;

	t29 = (x141<=((x142+x143)<=x144));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x145 = INT16_MAX;
	static volatile int8_t x146 = -1;
	uint16_t x147 = 6564U;
	int32_t t30 = -9;

	t30 = (x145<=((x146+x147)<=x148));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x149 = INT32_MIN;
	volatile int8_t x150 = INT8_MIN;
	uint8_t x151 = 69U;
	static int32_t t31 = -850073;

	t31 = (x149<=((x150+x151)<=x152));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x153 = -4405;
	int8_t x155 = INT8_MAX;
	int32_t t32 = -61616;

	t32 = (x153<=((x154+x155)<=x156));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x158 = 727U;
	volatile int8_t x159 = 0;
	volatile int32_t t33 = 0;

	t33 = (x157<=((x158+x159)<=x160));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x161 = 86;
	int32_t x162 = -848102336;
	int16_t x163 = 2020;
	static uint64_t x164 = 221465LLU;
	int32_t t34 = 30129;

	t34 = (x161<=((x162+x163)<=x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x169 = UINT32_MAX;
	volatile uint8_t x170 = UINT8_MAX;
	int32_t t35 = 285017;

	t35 = (x169<=((x170+x171)<=x172));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x173 = 5U;
	volatile int16_t x174 = INT16_MAX;
	static volatile uint8_t x175 = UINT8_MAX;
	int32_t x176 = -1;
	int32_t t36 = 466;

	t36 = (x173<=((x174+x175)<=x176));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x179 = 7U;
	static int32_t t37 = 480;

	t37 = (x177<=((x178+x179)<=x180));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x181 = 392U;
	uint64_t x182 = UINT64_MAX;
	uint16_t x183 = 8160U;
	int32_t x184 = -59;

	t38 = (x181<=((x182+x183)<=x184));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x186 = 769155LL;
	volatile int8_t x187 = INT8_MIN;
	int8_t x188 = INT8_MIN;

	t39 = (x185<=((x186+x187)<=x188));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x190 = 2;
	static int8_t x192 = INT8_MIN;
	int32_t t40 = 2934;

	t40 = (x189<=((x190+x191)<=x192));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x193 = INT8_MAX;
	volatile int64_t x194 = INT64_MIN;
	int64_t x195 = 14114123901510LL;
	volatile int32_t x196 = -475261;
	int32_t t41 = -6;

	t41 = (x193<=((x194+x195)<=x196));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x197 = INT8_MIN;
	static int16_t x198 = -1;
	uint64_t x199 = 250049666945LLU;
	uint32_t x200 = UINT32_MAX;

	t42 = (x197<=((x198+x199)<=x200));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x201 = -173815;
	uint32_t x202 = 35U;
	uint16_t x203 = 6821U;
	int32_t t43 = -1;

	t43 = (x201<=((x202+x203)<=x204));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x205 = 43U;
	volatile int16_t x206 = INT16_MIN;
	static int8_t x208 = -1;
	int32_t t44 = 747;

	t44 = (x205<=((x206+x207)<=x208));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x210 = UINT16_MAX;
	volatile int64_t x212 = INT64_MIN;
	volatile int32_t t45 = 14522;

	t45 = (x209<=((x210+x211)<=x212));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x215 = INT8_MAX;
	volatile int16_t x216 = INT16_MIN;

	t46 = (x213<=((x214+x215)<=x216));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x217 = 0;
	static volatile uint64_t x220 = 44LLU;
	volatile int32_t t47 = -14919263;

	t47 = (x217<=((x218+x219)<=x220));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x221 = 2087906U;
	static uint64_t x222 = UINT64_MAX;
	uint32_t x223 = UINT32_MAX;
	int32_t x224 = INT32_MIN;
	volatile int32_t t48 = -37;

	t48 = (x221<=((x222+x223)<=x224));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x225 = 8797U;
	int32_t x226 = INT32_MIN;
	uint8_t x227 = UINT8_MAX;
	uint32_t x228 = UINT32_MAX;
	int32_t t49 = -382;

	t49 = (x225<=((x226+x227)<=x228));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x229 = UINT32_MAX;
	volatile int32_t x230 = INT32_MIN;
	int64_t x232 = INT64_MIN;
	volatile int32_t t50 = 14;

	t50 = (x229<=((x230+x231)<=x232));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x233 = INT64_MIN;
	volatile uint64_t x234 = 3331575LLU;
	static int16_t x235 = INT16_MIN;
	uint32_t x236 = 729164U;
	int32_t t51 = 203;

	t51 = (x233<=((x234+x235)<=x236));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x237 = UINT32_MAX;
	int32_t x238 = -160;
	uint32_t x239 = 4U;
	static volatile int16_t x240 = INT16_MAX;
	int32_t t52 = -587642550;

	t52 = (x237<=((x238+x239)<=x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x241 = INT32_MAX;
	int16_t x242 = -1;
	volatile uint32_t x243 = 0U;
	int64_t x244 = 180911LL;
	static int32_t t53 = 22;

	t53 = (x241<=((x242+x243)<=x244));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x245 = -98;
	static volatile uint64_t x246 = 10LLU;
	int8_t x247 = INT8_MIN;
	int16_t x248 = 11;
	static volatile int32_t t54 = -425;

	t54 = (x245<=((x246+x247)<=x248));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x249 = INT8_MIN;
	int32_t x250 = -1;
	uint32_t x252 = 181428U;

	t55 = (x249<=((x250+x251)<=x252));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x253 = INT64_MIN;
	static int32_t x254 = 202;
	int16_t x256 = -17;
	int32_t t56 = -173753;

	t56 = (x253<=((x254+x255)<=x256));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x257 = -2;
	int32_t x258 = INT32_MIN;
	uint32_t x259 = 23784U;
	volatile int32_t t57 = 479135;

	t57 = (x257<=((x258+x259)<=x260));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = INT64_MIN;
	static int32_t x262 = -1;
	int16_t x264 = INT16_MIN;
	volatile int32_t t58 = -1160198;

	t58 = (x261<=((x262+x263)<=x264));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x266 = 17365394U;
	static int16_t x267 = -1;
	volatile uint64_t x268 = 476104173703625387LLU;
	int32_t t59 = -951995661;

	t59 = (x265<=((x266+x267)<=x268));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x269 = INT8_MIN;
	volatile int64_t x270 = INT64_MIN;
	int32_t x271 = INT32_MAX;
	int16_t x272 = 1;
	static volatile int32_t t60 = 126;

	t60 = (x269<=((x270+x271)<=x272));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x273 = INT16_MAX;
	uint8_t x274 = UINT8_MAX;
	uint32_t x275 = 677U;

	t61 = (x273<=((x274+x275)<=x276));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x277 = 1921874903678122LL;
	int16_t x278 = 2;
	uint64_t x279 = 221349876955978274LLU;
	volatile int32_t t62 = 76160617;

	t62 = (x277<=((x278+x279)<=x280));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x281 = -8;
	int16_t x282 = -7853;
	volatile int8_t x283 = 5;
	uint64_t x284 = 1901895349LLU;
	int32_t t63 = 1;

	t63 = (x281<=((x282+x283)<=x284));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x286 = -52;
	int32_t x287 = 20951743;
	volatile int32_t t64 = 306461923;

	t64 = (x285<=((x286+x287)<=x288));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x289 = -1;
	static int8_t x290 = -1;
	uint32_t x292 = 16283012U;
	volatile int32_t t65 = 4;

	t65 = (x289<=((x290+x291)<=x292));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x293 = INT8_MAX;
	int32_t x294 = 189797689;
	uint32_t x295 = UINT32_MAX;
	static uint32_t x296 = 957U;

	t66 = (x293<=((x294+x295)<=x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x298 = INT16_MIN;
	static int32_t x300 = INT32_MIN;

	t67 = (x297<=((x298+x299)<=x300));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x301 = INT64_MAX;
	static int32_t x302 = INT32_MIN;
	int64_t x303 = -1024920612969LL;
	uint8_t x304 = 3U;
	volatile int32_t t68 = 10952;

	t68 = (x301<=((x302+x303)<=x304));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x305 = 11321LLU;
	static volatile int16_t x306 = 463;
	int64_t x308 = INT64_MAX;
	volatile int32_t t69 = 0;

	t69 = (x305<=((x306+x307)<=x308));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x309 = 2U;
	uint8_t x310 = UINT8_MAX;
	int32_t x311 = INT32_MIN;
	static int64_t x312 = -1LL;
	int32_t t70 = -18579449;

	t70 = (x309<=((x310+x311)<=x312));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x317 = 0;
	uint64_t x318 = 1776607LLU;
	uint16_t x319 = UINT16_MAX;

	t71 = (x317<=((x318+x319)<=x320));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x321 = INT16_MIN;
	uint16_t x322 = 5U;
	int32_t x323 = -7;
	uint8_t x324 = 65U;

	t72 = (x321<=((x322+x323)<=x324));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x333 = INT32_MAX;
	int32_t x335 = 816921;
	static int64_t x336 = INT64_MIN;
	volatile int32_t t73 = 806772;

	t73 = (x333<=((x334+x335)<=x336));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x337 = INT8_MIN;
	uint16_t x338 = UINT16_MAX;
	static int8_t x339 = INT8_MIN;
	static int32_t t74 = -374105048;

	t74 = (x337<=((x338+x339)<=x340));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x342 = INT8_MAX;
	uint8_t x343 = 9U;
	static uint16_t x344 = 330U;
	int32_t t75 = -64584084;

	t75 = (x341<=((x342+x343)<=x344));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x346 = -1;
	static volatile uint16_t x347 = UINT16_MAX;
	static uint16_t x348 = 1U;
	volatile int32_t t76 = 84582957;

	t76 = (x345<=((x346+x347)<=x348));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x350 = 3221;
	int16_t x351 = INT16_MIN;
	static int32_t t77 = -99698;

	t77 = (x349<=((x350+x351)<=x352));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x353 = -1;
	int32_t x354 = -24846;
	int64_t x355 = INT64_MAX;
	int32_t x356 = -1;
	int32_t t78 = -11098;

	t78 = (x353<=((x354+x355)<=x356));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x358 = 30;
	static int32_t x359 = INT32_MIN;
	uint64_t x360 = 1LLU;

	t79 = (x357<=((x358+x359)<=x360));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x361 = 7U;
	uint64_t x362 = 15627045296216LLU;
	int64_t x363 = -1LL;
	volatile uint32_t x364 = 166766U;
	volatile int32_t t80 = 13;

	t80 = (x361<=((x362+x363)<=x364));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x367 = -14621;
	volatile int32_t t81 = 1;

	t81 = (x365<=((x366+x367)<=x368));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x369 = INT8_MIN;
	volatile int8_t x370 = INT8_MAX;
	uint16_t x371 = 53U;
	volatile int32_t t82 = -350;

	t82 = (x369<=((x370+x371)<=x372));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x373 = INT64_MIN;
	int32_t x374 = -94818546;
	volatile int32_t t83 = -402653;

	t83 = (x373<=((x374+x375)<=x376));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x377 = INT32_MIN;
	uint16_t x378 = 14770U;
	static int8_t x379 = 1;
	int8_t x380 = -3;
	volatile int32_t t84 = -26548757;

	t84 = (x377<=((x378+x379)<=x380));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x382 = -13;
	static uint64_t x383 = 13419985052389395LLU;
	static int32_t x384 = -1;
	volatile int32_t t85 = 203855;

	t85 = (x381<=((x382+x383)<=x384));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x385 = 112U;
	static uint8_t x386 = 0U;
	int8_t x388 = INT8_MIN;
	volatile int32_t t86 = -38791151;

	t86 = (x385<=((x386+x387)<=x388));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x389 = INT32_MAX;
	int32_t x390 = 207;
	static volatile int8_t x391 = 1;
	volatile uint8_t x392 = 40U;
	volatile int32_t t87 = 61706;

	t87 = (x389<=((x390+x391)<=x392));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x393 = 1564880120279LLU;

	t88 = (x393<=((x394+x395)<=x396));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x399 = 91597U;
	volatile uint64_t x400 = 5829LLU;
	volatile int32_t t89 = -43101054;

	t89 = (x397<=((x398+x399)<=x400));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x402 = UINT32_MAX;
	int64_t x403 = -6517390664LL;
	volatile int8_t x404 = 0;
	int32_t t90 = 5460;

	t90 = (x401<=((x402+x403)<=x404));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x406 = -1;
	volatile int16_t x407 = INT16_MIN;
	int32_t t91 = 62;

	t91 = (x405<=((x406+x407)<=x408));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x409 = INT8_MIN;
	int32_t x410 = -7708;
	uint16_t x411 = 7754U;
	static volatile int32_t x412 = -35439;
	volatile int32_t t92 = 49;

	t92 = (x409<=((x410+x411)<=x412));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x417 = 2619207U;
	int8_t x419 = -1;
	uint16_t x420 = UINT16_MAX;

	t93 = (x417<=((x418+x419)<=x420));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x422 = INT16_MAX;
	volatile uint8_t x423 = 85U;
	int64_t x424 = 152869360LL;

	t94 = (x421<=((x422+x423)<=x424));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x425 = UINT16_MAX;
	static uint8_t x426 = 1U;
	uint32_t x427 = UINT32_MAX;
	uint32_t x428 = UINT32_MAX;
	volatile int32_t t95 = 5790;

	t95 = (x425<=((x426+x427)<=x428));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x429 = -1;
	int16_t x430 = INT16_MIN;
	int16_t x432 = INT16_MIN;
	static volatile int32_t t96 = 14777730;

	t96 = (x429<=((x430+x431)<=x432));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x433 = UINT64_MAX;
	volatile int8_t x434 = INT8_MAX;
	volatile int64_t x435 = -1020810LL;
	uint8_t x436 = UINT8_MAX;
	volatile int32_t t97 = 16954;

	t97 = (x433<=((x434+x435)<=x436));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x437 = INT8_MIN;
	volatile uint16_t x438 = 13U;
	int16_t x439 = INT16_MIN;
	int8_t x440 = 28;
	volatile int32_t t98 = -47;

	t98 = (x437<=((x438+x439)<=x440));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x441 = INT8_MIN;
	int16_t x442 = -4281;
	uint16_t x444 = 2751U;
	volatile int32_t t99 = -506727;

	t99 = (x441<=((x442+x443)<=x444));

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

