#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x9 = INT8_MIN;
int16_t x11 = 36;
static int64_t t0 = -6503884953466LL;
int32_t x13 = -1;
int64_t t4 = 284985604201262767LL;
int32_t t7 = 263928826;
uint64_t x48 = 104683426LLU;
volatile int16_t x58 = INT16_MIN;
static uint8_t x61 = 9U;
volatile int8_t x62 = INT8_MAX;
volatile int32_t t11 = -810;
uint8_t x66 = 7U;
uint8_t x69 = UINT8_MAX;
volatile uint8_t x78 = 90U;
uint32_t t15 = 5298787U;
static int32_t t16 = -21;
int64_t x89 = INT64_MIN;
int64_t x91 = -1LL;
volatile uint32_t x94 = 0U;
static int16_t x96 = 15573;
volatile int64_t t18 = -4284300987175LL;
uint16_t x105 = UINT16_MAX;
int8_t x109 = -40;
volatile uint32_t x115 = UINT32_MAX;
uint8_t x117 = 88U;
static volatile int16_t x118 = INT16_MIN;
int8_t x119 = 1;
int64_t t25 = 83523325LL;
int32_t x127 = -25;
int64_t x128 = -1LL;
static volatile int64_t t26 = -140128802LL;
volatile int8_t x135 = -1;
uint64_t t28 = 620LLU;
int16_t x152 = INT16_MIN;
uint64_t x160 = UINT64_MAX;
volatile uint32_t t34 = 235199160U;
int8_t x175 = INT8_MIN;
uint32_t x177 = 60674009U;
static uint8_t x187 = 0U;
static volatile int64_t x189 = 6637559LL;
static int16_t x191 = INT16_MIN;
uint64_t x199 = UINT64_MAX;
int32_t x208 = 21;
uint16_t x210 = 84U;
static int64_t x213 = -1LL;
uint8_t x216 = 32U;
static int64_t x223 = -12205301340LL;
static volatile uint64_t x226 = 9831LLU;
static uint8_t x234 = 102U;
int8_t x235 = INT8_MIN;
int64_t x236 = INT64_MAX;
uint8_t x239 = 55U;
static volatile int64_t x244 = 1071LL;
int64_t t52 = 259717759847LL;
int16_t x248 = -2;
volatile uint32_t t53 = 35U;
int64_t x258 = -26353676LL;
int16_t x260 = INT16_MAX;
static int64_t t54 = 180942LL;
int8_t x266 = -1;
int8_t x272 = INT8_MIN;
static uint64_t t59 = 703655LLU;
int32_t t60 = -40322445;
volatile uint32_t x289 = 450971736U;
static volatile int32_t t62 = 1815258;
uint16_t x298 = 177U;
int16_t x300 = -8;
int64_t x306 = -254500LL;
int64_t x312 = -1LL;
uint64_t t66 = 1665658484796532LLU;
volatile int8_t x318 = INT8_MIN;
int8_t x319 = -1;
uint32_t x325 = 27U;
uint64_t x328 = 8107469799LLU;
volatile int16_t x339 = 0;
int64_t t71 = -399867LL;
static int16_t x346 = -172;
uint8_t x349 = 1U;
static volatile int32_t x353 = 37883169;
int32_t x356 = -1;
volatile int16_t x358 = -1;
int8_t x364 = 3;
int8_t x367 = INT8_MIN;
int32_t t78 = 1;
volatile uint64_t x369 = 219558545564LLU;
int16_t x372 = -4;
static uint64_t t79 = 111LLU;
volatile int16_t x387 = INT16_MIN;
volatile int32_t t81 = -230;
volatile uint32_t t82 = 334257U;
int32_t x393 = 31673980;
int64_t x400 = -57865LL;
uint32_t t85 = 26U;
volatile int32_t x410 = 0;
uint32_t x411 = UINT32_MAX;
volatile int32_t x413 = -1;
static int16_t x416 = INT16_MAX;
int16_t x422 = -1;
static volatile int64_t t90 = 105160LL;
int64_t x429 = INT64_MIN;
uint8_t x432 = 81U;
volatile int64_t t92 = 2347634471546161232LL;
static uint32_t x440 = 14495508U;
int8_t x443 = INT8_MAX;
volatile uint64_t t95 = 2796115943LLU;
int64_t x448 = -1635LL;
static int8_t x449 = INT8_MAX;
int8_t x453 = -1;
static volatile uint32_t x456 = UINT32_MAX;
static volatile int32_t x458 = INT32_MAX;


