#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x10 = INT32_MIN;
int32_t t3 = -299864592;
int32_t x23 = INT32_MIN;
volatile int32_t x42 = -580178;
int32_t x44 = -881313815;
int8_t x46 = INT8_MAX;
int32_t x55 = 99104054;
static int16_t x60 = -2813;
int8_t x74 = -1;
volatile int32_t x75 = 648265;
uint8_t x77 = UINT8_MAX;
uint64_t x79 = UINT64_MAX;
volatile int64_t x87 = 1738959342220843247LL;
volatile uint8_t x91 = 13U;
volatile int32_t t23 = -1;
int64_t x111 = INT64_MIN;
uint32_t t26 = 3U;
int8_t x113 = INT8_MIN;
volatile uint8_t x114 = 81U;
int64_t x128 = 677662969LL;
int16_t x133 = INT16_MAX;
int64_t x136 = INT64_MAX;
static uint8_t x141 = UINT8_MAX;
uint64_t x154 = 1242LLU;
int16_t x157 = -234;
int16_t x159 = INT16_MAX;
int16_t x160 = 718;
int64_t x162 = 36793225686018LL;
uint8_t x173 = UINT8_MAX;
volatile uint32_t x175 = 1295U;
int32_t x177 = INT32_MIN;
int16_t x190 = INT16_MIN;
uint16_t x193 = 0U;
int16_t x194 = INT16_MIN;
int64_t x197 = INT64_MAX;
int64_t t44 = 44400785210092LL;
volatile int32_t t45 = -707;
volatile uint64_t x229 = UINT64_MAX;
static volatile uint64_t x231 = UINT64_MAX;
int16_t x237 = -1;
int32_t x243 = INT32_MAX;
uint16_t x252 = 0U;
uint32_t x262 = 5470090U;
uint32_t x265 = UINT32_MAX;
volatile int64_t x268 = INT64_MIN;
volatile int32_t x281 = INT32_MAX;
volatile int64_t x285 = INT64_MAX;
int64_t x288 = INT64_MIN;
volatile int64_t t63 = 516281764LL;
static volatile uint8_t x294 = 57U;
uint8_t x296 = 6U;
volatile int32_t t66 = 85;
volatile int8_t x304 = INT8_MIN;
static volatile int32_t t67 = -22817;
uint8_t x305 = 3U;
volatile int16_t x314 = 104;
int32_t x317 = -20;
volatile int16_t x338 = INT16_MIN;
int32_t x342 = INT32_MIN;
uint32_t x351 = 895990451U;
int32_t t78 = INT32_MAX;
int64_t x353 = -124014018449LL;
uint32_t x354 = UINT32_MAX;
static volatile int32_t t80 = 12;
volatile int32_t t84 = -318;
int32_t x388 = INT32_MIN;
int32_t x390 = INT32_MAX;
int16_t x392 = INT16_MAX;
volatile int32_t t86 = -61736872;
int32_t t88 = 710;
int32_t x403 = INT32_MIN;
volatile int32_t x413 = -1;
int64_t x415 = -1LL;
volatile int32_t t92 = 305961644;
uint64_t x417 = 487480538LLU;
int8_t x427 = 3;
int16_t x432 = 0;
int32_t t96 = 2402408;
int16_t x436 = INT16_MAX;
int64_t x438 = INT64_MAX;
static int8_t x439 = INT8_MAX;
uint32_t x441 = 15568U;


