#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x8 = INT8_MIN;
int32_t x16 = INT32_MIN;
int64_t x17 = -1LL;
int64_t x21 = -1LL;
int64_t x23 = INT64_MIN;
static volatile uint8_t x29 = 14U;
static int64_t x32 = 3897393069LL;
int8_t x34 = INT8_MIN;
static volatile int8_t x36 = 3;
int32_t x37 = 3940;
int16_t x38 = -1;
static volatile int32_t t7 = -63;
volatile int32_t x41 = INT32_MIN;
int8_t x50 = -35;
static int32_t t9 = 40331;
volatile uint64_t x53 = 83371LLU;
int16_t x54 = -2;
static volatile int8_t x55 = -1;
volatile uint64_t x58 = 60637146045748291LLU;
static int16_t x71 = INT16_MAX;
volatile uint16_t x72 = 1U;
int32_t t15 = 682;
int64_t x80 = -7471712LL;
int8_t x81 = INT8_MIN;
static int64_t x82 = INT64_MIN;
int64_t x93 = INT64_MIN;
int64_t x94 = -1LL;
int32_t t21 = 1813;
int16_t x105 = -1;
int64_t x107 = -314LL;
int32_t x108 = -1;
static int32_t t23 = 990968;
volatile int64_t x110 = -1244643115023765LL;
int16_t x114 = -83;
int8_t x123 = 1;
int16_t x125 = INT16_MIN;
uint16_t x127 = UINT16_MAX;
uint16_t x142 = UINT16_MAX;
volatile uint8_t x143 = UINT8_MAX;
int32_t x145 = INT32_MIN;
static uint32_t x146 = 2979616U;
int8_t x148 = 0;
int8_t x154 = -19;
int64_t x162 = 59LL;
static int32_t x166 = INT32_MIN;
static int64_t x168 = INT64_MIN;
int16_t x171 = 25;
static int64_t x175 = INT64_MIN;
volatile int8_t x177 = 0;
int8_t x183 = 28;
volatile uint16_t x188 = 4U;
int32_t t42 = 236072;
static volatile int32_t x193 = -347;
int32_t x197 = 1485;
volatile int32_t x202 = 85833;
uint8_t x203 = UINT8_MAX;
uint32_t x204 = 10155092U;
int8_t x205 = INT8_MIN;
int8_t x210 = INT8_MAX;
int8_t x211 = 1;
int32_t x218 = 3180718;
int32_t t49 = -42224151;
static uint16_t x238 = 577U;
volatile int8_t x246 = INT8_MIN;
static uint64_t x247 = 7736LLU;
static int64_t x250 = INT64_MIN;
int16_t x251 = -162;
uint64_t x260 = 1843708LLU;
volatile int32_t t59 = 340404;
static int8_t x275 = INT8_MIN;
int16_t x281 = INT16_MIN;
static int16_t x283 = 1379;
static volatile int8_t x285 = INT8_MAX;
volatile int64_t x303 = INT64_MAX;
volatile int32_t t69 = -3;
volatile int64_t x320 = -1LL;
static int16_t x327 = INT16_MIN;
int32_t t73 = 326;
uint64_t x342 = UINT64_MAX;
int8_t x343 = INT8_MIN;
uint32_t x345 = 6177873U;
int16_t x346 = INT16_MIN;
int16_t x360 = -1;
volatile int32_t t81 = -659989;
uint32_t x364 = UINT32_MAX;
int32_t x366 = INT32_MAX;
static int16_t x377 = -1;
int64_t x379 = -76959462218LL;
static volatile int32_t t86 = 54;
uint8_t x393 = UINT8_MAX;
uint32_t x401 = UINT32_MAX;
int32_t x403 = -4;
static int64_t x404 = -9913368094217LL;
int32_t t92 = -44;
static int16_t x417 = -1;
static int32_t t93 = -1025704567;
static volatile int64_t x421 = -1LL;
volatile int32_t t95 = -1;
volatile int32_t t96 = 48819;
static volatile uint8_t x441 = 19U;