void f0(void) {
	static volatile int64_t x10 = INT64_MIN;
	int32_t x12 = INT32_MIN;

	t0 = ((x9&(x10+x11))/x12);

	if (t0 != 4294967296LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x14 = UINT64_MAX;
	int64_t x15 = INT64_MIN;
	volatile uint16_t x16 = 1192U;
	uint64_t t1 = 5242769600832LLU;

	t1 = ((x13&(x14+x15))/x16);

	if (t1 != 7737728218837899LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x17 = 43;
	int8_t x18 = INT8_MIN;
	int8_t x19 = -1;
	int64_t x20 = -1LL;
	volatile int64_t t2 = -3507574204LL;

	t2 = ((x17&(x18+x19))/x20);

	if (t2 != -43LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x25 = UINT64_MAX;
	uint8_t x26 = UINT8_MAX;
	int64_t x27 = -157162LL;
	uint32_t x28 = 7U;
	uint64_t t3 = 3139269183116LLU;

	t3 = ((x25&(x26+x27))/x28);

	if (t3 != 2635249153387056387LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x29 = 37;
	int16_t x30 = 0;
	static uint16_t x31 = UINT16_MAX;
	int64_t x32 = INT64_MIN;

	t4 = ((x29&(x30+x31))/x32);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = 15677;
	int32_t x34 = -3;
	static uint32_t x35 = 15685024U;
	int32_t x36 = -1;
	static volatile uint32_t t5 = 1627275U;

	t5 = ((x33&(x34+x35))/x36);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = INT16_MIN;
	volatile int32_t x38 = INT32_MIN;
	uint32_t x39 = 56U;
	static int16_t x40 = 48;
	static volatile uint32_t t6 = 6516U;

	t6 = ((x37&(x38+x39))/x40);

	if (t6 != 44739242U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = -2789;
	static int8_t x42 = INT8_MIN;
	int8_t x43 = INT8_MIN;
	static int16_t x44 = INT16_MIN;

	t7 = ((x41&(x42+x43))/x44);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = -1;
	uint8_t x46 = UINT8_MAX;
	int32_t x47 = 0;
	volatile uint64_t t8 = 3858683LLU;

	t8 = ((x45&(x46+x47))/x48);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x49 = 1794U;
	uint64_t x50 = 6672967719272LLU;
	static int32_t x51 = INT32_MAX;
	int64_t x52 = INT64_MAX;
	uint64_t t9 = 2LLU;

	t9 = ((x49&(x50+x51))/x52);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x57 = 1U;
	static int16_t x59 = INT16_MAX;
	uint32_t x60 = 50015U;
	uint32_t t10 = 76U;

	t10 = ((x57&(x58+x59))/x60);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x63 = INT8_MIN;
	uint16_t x64 = 29597U;

	t11 = ((x61&(x62+x63))/x64);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x65 = 166238U;
	static int32_t x67 = INT32_MIN;
	static int16_t x68 = INT16_MIN;
	uint32_t t12 = 8U;

	t12 = ((x65&(x66+x67))/x68);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x70 = -1;
	volatile int8_t x71 = INT8_MIN;
	uint16_t x72 = 7347U;
	static volatile int32_t t13 = 0;

	t13 = ((x69&(x70+x71))/x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = INT8_MIN;
	uint32_t x74 = 4U;
	static volatile int32_t x75 = 40779406;
	int16_t x76 = INT16_MAX;
	volatile uint32_t t14 = 285690208U;

	t14 = ((x73&(x74+x75))/x76);

	if (t14 != 1244U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x77 = 1528365841U;
	uint16_t x79 = 834U;
	int16_t x80 = -3;

	t15 = ((x77&(x78+x79))/x80);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = 3829542;
	int32_t x82 = INT32_MIN;
	static uint8_t x83 = 10U;
	uint8_t x84 = 3U;

	t16 = ((x81&(x82+x83))/x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x90 = -1;
	int32_t x92 = 26060;
	int64_t t17 = 35851246494146582LL;

	t17 = ((x89&(x90+x91))/x92);

	if (t17 != -353928320677466LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = 0LL;
	uint16_t x95 = 808U;

	t18 = ((x93&(x94+x95))/x96);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x97 = INT32_MIN;
	int64_t x98 = -1LL;
	int64_t x99 = INT64_MAX;
	int16_t x100 = 7;
	static int64_t t19 = 146219LL;

	t19 = ((x97&(x98+x99))/x100);

	if (t19 != 1317624576386756022LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x101 = 8278879U;
	int32_t x102 = -1;
	uint8_t x103 = UINT8_MAX;
	int32_t x104 = -398;
	volatile uint32_t t20 = 27417368U;

	t20 = ((x101&(x102+x103))/x104);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x106 = 30803U;
	int32_t x107 = -1;
	int32_t x108 = INT32_MAX;
	int32_t t21 = -76;

	t21 = ((x105&(x106+x107))/x108);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x110 = 15LLU;
	static int32_t x111 = -1;
	uint8_t x112 = 14U;
	volatile uint64_t t22 = 26LLU;

	t22 = ((x109&(x110+x111))/x112);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = -1LL;
	static volatile int16_t x114 = INT16_MIN;
	uint32_t x116 = UINT32_MAX;
	volatile int64_t t23 = 3374LL;

	t23 = ((x113&(x114+x115))/x116);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x120 = INT32_MIN;
	static int32_t t24 = 32836347;

	t24 = ((x117&(x118+x119))/x120);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = INT64_MIN;
	int8_t x122 = INT8_MAX;
	static volatile int16_t x123 = INT16_MAX;
	uint32_t x124 = 175217758U;

	t25 = ((x121&(x122+x123))/x124);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x125 = INT32_MIN;
	int8_t x126 = INT8_MIN;

	t26 = ((x125&(x126+x127))/x128);

	if (t26 != 2147483648LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = 18;
	volatile int64_t x130 = INT64_MIN;
	int16_t x131 = 1;
	uint16_t x132 = 43U;
	static volatile int64_t t27 = 3LL;

	t27 = ((x129&(x130+x131))/x132);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x133 = 19980LLU;
	uint64_t x134 = 332055274LLU;
	static int16_t x136 = -1;

	t28 = ((x133&(x134+x135))/x136);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x137 = INT64_MIN;
	static int8_t x138 = INT8_MIN;
	volatile uint32_t x139 = 96002807U;
	static int32_t x140 = -1;
	int64_t t29 = 58490LL;

	t29 = ((x137&(x138+x139))/x140);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x141 = 120431LLU;
	static int64_t x142 = INT64_MAX;
	uint64_t x143 = 200023LLU;
	int16_t x144 = INT16_MIN;
	static uint64_t t30 = 970594LLU;

	t30 = ((x141&(x142+x143))/x144);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = INT64_MIN;
	int16_t x150 = INT16_MIN;
	uint32_t x151 = 106267153U;
	volatile int64_t t31 = -15469106578LL;

	t31 = ((x149&(x150+x151))/x152);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x157 = 26325U;
	uint64_t x158 = UINT64_MAX;
	int16_t x159 = -1;
	uint64_t t32 = 153202052252515LLU;

	t32 = ((x157&(x158+x159))/x160);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x161 = 993300776;
	uint64_t x162 = 448838864LLU;
	uint16_t x163 = 1442U;
	int32_t x164 = INT32_MAX;
	uint64_t t33 = 102710LLU;

	t33 = ((x161&(x162+x163))/x164);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x165 = 19964154U;
	int16_t x166 = 14;
	int32_t x167 = INT32_MIN;
	volatile int32_t x168 = INT32_MIN;

	t34 = ((x165&(x166+x167))/x168);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x173 = 10U;
	uint64_t x174 = 75LLU;
	int32_t x176 = INT32_MIN;
	volatile uint64_t t35 = 28430173237759514LLU;

	t35 = ((x173&(x174+x175))/x176);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x178 = INT16_MAX;
	uint16_t x179 = UINT16_MAX;
	int64_t x180 = -1LL;
	int64_t t36 = 15904LL;

	t36 = ((x177&(x178+x179))/x180);

	if (t36 != -85976LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x181 = 2U;
	static int16_t x182 = INT16_MIN;
	int16_t x183 = 0;
	int16_t x184 = -10;
	int32_t t37 = -5;

	t37 = ((x181&(x182+x183))/x184);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x185 = -44;
	static volatile int16_t x186 = INT16_MAX;
	int8_t x188 = -2;
	volatile int32_t t38 = -1881;

	t38 = ((x185&(x186+x187))/x188);

	if (t38 != -16362) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x190 = -1;
	int8_t x192 = 37;
	volatile int64_t t39 = -4285815834487LL;

	t39 = ((x189&(x190+x191))/x192);

	if (t39 != 179393LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x193 = -1LL;
	int8_t x194 = 1;
	static volatile int32_t x195 = INT32_MIN;
	static int64_t x196 = -1LL;
	volatile int64_t t40 = 4370823239719331439LL;

	t40 = ((x193&(x194+x195))/x196);

	if (t40 != 2147483647LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x197 = 1U;
	static uint16_t x198 = 6U;
	int16_t x200 = INT16_MIN;
	volatile uint64_t t41 = 290309021LLU;

	t41 = ((x197&(x198+x199))/x200);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x201 = 212970728632LLU;
	uint8_t x202 = UINT8_MAX;
	int64_t x203 = -1LL;
	volatile int16_t x204 = 1;
	volatile uint64_t t42 = 44LLU;

	t42 = ((x201&(x202+x203))/x204);

	if (t42 != 184LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x205 = -1;
	uint32_t x206 = UINT32_MAX;
	uint32_t x207 = 122234908U;
	uint32_t t43 = 298085053U;

	t43 = ((x205&(x206+x207))/x208);

	if (t43 != 5820709U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x209 = INT16_MAX;
	int32_t x211 = 978246;
	int64_t x212 = INT64_MAX;
	int64_t t44 = 4190848619420251304LL;

	t44 = ((x209&(x210+x211))/x212);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x214 = 1U;
	static int8_t x215 = -1;
	static int64_t t45 = -38427805280035599LL;

	t45 = ((x213&(x214+x215))/x216);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x217 = -1;
	static uint8_t x218 = UINT8_MAX;
	int32_t x219 = INT32_MIN;
	int8_t x220 = -1;
	volatile int32_t t46 = -12;

	t46 = ((x217&(x218+x219))/x220);

	if (t46 != 2147483393) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x221 = 9;
	int64_t x222 = INT64_MAX;
	int64_t x224 = 30330475119LL;
	int64_t t47 = 7737574LL;

	t47 = ((x221&(x222+x223))/x224);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x225 = 4522U;
	static int32_t x227 = INT32_MIN;
	int32_t x228 = INT32_MIN;
	volatile uint64_t t48 = 85074137734855LLU;

	t48 = ((x225&(x226+x227))/x228);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x229 = 0LLU;
	static int8_t x230 = INT8_MIN;
	uint64_t x231 = 815LLU;
	static uint16_t x232 = 13272U;
	volatile uint64_t t49 = 117520401616895265LLU;

	t49 = ((x229&(x230+x231))/x232);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x233 = 0U;
	static volatile int64_t t50 = 705362980865LL;

	t50 = ((x233&(x234+x235))/x236);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x237 = INT16_MIN;
	int16_t x238 = 83;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t51 = 27174566;

	t51 = ((x237&(x238+x239))/x240);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x241 = 51402LL;
	int16_t x242 = -1;
	volatile uint16_t x243 = 32358U;

	t52 = ((x241&(x242+x243))/x244);

	if (t52 != 17LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x245 = INT32_MIN;
	int16_t x246 = INT16_MAX;
	volatile uint32_t x247 = 2026U;

	t53 = ((x245&(x246+x247))/x248);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x257 = 3884324;
	int64_t x259 = -1LL;

	t54 = ((x257&(x258+x259))/x260);

	if (t54 != 82LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x261 = -1;
	uint16_t x262 = 10812U;
	uint8_t x263 = UINT8_MAX;
	volatile uint64_t x264 = 13269201435222904LLU;
	static volatile uint64_t t55 = 160183351364817269LLU;

	t55 = ((x261&(x262+x263))/x264);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x265 = INT32_MAX;
	static int8_t x267 = 51;
	int64_t x268 = -1LL;
	static volatile int64_t t56 = -221621759168630713LL;

	t56 = ((x265&(x266+x267))/x268);

	if (t56 != -50LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x269 = INT64_MAX;
	int32_t x270 = INT32_MAX;
	volatile int8_t x271 = -1;
	int64_t t57 = -29147930284487681LL;

	t57 = ((x269&(x270+x271))/x272);

	if (t57 != -16777215LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x273 = -18;
	int16_t x274 = 0;
	static int16_t x275 = INT16_MIN;
	volatile int32_t x276 = INT32_MIN;
	static int32_t t58 = -1;

	t58 = ((x273&(x274+x275))/x276);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x277 = 51U;
	static volatile int64_t x278 = -16135960596LL;
	static int16_t x279 = 140;
	static uint64_t x280 = 8116358LLU;

	t59 = ((x277&(x278+x279))/x280);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x281 = -1;
	int16_t x282 = -4;
	volatile int16_t x283 = 2;
	int16_t x284 = -11081;

	t60 = ((x281&(x282+x283))/x284);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x290 = INT16_MAX;
	int64_t x291 = INT64_MIN;
	int64_t x292 = INT64_MIN;
	volatile int64_t t61 = 1053936888LL;

	t61 = ((x289&(x290+x291))/x292);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x293 = -1;
	uint16_t x294 = 100U;
	int8_t x295 = -1;
	int16_t x296 = -1;

	t62 = ((x293&(x294+x295))/x296);

	if (t62 != -99) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x297 = INT8_MIN;
	int32_t x299 = -40578866;
	static int32_t t63 = -242;

	t63 = ((x297&(x298+x299))/x300);

	if (t63 != 5072352) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x305 = -1;
	int32_t x307 = -305;
	volatile int8_t x308 = 1;
	volatile int64_t t64 = -25607LL;

	t64 = ((x305&(x306+x307))/x308);

	if (t64 != -254805LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x309 = INT8_MIN;
	static int64_t x310 = -1LL;
	uint16_t x311 = UINT16_MAX;
	int64_t t65 = -1169837LL;

	t65 = ((x309&(x310+x311))/x312);

	if (t65 != -65408LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x313 = 3689136LLU;
	int8_t x314 = INT8_MIN;
	uint16_t x315 = 1U;
	int64_t x316 = -1LL;

	t66 = ((x313&(x314+x315))/x316);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x317 = 50959096LLU;
	int64_t x320 = -1LL;
	uint64_t t67 = 20920233LLU;

	t67 = ((x317&(x318+x319))/x320);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x326 = INT16_MIN;
	int64_t x327 = INT64_MAX;
	volatile uint64_t t68 = 563754600087LLU;

	t68 = ((x325&(x326+x327))/x328);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x329 = UINT64_MAX;
	static int16_t x330 = -5;
	int8_t x331 = INT8_MIN;
	volatile int64_t x332 = -490593705LL;
	uint64_t t69 = 985141326435626LLU;

	t69 = ((x329&(x330+x331))/x332);

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x333 = INT64_MIN;
	uint8_t x334 = 1U;
	volatile int64_t x335 = -1LL;
	volatile uint32_t x336 = 273619U;
	volatile int64_t t70 = 12736LL;

	t70 = ((x333&(x334+x335))/x336);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x337 = INT8_MIN;
	int64_t x338 = -230074234LL;
	int16_t x340 = INT16_MAX;

	t71 = ((x337&(x338+x339))/x340);

	if (t71 != -7021LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x341 = -2187113672721203LL;
	static int16_t x342 = INT16_MAX;
	uint32_t x343 = UINT32_MAX;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t72 = 8538974LLU;

	t72 = ((x341&(x342+x343))/x344);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x345 = -1;
	volatile int16_t x347 = 129;
	volatile int16_t x348 = -1;
	static volatile int32_t t73 = -3397;

	t73 = ((x345&(x346+x347))/x348);

	if (t73 != 43) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x350 = INT8_MIN;
	uint64_t x351 = 53LLU;
	int8_t x352 = INT8_MIN;
	volatile uint64_t t74 = 1663717042LLU;

	t74 = ((x349&(x350+x351))/x352);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x354 = INT64_MAX;
	volatile int64_t x355 = -1LL;
	volatile int64_t t75 = -49133420LL;

	t75 = ((x353&(x354+x355))/x356);

	if (t75 != -37883168LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x357 = 42U;
	uint64_t x359 = 117LLU;
	uint32_t x360 = UINT32_MAX;
	uint64_t t76 = 173724591LLU;

	t76 = ((x357&(x358+x359))/x360);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x361 = 0U;
	uint16_t x362 = 1U;
	int32_t x363 = -62990;
	volatile int32_t t77 = 7162;

	t77 = ((x361&(x362+x363))/x364);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x365 = UINT16_MAX;
	volatile uint16_t x366 = UINT16_MAX;
	int32_t x368 = -613214;

	t78 = ((x365&(x366+x367))/x368);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x370 = INT32_MIN;
	uint32_t x371 = 5U;

	t79 = ((x369&(x370+x371))/x372);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x381 = 496U;
	static uint8_t x382 = UINT8_MAX;
	uint32_t x383 = 4873156U;
	uint64_t x384 = 1078787014696518243LLU;
	static volatile uint64_t t80 = 10920040390LLU;

	t80 = ((x381&(x382+x383))/x384);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x385 = UINT16_MAX;
	static int16_t x386 = INT16_MIN;
	volatile uint8_t x388 = 16U;

	t81 = ((x385&(x386+x387))/x388);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x389 = 11;
	int8_t x390 = 23;
	uint32_t x391 = 1U;
	uint32_t x392 = 95U;

	t82 = ((x389&(x390+x391))/x392);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x394 = -35;
	static uint64_t x395 = 11306753LLU;
	int8_t x396 = INT8_MIN;
	uint64_t t83 = 203673472309LLU;

	t83 = ((x393&(x394+x395))/x396);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x397 = UINT64_MAX;
	int32_t x398 = INT32_MIN;
	volatile int16_t x399 = 74;
	static uint64_t t84 = 1LLU;

	t84 = ((x397&(x398+x399))/x400);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x401 = UINT32_MAX;
	int16_t x402 = -23;
	int16_t x403 = 22;
	int8_t x404 = INT8_MIN;

	t85 = ((x401&(x402+x403))/x404);

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x405 = INT16_MIN;
	int32_t x406 = 399;
	static int16_t x407 = INT16_MAX;
	uint8_t x408 = 10U;
	int32_t t86 = -3843;

	t86 = ((x405&(x406+x407))/x408);

	if (t86 != 3276) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x409 = -1;
	int32_t x412 = 3475822;
	uint32_t t87 = 1654U;

	t87 = ((x409&(x410+x411))/x412);

	if (t87 != 1235U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x414 = -2;
	static int16_t x415 = INT16_MIN;
	int32_t t88 = 818;

	t88 = ((x413&(x414+x415))/x416);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x417 = INT8_MIN;
	uint8_t x418 = 42U;
	int64_t x419 = INT64_MIN;
	uint16_t x420 = UINT16_MAX;
	static volatile int64_t t89 = 97585473531LL;

	t89 = ((x417&(x418+x419))/x420);

	if (t89 != -140739635871744LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x421 = -1;
	int16_t x423 = -1;
	int64_t x424 = INT64_MIN;

	t90 = ((x421&(x422+x423))/x424);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x425 = INT8_MAX;
	int32_t x426 = INT32_MIN;
	uint32_t x427 = 86318U;
	int16_t x428 = INT16_MAX;
	volatile uint32_t t91 = 890623U;

	t91 = ((x425&(x426+x427))/x428);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x430 = INT16_MAX;
	uint16_t x431 = 9U;

	t92 = ((x429&(x430+x431))/x432);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x433 = INT8_MIN;
	static int64_t x434 = 285626048664931LL;
	static volatile uint64_t x435 = 219741446599547122LLU;
	volatile uint32_t x436 = 3U;
	volatile uint64_t t93 = 1336LLU;

	t93 = ((x433&(x434+x435))/x436);

	if (t93 != 73342357549403989LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x437 = -1;
	static uint16_t x438 = UINT16_MAX;
	int32_t x439 = INT32_MIN;
	uint32_t t94 = 551456U;

	t94 = ((x437&(x438+x439))/x440);

	if (t94 != 148U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x441 = 9LL;
	volatile uint64_t x442 = UINT64_MAX;
	volatile uint16_t x444 = UINT16_MAX;

	t95 = ((x441&(x442+x443))/x444);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x445 = -4617;
	uint32_t x446 = 2046332U;
	int16_t x447 = -1;
	static volatile int64_t t96 = 44360076620100305LL;

	t96 = ((x445&(x446+x447))/x448);

	if (t96 != -1249LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x450 = -36;
	int32_t x451 = -1683838;
	volatile int64_t x452 = INT64_MAX;
	static volatile int64_t t97 = -44188920596072LL;

	t97 = ((x449&(x450+x451))/x452);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x454 = 82U;
	volatile uint8_t x455 = 4U;
	volatile uint32_t t98 = 392U;

	t98 = ((x453&(x454+x455))/x456);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x457 = INT8_MIN;
	int32_t x459 = INT32_MIN;
	uint16_t x460 = 1263U;
	volatile int32_t t99 = -14686;

	t99 = ((x457&(x458+x459))/x460);

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

