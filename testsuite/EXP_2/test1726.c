#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
volatile int32_t t1 = 0;
static volatile int64_t x13 = INT64_MIN;
static volatile int16_t x27 = INT16_MIN;
int16_t x30 = INT16_MIN;
int16_t x32 = -6;
volatile int32_t t8 = -1;
uint64_t x44 = 939395LLU;
static int32_t x48 = -1;
int8_t x49 = INT8_MIN;
static volatile int8_t x59 = INT8_MIN;
int32_t x60 = INT32_MIN;
int32_t t15 = -1056793090;
uint16_t x73 = 82U;
uint32_t x74 = 31U;
int64_t x77 = -1LL;
volatile int32_t t18 = 1464;
int8_t x84 = INT8_MAX;
static volatile int16_t x85 = INT16_MIN;
uint16_t x86 = 13174U;
uint64_t x87 = 137955486434438086LLU;
uint64_t x88 = 4180001091763535LLU;
volatile uint16_t x91 = 7870U;
volatile int32_t t23 = -108322611;
uint64_t x107 = UINT64_MAX;
static int64_t x112 = 261218555185671123LL;
volatile int32_t t26 = -1;
int32_t x113 = INT32_MAX;
uint16_t x120 = 519U;
int32_t t28 = 0;
uint64_t x121 = 30927385218379LLU;
uint64_t x124 = 227942515461LLU;
static volatile uint64_t x128 = 1492978435997186LLU;
int8_t x135 = INT8_MIN;
static int8_t x142 = 0;
static int32_t t33 = 3836;
static int32_t t34 = 714143;
int8_t x153 = -1;
volatile int32_t t35 = -3;
uint32_t x158 = 830U;
uint64_t x160 = 62949643935751LLU;
int8_t x165 = INT8_MAX;
int64_t x167 = INT64_MIN;
volatile uint8_t x174 = 1U;
int64_t x184 = -45004794946209831LL;
int32_t x190 = 273977;
int32_t t43 = -4437279;
int64_t x197 = INT64_MIN;
uint64_t x203 = UINT64_MAX;
static int16_t x208 = INT16_MIN;
uint8_t x209 = 4U;
int64_t x210 = 197LL;
volatile int64_t x213 = -918LL;
volatile uint64_t x220 = UINT64_MAX;
int32_t x221 = -1;
int64_t x230 = INT64_MIN;
int64_t x231 = 2458534393LL;
volatile int32_t t53 = 47183;
static volatile uint8_t x238 = 26U;
volatile uint8_t x241 = 26U;
volatile int8_t x244 = INT8_MIN;
int32_t t55 = -62309;
uint8_t x250 = UINT8_MAX;
static int16_t x252 = 13;
uint32_t x261 = UINT32_MAX;
int32_t t59 = 0;
volatile int16_t x284 = -1;
static volatile uint64_t x302 = UINT64_MAX;
uint16_t x303 = 20080U;
volatile int32_t t67 = -1576877;
int64_t x312 = 0LL;
static int32_t x318 = -1;
volatile int32_t t70 = -3;
int8_t x325 = -1;
volatile uint64_t x326 = 780146325541605LLU;
static volatile int16_t x328 = INT16_MIN;
int32_t t72 = -7408856;
volatile uint16_t x346 = 28168U;
int64_t x348 = INT64_MAX;
static volatile uint64_t x352 = UINT64_MAX;
volatile int32_t t75 = 387;
int8_t x372 = -5;
static volatile int64_t x386 = INT64_MIN;
int16_t x393 = INT16_MIN;
static uint32_t x399 = 215U;
volatile int32_t t83 = -3048;
volatile uint32_t x404 = UINT32_MAX;
uint32_t x413 = 34U;
int8_t x417 = INT8_MIN;
int16_t x418 = INT16_MAX;
int8_t x419 = INT8_MIN;
int64_t x420 = INT64_MAX;
int64_t x426 = INT64_MIN;
int16_t x427 = 44;
int8_t x431 = 3;
uint16_t x432 = 53U;
int8_t x433 = -45;
static volatile int32_t t92 = -561635;
int8_t x442 = -12;
uint32_t x459 = 94U;
static int64_t x461 = -40LL;
int32_t t95 = -15390358;
int32_t x468 = INT32_MAX;
int32_t t97 = -6;
static int8_t x477 = INT8_MIN;
static int32_t x478 = INT32_MIN;


