#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -2461;
static uint32_t x4 = 614187327U;
static uint8_t x5 = 27U;
int16_t x8 = -6755;
int64_t x9 = INT64_MIN;
int32_t x10 = 986372746;
int64_t x12 = INT64_MIN;
volatile int64_t t3 = 13292LL;
int16_t x17 = -1;
int32_t x18 = INT32_MAX;
int32_t x20 = 21217;
volatile int32_t t4 = -1;
int32_t x21 = -3298;
uint8_t x26 = 49U;
int32_t x28 = -393;
int16_t x36 = INT16_MIN;
static volatile int32_t t8 = -339565;
int16_t x37 = -9;
int64_t x40 = INT64_MAX;
volatile uint64_t t9 = 21840952287LLU;
int32_t x46 = -1;
volatile int32_t t11 = 11;
volatile uint32_t x51 = UINT32_MAX;
int32_t x52 = 1;
int8_t x67 = INT8_MIN;
int32_t x73 = -1;
uint16_t x80 = 10567U;
volatile int8_t x81 = -1;
volatile int64_t t20 = -545875699054LL;
int64_t x97 = 26690934075399LL;
int64_t t24 = -1LL;
int8_t x101 = INT8_MIN;
int64_t x105 = INT64_MIN;
static int64_t t26 = 2118183401858LL;
volatile int64_t x112 = 90581354639LL;
static uint16_t x133 = 106U;
volatile int16_t x137 = INT16_MAX;
int16_t x144 = INT16_MIN;
int32_t x150 = 42013;
uint32_t x151 = 0U;
uint16_t x152 = 28U;
static int16_t x154 = -1;
int32_t x157 = INT32_MIN;
uint8_t x163 = 3U;
volatile int16_t x164 = INT16_MIN;
int8_t x166 = INT8_MIN;
int64_t t41 = 51920370LL;
static uint32_t x174 = UINT32_MAX;
int64_t x177 = 34064270840984LL;
int32_t x178 = INT32_MAX;
static volatile int32_t t43 = 73687;
volatile int64_t x181 = -1LL;
int64_t x183 = INT64_MIN;
int16_t x184 = INT16_MAX;
static int64_t t45 = -83138937LL;
int64_t x190 = -2297528308233805649LL;
uint32_t x192 = UINT32_MAX;
uint64_t t47 = 488LLU;
int64_t x197 = INT64_MIN;
static uint64_t x201 = UINT64_MAX;
int16_t x202 = -15;
int16_t x203 = -1;
volatile int8_t x215 = -3;
volatile uint8_t x216 = 31U;
int32_t x224 = -1;
static volatile int32_t t53 = -3128791;
int16_t x226 = -1;
int32_t t54 = -2213352;
int32_t t57 = -3988;
static uint32_t x243 = 15115790U;
static int16_t x248 = 11;
uint64_t x269 = 0LLU;
int64_t x274 = -1LL;
int64_t x277 = INT64_MIN;
static volatile int64_t x281 = 1184143777LL;
int8_t x284 = INT8_MIN;
int8_t x291 = INT8_MAX;
int32_t t67 = 59456713;
int64_t x296 = -8369352LL;
static uint8_t x297 = 12U;
int32_t x310 = -1;
int32_t x321 = -94080;
int64_t x328 = INT64_MIN;
uint32_t x338 = 16746222U;
int64_t x341 = 440219348LL;
volatile uint64_t t81 = 208624LLU;
volatile int16_t x356 = -327;
int64_t t82 = 471LL;
int64_t x358 = 992968689270656LL;
uint8_t x359 = 94U;
uint8_t x360 = 49U;
int16_t x364 = INT16_MIN;
int64_t x374 = -1LL;
int32_t t87 = -16541;
uint16_t x379 = 4289U;
static int32_t x383 = INT32_MAX;
static int32_t t89 = -28331248;
uint64_t x385 = UINT64_MAX;
int64_t x386 = INT64_MIN;
static uint8_t x396 = 30U;
int32_t t92 = -5780;
int32_t x420 = INT32_MIN;
int16_t x421 = INT16_MIN;


