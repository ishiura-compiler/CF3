#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x9 = 273966843425LLU;
int64_t x15 = -1LL;
volatile int64_t x17 = INT64_MAX;
int64_t x20 = -1LL;
int16_t x28 = -1;
volatile uint64_t t6 = UINT64_MAX;
uint16_t x34 = 50U;
int8_t x39 = -1;
uint8_t x43 = UINT8_MAX;
uint64_t t11 = 0LLU;
static int16_t x57 = -20;
uint64_t x59 = 87063552285739LLU;
uint64_t t14 = 983300846LLU;
uint64_t x62 = 394459404LLU;
uint64_t t15 = 576550081377976770LLU;
volatile int64_t t16 = 344431545920094895LL;
uint64_t x74 = 1LLU;
uint8_t x75 = UINT8_MAX;
volatile uint64_t t17 = 137546820029LLU;
volatile int32_t x78 = -3135259;
static int8_t x83 = -15;
int8_t x84 = INT8_MIN;
uint64_t x90 = 364445516LLU;
int8_t x92 = INT8_MAX;
int64_t x95 = INT64_MIN;
uint16_t x100 = UINT16_MAX;
static volatile uint64_t x105 = 5742983358593LLU;
int64_t x108 = -1LL;
uint64_t t25 = UINT64_MAX;
volatile int16_t x110 = INT16_MAX;
static volatile uint16_t x113 = 198U;
volatile uint8_t x119 = UINT8_MAX;
int8_t x120 = -1;
int64_t t28 = 12066090715108LL;
volatile int8_t x127 = INT8_MIN;
static uint64_t t30 = UINT64_MAX;
int32_t x129 = INT32_MAX;
int8_t x133 = INT8_MIN;
int8_t x135 = -1;
int64_t x138 = INT64_MIN;
volatile uint16_t x145 = 1U;
volatile int32_t t35 = -120;
int8_t x151 = INT8_MIN;
static int64_t x156 = INT64_MAX;
static int8_t x158 = -38;
int64_t t38 = -3796495197LL;
int64_t x166 = -8961LL;
int64_t x167 = -8LL;
int64_t t40 = 2018354913387LL;
uint64_t x172 = UINT64_MAX;
volatile int64_t t42 = -91831995LL;
int16_t x180 = INT16_MAX;
int64_t t44 = 3362LL;
static volatile int16_t x187 = INT16_MIN;
uint64_t x190 = 71839996162239576LLU;
int64_t x200 = 13125LL;
static int8_t x205 = INT8_MIN;
int64_t x210 = -1747932747245LL;
volatile int16_t x211 = -1;
uint8_t x213 = 4U;
int32_t t56 = 4501;
int16_t x243 = -7;
volatile int8_t x252 = INT8_MIN;
int8_t x254 = 2;
uint8_t x259 = 8U;
static int8_t x264 = 5;
int8_t x270 = INT8_MIN;
uint8_t x278 = UINT8_MAX;
static int64_t x281 = -20LL;
int64_t x283 = -345330072686350429LL;
static int8_t x287 = INT8_MAX;
static uint64_t x289 = UINT64_MAX;
int8_t x293 = INT8_MIN;
volatile int64_t x295 = INT64_MIN;
static int32_t x296 = -1;
volatile int64_t t71 = 12344784LL;
int8_t x302 = INT8_MIN;
static int64_t t72 = -868761LL;
int16_t x313 = INT16_MAX;
static int32_t x319 = INT32_MIN;
int32_t x328 = INT32_MIN;
int32_t x333 = INT32_MAX;
static int32_t x336 = -1;
uint16_t x338 = UINT16_MAX;
int64_t x340 = INT64_MAX;
static uint16_t x342 = UINT16_MAX;
volatile int64_t t81 = -1LL;
volatile int8_t x356 = INT8_MIN;
int64_t x365 = INT64_MIN;
int64_t x386 = INT64_MAX;
int16_t x387 = 1;
uint16_t x392 = 330U;
static volatile int8_t x396 = INT8_MAX;
uint64_t x403 = 3210LLU;
uint64_t t98 = 25538LLU;
int16_t x414 = INT16_MIN;


