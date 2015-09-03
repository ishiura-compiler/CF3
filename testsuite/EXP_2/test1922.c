#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x6 = 695;
uint64_t t1 = 6022952764078638LLU;
int8_t x12 = -15;
uint32_t x20 = 163476U;
volatile int64_t x22 = 37597945854LL;
static uint64_t x35 = 2660406706LLU;
static uint64_t t8 = 122LLU;
int64_t x37 = INT64_MAX;
uint32_t x38 = 15334477U;
uint16_t x39 = 1U;
int16_t x44 = 40;
volatile uint64_t t11 = 81LLU;
int8_t x49 = 7;
uint64_t t12 = 3015274181280137987LLU;
uint64_t x59 = 2963273892LLU;
volatile uint32_t x61 = 192889U;
static int8_t x64 = 1;
volatile uint64_t t17 = 27284663687457LLU;
int64_t x79 = INT64_MAX;
uint64_t t19 = 320525755264867240LLU;
uint32_t x82 = UINT32_MAX;
int8_t x87 = -1;
static uint32_t x88 = UINT32_MAX;
int64_t t25 = 3530LL;
int16_t x105 = INT16_MAX;
uint16_t x106 = 779U;
int32_t t26 = 23;
uint16_t x123 = UINT16_MAX;
uint64_t x136 = UINT64_MAX;
volatile uint64_t t33 = 2941948230333510688LLU;
uint64_t x141 = 2201679204469LLU;
uint64_t x143 = UINT64_MAX;
static int64_t x145 = -156462993110132LL;
int8_t x157 = INT8_MIN;
static int32_t x168 = -1;
int32_t t41 = 9776778;
int64_t x170 = INT64_MAX;
int64_t x172 = -1LL;
static volatile int64_t x173 = INT64_MAX;
uint8_t x174 = 0U;
static uint16_t x175 = UINT16_MAX;
static int32_t x182 = INT32_MIN;
static int16_t x183 = INT16_MIN;
volatile int32_t x184 = INT32_MIN;
static uint64_t t46 = 1937481039LLU;
int32_t x189 = INT32_MAX;
uint8_t x191 = UINT8_MAX;
uint16_t x196 = 3U;
int8_t x197 = INT8_MAX;
static volatile uint16_t x199 = 3U;
volatile int64_t x200 = -16364885350LL;
int64_t t49 = -122LL;
int8_t x209 = -1;
int64_t x214 = -68950056160924LL;
static int64_t t53 = -24940827599LL;
static volatile int8_t x223 = INT8_MAX;
int64_t t55 = -487016330055814LL;
int32_t x231 = -559830;
static volatile uint64_t x237 = 23935629373563LLU;
int32_t x239 = -1;
uint32_t x252 = UINT32_MAX;
int8_t x257 = 40;
uint8_t x260 = UINT8_MAX;
int32_t x270 = INT32_MAX;
uint16_t x277 = UINT16_MAX;
uint8_t x288 = 1U;
volatile int8_t x292 = -2;
int8_t x297 = 1;
static uint64_t x299 = 1284426314862699503LLU;
static volatile uint64_t t74 = 69855148808LLU;
int16_t x314 = INT16_MIN;
static int64_t x315 = -9LL;
int32_t x318 = INT32_MIN;
volatile int64_t t82 = -5716801443LL;
uint16_t x333 = UINT16_MAX;
uint64_t x334 = 3129782825056134LLU;
uint32_t x341 = 17U;
volatile int8_t x343 = -28;
uint8_t x344 = UINT8_MAX;
int64_t t88 = 3569565299002LL;
int16_t x357 = 1828;
static volatile uint64_t t89 = 7569607237534661LLU;
uint8_t x361 = 119U;
int64_t x366 = INT64_MIN;
uint8_t x371 = 1U;
volatile int8_t x376 = 1;
uint8_t x378 = 1U;
uint16_t x383 = 3750U;
int8_t x391 = -1;
int32_t t97 = 3;
int32_t x393 = 16;
int32_t x399 = INT32_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile int16_t x2 = -1;
	int8_t x3 = -4;
	int64_t x4 = -52LL;
	int64_t t0 = -1590055860805512223LL;

	t0 = ((x1%(x2|x3))&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 1U;
	static int32_t x7 = INT32_MIN;
	uint64_t x8 = UINT64_MAX;

	t1 = ((x5%(x6|x7))&x8);

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = -2;
	int8_t x10 = 0;
	static int8_t x11 = INT8_MAX;
	int32_t t2 = -162396617;

	t2 = ((x9%(x10|x11))&x12);

	if (t2 != -16) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	static volatile int8_t x14 = -4;
	int32_t x15 = INT32_MIN;
	static int32_t x16 = INT32_MIN;
	volatile int32_t t3 = 1001274979;

	t3 = ((x13%(x14|x15))&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -1;
	static volatile uint16_t x18 = UINT16_MAX;
	volatile int8_t x19 = -1;
	volatile uint32_t t4 = 1076370501U;

	t4 = ((x17%(x18|x19))&x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 6691LLU;
	volatile int64_t x23 = INT64_MIN;
	int64_t x24 = -1LL;
	uint64_t t5 = 3315310089339LLU;

	t5 = ((x21%(x22|x23))&x24);

	if (t5 != 6691LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 1U;
	uint32_t x26 = 18148367U;
	int64_t x27 = 10LL;
	static int8_t x28 = INT8_MAX;
	int64_t t6 = -1668901772128831717LL;

	t6 = ((x25%(x26|x27))&x28);

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MIN;
	uint64_t x30 = 0LLU;
	int32_t x31 = INT32_MIN;
	static volatile uint8_t x32 = 61U;
	uint64_t t7 = 954023253892428LLU;

	t7 = ((x29%(x30|x31))&x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int16_t x34 = 11301;
	volatile uint8_t x36 = UINT8_MAX;

	t8 = ((x33%(x34|x35))&x36);

	if (t8 != 164LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x40 = -1;
	volatile int64_t t9 = -6LL;

	t9 = ((x37%(x38|x39))&x40);

	if (t9 != 3445672LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 21U;
	int8_t x42 = INT8_MIN;
	static int16_t x43 = 67;
	int32_t t10 = -8;

	t10 = ((x41%(x42|x43))&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	volatile uint64_t x46 = 14750LLU;
	int64_t x47 = -1LL;
	volatile int8_t x48 = -1;

	t11 = ((x45%(x46|x47))&x48);

	if (t11 != 2147483647LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = 30893855843LLU;
	volatile uint32_t x51 = 21376U;
	int16_t x52 = INT16_MIN;

	t12 = ((x49%(x50|x51))&x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	static uint16_t x54 = 31704U;
	int8_t x55 = 0;
	static int64_t x56 = -1LL;
	int64_t t13 = -21LL;

	t13 = ((x53%(x54|x55))&x56);

	if (t13 != 1063LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x57 = INT16_MIN;
	volatile int16_t x58 = INT16_MAX;
	static int16_t x60 = INT16_MAX;
	volatile uint64_t t14 = 7285LLU;

	t14 = ((x57%(x58|x59))&x60);

	if (t14 != 18113LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = 2;
	static volatile int32_t x63 = INT32_MIN;
	volatile uint32_t t15 = 572611447U;

	t15 = ((x61%(x62|x63))&x64);

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = 0LLU;
	volatile uint16_t x66 = UINT16_MAX;
	static uint8_t x67 = UINT8_MAX;
	int16_t x68 = 121;
	uint64_t t16 = 265906790378684579LLU;

	t16 = ((x65%(x66|x67))&x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 1571LLU;
	uint8_t x70 = 1U;
	int64_t x71 = INT64_MIN;
	int8_t x72 = INT8_MIN;

	t17 = ((x69%(x70|x71))&x72);

	if (t17 != 1536LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = -1LL;
	int16_t x74 = INT16_MIN;
	int64_t x75 = -1LL;
	int16_t x76 = -1;
	int64_t t18 = -15359547LL;

	t18 = ((x73%(x74|x75))&x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	uint64_t x78 = 3015LLU;
	int8_t x80 = INT8_MIN;

	t19 = ((x77%(x78|x79))&x80);

	if (t19 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = INT8_MIN;
	int16_t x83 = -1;
	int16_t x84 = INT16_MIN;
	uint32_t t20 = 91782370U;

	t20 = ((x81%(x82|x83))&x84);

	if (t20 != 4294934528U) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = -1LL;
	volatile uint16_t x86 = 4705U;
	volatile int64_t t21 = 11407357502666LL;

	t21 = ((x85%(x86|x87))&x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	int64_t x90 = -1LL;
	volatile uint16_t x91 = 19U;
	int8_t x92 = INT8_MIN;
	volatile int64_t t22 = -1394LL;

	t22 = ((x89%(x90|x91))&x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = 8;
	int16_t x95 = INT16_MIN;
	int16_t x96 = -71;
	volatile int32_t t23 = 121;

	t23 = ((x93%(x94|x95))&x96);

	if (t23 != -72) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 4046054LLU;
	static int8_t x98 = INT8_MAX;
	uint16_t x99 = UINT16_MAX;
	volatile uint64_t x100 = UINT64_MAX;
	uint64_t t24 = 72074844LLU;

	t24 = ((x97%(x98|x99))&x100);

	if (t24 != 48419LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	int8_t x102 = INT8_MAX;
	int64_t x103 = 11474211840942977LL;
	int32_t x104 = 296216842;

	t25 = ((x101%(x102|x103))&x104);

	if (t25 != 10LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x107 = -1;
	volatile int8_t x108 = 1;

	t26 = ((x105%(x106|x107))&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	int64_t x110 = INT64_MAX;
	int64_t x111 = -1LL;
	static uint8_t x112 = 30U;
	volatile int64_t t27 = -186924501974LL;

	t27 = ((x109%(x110|x111))&x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x113 = 3512U;
	uint16_t x114 = UINT16_MAX;
	uint32_t x115 = 480413623U;
	int64_t x116 = -1LL;
	volatile int64_t t28 = -3913286816702LL;

	t28 = ((x113%(x114|x115))&x116);

	if (t28 != 3512LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 24660U;
	volatile int16_t x118 = -11756;
	int32_t x119 = -1;
	uint16_t x120 = UINT16_MAX;
	static int32_t t29 = 0;

	t29 = ((x117%(x118|x119))&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	static int8_t x122 = -1;
	static volatile int16_t x124 = INT16_MIN;
	int32_t t30 = -66753893;

	t30 = ((x121%(x122|x123))&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	static uint64_t x126 = UINT64_MAX;
	static int32_t x127 = -245735;
	static volatile int16_t x128 = INT16_MIN;
	uint64_t t31 = 1048104LLU;

	t31 = ((x125%(x126|x127))&x128);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	uint64_t x130 = UINT64_MAX;
	volatile int32_t x131 = -1;
	uint32_t x132 = 41721U;
	uint64_t t32 = 1023571095147541134LLU;

	t32 = ((x129%(x130|x131))&x132);

	if (t32 != 249LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	static int16_t x134 = -1011;
	uint8_t x135 = 8U;

	t33 = ((x133%(x134|x135))&x136);

	if (t33 != 18446744073709551200LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int8_t x138 = INT8_MAX;
	uint16_t x139 = 630U;
	uint16_t x140 = 43U;
	int32_t t34 = -8518;

	t34 = ((x137%(x138|x139))&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = INT16_MIN;
	int32_t x144 = -1;
	static volatile uint64_t t35 = 3927LLU;

	t35 = ((x141%(x142|x143))&x144);

	if (t35 != 2201679204469LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x146 = 2U;
	volatile int8_t x147 = -1;
	int16_t x148 = INT16_MAX;
	int64_t t36 = 848892397134222259LL;

	t36 = ((x145%(x146|x147))&x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 890098U;
	uint64_t x150 = 7892345863551LLU;
	int8_t x151 = INT8_MAX;
	volatile uint64_t x152 = 3170663861578569270LLU;
	volatile uint64_t t37 = 0LLU;

	t37 = ((x149%(x150|x151))&x152);

	if (t37 != 857138LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 5U;
	int32_t x154 = INT32_MAX;
	uint8_t x155 = 3U;
	uint64_t x156 = UINT64_MAX;
	volatile uint64_t t38 = 460391957380711LLU;

	t38 = ((x153%(x154|x155))&x156);

	if (t38 != 5LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x158 = -1;
	int16_t x159 = INT16_MIN;
	static uint16_t x160 = 14395U;
	volatile int32_t t39 = -416095450;

	t39 = ((x157%(x158|x159))&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	uint32_t x162 = UINT32_MAX;
	uint16_t x163 = 955U;
	int8_t x164 = INT8_MIN;
	volatile uint32_t t40 = 427U;

	t40 = ((x161%(x162|x163))&x164);

	if (t40 != 2147483648U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	int16_t x166 = INT16_MAX;
	int32_t x167 = -22;

	t41 = ((x165%(x166|x167))&x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x169 = INT32_MIN;
	int8_t x171 = -1;
	static int64_t t42 = -715251719077739003LL;

	t42 = ((x169%(x170|x171))&x172);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x176 = -374149734LL;
	int64_t t43 = 2571577692584LL;

	t43 = ((x173%(x174|x175))&x176);

	if (t43 != 28058LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = -1;
	static volatile uint8_t x178 = UINT8_MAX;
	volatile uint64_t x179 = UINT64_MAX;
	uint32_t x180 = 111299887U;
	static volatile uint64_t t44 = 496781210LLU;

	t44 = ((x177%(x178|x179))&x180);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x181 = 46U;
	volatile int32_t t45 = 39086;

	t45 = ((x181%(x182|x183))&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = INT16_MAX;
	int16_t x186 = INT16_MAX;
	uint64_t x187 = UINT64_MAX;
	int16_t x188 = INT16_MIN;

	t46 = ((x185%(x186|x187))&x188);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = -1;
	int8_t x192 = -37;
	volatile int32_t t47 = 1380;

	t47 = ((x189%(x190|x191))&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x193 = 35U;
	static int8_t x194 = INT8_MAX;
	uint16_t x195 = UINT16_MAX;
	static int32_t t48 = 2268602;

	t48 = ((x193%(x194|x195))&x196);

	if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x198 = INT64_MIN;

	t49 = ((x197%(x198|x199))&x200);

	if (t49 != 26LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = -1;
	uint8_t x202 = 2U;
	volatile int64_t x203 = -1LL;
	uint8_t x204 = UINT8_MAX;
	static volatile int64_t t50 = -803LL;

	t50 = ((x201%(x202|x203))&x204);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -1;
	int8_t x206 = INT8_MIN;
	int8_t x207 = 47;
	int64_t x208 = INT64_MIN;
	int64_t t51 = INT64_MIN;

	t51 = ((x205%(x206|x207))&x208);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x210 = 24018;
	static volatile int64_t x211 = 49LL;
	volatile int16_t x212 = INT16_MIN;
	volatile int64_t t52 = 491329502122LL;

	t52 = ((x209%(x210|x211))&x212);

	if (t52 != -32768LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = 1;
	volatile uint16_t x215 = 17U;
	uint8_t x216 = 18U;

	t53 = ((x213%(x214|x215))&x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	uint64_t x218 = UINT64_MAX;
	uint32_t x219 = 925057U;
	int32_t x220 = 5239046;
	volatile uint64_t t54 = 1055488491LLU;

	t54 = ((x217%(x218|x219))&x220);

	if (t54 != 6LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = 30477093081624880LL;
	int8_t x222 = INT8_MAX;
	volatile int16_t x224 = 536;

	t55 = ((x221%(x222|x223))&x224);

	if (t55 != 8LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	uint32_t x226 = 5U;
	uint16_t x227 = 102U;
	static int8_t x228 = 2;
	volatile uint32_t t56 = 3282539U;

	t56 = ((x225%(x226|x227))&x228);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = UINT64_MAX;
	uint8_t x230 = 0U;
	int8_t x232 = -1;
	uint64_t t57 = 3568693507LLU;

	t57 = ((x229%(x230|x231))&x232);

	if (t57 != 559829LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = UINT8_MAX;
	int32_t x234 = 15691331;
	int64_t x235 = 459640702935LL;
	uint8_t x236 = UINT8_MAX;
	volatile int64_t t58 = 37711LL;

	t58 = ((x233%(x234|x235))&x236);

	if (t58 != 255LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x238 = UINT32_MAX;
	int16_t x240 = 29;
	uint64_t t59 = 1009LLU;

	t59 = ((x237%(x238|x239))&x240);

	if (t59 != 29LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x241 = 2368132174LLU;
	int8_t x242 = INT8_MAX;
	int64_t x243 = INT64_MIN;
	volatile int16_t x244 = INT16_MIN;
	volatile uint64_t t60 = 93603989853384604LLU;

	t60 = ((x241%(x242|x243))&x244);

	if (t60 != 2368110592LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x245 = -1;
	int32_t x246 = INT32_MAX;
	int64_t x247 = 326028498794LL;
	uint8_t x248 = 0U;
	int64_t t61 = -41464858655283LL;

	t61 = ((x245%(x246|x247))&x248);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 355915LLU;
	uint64_t x250 = UINT64_MAX;
	static int32_t x251 = -30134994;
	uint64_t t62 = 113353LLU;

	t62 = ((x249%(x250|x251))&x252);

	if (t62 != 355915LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 3;
	static int32_t x254 = INT32_MIN;
	static int32_t x255 = INT32_MAX;
	int16_t x256 = INT16_MAX;
	volatile int32_t t63 = 1;

	t63 = ((x253%(x254|x255))&x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x258 = UINT8_MAX;
	uint64_t x259 = 2784LLU;
	volatile uint64_t t64 = 100286207LLU;

	t64 = ((x257%(x258|x259))&x260);

	if (t64 != 40LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = 50;
	static int16_t x262 = INT16_MAX;
	static int32_t x263 = -6474710;
	uint16_t x264 = 75U;
	int32_t t65 = -65156114;

	t65 = ((x261%(x262|x263))&x264);

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x265 = 5U;
	int8_t x266 = INT8_MIN;
	volatile int8_t x267 = INT8_MAX;
	int16_t x268 = 108;
	int32_t t66 = -15997673;

	t66 = ((x265%(x266|x267))&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x269 = 2U;
	int16_t x271 = -1;
	uint16_t x272 = 586U;
	volatile int32_t t67 = -103349507;

	t67 = ((x269%(x270|x271))&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	uint8_t x274 = 2U;
	int32_t x275 = -1020433531;
	int8_t x276 = -1;
	volatile int32_t t68 = -1;

	t68 = ((x273%(x274|x275))&x276);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x278 = -1;
	uint32_t x279 = 1019910598U;
	static uint32_t x280 = UINT32_MAX;
	volatile uint32_t t69 = 355426497U;

	t69 = ((x277%(x278|x279))&x280);

	if (t69 != 65535U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = -1LL;
	int64_t x282 = INT64_MIN;
	int8_t x283 = -1;
	int32_t x284 = INT32_MIN;
	int64_t t70 = 31708571LL;

	t70 = ((x281%(x282|x283))&x284);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = 188113245;
	int16_t x286 = -1;
	uint8_t x287 = UINT8_MAX;
	static int32_t t71 = -1513503;

	t71 = ((x285%(x286|x287))&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MAX;
	volatile int8_t x290 = INT8_MIN;
	uint32_t x291 = 9261U;
	static uint32_t t72 = 3578947U;

	t72 = ((x289%(x290|x291))&x292);

	if (t72 != 126U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = INT32_MIN;
	uint16_t x294 = UINT16_MAX;
	static volatile uint32_t x295 = UINT32_MAX;
	uint64_t x296 = 4321672LLU;
	static volatile uint64_t t73 = 4254929086LLU;

	t73 = ((x293%(x294|x295))&x296);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x298 = UINT16_MAX;
	int64_t x300 = 4067LL;

	t74 = ((x297%(x298|x299))&x300);

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = 89322049;
	volatile uint32_t x302 = 5450U;
	int16_t x303 = INT16_MIN;
	volatile int16_t x304 = INT16_MIN;
	volatile uint32_t t75 = 166303U;

	t75 = ((x301%(x302|x303))&x304);

	if (t75 != 89292800U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 1352717119U;
	int8_t x306 = INT8_MAX;
	uint64_t x307 = 4LLU;
	volatile uint64_t x308 = 755544318969416916LLU;
	uint64_t t76 = 737LLU;

	t76 = ((x305%(x306|x307))&x308);

	if (t76 != 80LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint64_t x309 = UINT64_MAX;
	uint16_t x310 = 9185U;
	volatile int32_t x311 = INT32_MIN;
	int8_t x312 = -1;
	volatile uint64_t t77 = 191799243472LLU;

	t77 = ((x309%(x310|x311))&x312);

	if (t77 != 2147474462LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	int64_t x316 = 1430054426233LL;
	volatile int64_t t78 = 12176749991917750LL;

	t78 = ((x313%(x314|x315))&x316);

	if (t78 != 1430054426232LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = -1;
	int16_t x319 = INT16_MIN;
	volatile uint32_t x320 = UINT32_MAX;
	volatile uint32_t t79 = UINT32_MAX;

	t79 = ((x317%(x318|x319))&x320);

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x321 = 283U;
	int32_t x322 = -8867638;
	static int16_t x323 = 2122;
	int32_t x324 = INT32_MIN;
	volatile int32_t t80 = -521732168;

	t80 = ((x321%(x322|x323))&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	uint64_t x326 = 205838653636LLU;
	static int32_t x327 = INT32_MIN;
	volatile uint64_t x328 = 199421701002799LLU;
	static uint64_t t81 = 248840881643278813LLU;

	t81 = ((x325%(x326|x327))&x328);

	if (t81 != 319161899LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	uint8_t x330 = UINT8_MAX;
	volatile int64_t x331 = INT64_MIN;
	static volatile int32_t x332 = INT32_MIN;

	t82 = ((x329%(x330|x331))&x332);

	if (t82 != -2147483648LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x335 = 1659U;
	uint8_t x336 = UINT8_MAX;
	volatile uint64_t t83 = 609292078LLU;

	t83 = ((x333%(x334|x335))&x336);

	if (t83 != 255LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = INT32_MAX;
	int32_t x338 = -1;
	volatile uint8_t x339 = UINT8_MAX;
	int64_t x340 = INT64_MIN;
	int64_t t84 = 960LL;

	t84 = ((x337%(x338|x339))&x340);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x342 = 8U;
	static uint32_t t85 = 2U;

	t85 = ((x341%(x342|x343))&x344);

	if (t85 != 17U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	static uint16_t x346 = 32485U;
	uint64_t x347 = UINT64_MAX;
	uint16_t x348 = UINT16_MAX;
	uint64_t t86 = 85LLU;

	t86 = ((x345%(x346|x347))&x348);

	if (t86 != 32768LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = UINT64_MAX;
	volatile int16_t x350 = INT16_MIN;
	uint16_t x351 = 0U;
	static uint8_t x352 = 2U;
	uint64_t t87 = 9948781595120LLU;

	t87 = ((x349%(x350|x351))&x352);

	if (t87 != 2LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 0U;
	volatile int64_t x354 = -2060316462172451LL;
	int16_t x355 = -109;
	volatile int8_t x356 = INT8_MIN;

	t88 = ((x353%(x354|x355))&x356);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x358 = UINT64_MAX;
	static uint8_t x359 = UINT8_MAX;
	volatile int16_t x360 = 1;

	t89 = ((x357%(x358|x359))&x360);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x362 = 3U;
	int64_t x363 = -1LL;
	static int8_t x364 = 15;
	int64_t t90 = -235972LL;

	t90 = ((x361%(x362|x363))&x364);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;
	uint8_t x367 = 28U;
	volatile int64_t x368 = -356613441112LL;
	volatile int64_t t91 = 519238804231432056LL;

	t91 = ((x365%(x366|x367))&x368);

	if (t91 != 8LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x369 = INT8_MAX;
	static uint32_t x370 = 928451U;
	int8_t x372 = -2;
	uint32_t t92 = 1U;

	t92 = ((x369%(x370|x371))&x372);

	if (t92 != 126U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MAX;
	static int8_t x374 = INT8_MIN;
	int64_t x375 = INT64_MIN;
	volatile int64_t t93 = -229604684907038LL;

	t93 = ((x373%(x374|x375))&x376);

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x377 = 14719765925LLU;
	int8_t x379 = INT8_MIN;
	static int32_t x380 = INT32_MIN;
	uint64_t t94 = 2183317110060094553LLU;

	t94 = ((x377%(x378|x379))&x380);

	if (t94 != 12884901888LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = -1;
	uint16_t x382 = UINT16_MAX;
	uint64_t x384 = UINT64_MAX;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = ((x381%(x382|x383))&x384);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	volatile uint64_t x386 = 25338895256473016LLU;
	volatile int64_t x387 = INT64_MIN;
	volatile int8_t x388 = -1;
	uint64_t t96 = 33510LLU;

	t96 = ((x385%(x386|x387))&x388);

	if (t96 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = 363;
	int32_t x390 = INT32_MIN;
	static volatile int16_t x392 = INT16_MIN;

	t97 = ((x389%(x390|x391))&x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = -1;
	int32_t x395 = INT32_MIN;
	uint64_t x396 = UINT64_MAX;
	uint64_t t98 = 13LLU;

	t98 = ((x393%(x394|x395))&x396);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x397 = -17002044277LL;
	int8_t x398 = 0;
	int8_t x400 = INT8_MAX;
	volatile int64_t t99 = 63241604999884LL;

	t99 = ((x397%(x398|x399))&x400);

	if (t99 != 11LL) { NG(); } else { ; }
	
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