void f0(void) {
	static uint16_t x1 = 40U;
	static volatile uint64_t x3 = 123768926298LLU;
	int32_t x4 = INT32_MIN;
	static int32_t t0 = 677;

	t0 = ((x1*(x2&x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 9;
	uint16_t x6 = 44U;
	int64_t x7 = INT64_MIN;
	int32_t x8 = INT32_MIN;

	t1 = ((x5*(x6&x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x14 = INT64_MIN;
	uint16_t x15 = UINT16_MAX;
	static uint64_t x16 = UINT64_MAX;
	static volatile int32_t t2 = 2;

	t2 = ((x13*(x14&x15))<=x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 17;
	int16_t x18 = -1;
	volatile uint32_t x19 = 29124329U;
	int8_t x20 = INT8_MIN;
	volatile int32_t t3 = 11379223;

	t3 = ((x17*(x18&x19))<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	int32_t x22 = INT32_MAX;
	uint8_t x23 = UINT8_MAX;
	uint8_t x24 = 0U;
	volatile int32_t t4 = -256984115;

	t4 = ((x21*(x22&x23))<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = UINT32_MAX;
	int32_t x26 = INT32_MIN;
	static uint8_t x28 = 1U;
	int32_t t5 = -261661830;

	t5 = ((x25*(x26&x27))<=x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x29 = UINT16_MAX;
	volatile int8_t x31 = 1;
	int32_t t6 = 3;

	t6 = ((x29*(x30&x31))<=x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -1;
	volatile int8_t x34 = INT8_MIN;
	uint64_t x35 = 13857415761312LLU;
	volatile int16_t x36 = INT16_MIN;
	int32_t t7 = -236110223;

	t7 = ((x33*(x34&x35))<=x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -5021LL;
	int16_t x38 = INT16_MIN;
	static uint16_t x39 = 66U;
	int16_t x40 = INT16_MIN;

	t8 = ((x37*(x38&x39))<=x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x41 = -6LL;
	volatile int32_t x42 = -97426;
	static int32_t x43 = INT32_MIN;
	int32_t t9 = 3;

	t9 = ((x41*(x42&x43))<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MIN;
	static int32_t x46 = 160089829;
	int32_t x47 = INT32_MIN;
	int32_t t10 = 507;

	t10 = ((x45*(x46&x47))<=x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x50 = INT16_MAX;
	int8_t x51 = INT8_MIN;
	int8_t x52 = -1;
	int32_t t11 = 121932259;

	t11 = ((x49*(x50&x51))<=x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x53 = -1LL;
	uint8_t x54 = 12U;
	int64_t x55 = INT64_MAX;
	volatile int16_t x56 = 168;
	int32_t t12 = -45021249;

	t12 = ((x53*(x54&x55))<=x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = INT8_MAX;
	uint32_t x58 = 6U;
	volatile int32_t t13 = -1;

	t13 = ((x57*(x58&x59))<=x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = 57;
	uint8_t x62 = 46U;
	volatile int64_t x63 = INT64_MAX;
	int8_t x64 = 2;
	volatile int32_t t14 = -11;

	t14 = ((x61*(x62&x63))<=x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = UINT16_MAX;
	int64_t x66 = -1LL;
	int32_t x67 = -1;
	int64_t x68 = INT64_MIN;

	t15 = ((x65*(x66&x67))<=x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = 17304924445LLU;
	volatile int16_t x70 = -2;
	static uint64_t x71 = UINT64_MAX;
	uint16_t x72 = UINT16_MAX;
	static int32_t t16 = -49;

	t16 = ((x69*(x70&x71))<=x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x75 = INT16_MIN;
	uint16_t x76 = 3U;
	volatile int32_t t17 = -3;

	t17 = ((x73*(x74&x75))<=x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x78 = 727;
	volatile int16_t x79 = INT16_MIN;
	int16_t x80 = -1;

	t18 = ((x77*(x78&x79))<=x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = 316754075706LLU;
	static uint16_t x82 = 4U;
	volatile int32_t x83 = INT32_MAX;
	int32_t t19 = 1345206;

	t19 = ((x81*(x82&x83))<=x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t t20 = 7576;

	t20 = ((x85*(x86&x87))<=x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = 109U;
	volatile int32_t x90 = -1;
	int32_t x92 = -219533569;
	volatile int32_t t21 = 740219489;

	t21 = ((x89*(x90&x91))<=x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 12872464U;
	int8_t x94 = 1;
	int8_t x95 = -26;
	uint32_t x96 = 12132U;
	static int32_t t22 = 49147;

	t22 = ((x93*(x94&x95))<=x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x97 = 25U;
	int8_t x98 = INT8_MAX;
	static int8_t x99 = INT8_MIN;
	static int16_t x100 = -3611;

	t23 = ((x97*(x98&x99))<=x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MIN;
	static volatile uint64_t x102 = 367424098553653994LLU;
	int8_t x103 = -1;
	int16_t x104 = 3864;
	volatile int32_t t24 = 199689752;

	t24 = ((x101*(x102&x103))<=x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = 188725350229837LL;
	static int64_t x106 = INT64_MIN;
	int64_t x108 = INT64_MIN;
	int32_t t25 = 56;

	t25 = ((x105*(x106&x107))<=x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = -1;
	static int16_t x110 = -20;
	uint32_t x111 = 519531517U;

	t26 = ((x109*(x110&x111))<=x112);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x114 = INT32_MIN;
	int32_t x115 = 0;
	volatile int8_t x116 = INT8_MIN;
	static int32_t t27 = -3167673;

	t27 = ((x113*(x114&x115))<=x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x117 = -3;
	static uint16_t x118 = 17U;
	uint16_t x119 = 13268U;

	t28 = ((x117*(x118&x119))<=x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x122 = INT32_MAX;
	uint8_t x123 = 23U;
	int32_t t29 = 459090;

	t29 = ((x121*(x122&x123))<=x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = 4406837417535708995LL;
	static int8_t x126 = INT8_MAX;
	int8_t x127 = INT8_MIN;
	int32_t t30 = 0;

	t30 = ((x125*(x126&x127))<=x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = -1;
	static uint8_t x134 = 22U;
	int8_t x136 = INT8_MIN;
	int32_t t31 = -38;

	t31 = ((x133*(x134&x135))<=x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x137 = 2325U;
	int64_t x138 = -1LL;
	int32_t x139 = -1;
	volatile uint16_t x140 = 120U;
	volatile int32_t t32 = -29;

	t32 = ((x137*(x138&x139))<=x140);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MIN;
	static uint16_t x143 = 13072U;
	uint32_t x144 = 120902U;

	t33 = ((x141*(x142&x143))<=x144);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x149 = -1LL;
	uint32_t x150 = 23U;
	uint8_t x151 = 9U;
	int8_t x152 = INT8_MIN;

	t34 = ((x149*(x150&x151))<=x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x154 = 5U;
	static int32_t x155 = -1;
	uint32_t x156 = 5U;

	t35 = ((x153*(x154&x155))<=x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x157 = INT8_MAX;
	uint8_t x159 = 29U;
	static int32_t t36 = -227;

	t36 = ((x157*(x158&x159))<=x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x166 = INT8_MAX;
	static uint64_t x168 = UINT64_MAX;
	static volatile int32_t t37 = -99867;

	t37 = ((x165*(x166&x167))<=x168);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x169 = INT16_MIN;
	uint8_t x170 = UINT8_MAX;
	int8_t x171 = 1;
	static uint8_t x172 = 3U;
	volatile int32_t t38 = 2024;

	t38 = ((x169*(x170&x171))<=x172);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = INT32_MIN;
	uint64_t x175 = UINT64_MAX;
	int32_t x176 = INT32_MIN;
	int32_t t39 = -56;

	t39 = ((x173*(x174&x175))<=x176);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x181 = 404756919562LLU;
	int32_t x182 = INT32_MAX;
	volatile uint32_t x183 = 1U;
	static volatile int32_t t40 = -100637393;

	t40 = ((x181*(x182&x183))<=x184);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x185 = INT16_MIN;
	int32_t x186 = INT32_MAX;
	int16_t x187 = INT16_MAX;
	volatile int32_t x188 = -440183209;
	static volatile int32_t t41 = 41439761;

	t41 = ((x185*(x186&x187))<=x188);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x189 = 3U;
	int8_t x191 = -30;
	uint8_t x192 = 2U;
	int32_t t42 = -141809;

	t42 = ((x189*(x190&x191))<=x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x193 = 48U;
	uint32_t x194 = 56257U;
	volatile uint32_t x195 = UINT32_MAX;
	volatile int32_t x196 = INT32_MIN;

	t43 = ((x193*(x194&x195))<=x196);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x198 = INT16_MAX;
	int16_t x199 = 1;
	uint64_t x200 = UINT64_MAX;
	static volatile int32_t t44 = 45941;

	t44 = ((x197*(x198&x199))<=x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = -1LL;
	int16_t x202 = INT16_MIN;
	uint8_t x204 = 15U;
	volatile int32_t t45 = 146726;

	t45 = ((x201*(x202&x203))<=x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x205 = -1;
	int32_t x206 = INT32_MIN;
	int64_t x207 = 7296LL;
	static volatile int32_t t46 = -16;

	t46 = ((x205*(x206&x207))<=x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x211 = 67U;
	static int16_t x212 = -37;
	static volatile int32_t t47 = -2356;

	t47 = ((x209*(x210&x211))<=x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x214 = -26970777054LL;
	volatile int64_t x215 = 19591633819LL;
	int16_t x216 = 1;
	int32_t t48 = -2503621;

	t48 = ((x213*(x214&x215))<=x216);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = -1;
	static volatile uint64_t x218 = UINT64_MAX;
	static uint32_t x219 = 40273053U;
	int32_t t49 = -1785;

	t49 = ((x217*(x218&x219))<=x220);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x222 = -302631209;
	volatile uint64_t x223 = 15LLU;
	int64_t x224 = INT64_MIN;
	static int32_t t50 = -54;

	t50 = ((x221*(x222&x223))<=x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = 15222;
	uint8_t x226 = UINT8_MAX;
	volatile uint16_t x227 = 1U;
	int8_t x228 = -1;
	int32_t t51 = 986876784;

	t51 = ((x225*(x226&x227))<=x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x229 = 1930938008122197615LLU;
	int32_t x232 = INT32_MAX;
	int32_t t52 = -1405;

	t52 = ((x229*(x230&x231))<=x232);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x233 = UINT16_MAX;
	uint8_t x234 = 0U;
	static int64_t x235 = INT64_MAX;
	uint64_t x236 = 61222LLU;

	t53 = ((x233*(x234&x235))<=x236);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = -1LL;
	uint32_t x239 = 48U;
	uint16_t x240 = 289U;
	volatile int32_t t54 = 83;

	t54 = ((x237*(x238&x239))<=x240);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x242 = UINT64_MAX;
	int64_t x243 = -181004151059279LL;

	t55 = ((x241*(x242&x243))<=x244);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x249 = -80;
	int8_t x251 = INT8_MIN;
	int32_t t56 = -883417845;

	t56 = ((x249*(x250&x251))<=x252);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x253 = -210;
	int64_t x254 = INT64_MAX;
	uint64_t x255 = UINT64_MAX;
	int32_t x256 = INT32_MIN;
	volatile int32_t t57 = 385273;

	t57 = ((x253*(x254&x255))<=x256);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x257 = INT64_MAX;
	uint64_t x258 = 14460LLU;
	volatile int16_t x259 = INT16_MAX;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t58 = 105406;

	t58 = ((x257*(x258&x259))<=x260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x262 = UINT64_MAX;
	uint16_t x263 = 0U;
	int16_t x264 = 120;

	t59 = ((x261*(x262&x263))<=x264);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x273 = INT32_MAX;
	static int64_t x274 = INT64_MIN;
	static uint16_t x275 = 1005U;
	static uint8_t x276 = 30U;
	static int32_t t60 = 6958457;

	t60 = ((x273*(x274&x275))<=x276);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x277 = INT32_MAX;
	int8_t x278 = 1;
	int32_t x279 = -1;
	uint32_t x280 = 463U;
	static int32_t t61 = -146980901;

	t61 = ((x277*(x278&x279))<=x280);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = INT16_MIN;
	int8_t x282 = INT8_MIN;
	int16_t x283 = -1;
	volatile int32_t t62 = 31896518;

	t62 = ((x281*(x282&x283))<=x284);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x285 = INT8_MIN;
	static int16_t x286 = -8;
	uint16_t x287 = UINT16_MAX;
	int32_t x288 = INT32_MAX;
	int32_t t63 = -378;

	t63 = ((x285*(x286&x287))<=x288);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x293 = 7146891LL;
	static int64_t x294 = INT64_MIN;
	static uint32_t x295 = UINT32_MAX;
	int64_t x296 = INT64_MAX;
	int32_t t64 = 2559188;

	t64 = ((x293*(x294&x295))<=x296);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x297 = 21U;
	static uint64_t x298 = 7993456LLU;
	static int32_t x299 = INT32_MIN;
	int8_t x300 = -1;
	static int32_t t65 = -8;

	t65 = ((x297*(x298&x299))<=x300);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x301 = -1LL;
	uint8_t x304 = 1U;
	volatile int32_t t66 = 13;

	t66 = ((x301*(x302&x303))<=x304);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x305 = -1LL;
	int32_t x306 = -1;
	static uint32_t x307 = 229656596U;
	uint16_t x308 = 1919U;

	t67 = ((x305*(x306&x307))<=x308);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x309 = INT8_MIN;
	volatile int32_t x310 = -1;
	int8_t x311 = 1;
	static int32_t t68 = -55124;

	t68 = ((x309*(x310&x311))<=x312);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x313 = 15U;
	volatile uint64_t x314 = 44424203120414LLU;
	int16_t x315 = INT16_MAX;
	volatile int16_t x316 = INT16_MIN;
	int32_t t69 = 30572682;

	t69 = ((x313*(x314&x315))<=x316);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x317 = UINT64_MAX;
	int32_t x319 = 5;
	static int64_t x320 = INT64_MIN;

	t70 = ((x317*(x318&x319))<=x320);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x321 = UINT32_MAX;
	volatile int16_t x322 = INT16_MIN;
	volatile int32_t x323 = 26826;
	int32_t x324 = INT32_MIN;
	volatile int32_t t71 = 1;

	t71 = ((x321*(x322&x323))<=x324);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x327 = -730LL;

	t72 = ((x325*(x326&x327))<=x328);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x341 = INT16_MIN;
	volatile uint32_t x342 = 163604692U;
	int64_t x343 = 692LL;
	static uint64_t x344 = 130596954491238302LLU;
	int32_t t73 = -21155;

	t73 = ((x341*(x342&x343))<=x344);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x345 = UINT8_MAX;
	static int8_t x347 = 7;
	volatile int32_t t74 = -1;

	t74 = ((x345*(x346&x347))<=x348);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x349 = 36;
	volatile int8_t x350 = INT8_MIN;
	uint64_t x351 = UINT64_MAX;

	t75 = ((x349*(x350&x351))<=x352);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x353 = 53304985690LLU;
	volatile int8_t x354 = INT8_MAX;
	int32_t x355 = 18839;
	int64_t x356 = -1LL;
	int32_t t76 = 73630849;

	t76 = ((x353*(x354&x355))<=x356);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x369 = UINT16_MAX;
	uint32_t x370 = 2012714751U;
	volatile int16_t x371 = 173;
	int32_t t77 = -5;

	t77 = ((x369*(x370&x371))<=x372);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x373 = INT16_MAX;
	volatile uint16_t x374 = UINT16_MAX;
	static int64_t x375 = INT64_MIN;
	uint64_t x376 = UINT64_MAX;
	static int32_t t78 = -1073426814;

	t78 = ((x373*(x374&x375))<=x376);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x381 = 57408;
	int8_t x382 = -1;
	static uint64_t x383 = 6203277489975933LLU;
	static int64_t x384 = -23018LL;
	int32_t t79 = -282;

	t79 = ((x381*(x382&x383))<=x384);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x385 = UINT8_MAX;
	int16_t x387 = INT16_MAX;
	volatile int64_t x388 = 1931439576811039LL;
	int32_t t80 = -1506404;

	t80 = ((x385*(x386&x387))<=x388);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x389 = UINT16_MAX;
	volatile int16_t x390 = 4;
	volatile int64_t x391 = 107994929LL;
	static uint8_t x392 = 11U;
	static int32_t t81 = 36;

	t81 = ((x389*(x390&x391))<=x392);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x394 = INT32_MIN;
	int64_t x395 = -1LL;
	volatile int8_t x396 = -14;
	volatile int32_t t82 = 4000376;

	t82 = ((x393*(x394&x395))<=x396);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x397 = UINT32_MAX;
	int64_t x398 = -1LL;
	int64_t x400 = INT64_MIN;

	t83 = ((x397*(x398&x399))<=x400);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x401 = 2;
	int8_t x402 = -1;
	volatile uint16_t x403 = 0U;
	volatile int32_t t84 = -84017;

	t84 = ((x401*(x402&x403))<=x404);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x405 = 5265U;
	volatile int8_t x406 = INT8_MAX;
	int8_t x407 = -11;
	static int64_t x408 = INT64_MAX;
	volatile int32_t t85 = -213;

	t85 = ((x405*(x406&x407))<=x408);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x409 = INT32_MAX;
	volatile int8_t x410 = 1;
	int16_t x411 = -40;
	volatile int64_t x412 = INT64_MIN;
	int32_t t86 = -201020240;

	t86 = ((x409*(x410&x411))<=x412);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x414 = 4078LLU;
	int64_t x415 = INT64_MAX;
	int64_t x416 = INT64_MIN;
	volatile int32_t t87 = 1;

	t87 = ((x413*(x414&x415))<=x416);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t t88 = 1228416;

	t88 = ((x417*(x418&x419))<=x420);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x425 = -1;
	int32_t x428 = -1;
	volatile int32_t t89 = 475813464;

	t89 = ((x425*(x426&x427))<=x428);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x429 = UINT8_MAX;
	uint32_t x430 = 1353308U;
	int32_t t90 = 210;

	t90 = ((x429*(x430&x431))<=x432);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x434 = INT8_MIN;
	uint32_t x435 = UINT32_MAX;
	int64_t x436 = INT64_MIN;
	int32_t t91 = -93650;

	t91 = ((x433*(x434&x435))<=x436);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x437 = INT32_MIN;
	int64_t x438 = -1LL;
	volatile int8_t x439 = 1;
	int32_t x440 = -1;

	t92 = ((x437*(x438&x439))<=x440);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x441 = INT16_MIN;
	int64_t x443 = -21761LL;
	static int64_t x444 = INT64_MIN;
	int32_t t93 = -171475;

	t93 = ((x441*(x442&x443))<=x444);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x457 = INT64_MIN;
	int16_t x458 = INT16_MIN;
	int8_t x460 = -1;
	volatile int32_t t94 = 13;

	t94 = ((x457*(x458&x459))<=x460);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x462 = 301U;
	int8_t x463 = INT8_MIN;
	volatile int8_t x464 = -1;

	t95 = ((x461*(x462&x463))<=x464);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x465 = UINT8_MAX;
	static uint16_t x466 = 4103U;
	volatile uint32_t x467 = 348U;
	int32_t t96 = -1;

	t96 = ((x465*(x466&x467))<=x468);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x473 = 38;
	int16_t x474 = 1944;
	int32_t x475 = INT32_MIN;
	uint16_t x476 = UINT16_MAX;

	t97 = ((x473*(x474&x475))<=x476);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x479 = 49292450U;
	static volatile uint16_t x480 = 23815U;
	int32_t t98 = 16229119;

	t98 = ((x477*(x478&x479))<=x480);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x481 = -1;
	static volatile int64_t x482 = 1199LL;
	uint16_t x483 = 679U;
	static uint8_t x484 = UINT8_MAX;
	volatile int32_t t99 = 475704;

	t99 = ((x481*(x482&x483))<=x484);

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