void f0(void) {
	int8_t x1 = -1;
	int16_t x2 = INT16_MAX;
	uint32_t x3 = 20U;
	static int16_t x4 = 0;
	volatile int32_t t0 = 567551826;

	t0 = ((x1*(x2/x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	volatile int64_t x6 = -1LL;
	uint64_t x7 = UINT64_MAX;
	int32_t t1 = -125;

	t1 = ((x5*(x6/x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -579789;
	int16_t x14 = INT16_MIN;
	static int16_t x15 = INT16_MAX;
	volatile int32_t t2 = 66;

	t2 = ((x13*(x14/x15))<x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x18 = 4U;
	int32_t x19 = INT32_MIN;
	int64_t x20 = 5271816LL;
	int32_t t3 = 516265183;

	t3 = ((x17*(x18/x19))<x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = -1;
	int16_t x24 = INT16_MAX;
	volatile int32_t t4 = 40;

	t4 = ((x21*(x22/x23))<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x30 = INT32_MIN;
	volatile int16_t x31 = -1873;
	static volatile int32_t t5 = -15405;

	t5 = ((x29*(x30/x31))<x32);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 0LLU;
	int8_t x35 = INT8_MIN;
	volatile int32_t t6 = 1;

	t6 = ((x33*(x34/x35))<x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x39 = INT8_MIN;
	volatile uint64_t x40 = 8370LLU;

	t7 = ((x37*(x38/x39))<x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x42 = 1;
	uint64_t x43 = UINT64_MAX;
	volatile uint32_t x44 = 410999697U;
	volatile int32_t t8 = -2000;

	t8 = ((x41*(x42/x43))<x44);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x49 = 1270761U;
	int8_t x51 = INT8_MAX;
	int8_t x52 = -1;

	t9 = ((x49*(x50/x51))<x52);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x56 = -1;
	int32_t t10 = -63995314;

	t10 = ((x53*(x54/x55))<x56);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x57 = INT64_MIN;
	int8_t x59 = 1;
	int16_t x60 = -1;
	volatile int32_t t11 = 138584;

	t11 = ((x57*(x58/x59))<x60);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = INT8_MAX;
	static int16_t x62 = INT16_MIN;
	uint8_t x63 = 10U;
	uint16_t x64 = UINT16_MAX;
	int32_t t12 = 15626278;

	t12 = ((x61*(x62/x63))<x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x65 = 24;
	static int64_t x66 = -45597645LL;
	uint32_t x67 = 206202608U;
	int16_t x68 = 275;
	int32_t t13 = -2;

	t13 = ((x65*(x66/x67))<x68);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 63408397348002722LLU;
	uint8_t x70 = 15U;
	volatile int32_t t14 = -14657;

	t14 = ((x69*(x70/x71))<x72);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MIN;
	uint8_t x74 = 1U;
	uint32_t x75 = 19820316U;
	uint64_t x76 = 48LLU;

	t15 = ((x73*(x74/x75))<x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x77 = 878974144887LLU;
	volatile int8_t x78 = 28;
	int64_t x79 = -775894080LL;
	int32_t t16 = -13;

	t16 = ((x77*(x78/x79))<x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x83 = INT16_MIN;
	int32_t x84 = INT32_MIN;
	int32_t t17 = 48432399;

	t17 = ((x81*(x82/x83))<x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x85 = 2U;
	int64_t x86 = -31103378052793700LL;
	int16_t x87 = INT16_MAX;
	volatile int64_t x88 = 3130852543068LL;
	static int32_t t18 = -1438;

	t18 = ((x85*(x86/x87))<x88);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = -509;
	static volatile int64_t x90 = -109037000756589LL;
	uint8_t x91 = UINT8_MAX;
	static volatile int64_t x92 = -1LL;
	int32_t t19 = -3140227;

	t19 = ((x89*(x90/x91))<x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x95 = INT16_MIN;
	int32_t x96 = INT32_MIN;
	int32_t t20 = -37;

	t20 = ((x93*(x94/x95))<x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = INT64_MIN;
	static uint64_t x98 = 946282LLU;
	volatile uint16_t x99 = 31362U;
	int8_t x100 = -1;

	t21 = ((x97*(x98/x99))<x100);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x101 = 2237250531042386LLU;
	static int32_t x102 = -8349;
	int32_t x103 = INT32_MIN;
	int32_t x104 = -228709906;
	int32_t t22 = 2;

	t22 = ((x101*(x102/x103))<x104);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x106 = 4U;

	t23 = ((x105*(x106/x107))<x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x109 = UINT64_MAX;
	int8_t x111 = INT8_MIN;
	int32_t x112 = INT32_MAX;
	int32_t t24 = 1439;

	t24 = ((x109*(x110/x111))<x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = -6626;
	int8_t x115 = -1;
	uint32_t x116 = UINT32_MAX;
	int32_t t25 = -15291460;

	t25 = ((x113*(x114/x115))<x116);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x117 = 97901996;
	uint32_t x118 = 17U;
	uint64_t x119 = 521442979035525LLU;
	uint16_t x120 = UINT16_MAX;
	static volatile int32_t t26 = 24663;

	t26 = ((x117*(x118/x119))<x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x121 = INT32_MAX;
	static int8_t x122 = -1;
	int32_t x124 = INT32_MIN;
	static int32_t t27 = -694587;

	t27 = ((x121*(x122/x123))<x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x126 = INT64_MIN;
	static int16_t x128 = INT16_MAX;
	static volatile int32_t t28 = -675;

	t28 = ((x125*(x126/x127))<x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x129 = UINT64_MAX;
	static volatile int8_t x130 = -3;
	uint32_t x131 = UINT32_MAX;
	static int32_t x132 = INT32_MIN;
	volatile int32_t t29 = -292;

	t29 = ((x129*(x130/x131))<x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x133 = 12;
	int64_t x134 = -1LL;
	static int32_t x135 = -1121;
	uint8_t x136 = 0U;
	static int32_t t30 = 110;

	t30 = ((x133*(x134/x135))<x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x141 = -19;
	volatile uint8_t x144 = UINT8_MAX;
	static int32_t t31 = -14;

	t31 = ((x141*(x142/x143))<x144);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x147 = UINT16_MAX;
	volatile int32_t t32 = 8;

	t32 = ((x145*(x146/x147))<x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x149 = 15017U;
	static int8_t x150 = -1;
	int32_t x151 = INT32_MAX;
	int8_t x152 = 1;
	volatile int32_t t33 = 81;

	t33 = ((x149*(x150/x151))<x152);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x153 = -1;
	int16_t x155 = INT16_MIN;
	int16_t x156 = INT16_MIN;
	int32_t t34 = 510;

	t34 = ((x153*(x154/x155))<x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = -1168;
	static uint16_t x163 = 359U;
	int64_t x164 = INT64_MIN;
	static int32_t t35 = 475;

	t35 = ((x161*(x162/x163))<x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x165 = -1;
	int64_t x167 = INT64_MIN;
	volatile int32_t t36 = 360080737;

	t36 = ((x165*(x166/x167))<x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x169 = 503;
	uint64_t x170 = UINT64_MAX;
	uint8_t x172 = 30U;
	int32_t t37 = -22;

	t37 = ((x169*(x170/x171))<x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x173 = 6U;
	static uint16_t x174 = UINT16_MAX;
	volatile int16_t x176 = -2778;
	int32_t t38 = 16287353;

	t38 = ((x173*(x174/x175))<x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x178 = -1;
	volatile int64_t x179 = -1LL;
	uint16_t x180 = 831U;
	int32_t t39 = 18;

	t39 = ((x177*(x178/x179))<x180);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x181 = INT64_MAX;
	int8_t x182 = -39;
	static int8_t x184 = INT8_MIN;
	volatile int32_t t40 = -447125041;

	t40 = ((x181*(x182/x183))<x184);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = 1LL;
	uint64_t x186 = UINT64_MAX;
	static volatile uint8_t x187 = UINT8_MAX;
	int32_t t41 = 2;

	t41 = ((x185*(x186/x187))<x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x189 = UINT64_MAX;
	int8_t x190 = -1;
	int32_t x191 = INT32_MIN;
	int8_t x192 = INT8_MAX;

	t42 = ((x189*(x190/x191))<x192);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x194 = UINT8_MAX;
	volatile int8_t x195 = -1;
	int64_t x196 = INT64_MIN;
	volatile int32_t t43 = -377595832;

	t43 = ((x193*(x194/x195))<x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x198 = -1171;
	uint16_t x199 = 30U;
	int16_t x200 = INT16_MIN;
	volatile int32_t t44 = 390981;

	t44 = ((x197*(x198/x199))<x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x201 = UINT16_MAX;
	static volatile int32_t t45 = -5279;

	t45 = ((x201*(x202/x203))<x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x206 = INT64_MIN;
	int64_t x207 = 25694644873332LL;
	int8_t x208 = INT8_MAX;
	static volatile int32_t t46 = -282;

	t46 = ((x205*(x206/x207))<x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x209 = INT16_MAX;
	int8_t x212 = INT8_MIN;
	volatile int32_t t47 = 1700;

	t47 = ((x209*(x210/x211))<x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x213 = 42U;
	volatile int8_t x214 = INT8_MIN;
	int32_t x215 = -1;
	volatile int8_t x216 = INT8_MIN;
	volatile int32_t t48 = 11589;

	t48 = ((x213*(x214/x215))<x216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x217 = 1LLU;
	uint64_t x219 = 51047556603LLU;
	int16_t x220 = 1;

	t49 = ((x217*(x218/x219))<x220);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x221 = 108U;
	int8_t x222 = INT8_MAX;
	static int32_t x223 = INT32_MIN;
	static volatile int16_t x224 = 3253;
	int32_t t50 = 27094674;

	t50 = ((x221*(x222/x223))<x224);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = 28;
	int32_t x226 = -1;
	static int8_t x227 = INT8_MIN;
	int32_t x228 = INT32_MAX;
	volatile int32_t t51 = 370;

	t51 = ((x225*(x226/x227))<x228);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x229 = -1;
	uint8_t x230 = 40U;
	volatile int64_t x231 = 54LL;
	int32_t x232 = INT32_MIN;
	static int32_t t52 = 0;

	t52 = ((x229*(x230/x231))<x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x237 = INT16_MIN;
	int8_t x239 = -8;
	int16_t x240 = INT16_MAX;
	volatile int32_t t53 = 50;

	t53 = ((x237*(x238/x239))<x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x241 = -829297047LL;
	int8_t x242 = INT8_MIN;
	int64_t x243 = INT64_MAX;
	int64_t x244 = INT64_MIN;
	volatile int32_t t54 = -41;

	t54 = ((x241*(x242/x243))<x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint16_t x245 = 862U;
	uint64_t x248 = UINT64_MAX;
	volatile int32_t t55 = 128854326;

	t55 = ((x245*(x246/x247))<x248);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x249 = 3994282LLU;
	volatile uint8_t x252 = 1U;
	volatile int32_t t56 = 724;

	t56 = ((x249*(x250/x251))<x252);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x253 = -1LL;
	volatile int32_t x254 = -1;
	int64_t x255 = INT64_MAX;
	volatile int8_t x256 = -1;
	volatile int32_t t57 = 65123223;

	t57 = ((x253*(x254/x255))<x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x257 = UINT16_MAX;
	int8_t x258 = -1;
	int16_t x259 = INT16_MAX;
	int32_t t58 = -45133690;

	t58 = ((x257*(x258/x259))<x260);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x261 = INT16_MIN;
	volatile int8_t x262 = -29;
	uint16_t x263 = 31U;
	int64_t x264 = INT64_MIN;

	t59 = ((x261*(x262/x263))<x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x265 = -7;
	volatile int64_t x266 = INT64_MIN;
	volatile int64_t x267 = INT64_MIN;
	volatile uint64_t x268 = 1861481584440308LLU;
	volatile int32_t t60 = -1643;

	t60 = ((x265*(x266/x267))<x268);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x273 = UINT32_MAX;
	static int8_t x274 = INT8_MIN;
	int64_t x276 = -1LL;
	volatile int32_t t61 = -2008735;

	t61 = ((x273*(x274/x275))<x276);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x277 = 18380U;
	uint64_t x278 = UINT64_MAX;
	uint8_t x279 = UINT8_MAX;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t62 = 90;

	t62 = ((x277*(x278/x279))<x280);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x282 = 1;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t63 = 4003126;

	t63 = ((x281*(x282/x283))<x284);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x286 = 0;
	int64_t x287 = INT64_MIN;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t64 = 23199;

	t64 = ((x285*(x286/x287))<x288);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x293 = INT32_MAX;
	uint64_t x294 = 7LLU;
	uint32_t x295 = UINT32_MAX;
	int32_t x296 = INT32_MIN;
	volatile int32_t t65 = -3624486;

	t65 = ((x293*(x294/x295))<x296);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x297 = INT8_MIN;
	int64_t x298 = -1LL;
	uint64_t x299 = 1339230320278LLU;
	uint8_t x300 = 0U;
	volatile int32_t t66 = -3197550;

	t66 = ((x297*(x298/x299))<x300);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x301 = UINT64_MAX;
	uint8_t x302 = 1U;
	static int64_t x304 = 376334611076506LL;
	int32_t t67 = -15081;

	t67 = ((x301*(x302/x303))<x304);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x305 = -1;
	static int8_t x306 = -3;
	int16_t x307 = 3272;
	static uint64_t x308 = UINT64_MAX;
	volatile int32_t t68 = 1600;

	t68 = ((x305*(x306/x307))<x308);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x309 = 328U;
	int16_t x310 = INT16_MIN;
	int32_t x311 = INT32_MIN;
	volatile uint16_t x312 = 506U;

	t69 = ((x309*(x310/x311))<x312);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x313 = 5U;
	volatile uint64_t x314 = 31149324284515904LLU;
	volatile uint8_t x315 = 1U;
	static int16_t x316 = INT16_MAX;
	volatile int32_t t70 = -16;

	t70 = ((x313*(x314/x315))<x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x317 = INT16_MIN;
	uint8_t x318 = 3U;
	int64_t x319 = -7787LL;
	int32_t t71 = -303611;

	t71 = ((x317*(x318/x319))<x320);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x321 = 0;
	static volatile int32_t x322 = -35607;
	volatile int32_t x323 = INT32_MIN;
	int16_t x324 = INT16_MAX;
	volatile int32_t t72 = 18206872;

	t72 = ((x321*(x322/x323))<x324);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x325 = 10083U;
	static uint64_t x326 = UINT64_MAX;
	int16_t x328 = INT16_MIN;

	t73 = ((x325*(x326/x327))<x328);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = 0;
	int32_t x330 = -605;
	volatile uint8_t x331 = 1U;
	volatile int64_t x332 = INT64_MIN;
	int32_t t74 = -79504;

	t74 = ((x329*(x330/x331))<x332);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x333 = 39565LLU;
	uint64_t x334 = 42195061339231LLU;
	uint8_t x335 = 25U;
	uint32_t x336 = 1218595U;
	int32_t t75 = -794695;

	t75 = ((x333*(x334/x335))<x336);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x337 = -171;
	static uint8_t x338 = 5U;
	uint64_t x339 = 1811056143580726LLU;
	int32_t x340 = INT32_MIN;
	static int32_t t76 = 13762878;

	t76 = ((x337*(x338/x339))<x340);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x341 = -22715;
	int64_t x344 = -227492172848423997LL;
	int32_t t77 = -43292;

	t77 = ((x341*(x342/x343))<x344);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x347 = INT16_MIN;
	int32_t x348 = INT32_MIN;
	int32_t t78 = 47343276;

	t78 = ((x345*(x346/x347))<x348);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x349 = 59;
	uint8_t x350 = 93U;
	static int32_t x351 = INT32_MIN;
	uint32_t x352 = UINT32_MAX;
	static int32_t t79 = -1067877374;

	t79 = ((x349*(x350/x351))<x352);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x353 = 1;
	static int8_t x354 = INT8_MAX;
	uint32_t x355 = 692U;
	static uint64_t x356 = 2701091LLU;
	volatile int32_t t80 = -4098;

	t80 = ((x353*(x354/x355))<x356);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x357 = -62515070;
	int16_t x358 = INT16_MIN;
	uint16_t x359 = UINT16_MAX;

	t81 = ((x357*(x358/x359))<x360);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x361 = INT32_MAX;
	uint64_t x362 = 106370LLU;
	volatile uint32_t x363 = UINT32_MAX;
	volatile int32_t t82 = 141;

	t82 = ((x361*(x362/x363))<x364);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x365 = 44169U;
	int16_t x367 = INT16_MIN;
	volatile int64_t x368 = -96798513434959035LL;
	volatile int32_t t83 = -57592;

	t83 = ((x365*(x366/x367))<x368);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x369 = INT16_MAX;
	int64_t x370 = -2429LL;
	uint16_t x371 = UINT16_MAX;
	static uint64_t x372 = UINT64_MAX;
	int32_t t84 = 380;

	t84 = ((x369*(x370/x371))<x372);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = 14493;
	int8_t x374 = INT8_MIN;
	uint8_t x375 = 5U;
	int64_t x376 = INT64_MIN;
	int32_t t85 = 747748;

	t85 = ((x373*(x374/x375))<x376);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x378 = INT32_MAX;
	int16_t x380 = -4764;

	t86 = ((x377*(x378/x379))<x380);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x381 = INT64_MIN;
	static int16_t x382 = INT16_MIN;
	uint64_t x383 = 1287662LLU;
	static volatile int32_t x384 = -14;
	volatile int32_t t87 = 38;

	t87 = ((x381*(x382/x383))<x384);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x389 = 8U;
	int64_t x390 = INT64_MAX;
	int8_t x391 = INT8_MIN;
	volatile int32_t x392 = INT32_MIN;
	static volatile int32_t t88 = 32409017;

	t88 = ((x389*(x390/x391))<x392);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x394 = INT16_MAX;
	static volatile int32_t x395 = INT32_MAX;
	uint16_t x396 = UINT16_MAX;
	int32_t t89 = -654;

	t89 = ((x393*(x394/x395))<x396);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x397 = UINT32_MAX;
	static uint64_t x398 = UINT64_MAX;
	static uint64_t x399 = 192369554LLU;
	int32_t x400 = INT32_MAX;
	int32_t t90 = -11750654;

	t90 = ((x397*(x398/x399))<x400);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x402 = UINT16_MAX;
	int32_t t91 = 229218962;

	t91 = ((x401*(x402/x403))<x404);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x409 = -905478;
	static uint8_t x410 = UINT8_MAX;
	int8_t x411 = INT8_MAX;
	volatile int16_t x412 = INT16_MIN;

	t92 = ((x409*(x410/x411))<x412);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x418 = INT64_MIN;
	uint32_t x419 = 268050422U;
	int32_t x420 = -1;

	t93 = ((x417*(x418/x419))<x420);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x422 = UINT32_MAX;
	int32_t x423 = 7806;
	uint16_t x424 = UINT16_MAX;
	volatile int32_t t94 = 362636;

	t94 = ((x421*(x422/x423))<x424);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x425 = 3;
	int32_t x426 = 19;
	int16_t x427 = INT16_MIN;
	int16_t x428 = -18;

	t95 = ((x425*(x426/x427))<x428);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x429 = INT32_MIN;
	static volatile uint16_t x430 = 28U;
	int32_t x431 = INT32_MIN;
	volatile uint32_t x432 = UINT32_MAX;

	t96 = ((x429*(x430/x431))<x432);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x433 = INT8_MAX;
	static volatile int64_t x434 = INT64_MIN;
	int64_t x435 = INT64_MAX;
	static uint16_t x436 = 66U;
	int32_t t97 = 547;

	t97 = ((x433*(x434/x435))<x436);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x437 = 1LL;
	static int8_t x438 = -1;
	uint64_t x439 = 4055LLU;
	uint64_t x440 = 2513LLU;
	static int32_t t98 = 48;

	t98 = ((x437*(x438/x439))<x440);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x442 = 32958950LL;
	volatile int8_t x443 = 48;
	int32_t x444 = INT32_MIN;
	volatile int32_t t99 = -1544500;

	t99 = ((x441*(x442/x443))<x444);

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