void f0(void) {
	int32_t x1 = 5810;
	volatile uint16_t x3 = UINT16_MAX;
	static uint32_t t0 = 2752392U;

	t0 = (((x1==x2)+x3)/x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = 4;
	volatile uint32_t x7 = 840014U;
	uint32_t t1 = 232519U;

	t1 = (((x5==x6)+x7)/x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x11 = UINT64_MAX;
	volatile uint64_t t2 = 7693100LLU;

	t2 = (((x9==x10)+x11)/x12);

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -2185475140199732205LL;
	uint8_t x14 = 3U;
	static int64_t x15 = INT64_MAX;
	uint16_t x16 = 2845U;

	t3 = (((x13==x14)+x15)/x16);

	if (t3 != 3241958536680061LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x19 = UINT16_MAX;

	t4 = (((x17==x18)+x19)/x20);

	if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x22 = UINT16_MAX;
	int32_t x23 = INT32_MAX;
	int32_t x24 = 11;
	volatile int32_t t5 = 3976;

	t5 = (((x21==x22)+x23)/x24);

	if (t5 != 195225786) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -154981;
	uint32_t x27 = UINT32_MAX;
	volatile uint32_t t6 = 4112991U;

	t6 = (((x25==x26)+x27)/x28);

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	static volatile int8_t x30 = 0;
	int16_t x31 = INT16_MAX;
	volatile uint32_t x32 = UINT32_MAX;
	volatile uint32_t t7 = 62U;

	t7 = (((x29==x30)+x31)/x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 2U;
	volatile int16_t x34 = 1;
	static volatile int8_t x35 = 1;

	t8 = (((x33==x34)+x35)/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x38 = 12U;
	uint64_t x39 = 3LLU;

	t9 = (((x37==x38)+x39)/x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 3;
	volatile int16_t x42 = INT16_MAX;
	int8_t x43 = INT8_MIN;
	uint8_t x44 = 2U;
	volatile int32_t t10 = 29491;

	t10 = (((x41==x42)+x43)/x44);

	if (t10 != -64) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MAX;
	static int8_t x47 = INT8_MIN;
	uint8_t x48 = UINT8_MAX;

	t11 = (((x45==x46)+x47)/x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	static volatile uint16_t x50 = 14485U;
	static uint32_t t12 = UINT32_MAX;

	t12 = (((x49==x50)+x51)/x52);

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	static uint8_t x54 = 5U;
	int8_t x55 = -4;
	int16_t x56 = -1;
	static volatile int32_t t13 = 0;

	t13 = (((x53==x54)+x55)/x56);

	if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	uint8_t x58 = UINT8_MAX;
	static uint8_t x59 = UINT8_MAX;
	uint64_t x60 = 51716223718675LLU;
	uint64_t t14 = 210926915817LLU;

	t14 = (((x57==x58)+x59)/x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = UINT8_MAX;
	uint32_t x62 = 1464U;
	volatile int64_t x63 = 6712775847535572LL;
	volatile uint8_t x64 = UINT8_MAX;
	static volatile int64_t t15 = -15717561LL;

	t15 = (((x61==x62)+x63)/x64);

	if (t15 != 26324611166806LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	int32_t x66 = -1;
	static int16_t x68 = -3800;
	volatile int32_t t16 = 16382;

	t16 = (((x65==x66)+x67)/x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 242U;
	static int8_t x70 = 0;
	uint8_t x71 = 11U;
	volatile int8_t x72 = INT8_MIN;
	int32_t t17 = -2748;

	t17 = (((x69==x70)+x71)/x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = INT32_MIN;
	volatile uint16_t x75 = UINT16_MAX;
	uint8_t x76 = 1U;
	volatile int32_t t18 = 687913;

	t18 = (((x73==x74)+x75)/x76);

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	int32_t x78 = INT32_MIN;
	uint8_t x79 = 6U;
	int32_t t19 = 0;

	t19 = (((x77==x78)+x79)/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = INT32_MIN;
	static int8_t x83 = 6;
	volatile int64_t x84 = -12LL;

	t20 = (((x81==x82)+x83)/x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	static uint8_t x86 = 2U;
	uint16_t x87 = 29U;
	static uint8_t x88 = UINT8_MAX;
	static volatile int32_t t21 = -335;

	t21 = (((x85==x86)+x87)/x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	static int16_t x90 = -7683;
	uint8_t x91 = 52U;
	int32_t x92 = INT32_MAX;
	volatile int32_t t22 = -6108;

	t22 = (((x89==x90)+x91)/x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -5;
	int32_t x94 = -5722;
	int16_t x95 = INT16_MIN;
	volatile uint32_t x96 = UINT32_MAX;
	volatile uint32_t t23 = 18932636U;

	t23 = (((x93==x94)+x95)/x96);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x98 = -1030349LL;
	int64_t x99 = 7987LL;
	static volatile int64_t x100 = INT64_MIN;

	t24 = (((x97==x98)+x99)/x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = INT8_MIN;
	static int64_t x103 = -4LL;
	volatile uint32_t x104 = 1934632905U;
	int64_t t25 = 4880LL;

	t25 = (((x101==x102)+x103)/x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x106 = 906U;
	int64_t x107 = INT64_MIN;
	int32_t x108 = INT32_MAX;

	t26 = (((x105==x106)+x107)/x108);

	if (t26 != -4294967298LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	int64_t x110 = -13975465204661387LL;
	int64_t x111 = INT64_MAX;
	volatile int64_t t27 = 541857LL;

	t27 = (((x109==x110)+x111)/x112);

	if (t27 != 101824178LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = INT8_MIN;
	int16_t x114 = 323;
	uint32_t x115 = 14107U;
	int16_t x116 = -1;
	static uint32_t t28 = 447717580U;

	t28 = (((x113==x114)+x115)/x116);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	int8_t x118 = INT8_MIN;
	static int16_t x119 = INT16_MIN;
	volatile uint8_t x120 = UINT8_MAX;
	static volatile int32_t t29 = -269186603;

	t29 = (((x117==x118)+x119)/x120);

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = 0;
	uint16_t x122 = UINT16_MAX;
	uint32_t x123 = 13899U;
	uint64_t x124 = UINT64_MAX;
	volatile uint64_t t30 = 1302108LLU;

	t30 = (((x121==x122)+x123)/x124);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = UINT16_MAX;
	int64_t x126 = INT64_MIN;
	static uint8_t x127 = UINT8_MAX;
	int8_t x128 = -1;
	static volatile int32_t t31 = 24;

	t31 = (((x125==x126)+x127)/x128);

	if (t31 != -255) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = 181U;
	volatile uint32_t x130 = 14U;
	volatile int8_t x131 = INT8_MIN;
	int64_t x132 = INT64_MIN;
	int64_t t32 = -379356514LL;

	t32 = (((x129==x130)+x131)/x132);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = INT32_MAX;
	int16_t x135 = -1;
	int32_t x136 = -84;
	volatile int32_t t33 = -1936319;

	t33 = (((x133==x134)+x135)/x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = -1;
	volatile int16_t x139 = INT16_MIN;
	int64_t x140 = INT64_MIN;
	static volatile int64_t t34 = -1LL;

	t34 = (((x137==x138)+x139)/x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	int8_t x142 = -15;
	static int8_t x143 = INT8_MIN;
	int32_t t35 = 54786;

	t35 = (((x141==x142)+x143)/x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x149 = -1LL;
	volatile uint32_t t36 = 6U;

	t36 = (((x149==x150)+x151)/x152);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x153 = 11624U;
	int32_t x155 = -4;
	volatile int16_t x156 = INT16_MAX;
	int32_t t37 = -6032977;

	t37 = (((x153==x154)+x155)/x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x158 = UINT8_MAX;
	int64_t x159 = -1LL;
	uint16_t x160 = 21238U;
	volatile int64_t t38 = -31569LL;

	t38 = (((x157==x158)+x159)/x160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x161 = INT16_MIN;
	volatile uint8_t x162 = 3U;
	int32_t t39 = 1;

	t39 = (((x161==x162)+x163)/x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = 227U;
	static uint16_t x167 = UINT16_MAX;
	static int64_t x168 = INT64_MAX;
	int64_t t40 = -94597925091LL;

	t40 = (((x165==x166)+x167)/x168);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = -66220;
	static int16_t x170 = 245;
	static int64_t x171 = INT64_MIN;
	int32_t x172 = 577802;

	t41 = (((x169==x170)+x171)/x172);

	if (t41 != -15962859313146LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x173 = 81559946U;
	uint64_t x175 = UINT64_MAX;
	uint64_t x176 = 1655508655LLU;
	uint64_t t42 = 90271067833607LLU;

	t42 = (((x173==x174)+x175)/x176);

	if (t42 != 11142644297LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x179 = 56U;
	volatile uint16_t x180 = UINT16_MAX;

	t43 = (((x177==x178)+x179)/x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x182 = INT16_MAX;
	int64_t t44 = -1306084927375897988LL;

	t44 = (((x181==x182)+x183)/x184);

	if (t44 != -281483566907400LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = INT8_MAX;
	int8_t x186 = INT8_MAX;
	int64_t x187 = 129737332LL;
	volatile int16_t x188 = -1;

	t45 = (((x185==x186)+x187)/x188);

	if (t45 != -129737333LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x189 = INT16_MIN;
	volatile int32_t x191 = 1192;
	uint32_t t46 = 119918496U;

	t46 = (((x189==x190)+x191)/x192);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x193 = -1;
	int32_t x194 = INT32_MIN;
	uint64_t x195 = 49389175LLU;
	volatile int32_t x196 = 8334768;

	t47 = (((x193==x194)+x195)/x196);

	if (t47 != 5LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x198 = 15U;
	uint16_t x199 = 1750U;
	int32_t x200 = INT32_MIN;
	volatile int32_t t48 = 3793;

	t48 = (((x197==x198)+x199)/x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x204 = UINT8_MAX;
	volatile int32_t t49 = 2777551;

	t49 = (((x201==x202)+x203)/x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x205 = -797LL;
	uint16_t x206 = UINT16_MAX;
	static volatile int32_t x207 = 0;
	volatile int32_t x208 = INT32_MIN;
	int32_t t50 = 3859725;

	t50 = (((x205==x206)+x207)/x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = INT32_MIN;
	uint8_t x210 = UINT8_MAX;
	static int64_t x211 = -1LL;
	int32_t x212 = -1;
	static volatile int64_t t51 = -95LL;

	t51 = (((x209==x210)+x211)/x212);

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x213 = UINT16_MAX;
	uint16_t x214 = UINT16_MAX;
	int32_t t52 = 676833313;

	t52 = (((x213==x214)+x215)/x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = -641938;
	volatile uint8_t x222 = 3U;
	uint8_t x223 = 49U;

	t53 = (((x221==x222)+x223)/x224);

	if (t53 != -49) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = -1;
	int16_t x227 = 26;
	uint8_t x228 = 23U;

	t54 = (((x225==x226)+x227)/x228);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x229 = 40U;
	uint8_t x230 = 75U;
	static uint64_t x231 = UINT64_MAX;
	int64_t x232 = -4097651150739862772LL;
	uint64_t t55 = 239252538LLU;

	t55 = (((x229==x230)+x231)/x232);

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x233 = UINT16_MAX;
	volatile int32_t x234 = INT32_MAX;
	int32_t x235 = INT32_MIN;
	uint8_t x236 = UINT8_MAX;
	volatile int32_t t56 = -36;

	t56 = (((x233==x234)+x235)/x236);

	if (t56 != -8421504) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = INT32_MAX;
	static int64_t x238 = INT64_MAX;
	int16_t x239 = INT16_MIN;
	int16_t x240 = 96;

	t57 = (((x237==x238)+x239)/x240);

	if (t57 != -341) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x241 = 93241200U;
	int8_t x242 = 4;
	uint64_t x244 = 9488595159317LLU;
	static volatile uint64_t t58 = 215LLU;

	t58 = (((x241==x242)+x243)/x244);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = INT16_MAX;
	uint8_t x246 = UINT8_MAX;
	uint16_t x247 = UINT16_MAX;
	volatile int32_t t59 = -2;

	t59 = (((x245==x246)+x247)/x248);

	if (t59 != 5957) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x253 = 199699LL;
	volatile int8_t x254 = 2;
	int64_t x255 = -1LL;
	int16_t x256 = -1744;
	volatile int64_t t60 = 115906246042847LL;

	t60 = (((x253==x254)+x255)/x256);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x257 = 5991LL;
	uint64_t x258 = UINT64_MAX;
	int64_t x259 = 743212051306428782LL;
	uint8_t x260 = 1U;
	volatile int64_t t61 = 97072035538LL;

	t61 = (((x257==x258)+x259)/x260);

	if (t61 != 743212051306428782LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = INT64_MIN;
	uint32_t x266 = 5196U;
	volatile int32_t x267 = -1;
	int8_t x268 = 7;
	int32_t t62 = -18;

	t62 = (((x265==x266)+x267)/x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x270 = 61733;
	int16_t x271 = -15;
	int16_t x272 = INT16_MIN;
	volatile int32_t t63 = 21886;

	t63 = (((x269==x270)+x271)/x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x273 = 5866916360672723LLU;
	int16_t x275 = INT16_MIN;
	int32_t x276 = 19634;
	int32_t t64 = 19464934;

	t64 = (((x273==x274)+x275)/x276);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x278 = UINT32_MAX;
	static uint16_t x279 = 4U;
	int32_t x280 = INT32_MAX;
	int32_t t65 = 237287153;

	t65 = (((x277==x278)+x279)/x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x282 = 5621604U;
	uint64_t x283 = 2017873486940706384LLU;
	uint64_t t66 = 523572386052512138LLU;

	t66 = (((x281==x282)+x283)/x284);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x289 = 938U;
	int64_t x290 = -3653LL;
	int8_t x292 = 1;

	t67 = (((x289==x290)+x291)/x292);

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x293 = 391548LLU;
	volatile int32_t x294 = INT32_MAX;
	int64_t x295 = -1LL;
	int64_t t68 = -1540306068775608257LL;

	t68 = (((x293==x294)+x295)/x296);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x298 = -2708041;
	uint32_t x299 = 10720173U;
	int16_t x300 = -14;
	static uint32_t t69 = 24U;

	t69 = (((x297==x298)+x299)/x300);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = 1;
	int32_t x302 = -1;
	int32_t x303 = -1;
	static volatile int32_t x304 = INT32_MIN;
	volatile int32_t t70 = 1;

	t70 = (((x301==x302)+x303)/x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = INT32_MAX;
	uint8_t x306 = UINT8_MAX;
	int32_t x307 = -1;
	int16_t x308 = INT16_MIN;
	int32_t t71 = -6;

	t71 = (((x305==x306)+x307)/x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x309 = 59176885U;
	int64_t x311 = -1LL;
	int32_t x312 = -380005;
	int64_t t72 = 21919130431LL;

	t72 = (((x309==x310)+x311)/x312);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x313 = 766U;
	int8_t x314 = -1;
	int16_t x315 = 0;
	uint32_t x316 = 798888222U;
	uint32_t t73 = 71887U;

	t73 = (((x313==x314)+x315)/x316);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x317 = -1;
	int16_t x318 = -1;
	volatile int64_t x319 = 55LL;
	int16_t x320 = 31;
	volatile int64_t t74 = -1350592783014139LL;

	t74 = (((x317==x318)+x319)/x320);

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x322 = INT8_MIN;
	int8_t x323 = INT8_MIN;
	int16_t x324 = INT16_MIN;
	volatile int32_t t75 = 0;

	t75 = (((x321==x322)+x323)/x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x325 = INT8_MIN;
	static uint32_t x326 = 56103188U;
	int16_t x327 = 719;
	volatile int64_t t76 = 7094743LL;

	t76 = (((x325==x326)+x327)/x328);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x333 = UINT64_MAX;
	int8_t x334 = INT8_MIN;
	int16_t x335 = -1;
	static int16_t x336 = INT16_MIN;
	int32_t t77 = -37494006;

	t77 = (((x333==x334)+x335)/x336);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x337 = -1;
	int32_t x339 = INT32_MIN;
	int32_t x340 = INT32_MIN;
	static volatile int32_t t78 = -3392700;

	t78 = (((x337==x338)+x339)/x340);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x342 = INT64_MIN;
	int8_t x343 = INT8_MIN;
	int64_t x344 = INT64_MIN;
	int64_t t79 = 8333LL;

	t79 = (((x341==x342)+x343)/x344);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x345 = INT32_MIN;
	static uint32_t x346 = UINT32_MAX;
	static int16_t x347 = -53;
	int16_t x348 = INT16_MAX;
	static volatile int32_t t80 = 103307015;

	t80 = (((x345==x346)+x347)/x348);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x349 = INT64_MIN;
	static uint32_t x350 = 7518U;
	uint64_t x351 = 7117LLU;
	int64_t x352 = INT64_MAX;

	t81 = (((x349==x350)+x351)/x352);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x353 = INT16_MIN;
	static volatile int32_t x354 = -150382100;
	int64_t x355 = -1LL;

	t82 = (((x353==x354)+x355)/x356);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x357 = 1;
	volatile int32_t t83 = -8140;

	t83 = (((x357==x358)+x359)/x360);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x361 = INT8_MIN;
	int8_t x362 = -6;
	static int64_t x363 = INT64_MAX;
	volatile int64_t t84 = 69LL;

	t84 = (((x361==x362)+x363)/x364);

	if (t84 != -281474976710655LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x365 = INT16_MAX;
	int64_t x366 = INT64_MIN;
	static int64_t x367 = -1LL;
	int16_t x368 = INT16_MAX;
	volatile int64_t t85 = 1532479662211953LL;

	t85 = (((x365==x366)+x367)/x368);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x369 = 5324U;
	int16_t x370 = -799;
	volatile int8_t x371 = INT8_MAX;
	int64_t x372 = 4494457831355152632LL;
	int64_t t86 = -83LL;

	t86 = (((x369==x370)+x371)/x372);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x373 = 30U;
	static int32_t x375 = INT32_MIN;
	int16_t x376 = INT16_MIN;

	t87 = (((x373==x374)+x375)/x376);

	if (t87 != 65536) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x377 = INT8_MIN;
	int32_t x378 = -1;
	int16_t x380 = -2588;
	int32_t t88 = 1;

	t88 = (((x377==x378)+x379)/x380);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x381 = -1LL;
	volatile uint32_t x382 = 147U;
	int16_t x384 = -11;

	t89 = (((x381==x382)+x383)/x384);

	if (t89 != -195225786) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x387 = -1LL;
	static int64_t x388 = INT64_MIN;
	volatile int64_t t90 = 288287LL;

	t90 = (((x385==x386)+x387)/x388);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x389 = INT32_MIN;
	static int16_t x390 = INT16_MAX;
	volatile int32_t x391 = -1;
	int32_t x392 = INT32_MAX;
	int32_t t91 = -214084;

	t91 = (((x389==x390)+x391)/x392);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x393 = INT32_MIN;
	static uint16_t x394 = UINT16_MAX;
	uint8_t x395 = 0U;

	t92 = (((x393==x394)+x395)/x396);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x397 = 62844531160330734LLU;
	static int32_t x398 = INT32_MIN;
	static int16_t x399 = -1;
	uint16_t x400 = 55U;
	volatile int32_t t93 = 6112127;

	t93 = (((x397==x398)+x399)/x400);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x401 = INT32_MAX;
	uint8_t x402 = 10U;
	int16_t x403 = INT16_MAX;
	static int8_t x404 = -1;
	int32_t t94 = -4052828;

	t94 = (((x401==x402)+x403)/x404);

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x405 = 3909332166988572LL;
	static uint64_t x406 = 229497552359943LLU;
	int64_t x407 = INT64_MIN;
	static int32_t x408 = INT32_MAX;
	volatile int64_t t95 = -511547569LL;

	t95 = (((x405==x406)+x407)/x408);

	if (t95 != -4294967298LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x409 = UINT8_MAX;
	static int8_t x410 = INT8_MAX;
	static volatile int16_t x411 = INT16_MIN;
	uint32_t x412 = UINT32_MAX;
	uint32_t t96 = 1371U;

	t96 = (((x409==x410)+x411)/x412);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x413 = INT16_MIN;
	int32_t x414 = INT32_MIN;
	static uint64_t x415 = UINT64_MAX;
	volatile int8_t x416 = -1;
	volatile uint64_t t97 = 63311636227036751LLU;

	t97 = (((x413==x414)+x415)/x416);

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x417 = UINT32_MAX;
	static uint64_t x418 = 3LLU;
	int16_t x419 = -1;
	int32_t t98 = 6634;

	t98 = (((x417==x418)+x419)/x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x422 = INT64_MIN;
	volatile int64_t x423 = 161174LL;
	uint16_t x424 = 762U;
	int64_t t99 = -12358LL;

	t99 = (((x421==x422)+x423)/x424);

	if (t99 != 211LL) { NG(); } else { ; }
	
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

