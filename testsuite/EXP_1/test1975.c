#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x9 = INT64_MIN;
static volatile int64_t x11 = -52LL;
volatile int64_t t2 = INT64_MAX;
static volatile int16_t x16 = -1;
int32_t x28 = INT32_MIN;
static volatile int32_t t8 = 4;
volatile int32_t x37 = INT32_MIN;
static int8_t x42 = -1;
uint8_t x44 = UINT8_MAX;
int64_t x48 = INT64_MIN;
int32_t x58 = INT32_MAX;
static int64_t t15 = -73874LL;
uint8_t x76 = 0U;
volatile int16_t x77 = 2;
volatile int64_t x79 = -1LL;
int16_t x84 = 0;
static int32_t t22 = 20021;
static int64_t x95 = -16115LL;
static int32_t x99 = INT32_MAX;
int16_t x104 = INT16_MIN;
int8_t x108 = -1;
volatile int32_t x110 = INT32_MIN;
int8_t x111 = INT8_MIN;
volatile int8_t x113 = INT8_MIN;
volatile int64_t x117 = -2715LL;
int8_t x118 = INT8_MIN;
static int64_t x120 = -1LL;
int64_t t29 = 1057983318081018975LL;
uint64_t x124 = UINT64_MAX;
int64_t x125 = INT64_MAX;
int16_t x133 = 15;
uint8_t x136 = 0U;
int16_t x137 = 11934;
static int64_t x138 = -1LL;
int16_t x143 = INT16_MIN;
static int32_t t35 = INT32_MAX;
static volatile int32_t x146 = -1145;
uint32_t x148 = 849U;
static int32_t t37 = 440202311;
int64_t x157 = -7263LL;
static int64_t x163 = INT64_MIN;
static volatile int32_t x164 = INT32_MIN;
uint64_t x168 = 1198097LLU;
uint64_t x173 = UINT64_MAX;
volatile int64_t t45 = -706270676552LL;
volatile uint32_t x188 = 76194480U;
int16_t x189 = INT16_MIN;
int64_t x191 = INT64_MIN;
uint32_t x194 = 9U;
volatile int32_t t48 = -149120;
static uint64_t x203 = UINT64_MAX;
int32_t t50 = 130;
static volatile int16_t x205 = INT16_MIN;
int16_t x206 = INT16_MIN;
int32_t x207 = -1;
int16_t x208 = INT16_MAX;
static int8_t x213 = -1;
static int16_t x214 = -1;
static uint32_t x225 = 15U;
uint64_t x229 = 2221781802532233LLU;
int16_t x230 = -26;
int16_t x233 = INT16_MIN;
int8_t x240 = INT8_MIN;
static int8_t x243 = -1;
uint16_t x248 = 53U;
uint64_t x259 = 3LLU;
uint32_t x260 = 489973U;
int16_t x264 = -1;
static int16_t x268 = 3820;
int32_t t66 = 103208;
uint8_t x272 = UINT8_MAX;
static volatile uint64_t x276 = UINT64_MAX;
int16_t x285 = -104;
int64_t x287 = INT64_MAX;
volatile int16_t x288 = -1421;
static int32_t t71 = 17144;
int16_t x293 = INT16_MIN;
static int32_t x295 = 29890179;
uint8_t x301 = 123U;
int32_t x302 = -1;
volatile uint64_t x308 = 1952284570063788687LLU;
uint16_t x312 = 1U;
static uint32_t x316 = UINT32_MAX;
int32_t x325 = INT32_MAX;
static volatile uint32_t x329 = 1194U;
int16_t x335 = -1987;
int32_t t83 = 946;
int16_t x338 = INT16_MIN;
volatile int32_t t85 = 518544540;
int64_t x349 = INT64_MIN;
int32_t x350 = INT32_MAX;
int64_t x355 = INT64_MAX;
static int64_t x356 = 12199723LL;
static volatile int64_t t88 = -207LL;
static int8_t x358 = 1;
uint8_t x362 = UINT8_MAX;
int32_t x363 = 75696849;
int32_t x369 = INT32_MIN;
int64_t x370 = -1LL;
int32_t x381 = INT32_MAX;
volatile uint64_t t95 = 43762LLU;
int8_t x388 = 2;
static volatile uint8_t x392 = UINT8_MAX;
int32_t t97 = 0;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	static int16_t x2 = 41;
	uint8_t x3 = 56U;
	volatile int16_t x4 = INT16_MIN;
	int32_t t0 = 0;

	t0 = (((x1|x2)<x3)|x4);

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 0;
	uint16_t x6 = UINT16_MAX;
	static uint64_t x7 = UINT64_MAX;
	int64_t x8 = INT64_MIN;
	static volatile int64_t t1 = 50755334567LL;

	t1 = (((x5|x6)<x7)|x8);

	if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = UINT64_MAX;
	int64_t x12 = INT64_MAX;

	t2 = (((x9|x10)<x11)|x12);

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -110;
	int16_t x14 = -1;
	int64_t x15 = -15413575LL;
	volatile int32_t t3 = -4053325;

	t3 = (((x13|x14)<x15)|x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int16_t x18 = INT16_MAX;
	int16_t x19 = INT16_MIN;
	uint64_t x20 = 122630719320060LLU;
	static uint64_t t4 = 6408467883442LLU;

	t4 = (((x17|x18)<x19)|x20);

	if (t4 != 122630719320061LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 9U;
	uint32_t x22 = 508412476U;
	volatile int16_t x23 = INT16_MAX;
	int16_t x24 = 7367;
	int32_t t5 = 458045832;

	t5 = (((x21|x22)<x23)|x24);

	if (t5 != 7367) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	static volatile uint32_t x26 = UINT32_MAX;
	uint64_t x27 = 1170LLU;
	int32_t t6 = INT32_MIN;

	t6 = (((x25|x26)<x27)|x28);

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = 7;
	int32_t x30 = -3;
	uint8_t x31 = 7U;
	static volatile int64_t x32 = INT64_MIN;
	int64_t t7 = -101072916180999270LL;

	t7 = (((x29|x30)<x31)|x32);

	if (t7 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	static uint16_t x34 = 1U;
	uint64_t x35 = 4011062LLU;
	int32_t x36 = -1;

	t8 = (((x33|x34)<x35)|x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x38 = UINT64_MAX;
	volatile int64_t x39 = INT64_MIN;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = INT32_MIN;

	t9 = (((x37|x38)<x39)|x40);

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = -1;
	volatile int16_t x43 = 0;
	int32_t t10 = 109;

	t10 = (((x41|x42)<x43)|x44);

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	static volatile uint16_t x46 = 15990U;
	int64_t x47 = 8267LL;
	static int64_t t11 = -16102378564636480LL;

	t11 = (((x45|x46)<x47)|x48);

	if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int16_t x50 = 105;
	uint32_t x51 = 107894864U;
	int8_t x52 = -1;
	int32_t t12 = -3648113;

	t12 = (((x49|x50)<x51)|x52);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	static int32_t x54 = INT32_MAX;
	uint32_t x55 = 1U;
	int16_t x56 = 0;
	int32_t t13 = -281029;

	t13 = (((x53|x54)<x55)|x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x57 = 83374522987494LLU;
	uint8_t x59 = 3U;
	uint16_t x60 = UINT16_MAX;
	volatile int32_t t14 = -445;

	t14 = (((x57|x58)<x59)|x60);

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	static int16_t x62 = INT16_MIN;
	uint32_t x63 = 1138392124U;
	int64_t x64 = -50621LL;

	t15 = (((x61|x62)<x63)|x64);

	if (t15 != -50621LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x65 = INT32_MAX;
	int16_t x66 = INT16_MIN;
	int8_t x67 = -9;
	uint16_t x68 = UINT16_MAX;
	int32_t t16 = -2;

	t16 = (((x65|x66)<x67)|x68);

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 6090;
	volatile int8_t x70 = INT8_MIN;
	uint32_t x71 = UINT32_MAX;
	int16_t x72 = 3255;
	static int32_t t17 = 6161;

	t17 = (((x69|x70)<x71)|x72);

	if (t17 != 3255) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = 44855;
	uint8_t x74 = 94U;
	static int32_t x75 = INT32_MIN;
	volatile int32_t t18 = -2;

	t18 = (((x73|x74)<x75)|x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = -15;
	static int64_t x80 = INT64_MIN;
	volatile int64_t t19 = 38605380LL;

	t19 = (((x77|x78)<x79)|x80);

	if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = 57118906LL;
	int16_t x82 = INT16_MIN;
	static int16_t x83 = -1;
	volatile int32_t t20 = -456;

	t20 = (((x81|x82)<x83)|x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	int32_t x86 = INT32_MIN;
	int16_t x87 = INT16_MIN;
	int32_t x88 = INT32_MAX;
	int32_t t21 = INT32_MAX;

	t21 = (((x85|x86)<x87)|x88);

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = 99U;
	static uint32_t x90 = 4430U;
	uint8_t x91 = 31U;
	int32_t x92 = -26195;

	t22 = (((x89|x90)<x91)|x92);

	if (t22 != -26195) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	static volatile int16_t x94 = -707;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t23 = 136;

	t23 = (((x93|x94)<x95)|x96);

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	int64_t x98 = INT64_MAX;
	int32_t x100 = INT32_MAX;
	int32_t t24 = INT32_MAX;

	t24 = (((x97|x98)<x99)|x100);

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = -1;
	int32_t x102 = 2786282;
	volatile int16_t x103 = 4768;
	volatile int32_t t25 = -2478;

	t25 = (((x101|x102)<x103)|x104);

	if (t25 != -32767) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 1U;
	int64_t x106 = INT64_MAX;
	uint64_t x107 = 1459266154202LLU;
	volatile int32_t t26 = -42083603;

	t26 = (((x105|x106)<x107)|x108);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	int64_t x112 = INT64_MIN;
	static volatile int64_t t27 = INT64_MIN;

	t27 = (((x109|x110)<x111)|x112);

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = INT8_MAX;
	uint64_t x115 = 2454430784292718437LLU;
	int64_t x116 = INT64_MAX;
	volatile int64_t t28 = INT64_MAX;

	t28 = (((x113|x114)<x115)|x116);

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x119 = 5907U;

	t29 = (((x117|x118)<x119)|x120);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	uint16_t x122 = UINT16_MAX;
	static uint64_t x123 = 71546685408126219LLU;
	uint64_t t30 = UINT64_MAX;

	t30 = (((x121|x122)<x123)|x124);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = INT32_MAX;
	static volatile int32_t x127 = INT32_MIN;
	static volatile int64_t x128 = INT64_MIN;
	int64_t t31 = INT64_MIN;

	t31 = (((x125|x126)<x127)|x128);

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x129 = 288937925965LLU;
	uint16_t x130 = UINT16_MAX;
	int16_t x131 = 12579;
	int16_t x132 = 12104;
	volatile int32_t t32 = -88077;

	t32 = (((x129|x130)<x131)|x132);

	if (t32 != 12104) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x134 = 10U;
	int8_t x135 = INT8_MIN;
	int32_t t33 = -4244;

	t33 = (((x133|x134)<x135)|x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x139 = 63756LL;
	uint16_t x140 = 220U;
	volatile int32_t t34 = -8817;

	t34 = (((x137|x138)<x139)|x140);

	if (t34 != 221) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	int16_t x142 = -1;
	int32_t x144 = INT32_MAX;

	t35 = (((x141|x142)<x143)|x144);

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int8_t x147 = 60;
	uint32_t t36 = 1U;

	t36 = (((x145|x146)<x147)|x148);

	if (t36 != 849U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 3458U;
	int8_t x150 = INT8_MAX;
	int16_t x151 = -1;
	volatile int16_t x152 = 447;

	t37 = (((x149|x150)<x151)|x152);

	if (t37 != 447) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 33089;
	uint32_t x154 = UINT32_MAX;
	int16_t x155 = 0;
	volatile int8_t x156 = INT8_MAX;
	static volatile int32_t t38 = 591372;

	t38 = (((x153|x154)<x155)|x156);

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x158 = -16;
	int32_t x159 = -1;
	static volatile int32_t x160 = INT32_MAX;
	volatile int32_t t39 = INT32_MAX;

	t39 = (((x157|x158)<x159)|x160);

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = -1;
	int64_t x162 = INT64_MIN;
	int32_t t40 = INT32_MIN;

	t40 = (((x161|x162)<x163)|x164);

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = UINT16_MAX;
	static int32_t x166 = -2;
	int8_t x167 = 14;
	volatile uint64_t t41 = 243963955017996LLU;

	t41 = (((x165|x166)<x167)|x168);

	if (t41 != 1198097LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	volatile int8_t x170 = INT8_MIN;
	int16_t x171 = 0;
	volatile int32_t x172 = INT32_MIN;
	volatile int32_t t42 = 6;

	t42 = (((x169|x170)<x171)|x172);

	if (t42 != -2147483647) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x174 = -53;
	int64_t x175 = INT64_MIN;
	int8_t x176 = INT8_MIN;
	static volatile int32_t t43 = 7;

	t43 = (((x173|x174)<x175)|x176);

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 272509U;
	int32_t x178 = INT32_MIN;
	int64_t x179 = -1709626LL;
	static uint8_t x180 = 11U;
	volatile int32_t t44 = -46;

	t44 = (((x177|x178)<x179)|x180);

	if (t44 != 11) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	uint8_t x182 = UINT8_MAX;
	volatile int64_t x183 = -162LL;
	volatile int64_t x184 = INT64_MIN;

	t45 = (((x181|x182)<x183)|x184);

	if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x185 = 1289U;
	volatile int64_t x186 = INT64_MIN;
	int64_t x187 = INT64_MIN;
	uint32_t t46 = 164U;

	t46 = (((x185|x186)<x187)|x188);

	if (t46 != 76194480U) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x190 = -8977372902LL;
	volatile int16_t x192 = INT16_MIN;
	volatile int32_t t47 = 270;

	t47 = (((x189|x190)<x191)|x192);

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	volatile int32_t x195 = INT32_MIN;
	volatile uint8_t x196 = UINT8_MAX;

	t48 = (((x193|x194)<x195)|x196);

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	int8_t x198 = INT8_MIN;
	int32_t x199 = INT32_MAX;
	static uint64_t x200 = 115154118340604902LLU;
	volatile uint64_t t49 = 520632365866LLU;

	t49 = (((x197|x198)<x199)|x200);

	if (t49 != 115154118340604903LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MAX;
	uint64_t x202 = UINT64_MAX;
	int8_t x204 = INT8_MAX;

	t50 = (((x201|x202)<x203)|x204);

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t t51 = 10;

	t51 = (((x205|x206)<x207)|x208);

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 152;
	uint8_t x210 = 1U;
	volatile int64_t x211 = INT64_MIN;
	uint64_t x212 = 78321LLU;
	uint64_t t52 = 451917105728087LLU;

	t52 = (((x209|x210)<x211)|x212);

	if (t52 != 78321LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x215 = INT32_MIN;
	int32_t x216 = 0;
	volatile int32_t t53 = 17;

	t53 = (((x213|x214)<x215)|x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x217 = UINT8_MAX;
	static volatile uint8_t x218 = 5U;
	int8_t x219 = -1;
	int32_t x220 = -1;
	volatile int32_t t54 = -2288870;

	t54 = (((x217|x218)<x219)|x220);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MAX;
	int8_t x222 = 3;
	int32_t x223 = INT32_MIN;
	uint32_t x224 = 98U;
	uint32_t t55 = 0U;

	t55 = (((x221|x222)<x223)|x224);

	if (t55 != 98U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x226 = UINT64_MAX;
	static uint32_t x227 = 5709196U;
	uint8_t x228 = UINT8_MAX;
	int32_t t56 = 320;

	t56 = (((x225|x226)<x227)|x228);

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x231 = 764;
	volatile uint8_t x232 = 28U;
	int32_t t57 = 66374517;

	t57 = (((x229|x230)<x231)|x232);

	if (t57 != 28) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = -178755482LL;
	volatile int8_t x235 = INT8_MIN;
	int64_t x236 = 509071LL;
	volatile int64_t t58 = -1137379334846775061LL;

	t58 = (((x233|x234)<x235)|x236);

	if (t58 != 509071LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 128516U;
	int64_t x238 = INT64_MIN;
	uint32_t x239 = 12U;
	int32_t t59 = 28;

	t59 = (((x237|x238)<x239)|x240);

	if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = INT16_MAX;
	int64_t x242 = INT64_MIN;
	int64_t x244 = INT64_MAX;
	int64_t t60 = INT64_MAX;

	t60 = (((x241|x242)<x243)|x244);

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	volatile int64_t x246 = INT64_MIN;
	int32_t x247 = -1;
	int32_t t61 = -5402;

	t61 = (((x245|x246)<x247)|x248);

	if (t61 != 53) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 1U;
	int64_t x250 = INT64_MIN;
	int8_t x251 = INT8_MIN;
	static uint8_t x252 = 14U;
	volatile int32_t t62 = -26115806;

	t62 = (((x249|x250)<x251)|x252);

	if (t62 != 15) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 7U;
	uint64_t x254 = UINT64_MAX;
	int8_t x255 = -1;
	int8_t x256 = INT8_MAX;
	static int32_t t63 = 85880906;

	t63 = (((x253|x254)<x255)|x256);

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 3759540900834050LLU;
	uint32_t x258 = UINT32_MAX;
	uint32_t t64 = 774U;

	t64 = (((x257|x258)<x259)|x260);

	if (t64 != 489973U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -1;
	uint16_t x262 = 3316U;
	int64_t x263 = -1LL;
	int32_t t65 = 785198;

	t65 = (((x261|x262)<x263)|x264);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -1736;
	int32_t x266 = 6455;
	uint32_t x267 = 7769U;

	t66 = (((x265|x266)<x267)|x268);

	if (t66 != 3820) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 1001767985U;
	int64_t x270 = INT64_MIN;
	uint16_t x271 = 2283U;
	static volatile int32_t t67 = 21;

	t67 = (((x269|x270)<x271)|x272);

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = INT32_MAX;
	static uint8_t x274 = 3U;
	volatile uint16_t x275 = UINT16_MAX;
	uint64_t t68 = UINT64_MAX;

	t68 = (((x273|x274)<x275)|x276);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = INT32_MIN;
	int64_t x278 = -1LL;
	static volatile int16_t x279 = INT16_MAX;
	uint64_t x280 = 13202527602LLU;
	static volatile uint64_t t69 = 26021791821LLU;

	t69 = (((x277|x278)<x279)|x280);

	if (t69 != 13202527603LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	int8_t x282 = -1;
	static volatile int32_t x283 = 405230356;
	uint8_t x284 = 19U;
	static int32_t t70 = 10;

	t70 = (((x281|x282)<x283)|x284);

	if (t70 != 19) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = INT64_MIN;

	t71 = (((x285|x286)<x287)|x288);

	if (t71 != -1421) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = UINT32_MAX;
	uint64_t x290 = UINT64_MAX;
	int8_t x291 = INT8_MIN;
	static int32_t x292 = INT32_MIN;
	volatile int32_t t72 = INT32_MIN;

	t72 = (((x289|x290)<x291)|x292);

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = INT32_MIN;
	uint32_t x296 = UINT32_MAX;
	volatile uint32_t t73 = UINT32_MAX;

	t73 = (((x293|x294)<x295)|x296);

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = UINT32_MAX;
	int32_t x298 = -2411436;
	int8_t x299 = 26;
	volatile int8_t x300 = 1;
	int32_t t74 = 1059658724;

	t74 = (((x297|x298)<x299)|x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x303 = INT16_MIN;
	int16_t x304 = INT16_MIN;
	volatile int32_t t75 = -194923631;

	t75 = (((x301|x302)<x303)|x304);

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = 79322792;
	int32_t x306 = -1;
	int32_t x307 = -256395;
	static uint64_t t76 = 97LLU;

	t76 = (((x305|x306)<x307)|x308);

	if (t76 != 1952284570063788687LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 124U;
	int16_t x310 = INT16_MAX;
	int8_t x311 = INT8_MIN;
	int32_t t77 = 659918947;

	t77 = (((x309|x310)<x311)|x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 26734U;
	static int64_t x314 = INT64_MIN;
	int16_t x315 = INT16_MIN;
	uint32_t t78 = UINT32_MAX;

	t78 = (((x313|x314)<x315)|x316);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -656109992625107516LL;
	static int16_t x318 = INT16_MIN;
	int64_t x319 = -1LL;
	int16_t x320 = -1;
	volatile int32_t t79 = -73242164;

	t79 = (((x317|x318)<x319)|x320);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MAX;
	uint32_t x322 = UINT32_MAX;
	volatile int32_t x323 = INT32_MIN;
	static uint16_t x324 = 1959U;
	int32_t t80 = 37919121;

	t80 = (((x321|x322)<x323)|x324);

	if (t80 != 1959) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x326 = 541917LLU;
	volatile int16_t x327 = INT16_MIN;
	int8_t x328 = -1;
	int32_t t81 = 1;

	t81 = (((x325|x326)<x327)|x328);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x330 = 2530511666712043063LLU;
	volatile int64_t x331 = 232273411LL;
	volatile int8_t x332 = -1;
	int32_t t82 = 2771;

	t82 = (((x329|x330)<x331)|x332);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = INT16_MIN;
	uint8_t x334 = UINT8_MAX;
	int32_t x336 = -1;

	t83 = (((x333|x334)<x335)|x336);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1;
	volatile uint16_t x339 = UINT16_MAX;
	static volatile int64_t x340 = INT64_MAX;
	volatile int64_t t84 = INT64_MAX;

	t84 = (((x337|x338)<x339)|x340);

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	int64_t x342 = INT64_MAX;
	volatile int8_t x343 = INT8_MAX;
	uint16_t x344 = UINT16_MAX;

	t85 = (((x341|x342)<x343)|x344);

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -1;
	uint16_t x346 = 10U;
	int32_t x347 = 1;
	static int32_t x348 = -15836865;
	int32_t t86 = 322878;

	t86 = (((x345|x346)<x347)|x348);

	if (t86 != -15836865) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x351 = 160U;
	int32_t x352 = -178758132;
	int32_t t87 = -235;

	t87 = (((x349|x350)<x351)|x352);

	if (t87 != -178758131) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x353 = -1LL;
	uint8_t x354 = 52U;

	t88 = (((x353|x354)<x355)|x356);

	if (t88 != 12199723LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = UINT16_MAX;
	uint64_t x359 = UINT64_MAX;
	int16_t x360 = 2718;
	int32_t t89 = 23609;

	t89 = (((x357|x358)<x359)|x360);

	if (t89 != 2719) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = INT64_MAX;
	uint64_t x364 = 108502580LLU;
	uint64_t t90 = 822114348813296168LLU;

	t90 = (((x361|x362)<x363)|x364);

	if (t90 != 108502580LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = 623U;
	static uint16_t x366 = 49U;
	int8_t x367 = INT8_MAX;
	int8_t x368 = INT8_MIN;
	volatile int32_t t91 = 6;

	t91 = (((x365|x366)<x367)|x368);

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x371 = -1LL;
	uint64_t x372 = 113LLU;
	static uint64_t t92 = 768LLU;

	t92 = (((x369|x370)<x371)|x372);

	if (t92 != 113LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x373 = UINT8_MAX;
	static int16_t x374 = -105;
	int8_t x375 = INT8_MAX;
	int8_t x376 = INT8_MAX;
	volatile int32_t t93 = 103212;

	t93 = (((x373|x374)<x375)|x376);

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MAX;
	volatile uint16_t x378 = UINT16_MAX;
	int64_t x379 = INT64_MIN;
	volatile int8_t x380 = 62;
	int32_t t94 = -988716;

	t94 = (((x377|x378)<x379)|x380);

	if (t94 != 62) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x382 = UINT64_MAX;
	volatile int64_t x383 = -1LL;
	uint64_t x384 = 36449585117LLU;

	t95 = (((x381|x382)<x383)|x384);

	if (t95 != 36449585117LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	uint64_t x386 = 1530240LLU;
	int8_t x387 = INT8_MAX;
	static volatile int32_t t96 = -79555309;

	t96 = (((x385|x386)<x387)|x388);

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = INT8_MAX;
	int64_t x390 = 1499100643480026LL;
	uint8_t x391 = 2U;

	t97 = (((x389|x390)<x391)|x392);

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MAX;
	int16_t x394 = INT16_MIN;
	static int32_t x395 = -1;
	int64_t x396 = INT64_MIN;
	volatile int64_t t98 = INT64_MIN;

	t98 = (((x393|x394)<x395)|x396);

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = INT16_MIN;
	int32_t x398 = -1;
	static int64_t x399 = INT64_MAX;
	static int8_t x400 = -46;
	int32_t t99 = 1;

	t99 = (((x397|x398)<x399)|x400);

	if (t99 != -45) { NG(); } else { ; }
	
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