void f0(void) {
	volatile uint32_t x1 = 0U;
	int16_t x2 = INT16_MIN;
	uint64_t x3 = 1660LLU;
	volatile int16_t x4 = INT16_MIN;
	uint64_t t0 = 1LLU;

	t0 = (((x1%x2)%x3)|x4);

	if (t0 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	volatile int32_t x6 = INT32_MIN;
	volatile int8_t x7 = INT8_MIN;
	volatile int8_t x8 = INT8_MAX;
	static int32_t t1 = 5875434;

	t1 = (((x5%x6)%x7)|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = 2;
	uint64_t x11 = 5637767813969LLU;
	int64_t x12 = -34703872LL;
	volatile uint64_t t2 = 10LLU;

	t2 = (((x9%x10)%x11)|x12);

	if (t2 != 18446744073674847745LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 881U;
	int64_t x14 = 683LL;
	static uint8_t x16 = 7U;
	volatile int64_t t3 = -253816377680235LL;

	t3 = (((x13%x14)%x15)|x16);

	if (t3 != 7LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x18 = 1164U;
	int32_t x19 = -1;
	int64_t t4 = -10408657106307LL;

	t4 = (((x17%x18)%x19)|x20);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MAX;
	int64_t x22 = INT64_MIN;
	volatile uint16_t x23 = 46U;
	int32_t x24 = INT32_MIN;
	volatile int64_t t5 = 1180588LL;

	t5 = (((x21%x22)%x23)|x24);

	if (t5 != -2147483643LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = 2365692307045LLU;
	int16_t x26 = -40;
	int32_t x27 = INT32_MIN;

	t6 = (((x25%x26)%x27)|x28);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -1;
	int64_t x30 = INT64_MAX;
	static int64_t x31 = 261148749056550LL;
	int64_t x32 = -53360LL;
	int64_t t7 = -3942966786205294LL;

	t7 = (((x29%x30)%x31)|x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = 60U;
	int32_t x35 = 2;
	uint16_t x36 = UINT16_MAX;
	int32_t t8 = 0;

	t8 = (((x33%x34)%x35)|x36);

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = UINT64_MAX;
	uint8_t x38 = UINT8_MAX;
	int32_t x40 = INT32_MAX;
	static volatile uint64_t t9 = 36550620034119LLU;

	t9 = (((x37%x38)%x39)|x40);

	if (t9 != 2147483647LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -8199504061LL;
	int32_t x42 = INT32_MIN;
	static int64_t x44 = INT64_MIN;
	volatile int64_t t10 = 48926741878LL;

	t10 = (((x41%x42)%x43)|x44);

	if (t10 != -97LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	int16_t x46 = 176;
	uint64_t x47 = UINT64_MAX;
	static int64_t x48 = 123024LL;

	t11 = (((x45%x46)%x47)|x48);

	if (t11 != 123039LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	int16_t x50 = 1;
	static int8_t x51 = -14;
	int32_t x52 = 344210;
	int32_t t12 = -231573106;

	t12 = (((x49%x50)%x51)|x52);

	if (t12 != 344210) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = -1;
	volatile uint64_t x54 = 1414636496840656LLU;
	uint16_t x55 = 321U;
	static uint8_t x56 = 5U;
	uint64_t t13 = 37194402032500964LLU;

	t13 = (((x53%x54)%x55)|x56);

	if (t13 != 143LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = -27168959LL;
	volatile int64_t x60 = -32000795354361LL;

	t14 = (((x57%x58)%x59)|x60);

	if (t14 != 18446742929033648999LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = 3;
	volatile int16_t x63 = -5;
	static int32_t x64 = 11;

	t15 = (((x61%x62)%x63)|x64);

	if (t15 != 11LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	int64_t x70 = INT64_MAX;
	int16_t x71 = INT16_MAX;
	int16_t x72 = -1;

	t16 = (((x69%x70)%x71)|x72);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x73 = 2U;
	static int16_t x76 = INT16_MAX;

	t17 = (((x73%x74)%x75)|x76);

	if (t17 != 32767LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = 2989383974811LL;
	int32_t x79 = INT32_MIN;
	volatile uint16_t x80 = UINT16_MAX;
	int64_t t18 = -974111672751033LL;

	t18 = (((x77%x78)%x79)|x80);

	if (t18 != 2359295LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = 3;
	static volatile int64_t x82 = -228431916120717041LL;
	int64_t t19 = -6LL;

	t19 = (((x81%x82)%x83)|x84);

	if (t19 != -125LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MIN;
	uint8_t x86 = UINT8_MAX;
	static int64_t x87 = INT64_MIN;
	int8_t x88 = 2;
	int64_t t20 = 562533299679931168LL;

	t20 = (((x85%x86)%x87)|x88);

	if (t20 != -126LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MAX;
	int16_t x91 = INT16_MIN;
	volatile uint64_t t21 = 93451113648LLU;

	t21 = (((x89%x90)%x91)|x92);

	if (t21 != 325256191LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = -1;
	uint32_t x94 = 38U;
	int64_t x96 = 2247311374414393218LL;
	volatile int64_t t22 = -3857696107151LL;

	t22 = (((x93%x94)%x95)|x96);

	if (t22 != 2247311374414393223LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = -1;
	static uint64_t x98 = UINT64_MAX;
	volatile int16_t x99 = INT16_MIN;
	static uint64_t t23 = 414005948559507719LLU;

	t23 = (((x97%x98)%x99)|x100);

	if (t23 != 65535LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = INT32_MAX;
	volatile int32_t x102 = 129539676;
	int16_t x103 = INT16_MIN;
	volatile uint8_t x104 = 9U;
	volatile int32_t t24 = -298629;

	t24 = (((x101%x102)%x103)|x104);

	if (t24 != 6719) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x106 = 40U;
	volatile uint8_t x107 = 35U;

	t25 = (((x105%x106)%x107)|x108);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x109 = 26714899925926LLU;
	int8_t x111 = -1;
	int16_t x112 = -1;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = (((x109%x110)%x111)|x112);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x114 = 1U;
	static int32_t x115 = -1;
	volatile uint64_t x116 = 1475586412477454662LLU;
	static uint64_t t27 = 335175423091479LLU;

	t27 = (((x113%x114)%x115)|x116);

	if (t27 != 1475586412477454662LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MAX;
	int8_t x118 = INT8_MIN;

	t28 = (((x117%x118)%x119)|x120);

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x121 = INT16_MAX;
	int8_t x122 = -13;
	static volatile uint32_t x123 = 57046906U;
	static int8_t x124 = -1;
	static volatile uint32_t t29 = UINT32_MAX;

	t29 = (((x121%x122)%x123)|x124);

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x125 = 14U;
	uint64_t x126 = 11629472974314513LLU;
	static int32_t x128 = -1;

	t30 = (((x125%x126)%x127)|x128);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x130 = INT16_MIN;
	int32_t x131 = INT32_MIN;
	int64_t x132 = 52704863LL;
	static int64_t t31 = -244LL;

	t31 = (((x129%x130)%x131)|x132);

	if (t31 != 52723711LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x134 = 130990U;
	int32_t x136 = INT32_MIN;
	static volatile uint32_t t32 = 50226765U;

	t32 = (((x133%x134)%x135)|x136);

	if (t32 != 2147550696U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = 0U;
	volatile int64_t x139 = INT64_MIN;
	int8_t x140 = -1;
	int64_t t33 = 188236137142434LL;

	t33 = (((x137%x138)%x139)|x140);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = -1;
	volatile int32_t x142 = INT32_MIN;
	static int16_t x143 = INT16_MAX;
	uint16_t x144 = 8452U;
	volatile int32_t t34 = 265;

	t34 = (((x141%x142)%x143)|x144);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x146 = INT8_MIN;
	int32_t x147 = INT32_MIN;
	volatile int16_t x148 = -3997;

	t35 = (((x145%x146)%x147)|x148);

	if (t35 != -3997) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x149 = 8305646LLU;
	uint64_t x150 = 409144686583643908LLU;
	volatile int64_t x152 = 187308819LL;
	uint64_t t36 = 12512LLU;

	t36 = (((x149%x150)%x151)|x152);

	if (t36 != 192855039LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = -226191584061206LL;
	uint32_t x154 = UINT32_MAX;
	static int8_t x155 = -1;
	volatile int64_t t37 = INT64_MAX;

	t37 = (((x153%x154)%x155)|x156);

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = INT64_MIN;
	uint16_t x159 = 12897U;
	int64_t x160 = INT64_MAX;

	t38 = (((x157%x158)%x159)|x160);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x161 = UINT64_MAX;
	int64_t x162 = INT64_MIN;
	int64_t x163 = INT64_MAX;
	volatile int8_t x164 = 14;
	uint64_t t39 = 70548911213790947LLU;

	t39 = (((x161%x162)%x163)|x164);

	if (t39 != 14LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x165 = 51U;
	int16_t x168 = INT16_MAX;

	t40 = (((x165%x166)%x167)|x168);

	if (t40 != 32767LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = 1;
	int32_t x170 = -327575;
	static volatile uint8_t x171 = 33U;
	uint64_t t41 = UINT64_MAX;

	t41 = (((x169%x170)%x171)|x172);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = -1LL;
	volatile uint8_t x174 = 28U;
	static volatile int32_t x175 = INT32_MIN;
	uint16_t x176 = 1432U;

	t42 = (((x173%x174)%x175)|x176);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x177 = UINT16_MAX;
	int8_t x178 = -23;
	uint32_t x179 = 116357U;
	volatile uint32_t t43 = 481U;

	t43 = (((x177%x178)%x179)|x180);

	if (t43 != 32767U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x181 = INT16_MAX;
	static int64_t x182 = -1LL;
	static int8_t x183 = -1;
	static volatile int8_t x184 = INT8_MAX;

	t44 = (((x181%x182)%x183)|x184);

	if (t44 != 127LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = INT64_MIN;
	int8_t x186 = INT8_MAX;
	int64_t x188 = INT64_MAX;
	int64_t t45 = 220LL;

	t45 = (((x185%x186)%x187)|x188);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = INT16_MIN;
	static int32_t x191 = INT32_MIN;
	static uint32_t x192 = 2U;
	uint64_t t46 = 2027LLU;

	t46 = (((x189%x190)%x191)|x192);

	if (t46 != 55705056176187394LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x193 = 846U;
	int32_t x194 = INT32_MAX;
	volatile int16_t x195 = 169;
	uint64_t x196 = 106801178660318310LLU;
	volatile uint64_t t47 = 112694607LLU;

	t47 = (((x193%x194)%x195)|x196);

	if (t47 != 106801178660318311LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = INT16_MIN;
	int32_t x198 = -5;
	int16_t x199 = 724;
	int64_t t48 = -1000LL;

	t48 = (((x197%x198)%x199)|x200);

	if (t48 != -3LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = -1;
	uint64_t x202 = 258097940769337LLU;
	int32_t x203 = 5;
	uint32_t x204 = 137U;
	uint64_t t49 = 81216630291400LLU;

	t49 = (((x201%x202)%x203)|x204);

	if (t49 != 139LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x206 = UINT64_MAX;
	int8_t x207 = INT8_MIN;
	static int8_t x208 = 0;
	uint64_t t50 = 11383742082LLU;

	t50 = (((x205%x206)%x207)|x208);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = 6;
	uint64_t x212 = UINT64_MAX;
	uint64_t t51 = UINT64_MAX;

	t51 = (((x209%x210)%x211)|x212);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x214 = 63U;
	int8_t x215 = -1;
	static int16_t x216 = INT16_MIN;
	static int32_t t52 = -6934;

	t52 = (((x213%x214)%x215)|x216);

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x217 = 308U;
	int8_t x218 = INT8_MIN;
	int32_t x219 = INT32_MAX;
	int8_t x220 = INT8_MIN;
	volatile uint32_t t53 = 11U;

	t53 = (((x217%x218)%x219)|x220);

	if (t53 != 4294967220U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x229 = INT16_MIN;
	static uint64_t x230 = 57090LLU;
	static uint32_t x231 = 4351U;
	static int64_t x232 = -670351334086LL;
	static uint64_t t54 = 498934309659LLU;

	t54 = (((x229%x230)%x231)|x232);

	if (t54 != 18446743403358217723LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = -1;
	uint32_t x234 = 64016U;
	static uint8_t x235 = UINT8_MAX;
	static int32_t x236 = INT32_MIN;
	static volatile uint32_t t55 = 460U;

	t55 = (((x233%x234)%x235)|x236);

	if (t55 != 2147483861U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = INT8_MIN;
	int8_t x238 = INT8_MIN;
	int32_t x239 = INT32_MAX;
	int32_t x240 = 205;

	t56 = (((x237%x238)%x239)|x240);

	if (t56 != 205) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = INT16_MAX;
	uint64_t x242 = 4150238LLU;
	uint32_t x244 = UINT32_MAX;
	static volatile uint64_t t57 = 64788653LLU;

	t57 = (((x241%x242)%x243)|x244);

	if (t57 != 4294967295LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x245 = -14;
	int64_t x246 = 34231362923655107LL;
	uint32_t x247 = 10149U;
	uint64_t x248 = 8857LLU;
	uint64_t t58 = 1471617LLU;

	t58 = (((x245%x246)%x247)|x248);

	if (t58 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x249 = 36;
	int64_t x250 = INT64_MIN;
	int32_t x251 = INT32_MAX;
	volatile int64_t t59 = 15976253091LL;

	t59 = (((x249%x250)%x251)|x252);

	if (t59 != -92LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x253 = 37903U;
	int64_t x255 = -825594358201021528LL;
	volatile uint16_t x256 = 1406U;
	volatile int64_t t60 = -12LL;

	t60 = (((x253%x254)%x255)|x256);

	if (t60 != 1407LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = INT32_MAX;
	volatile uint8_t x258 = 33U;
	static int64_t x260 = -3419972191784466LL;
	volatile int64_t t61 = 5537889LL;

	t61 = (((x257%x258)%x259)|x260);

	if (t61 != -3419972191784465LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = -9473;
	int16_t x262 = INT16_MIN;
	volatile uint64_t x263 = UINT64_MAX;
	volatile uint64_t t62 = 17766150409362976LLU;

	t62 = (((x261%x262)%x263)|x264);

	if (t62 != 18446744073709542143LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = INT64_MIN;
	uint8_t x266 = UINT8_MAX;
	volatile int64_t x267 = INT64_MIN;
	volatile uint32_t x268 = UINT32_MAX;
	int64_t t63 = -17277292LL;

	t63 = (((x265%x266)%x267)|x268);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x269 = UINT64_MAX;
	uint16_t x271 = UINT16_MAX;
	int16_t x272 = INT16_MIN;
	volatile uint64_t t64 = 34448069285LLU;

	t64 = (((x269%x270)%x271)|x272);

	if (t64 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x273 = 12LLU;
	int32_t x274 = INT32_MAX;
	static volatile int32_t x275 = -1;
	static uint32_t x276 = UINT32_MAX;
	volatile uint64_t t65 = 11172187501LLU;

	t65 = (((x273%x274)%x275)|x276);

	if (t65 != 4294967295LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x277 = 1U;
	int32_t x279 = -1;
	static int32_t x280 = INT32_MIN;
	static uint32_t t66 = 84196641U;

	t66 = (((x277%x278)%x279)|x280);

	if (t66 != 2147483649U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x282 = 4U;
	static uint32_t x284 = 20108236U;
	int64_t t67 = 6740006426LL;

	t67 = (((x281%x282)%x283)|x284);

	if (t67 != 20108236LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = INT8_MIN;
	int64_t x286 = -1927473551246306LL;
	int16_t x288 = -15192;
	volatile int64_t t68 = -5631926LL;

	t68 = (((x285%x286)%x287)|x288);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x290 = INT32_MIN;
	int32_t x291 = -1;
	uint32_t x292 = UINT32_MAX;
	volatile uint64_t t69 = 321359LLU;

	t69 = (((x289%x290)%x291)|x292);

	if (t69 != 4294967295LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x294 = UINT16_MAX;
	volatile int64_t t70 = -4101258543399654LL;

	t70 = (((x293%x294)%x295)|x296);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = 0LL;
	int8_t x298 = -1;
	int8_t x299 = INT8_MIN;
	int8_t x300 = INT8_MIN;

	t71 = (((x297%x298)%x299)|x300);

	if (t71 != -128LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x301 = 70U;
	int8_t x303 = -1;
	static int64_t x304 = 341412373151975487LL;

	t72 = (((x301%x302)%x303)|x304);

	if (t72 != 341412373151975487LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x305 = UINT8_MAX;
	int16_t x306 = 1507;
	uint64_t x307 = 30LLU;
	static uint32_t x308 = UINT32_MAX;
	uint64_t t73 = 7LLU;

	t73 = (((x305%x306)%x307)|x308);

	if (t73 != 4294967295LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x309 = UINT64_MAX;
	int64_t x310 = -5981271784433LL;
	uint8_t x311 = UINT8_MAX;
	int64_t x312 = 1767625333009257140LL;
	static uint64_t t74 = 141377489484LLU;

	t74 = (((x309%x310)%x311)|x312);

	if (t74 != 1767625333009257142LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x314 = UINT64_MAX;
	int8_t x315 = -1;
	static volatile uint32_t x316 = UINT32_MAX;
	uint64_t t75 = 19989430319129935LLU;

	t75 = (((x313%x314)%x315)|x316);

	if (t75 != 4294967295LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = 958947;
	volatile int64_t x318 = INT64_MIN;
	int32_t x320 = INT32_MAX;
	int64_t t76 = -442LL;

	t76 = (((x317%x318)%x319)|x320);

	if (t76 != 2147483647LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x325 = INT32_MIN;
	int32_t x326 = INT32_MIN;
	uint64_t x327 = 504237085488LLU;
	uint64_t t77 = 26824053264LLU;

	t77 = (((x325%x326)%x327)|x328);

	if (t77 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = -1;
	uint8_t x330 = UINT8_MAX;
	volatile int64_t x331 = INT64_MIN;
	uint16_t x332 = UINT16_MAX;
	volatile int64_t t78 = 5831LL;

	t78 = (((x329%x330)%x331)|x332);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x334 = INT16_MIN;
	int8_t x335 = -1;
	volatile int32_t t79 = -45;

	t79 = (((x333%x334)%x335)|x336);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x337 = 52U;
	int16_t x339 = -1;
	static volatile int64_t t80 = INT64_MAX;

	t80 = (((x337%x338)%x339)|x340);

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x341 = INT16_MAX;
	int32_t x343 = INT32_MIN;
	int64_t x344 = INT64_MIN;

	t81 = (((x341%x342)%x343)|x344);

	if (t81 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x345 = INT64_MIN;
	volatile uint8_t x346 = UINT8_MAX;
	static uint32_t x347 = 871U;
	int64_t x348 = INT64_MAX;
	volatile int64_t t82 = -16766235LL;

	t82 = (((x345%x346)%x347)|x348);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x349 = UINT16_MAX;
	volatile int16_t x350 = INT16_MIN;
	static uint8_t x351 = 8U;
	int8_t x352 = -1;
	volatile int32_t t83 = -11;

	t83 = (((x349%x350)%x351)|x352);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = INT16_MIN;
	uint8_t x354 = UINT8_MAX;
	uint16_t x355 = 2U;
	volatile int32_t t84 = -15149287;

	t84 = (((x353%x354)%x355)|x356);

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x357 = 7U;
	int64_t x358 = -1LL;
	uint32_t x359 = 9U;
	uint8_t x360 = 103U;
	volatile int64_t t85 = -104469LL;

	t85 = (((x357%x358)%x359)|x360);

	if (t85 != 103LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x361 = INT16_MAX;
	int64_t x362 = -1LL;
	int64_t x363 = INT64_MIN;
	uint32_t x364 = 140420478U;
	static int64_t t86 = -100830827205LL;

	t86 = (((x361%x362)%x363)|x364);

	if (t86 != 140420478LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x366 = -1LL;
	int16_t x367 = -1;
	volatile int16_t x368 = 0;
	int64_t t87 = -1131359717776982688LL;

	t87 = (((x365%x366)%x367)|x368);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = INT64_MIN;
	int8_t x370 = INT8_MIN;
	int16_t x371 = -69;
	static int32_t x372 = -3373781;
	int64_t t88 = -317417024540841LL;

	t88 = (((x369%x370)%x371)|x372);

	if (t88 != -3373781LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x373 = INT64_MIN;
	volatile int64_t x374 = -1LL;
	static uint64_t x375 = UINT64_MAX;
	volatile int64_t x376 = INT64_MIN;
	volatile uint64_t t89 = 16LLU;

	t89 = (((x373%x374)%x375)|x376);

	if (t89 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x377 = INT16_MIN;
	static volatile uint32_t x378 = 2765U;
	int8_t x379 = 1;
	int16_t x380 = INT16_MAX;
	volatile uint32_t t90 = 2122825122U;

	t90 = (((x377%x378)%x379)|x380);

	if (t90 != 32767U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x381 = INT8_MIN;
	uint16_t x382 = 755U;
	int16_t x383 = INT16_MIN;
	volatile uint8_t x384 = UINT8_MAX;
	volatile int32_t t91 = 112416158;

	t91 = (((x381%x382)%x383)|x384);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x385 = 16071U;
	int32_t x388 = -1;
	int64_t t92 = 434286049502426821LL;

	t92 = (((x385%x386)%x387)|x388);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x389 = -1LL;
	int64_t x390 = 17310209971455420LL;
	static volatile int16_t x391 = -1;
	static int64_t t93 = -214426764985313861LL;

	t93 = (((x389%x390)%x391)|x392);

	if (t93 != 330LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x393 = UINT64_MAX;
	int8_t x394 = 39;
	int32_t x395 = -505;
	volatile uint64_t t94 = 2813467121262632LLU;

	t94 = (((x393%x394)%x395)|x396);

	if (t94 != 127LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x397 = INT64_MIN;
	static volatile int64_t x398 = -1LL;
	int64_t x399 = -1LL;
	static volatile int64_t x400 = -1LL;
	int64_t t95 = -8626066651604481LL;

	t95 = (((x397%x398)%x399)|x400);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x401 = 5783035460437LLU;
	int64_t x402 = INT64_MAX;
	int16_t x404 = -1;
	uint64_t t96 = UINT64_MAX;

	t96 = (((x401%x402)%x403)|x404);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x405 = INT32_MIN;
	uint8_t x406 = 13U;
	volatile int32_t x407 = INT32_MIN;
	int8_t x408 = -1;
	static int32_t t97 = -165029;

	t97 = (((x405%x406)%x407)|x408);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x409 = -2;
	uint64_t x410 = UINT64_MAX;
	int8_t x411 = -30;
	static int32_t x412 = INT32_MAX;

	t98 = (((x409%x410)%x411)|x412);

	if (t98 != 2147483647LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x413 = INT32_MAX;
	int16_t x415 = -4;
	uint16_t x416 = UINT16_MAX;
	int32_t t99 = 15263;

	t99 = (((x413%x414)%x415)|x416);

	if (t99 != 65535) { NG(); } else { ; }
	
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