void f0(void) {
	uint64_t x1 = 446010LLU;
	uint32_t x2 = 213952705U;
	static int16_t x3 = -3426;
	uint32_t x4 = UINT32_MAX;
	uint32_t t0 = UINT32_MAX;

	t0 = (((x1-x2)<x3)*x4);

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = UINT32_MAX;
	int32_t x6 = INT32_MIN;
	uint16_t x7 = 83U;
	int8_t x8 = INT8_MIN;
	int32_t t1 = 645;

	t1 = (((x5-x6)<x7)*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 2307877LLU;
	static uint32_t x11 = UINT32_MAX;
	uint32_t x12 = 6551798U;
	uint32_t t2 = 27U;

	t2 = (((x9-x10)<x11)*x12);

	if (t2 != 6551798U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	volatile uint16_t x14 = UINT16_MAX;
	static uint16_t x15 = 17U;
	uint16_t x16 = 680U;

	t3 = (((x13-x14)<x15)*x16);

	if (t3 != 680) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	int64_t x18 = -45439265305937159LL;
	int64_t x19 = INT64_MIN;
	int8_t x20 = -1;
	int32_t t4 = 69387;

	t4 = (((x17-x18)<x19)*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -3;
	static int16_t x22 = INT16_MIN;
	uint32_t x24 = UINT32_MAX;
	volatile uint32_t t5 = 4738U;

	t5 = (((x21-x22)<x23)*x24);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 7U;
	static volatile int32_t x26 = 218;
	uint64_t x27 = 3LLU;
	volatile int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 403;

	t6 = (((x25-x26)<x27)*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MAX;
	volatile uint16_t x30 = UINT16_MAX;
	int64_t x31 = -957LL;
	static volatile int16_t x32 = -9;
	volatile int32_t t7 = 97742537;

	t7 = (((x29-x30)<x31)*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MAX;
	static volatile int32_t x34 = INT32_MAX;
	int64_t x35 = INT64_MIN;
	static int32_t x36 = 8589347;
	volatile int32_t t8 = 13714;

	t8 = (((x33-x34)<x35)*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = UINT32_MAX;
	uint16_t x43 = UINT16_MAX;
	volatile int32_t t9 = -1;

	t9 = (((x41-x42)<x43)*x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 374U;
	static int64_t x47 = 44296243254535736LL;
	uint32_t x48 = 1745719U;
	volatile uint32_t t10 = 10465086U;

	t10 = (((x45-x46)<x47)*x48);

	if (t10 != 1745719U) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x49 = 422837754028368254LL;
	static int64_t x50 = -2069735257LL;
	uint64_t x51 = UINT64_MAX;
	static int8_t x52 = -1;
	volatile int32_t t11 = -2;

	t11 = (((x49-x50)<x51)*x52);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = UINT8_MAX;
	uint64_t x54 = 1688359697632386LLU;
	int16_t x56 = 2099;
	static int32_t t12 = -280799603;

	t12 = (((x53-x54)<x55)*x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 22671204LLU;
	int16_t x58 = -1;
	int16_t x59 = INT16_MAX;
	int32_t t13 = -2982;

	t13 = (((x57-x58)<x59)*x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x61 = -1;
	uint64_t x62 = UINT64_MAX;
	static int16_t x63 = INT16_MIN;
	uint64_t x64 = 14871336328723LLU;
	volatile uint64_t t14 = 16167623404271LLU;

	t14 = (((x61-x62)<x63)*x64);

	if (t14 != 14871336328723LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = UINT16_MAX;
	uint8_t x66 = 64U;
	uint64_t x67 = 25770LLU;
	int8_t x68 = INT8_MIN;
	volatile int32_t t15 = 1;

	t15 = (((x65-x66)<x67)*x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = -1;
	uint32_t x70 = 13U;
	int32_t x71 = -272830141;
	uint16_t x72 = 223U;
	int32_t t16 = -23;

	t16 = (((x69-x70)<x71)*x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x73 = 335845U;
	int64_t x76 = INT64_MIN;
	int64_t t17 = INT64_MIN;

	t17 = (((x73-x74)<x75)*x76);

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x78 = 1;
	int32_t x80 = -3112;
	static int32_t t18 = 127913641;

	t18 = (((x77-x78)<x79)*x80);

	if (t18 != -3112) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 0U;
	uint32_t x82 = UINT32_MAX;
	int64_t x83 = -266746554709011094LL;
	int16_t x84 = 0;
	int32_t t19 = 9416927;

	t19 = (((x81-x82)<x83)*x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -1;
	volatile int8_t x86 = -1;
	int16_t x88 = INT16_MIN;
	volatile int32_t t20 = -3095;

	t20 = (((x85-x86)<x87)*x88);

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x89 = INT64_MIN;
	static int64_t x90 = INT64_MIN;
	int8_t x92 = INT8_MIN;
	int32_t t21 = -17591;

	t21 = (((x89-x90)<x91)*x92);

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 56775U;
	int64_t x94 = -336590924478341LL;
	int64_t x95 = 2LL;
	static uint64_t x96 = 219LLU;
	static uint64_t t22 = 10LLU;

	t22 = (((x93-x94)<x95)*x96);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x97 = UINT64_MAX;
	uint32_t x98 = 6790U;
	int64_t x99 = INT64_MIN;
	int32_t x100 = INT32_MIN;

	t23 = (((x97-x98)<x99)*x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x101 = INT32_MAX;
	static int16_t x102 = INT16_MAX;
	volatile int32_t x103 = -79351;
	uint16_t x104 = UINT16_MAX;
	int32_t t24 = 1006;

	t24 = (((x101-x102)<x103)*x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x105 = 13450132;
	static int32_t x106 = 205707;
	volatile int8_t x107 = INT8_MIN;
	volatile int64_t x108 = -18925444412LL;
	int64_t t25 = -1564551374530811LL;

	t25 = (((x105-x106)<x107)*x108);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = UINT8_MAX;
	uint64_t x110 = UINT64_MAX;
	uint32_t x112 = 1U;

	t26 = (((x109-x110)<x111)*x112);

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x115 = -32;
	volatile int32_t x116 = INT32_MAX;
	volatile int32_t t27 = INT32_MAX;

	t27 = (((x113-x114)<x115)*x116);

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x117 = -4;
	static int16_t x118 = -1;
	int8_t x119 = -5;
	int8_t x120 = -1;
	int32_t t28 = 141;

	t28 = (((x117-x118)<x119)*x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = -1LL;
	volatile int16_t x122 = -1;
	int16_t x123 = INT16_MIN;
	uint32_t x124 = 950938U;
	static volatile uint32_t t29 = 8U;

	t29 = (((x121-x122)<x123)*x124);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x125 = 2626LLU;
	int64_t x126 = INT64_MIN;
	int16_t x127 = 3780;
	int64_t t30 = 900270716048647LL;

	t30 = (((x125-x126)<x127)*x128);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = 17;
	uint64_t x130 = UINT64_MAX;
	int32_t x131 = INT32_MAX;
	static int8_t x132 = INT8_MIN;
	static int32_t t31 = -5;

	t31 = (((x129-x130)<x131)*x132);

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x134 = 8423U;
	uint64_t x135 = 546107067707LLU;
	int64_t t32 = INT64_MAX;

	t32 = (((x133-x134)<x135)*x136);

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x142 = 280;
	int8_t x143 = INT8_MAX;
	uint32_t x144 = 1811U;
	volatile uint32_t t33 = 4708U;

	t33 = (((x141-x142)<x143)*x144);

	if (t33 != 1811U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MIN;
	uint32_t x146 = 471U;
	int8_t x147 = 0;
	static int16_t x148 = 13;
	volatile int32_t t34 = 2;

	t34 = (((x145-x146)<x147)*x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x149 = INT16_MIN;
	uint16_t x150 = 215U;
	static int16_t x151 = -1;
	volatile int16_t x152 = -1;
	volatile int32_t t35 = 134874381;

	t35 = (((x149-x150)<x151)*x152);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MAX;
	static volatile uint32_t x155 = 3U;
	uint8_t x156 = 1U;
	volatile int32_t t36 = 2547;

	t36 = (((x153-x154)<x155)*x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x158 = INT16_MIN;
	int32_t t37 = -169;

	t37 = (((x157-x158)<x159)*x160);

	if (t37 != 718) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x161 = 81U;
	static uint32_t x163 = UINT32_MAX;
	uint64_t x164 = 5996758921478LLU;
	static volatile uint64_t t38 = 69815282033683061LLU;

	t38 = (((x161-x162)<x163)*x164);

	if (t38 != 5996758921478LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x169 = 35644615LLU;
	int16_t x170 = -731;
	int64_t x171 = INT64_MAX;
	int16_t x172 = 3077;
	static volatile int32_t t39 = 152181;

	t39 = (((x169-x170)<x171)*x172);

	if (t39 != 3077) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x174 = -168;
	uint32_t x176 = 7926U;
	uint32_t t40 = 165888869U;

	t40 = (((x173-x174)<x175)*x176);

	if (t40 != 7926U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x178 = UINT64_MAX;
	static volatile int64_t x179 = 40652565467743LL;
	uint32_t x180 = UINT32_MAX;
	volatile uint32_t t41 = 73869026U;

	t41 = (((x177-x178)<x179)*x180);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x189 = 14150U;
	static uint8_t x191 = 1U;
	int64_t x192 = INT64_MIN;
	volatile int64_t t42 = 0LL;

	t42 = (((x189-x190)<x191)*x192);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x195 = 0U;
	int64_t x196 = INT64_MAX;
	int64_t t43 = 163LL;

	t43 = (((x193-x194)<x195)*x196);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x198 = INT16_MAX;
	int64_t x199 = INT64_MIN;
	int64_t x200 = -41427LL;

	t44 = (((x197-x198)<x199)*x200);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x205 = 5555LLU;
	static uint64_t x206 = 926302606861224679LLU;
	volatile uint64_t x207 = 2296012890854845LLU;
	int8_t x208 = INT8_MAX;

	t45 = (((x205-x206)<x207)*x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x209 = INT16_MIN;
	uint64_t x210 = UINT64_MAX;
	static int64_t x211 = -6217LL;
	static uint16_t x212 = UINT16_MAX;
	volatile int32_t t46 = 47;

	t46 = (((x209-x210)<x211)*x212);

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x213 = 2LL;
	uint64_t x214 = 203459673210LLU;
	int16_t x215 = INT16_MIN;
	uint32_t x216 = UINT32_MAX;
	volatile uint32_t t47 = UINT32_MAX;

	t47 = (((x213-x214)<x215)*x216);

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x217 = INT64_MAX;
	uint64_t x218 = UINT64_MAX;
	static volatile int32_t x219 = INT32_MIN;
	volatile int64_t x220 = -476857428287927284LL;
	static volatile int64_t t48 = 4523579928357987894LL;

	t48 = (((x217-x218)<x219)*x220);

	if (t48 != -476857428287927284LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x221 = INT64_MIN;
	static int64_t x222 = -1LL;
	int64_t x223 = -1LL;
	volatile int8_t x224 = INT8_MIN;
	volatile int32_t t49 = -3513;

	t49 = (((x221-x222)<x223)*x224);

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x225 = INT16_MIN;
	volatile int8_t x226 = -1;
	static int32_t x227 = -203402;
	int16_t x228 = -5;
	int32_t t50 = -80;

	t50 = (((x225-x226)<x227)*x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x230 = 28310U;
	int64_t x232 = INT64_MAX;
	static int64_t t51 = INT64_MAX;

	t51 = (((x229-x230)<x231)*x232);

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x233 = 2;
	int32_t x234 = -263983293;
	int16_t x235 = INT16_MIN;
	int16_t x236 = INT16_MAX;
	static volatile int32_t t52 = 1;

	t52 = (((x233-x234)<x235)*x236);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x238 = INT16_MIN;
	int8_t x239 = -13;
	int8_t x240 = -4;
	int32_t t53 = -664;

	t53 = (((x237-x238)<x239)*x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x241 = INT8_MAX;
	int16_t x242 = 14;
	int16_t x244 = -1101;
	int32_t t54 = -1303;

	t54 = (((x241-x242)<x243)*x244);

	if (t54 != -1101) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x245 = 229LLU;
	static int8_t x246 = 1;
	volatile int8_t x247 = 59;
	static int8_t x248 = INT8_MIN;
	volatile int32_t t55 = -1595;

	t55 = (((x245-x246)<x247)*x248);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x249 = 6;
	volatile int8_t x250 = INT8_MIN;
	int8_t x251 = -10;
	volatile int32_t t56 = 310;

	t56 = (((x249-x250)<x251)*x252);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x257 = 6145U;
	static int64_t x258 = INT64_MAX;
	static int16_t x259 = 62;
	volatile int16_t x260 = -1;
	int32_t t57 = -8399479;

	t57 = (((x257-x258)<x259)*x260);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x261 = INT32_MIN;
	volatile int16_t x263 = INT16_MAX;
	static uint32_t x264 = 444U;
	uint32_t t58 = 13U;

	t58 = (((x261-x262)<x263)*x264);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x266 = -1LL;
	static volatile uint64_t x267 = UINT64_MAX;
	volatile int64_t t59 = INT64_MIN;

	t59 = (((x265-x266)<x267)*x268);

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x269 = 1137U;
	static int32_t x270 = -1;
	int64_t x271 = INT64_MIN;
	uint8_t x272 = 16U;
	static volatile int32_t t60 = -114260514;

	t60 = (((x269-x270)<x271)*x272);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x277 = -1;
	uint16_t x278 = UINT16_MAX;
	volatile int8_t x279 = 18;
	static int64_t x280 = -215970LL;
	volatile int64_t t61 = -138823LL;

	t61 = (((x277-x278)<x279)*x280);

	if (t61 != -215970LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x282 = 1010843085;
	volatile int64_t x283 = 64608115382228889LL;
	int64_t x284 = INT64_MAX;
	volatile int64_t t62 = INT64_MAX;

	t62 = (((x281-x282)<x283)*x284);

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x286 = 1;
	volatile int64_t x287 = INT64_MIN;

	t63 = (((x285-x286)<x287)*x288);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x289 = 1LLU;
	volatile int32_t x290 = INT32_MIN;
	int8_t x291 = INT8_MAX;
	volatile int64_t x292 = INT64_MAX;
	volatile int64_t t64 = -109608630716912LL;

	t64 = (((x289-x290)<x291)*x292);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x293 = 116U;
	int64_t x295 = -1LL;
	volatile int32_t t65 = -227;

	t65 = (((x293-x294)<x295)*x296);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x297 = UINT32_MAX;
	int8_t x298 = -1;
	int8_t x299 = INT8_MIN;
	int16_t x300 = INT16_MIN;

	t66 = (((x297-x298)<x299)*x300);

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x301 = INT32_MIN;
	int64_t x302 = 130780089931394046LL;
	static int32_t x303 = -1;

	t67 = (((x301-x302)<x303)*x304);

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x306 = 560LLU;
	uint64_t x307 = UINT64_MAX;
	uint8_t x308 = UINT8_MAX;
	int32_t t68 = 376806019;

	t68 = (((x305-x306)<x307)*x308);

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x313 = INT8_MIN;
	int16_t x315 = INT16_MIN;
	int64_t x316 = INT64_MIN;
	volatile int64_t t69 = 1625LL;

	t69 = (((x313-x314)<x315)*x316);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x318 = -1;
	uint16_t x319 = 445U;
	int16_t x320 = -1;
	int32_t t70 = -42;

	t70 = (((x317-x318)<x319)*x320);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x321 = -1;
	int16_t x322 = INT16_MAX;
	int8_t x323 = INT8_MIN;
	volatile uint64_t x324 = UINT64_MAX;
	uint64_t t71 = UINT64_MAX;

	t71 = (((x321-x322)<x323)*x324);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x325 = INT8_MIN;
	volatile int16_t x326 = -1;
	uint64_t x327 = 1LLU;
	static uint16_t x328 = 7U;
	volatile int32_t t72 = 367394;

	t72 = (((x325-x326)<x327)*x328);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x329 = INT16_MIN;
	static int8_t x330 = -1;
	static int16_t x331 = INT16_MIN;
	volatile int32_t x332 = INT32_MIN;
	static volatile int32_t t73 = 254332535;

	t73 = (((x329-x330)<x331)*x332);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x333 = 0U;
	uint32_t x334 = UINT32_MAX;
	uint64_t x335 = 757LLU;
	int8_t x336 = INT8_MAX;
	volatile int32_t t74 = -970545053;

	t74 = (((x333-x334)<x335)*x336);

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x337 = 4859008016LLU;
	int64_t x339 = -1LL;
	int16_t x340 = -1;
	int32_t t75 = 914558836;

	t75 = (((x337-x338)<x339)*x340);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x341 = INT8_MIN;
	int16_t x343 = INT16_MIN;
	static volatile uint64_t x344 = UINT64_MAX;
	volatile uint64_t t76 = 6LLU;

	t76 = (((x341-x342)<x343)*x344);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x345 = -1934;
	static uint8_t x346 = UINT8_MAX;
	int64_t x347 = INT64_MAX;
	volatile int64_t x348 = 1LL;
	static volatile int64_t t77 = 30LL;

	t77 = (((x345-x346)<x347)*x348);

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x349 = -1;
	int64_t x350 = -1LL;
	int32_t x352 = INT32_MAX;

	t78 = (((x349-x350)<x351)*x352);

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x355 = -1LL;
	static uint8_t x356 = 88U;
	static volatile int32_t t79 = -37568391;

	t79 = (((x353-x354)<x355)*x356);

	if (t79 != 88) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x361 = INT32_MAX;
	int16_t x362 = INT16_MAX;
	static int32_t x363 = 417;
	int8_t x364 = INT8_MAX;

	t80 = (((x361-x362)<x363)*x364);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x369 = INT16_MAX;
	int8_t x370 = -13;
	static int8_t x371 = -4;
	int64_t x372 = -91660677LL;
	volatile int64_t t81 = 459268LL;

	t81 = (((x369-x370)<x371)*x372);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x373 = INT8_MIN;
	int8_t x374 = INT8_MIN;
	volatile uint64_t x375 = 220263151183979LLU;
	int8_t x376 = INT8_MIN;
	int32_t t82 = 266804882;

	t82 = (((x373-x374)<x375)*x376);

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x377 = INT64_MIN;
	static int8_t x378 = 0;
	static int16_t x379 = -1;
	int8_t x380 = -31;
	volatile int32_t t83 = -68;

	t83 = (((x377-x378)<x379)*x380);

	if (t83 != -31) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x381 = INT16_MIN;
	int64_t x382 = INT64_MIN;
	int16_t x383 = -1;
	uint16_t x384 = 247U;

	t84 = (((x381-x382)<x383)*x384);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x385 = 38935269424499LL;
	int16_t x386 = -2615;
	static int8_t x387 = 1;
	volatile int32_t t85 = -569745;

	t85 = (((x385-x386)<x387)*x388);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x389 = UINT16_MAX;
	int16_t x391 = INT16_MIN;

	t86 = (((x389-x390)<x391)*x392);

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x393 = INT8_MIN;
	static uint8_t x394 = 2U;
	uint64_t x395 = 1038310025484LLU;
	volatile int16_t x396 = -1;
	static volatile int32_t t87 = 52;

	t87 = (((x393-x394)<x395)*x396);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x397 = INT32_MIN;
	volatile int64_t x398 = -1LL;
	uint64_t x399 = 28LLU;
	int32_t x400 = 94861404;

	t88 = (((x397-x398)<x399)*x400);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x401 = 3U;
	volatile int64_t x402 = INT64_MAX;
	int8_t x404 = -1;
	int32_t t89 = 51;

	t89 = (((x401-x402)<x403)*x404);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x405 = 907703;
	static volatile int64_t x406 = INT64_MAX;
	volatile int32_t x407 = 44344539;
	int8_t x408 = 1;
	int32_t t90 = -309391912;

	t90 = (((x405-x406)<x407)*x408);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x409 = -11711;
	uint64_t x410 = 249141640255915LLU;
	static int8_t x411 = INT8_MAX;
	volatile uint64_t x412 = UINT64_MAX;
	volatile uint64_t t91 = 122380LLU;

	t91 = (((x409-x410)<x411)*x412);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x414 = 885U;
	int16_t x416 = INT16_MAX;

	t92 = (((x413-x414)<x415)*x416);

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x418 = -2;
	uint64_t x419 = 520363LLU;
	uint32_t x420 = 1654255U;
	uint32_t t93 = 236428182U;

	t93 = (((x417-x418)<x419)*x420);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x421 = 14;
	static int8_t x422 = INT8_MIN;
	int16_t x423 = INT16_MAX;
	static volatile int32_t x424 = INT32_MIN;
	int32_t t94 = INT32_MIN;

	t94 = (((x421-x422)<x423)*x424);

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x425 = -1LL;
	int32_t x426 = INT32_MIN;
	int64_t x428 = 33758LL;
	volatile int64_t t95 = 0LL;

	t95 = (((x425-x426)<x427)*x428);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x429 = -22333737038370LL;
	static int32_t x430 = INT32_MIN;
	static int16_t x431 = -1;

	t96 = (((x429-x430)<x431)*x432);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x433 = -5615;
	volatile int16_t x434 = INT16_MIN;
	uint64_t x435 = 1LLU;
	volatile int32_t t97 = 113201;

	t97 = (((x433-x434)<x435)*x436);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x437 = 47572111U;
	int32_t x440 = INT32_MIN;
	volatile int32_t t98 = INT32_MIN;

	t98 = (((x437-x438)<x439)*x440);

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x442 = -1;
	int64_t x443 = 13574459LL;
	static int8_t x444 = -1;
	volatile int32_t t99 = 3019677;

	t99 = (((x441-x442)<x443)*x444);

	if (t99 != -1) { NG(); } else { ; }
	
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

