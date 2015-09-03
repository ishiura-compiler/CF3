#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = -1;
static int64_t x13 = 0LL;
static uint8_t x14 = 3U;
volatile int32_t x16 = INT32_MAX;
uint16_t x25 = UINT16_MAX;
int8_t x29 = -2;
uint64_t x46 = UINT64_MAX;
static int32_t x47 = INT32_MIN;
volatile int16_t x52 = -3151;
static volatile int16_t x59 = 226;
static int32_t t15 = -13;
int32_t x70 = 2153;
static int64_t x72 = INT64_MIN;
int64_t x82 = -1LL;
int8_t x89 = INT8_MIN;
volatile int64_t x98 = 121850464LL;
uint8_t x99 = 54U;
uint8_t x100 = 1U;
static volatile int32_t x101 = INT32_MAX;
int8_t x102 = -1;
int16_t x103 = INT16_MIN;
volatile int32_t t24 = 85520;
int32_t x107 = -1;
int64_t x112 = INT64_MIN;
int64_t t26 = 22LL;
int16_t x113 = INT16_MIN;
uint32_t t28 = 9U;
int64_t x123 = INT64_MAX;
volatile int32_t t29 = -430987785;
static volatile uint64_t x129 = 2500LLU;
uint16_t x131 = UINT16_MAX;
volatile uint16_t x136 = 5763U;
int64_t x138 = -239987841355476764LL;
uint32_t x150 = 915711824U;
volatile uint8_t x153 = 57U;
volatile uint16_t x155 = UINT16_MAX;
int32_t x156 = INT32_MIN;
static int32_t t37 = -652;
int16_t x159 = INT16_MAX;
uint16_t x168 = 7U;
int32_t t40 = -55371;
int16_t x172 = INT16_MIN;
uint8_t x175 = UINT8_MAX;
int16_t x180 = INT16_MAX;
int16_t x184 = -1;
int32_t t45 = -2;
volatile int32_t t46 = -14;
volatile int32_t t47 = 1;
int8_t x202 = INT8_MAX;
int8_t x204 = 46;
int32_t t49 = 49;
uint8_t x213 = 0U;
volatile uint32_t x214 = 189U;
uint64_t x215 = 867260LLU;
volatile int32_t t52 = 1;
int16_t x218 = -1;
static volatile int32_t t53 = INT32_MIN;
volatile int8_t x228 = 0;
volatile int32_t x229 = INT32_MAX;
int32_t x233 = INT32_MIN;
int64_t x239 = INT64_MIN;
int16_t x241 = INT16_MIN;
volatile int32_t t59 = -1;
int8_t x250 = 0;
static int8_t x251 = INT8_MIN;
static int16_t x252 = INT16_MIN;
uint64_t x263 = 20LLU;
int32_t x265 = -1;
static uint16_t x273 = 1390U;
uint16_t x276 = 2972U;
uint64_t x277 = UINT64_MAX;
int16_t x278 = INT16_MIN;
int64_t x284 = -3952819LL;
int16_t x290 = -1;
uint8_t x304 = 126U;
static int16_t x306 = INT16_MIN;
volatile int16_t x308 = INT16_MIN;
volatile int32_t t76 = INT32_MIN;
volatile uint32_t x316 = 42376U;
int64_t t80 = INT64_MIN;
int8_t x331 = 4;
uint64_t x335 = 1178832926LLU;
static int32_t t83 = 0;
static volatile uint32_t x341 = 125579170U;
volatile uint64_t t85 = 9275576LLU;
uint64_t x357 = 8636145287LLU;
static int8_t x361 = 1;
int32_t t89 = 976;
static int64_t x372 = INT64_MIN;
int32_t t95 = 11;
volatile int32_t t96 = 0;
int64_t x393 = 10909821LL;
int16_t x396 = 5;
static volatile int32_t t98 = 491302;
int32_t t99 = -57;


void f0(void) {
	volatile uint32_t x1 = 151U;
	volatile int8_t x2 = 1;
	int16_t x3 = INT16_MAX;
	int8_t x4 = 3;
	volatile int32_t t0 = -5288170;

	t0 = (((x1&x2)<x3)+x4);

	if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MAX;
	volatile uint16_t x7 = UINT16_MAX;
	uint32_t x8 = 0U;
	uint32_t t1 = 6102U;

	t1 = (((x5&x6)<x7)+x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	uint64_t x10 = 2015221483878036229LLU;
	int64_t x11 = 28079LL;
	static uint16_t x12 = UINT16_MAX;
	static volatile int32_t t2 = -45043528;

	t2 = (((x9&x10)<x11)+x12);

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x15 = INT64_MIN;
	int32_t t3 = INT32_MAX;

	t3 = (((x13&x14)<x15)+x16);

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	uint64_t x18 = UINT64_MAX;
	uint64_t x19 = 28316267891LLU;
	static int32_t x20 = INT32_MAX;
	int32_t t4 = INT32_MAX;

	t4 = (((x17&x18)<x19)+x20);

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = -951;
	static int64_t x22 = INT64_MIN;
	static volatile uint64_t x23 = 121441318978329LLU;
	uint8_t x24 = 6U;
	int32_t t5 = -994;

	t5 = (((x21&x22)<x23)+x24);

	if (t5 != 6) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = 1792551600U;
	uint8_t x27 = 16U;
	volatile uint64_t x28 = 102498556406242LLU;
	volatile uint64_t t6 = 124LLU;

	t6 = (((x25&x26)<x27)+x28);

	if (t6 != 102498556406242LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x30 = 49U;
	static volatile int8_t x31 = -17;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -2;

	t7 = (((x29&x30)<x31)+x32);

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	volatile int16_t x34 = INT16_MIN;
	int32_t x35 = 72173425;
	volatile int8_t x36 = -1;
	volatile int32_t t8 = 0;

	t8 = (((x33&x34)<x35)+x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	int64_t x38 = -1LL;
	int64_t x39 = -180823686LL;
	volatile int32_t x40 = INT32_MIN;
	volatile int32_t t9 = INT32_MIN;

	t9 = (((x37&x38)<x39)+x40);

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int8_t x42 = -1;
	int8_t x43 = -44;
	uint16_t x44 = 141U;
	volatile int32_t t10 = -78;

	t10 = (((x41&x42)<x43)+x44);

	if (t10 != 142) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	int8_t x48 = -1;
	static volatile int32_t t11 = -95875323;

	t11 = (((x45&x46)<x47)+x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = 26993U;
	int8_t x50 = -1;
	int8_t x51 = INT8_MIN;
	volatile int32_t t12 = 91233435;

	t12 = (((x49&x50)<x51)+x52);

	if (t12 != -3151) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	volatile int16_t x54 = INT16_MAX;
	int32_t x55 = INT32_MIN;
	uint64_t x56 = 444179978628LLU;
	static uint64_t t13 = 1897159259365098971LLU;

	t13 = (((x53&x54)<x55)+x56);

	if (t13 != 444179978628LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 13U;
	int8_t x58 = -3;
	int8_t x60 = INT8_MAX;
	int32_t t14 = -25292559;

	t14 = (((x57&x58)<x59)+x60);

	if (t14 != 128) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	static int32_t x62 = INT32_MIN;
	static uint64_t x63 = 15099759115LLU;
	int8_t x64 = -2;

	t15 = (((x61&x62)<x63)+x64);

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x69 = INT8_MAX;
	static int32_t x71 = INT32_MIN;
	int64_t t16 = INT64_MIN;

	t16 = (((x69&x70)<x71)+x72);

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -1;
	int64_t x74 = 612918LL;
	int8_t x75 = -1;
	static int32_t x76 = -169;
	volatile int32_t t17 = -7394403;

	t17 = (((x73&x74)<x75)+x76);

	if (t17 != -169) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x77 = -174LL;
	volatile int32_t x78 = -1;
	volatile uint64_t x79 = 970LLU;
	uint64_t x80 = UINT64_MAX;
	uint64_t t18 = UINT64_MAX;

	t18 = (((x77&x78)<x79)+x80);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MAX;
	uint64_t x83 = 133867527LLU;
	int32_t x84 = -73181;
	volatile int32_t t19 = 423256638;

	t19 = (((x81&x82)<x83)+x84);

	if (t19 != -73181) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = -1;
	uint8_t x86 = 6U;
	int16_t x87 = INT16_MAX;
	int16_t x88 = INT16_MAX;
	int32_t t20 = 169728;

	t20 = (((x85&x86)<x87)+x88);

	if (t20 != 32768) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x90 = 63971221364571666LLU;
	static volatile int32_t x91 = INT32_MAX;
	uint32_t x92 = 1734U;
	static volatile uint32_t t21 = 14669220U;

	t21 = (((x89&x90)<x91)+x92);

	if (t21 != 1734U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x93 = INT32_MAX;
	static int8_t x94 = 3;
	int8_t x95 = INT8_MIN;
	int16_t x96 = 117;
	static volatile int32_t t22 = 29;

	t22 = (((x93&x94)<x95)+x96);

	if (t22 != 117) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = 319828457LLU;
	volatile int32_t t23 = -1;

	t23 = (((x97&x98)<x99)+x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x104 = 75U;

	t24 = (((x101&x102)<x103)+x104);

	if (t24 != 75) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = INT64_MIN;
	uint64_t x106 = 1022645LLU;
	volatile uint32_t x108 = 707U;
	uint32_t t25 = 139373097U;

	t25 = (((x105&x106)<x107)+x108);

	if (t25 != 708U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MIN;
	int16_t x110 = INT16_MIN;
	int8_t x111 = INT8_MIN;

	t26 = (((x109&x110)<x111)+x112);

	if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x114 = UINT16_MAX;
	uint8_t x115 = UINT8_MAX;
	int8_t x116 = INT8_MAX;
	int32_t t27 = -21;

	t27 = (((x113&x114)<x115)+x116);

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x117 = UINT8_MAX;
	static int8_t x118 = 53;
	static volatile int8_t x119 = INT8_MIN;
	static volatile uint32_t x120 = 6U;

	t28 = (((x117&x118)<x119)+x120);

	if (t28 != 6U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MIN;
	static uint64_t x122 = 0LLU;
	int16_t x124 = -1;

	t29 = (((x121&x122)<x123)+x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = INT32_MIN;
	int32_t x126 = -1;
	int32_t x127 = INT32_MIN;
	int16_t x128 = -214;
	int32_t t30 = -86;

	t30 = (((x125&x126)<x127)+x128);

	if (t30 != -214) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x130 = 3809144U;
	static int64_t x132 = INT64_MIN;
	volatile int64_t t31 = -13946579002LL;

	t31 = (((x129&x130)<x131)+x132);

	if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = INT16_MAX;
	volatile int32_t x134 = INT32_MIN;
	static int16_t x135 = 2577;
	volatile int32_t t32 = 21804340;

	t32 = (((x133&x134)<x135)+x136);

	if (t32 != 5764) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = 61;
	volatile int16_t x139 = -51;
	volatile int16_t x140 = INT16_MIN;
	int32_t t33 = 21809;

	t33 = (((x137&x138)<x139)+x140);

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -1;
	int8_t x142 = -1;
	static uint64_t x143 = UINT64_MAX;
	volatile uint16_t x144 = 2U;
	volatile int32_t t34 = 37524;

	t34 = (((x141&x142)<x143)+x144);

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = UINT8_MAX;
	uint16_t x146 = 2820U;
	int32_t x147 = INT32_MIN;
	int16_t x148 = -1;
	int32_t t35 = 196906;

	t35 = (((x145&x146)<x147)+x148);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x149 = INT32_MIN;
	static uint32_t x151 = 11859760U;
	uint8_t x152 = UINT8_MAX;
	volatile int32_t t36 = -28;

	t36 = (((x149&x150)<x151)+x152);

	if (t36 != 256) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x154 = INT64_MIN;

	t37 = (((x153&x154)<x155)+x156);

	if (t37 != -2147483647) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = INT32_MAX;
	uint16_t x158 = 29U;
	static uint64_t x160 = UINT64_MAX;
	uint64_t t38 = 16475264126574LLU;

	t38 = (((x157&x158)<x159)+x160);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = INT8_MAX;
	int16_t x162 = INT16_MAX;
	static int64_t x163 = 955163145346LL;
	int16_t x164 = -3460;
	int32_t t39 = -675;

	t39 = (((x161&x162)<x163)+x164);

	if (t39 != -3459) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x165 = 62U;
	int32_t x166 = INT32_MIN;
	int8_t x167 = INT8_MIN;

	t40 = (((x165&x166)<x167)+x168);

	if (t40 != 7) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = 14777U;
	int16_t x170 = -1;
	int64_t x171 = 7674481797LL;
	volatile int32_t t41 = 1916289;

	t41 = (((x169&x170)<x171)+x172);

	if (t41 != -32767) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = 921907LL;
	int64_t x174 = -1LL;
	uint32_t x176 = 3916168U;
	volatile uint32_t t42 = 144786700U;

	t42 = (((x173&x174)<x175)+x176);

	if (t42 != 3916168U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x177 = -112;
	int16_t x178 = 1;
	int32_t x179 = -13;
	volatile int32_t t43 = -28227947;

	t43 = (((x177&x178)<x179)+x180);

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x181 = 359U;
	static int16_t x182 = INT16_MIN;
	static int32_t x183 = 3;
	volatile int32_t t44 = -1;

	t44 = (((x181&x182)<x183)+x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = 1;
	volatile int8_t x186 = INT8_MAX;
	static int64_t x187 = 579771626861LL;
	uint8_t x188 = 0U;

	t45 = (((x185&x186)<x187)+x188);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = INT8_MAX;
	int32_t x190 = 15253798;
	static uint8_t x191 = 1U;
	static int16_t x192 = INT16_MIN;

	t46 = (((x189&x190)<x191)+x192);

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = INT32_MAX;
	int16_t x194 = INT16_MIN;
	uint32_t x195 = 1056084708U;
	int16_t x196 = INT16_MIN;

	t47 = (((x193&x194)<x195)+x196);

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = INT32_MIN;
	static uint32_t x198 = UINT32_MAX;
	int64_t x199 = INT64_MIN;
	uint32_t x200 = 2817459U;
	static volatile uint32_t t48 = 10695U;

	t48 = (((x197&x198)<x199)+x200);

	if (t48 != 2817459U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = -1;
	int32_t x203 = -1;

	t49 = (((x201&x202)<x203)+x204);

	if (t49 != 46) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x205 = 8U;
	volatile int64_t x206 = INT64_MIN;
	uint32_t x207 = 22105U;
	int8_t x208 = INT8_MIN;
	static volatile int32_t t50 = -13183;

	t50 = (((x205&x206)<x207)+x208);

	if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x209 = 29375070U;
	int32_t x210 = INT32_MIN;
	int64_t x211 = -353119324LL;
	static int16_t x212 = -7;
	static int32_t t51 = 0;

	t51 = (((x209&x210)<x211)+x212);

	if (t51 != -7) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x216 = UINT8_MAX;

	t52 = (((x213&x214)<x215)+x216);

	if (t52 != 256) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = 103637484133713603LL;
	static int64_t x219 = -1LL;
	int32_t x220 = INT32_MIN;

	t53 = (((x217&x218)<x219)+x220);

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x221 = -1;
	uint32_t x222 = 286886208U;
	uint16_t x223 = UINT16_MAX;
	uint64_t x224 = UINT64_MAX;
	uint64_t t54 = UINT64_MAX;

	t54 = (((x221&x222)<x223)+x224);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x225 = 57LLU;
	int16_t x226 = INT16_MIN;
	int32_t x227 = INT32_MIN;
	volatile int32_t t55 = -1090213;

	t55 = (((x225&x226)<x227)+x228);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x230 = -1;
	static uint64_t x231 = UINT64_MAX;
	int64_t x232 = -1LL;
	volatile int64_t t56 = 75139173558593LL;

	t56 = (((x229&x230)<x231)+x232);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x234 = INT8_MAX;
	int8_t x235 = -9;
	int8_t x236 = -44;
	volatile int32_t t57 = 481630;

	t57 = (((x233&x234)<x235)+x236);

	if (t57 != -44) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x237 = UINT16_MAX;
	int32_t x238 = 22399;
	static int64_t x240 = INT64_MIN;
	int64_t t58 = INT64_MIN;

	t58 = (((x237&x238)<x239)+x240);

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x242 = -1;
	int32_t x243 = 3767;
	uint16_t x244 = 2U;

	t59 = (((x241&x242)<x243)+x244);

	if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x245 = UINT8_MAX;
	uint8_t x246 = UINT8_MAX;
	static volatile int8_t x247 = INT8_MIN;
	int8_t x248 = 36;
	int32_t t60 = -78;

	t60 = (((x245&x246)<x247)+x248);

	if (t60 != 36) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x249 = -1;
	int32_t t61 = -14233;

	t61 = (((x249&x250)<x251)+x252);

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x253 = INT16_MAX;
	static int8_t x254 = INT8_MIN;
	static int32_t x255 = INT32_MIN;
	int32_t x256 = -130;
	volatile int32_t t62 = 3153;

	t62 = (((x253&x254)<x255)+x256);

	if (t62 != -130) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = -1;
	uint32_t x258 = 1792351U;
	uint8_t x259 = 0U;
	static int8_t x260 = INT8_MAX;
	volatile int32_t t63 = -2832;

	t63 = (((x257&x258)<x259)+x260);

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x261 = 536485671459831393LLU;
	volatile int64_t x262 = -1LL;
	int16_t x264 = -1;
	static volatile int32_t t64 = 1794;

	t64 = (((x261&x262)<x263)+x264);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x266 = INT16_MAX;
	int16_t x267 = INT16_MAX;
	static int16_t x268 = INT16_MIN;
	volatile int32_t t65 = 465446070;

	t65 = (((x265&x266)<x267)+x268);

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x269 = 52377U;
	int16_t x270 = 0;
	int8_t x271 = INT8_MIN;
	int64_t x272 = INT64_MIN;
	int64_t t66 = -115LL;

	t66 = (((x269&x270)<x271)+x272);

	if (t66 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x274 = INT32_MIN;
	int64_t x275 = -1LL;
	int32_t t67 = 0;

	t67 = (((x273&x274)<x275)+x276);

	if (t67 != 2972) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x279 = 33296901395506LLU;
	int8_t x280 = -26;
	volatile int32_t t68 = -76605;

	t68 = (((x277&x278)<x279)+x280);

	if (t68 != -26) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x281 = 1;
	volatile uint64_t x282 = UINT64_MAX;
	int16_t x283 = INT16_MIN;
	static volatile int64_t t69 = 15016839LL;

	t69 = (((x281&x282)<x283)+x284);

	if (t69 != -3952818LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = -1067;
	int64_t x286 = -1LL;
	volatile int8_t x287 = INT8_MIN;
	int16_t x288 = INT16_MIN;
	static volatile int32_t t70 = -583967376;

	t70 = (((x285&x286)<x287)+x288);

	if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = -7;
	int64_t x291 = INT64_MAX;
	static int16_t x292 = -376;
	static int32_t t71 = 1;

	t71 = (((x289&x290)<x291)+x292);

	if (t71 != -375) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = INT8_MAX;
	static uint16_t x294 = UINT16_MAX;
	volatile int8_t x295 = 1;
	int64_t x296 = -18490LL;
	volatile int64_t t72 = 232369449LL;

	t72 = (((x293&x294)<x295)+x296);

	if (t72 != -18490LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x297 = UINT64_MAX;
	int8_t x298 = INT8_MIN;
	int32_t x299 = 1091;
	static int8_t x300 = INT8_MIN;
	int32_t t73 = -4327;

	t73 = (((x297&x298)<x299)+x300);

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x301 = INT32_MIN;
	int16_t x302 = 996;
	int64_t x303 = -42LL;
	int32_t t74 = -2;

	t74 = (((x301&x302)<x303)+x304);

	if (t74 != 126) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = -1;
	int8_t x307 = INT8_MAX;
	int32_t t75 = 211;

	t75 = (((x305&x306)<x307)+x308);

	if (t75 != -32767) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x309 = -1;
	int16_t x310 = 1;
	int64_t x311 = INT64_MIN;
	volatile int32_t x312 = INT32_MIN;

	t76 = (((x309&x310)<x311)+x312);

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x313 = INT16_MIN;
	int32_t x314 = INT32_MIN;
	uint16_t x315 = 311U;
	uint32_t t77 = 7237688U;

	t77 = (((x313&x314)<x315)+x316);

	if (t77 != 42377U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x317 = INT16_MIN;
	volatile uint16_t x318 = UINT16_MAX;
	uint8_t x319 = UINT8_MAX;
	int16_t x320 = INT16_MAX;
	int32_t t78 = -224;

	t78 = (((x317&x318)<x319)+x320);

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x321 = INT64_MIN;
	static uint8_t x322 = UINT8_MAX;
	int8_t x323 = 21;
	static int64_t x324 = -42LL;
	int64_t t79 = 6580504651763LL;

	t79 = (((x321&x322)<x323)+x324);

	if (t79 != -41LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x325 = 3U;
	volatile int32_t x326 = -10212237;
	volatile int16_t x327 = -1;
	int64_t x328 = INT64_MIN;

	t80 = (((x325&x326)<x327)+x328);

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = -1;
	volatile int8_t x330 = INT8_MIN;
	int64_t x332 = -7699582880LL;
	static int64_t t81 = -5382466034705942LL;

	t81 = (((x329&x330)<x331)+x332);

	if (t81 != -7699582879LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x333 = 69U;
	volatile uint64_t x334 = 431441LLU;
	volatile int8_t x336 = -1;
	volatile int32_t t82 = 37057;

	t82 = (((x333&x334)<x335)+x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x337 = INT8_MAX;
	volatile int32_t x338 = -4756596;
	uint8_t x339 = UINT8_MAX;
	int32_t x340 = 118993;

	t83 = (((x337&x338)<x339)+x340);

	if (t83 != 118994) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x342 = INT16_MAX;
	uint64_t x343 = UINT64_MAX;
	int8_t x344 = INT8_MIN;
	int32_t t84 = -15638;

	t84 = (((x341&x342)<x343)+x344);

	if (t84 != -127) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x345 = INT32_MIN;
	volatile int64_t x346 = 274492201596684645LL;
	static int32_t x347 = INT32_MAX;
	uint64_t x348 = 5708765138LLU;

	t85 = (((x345&x346)<x347)+x348);

	if (t85 != 5708765138LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x349 = 560308181811LLU;
	static volatile int16_t x350 = -1;
	int16_t x351 = INT16_MIN;
	uint64_t x352 = 552359559129423301LLU;
	uint64_t t86 = 11094901LLU;

	t86 = (((x349&x350)<x351)+x352);

	if (t86 != 552359559129423302LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x353 = -1;
	volatile int32_t x354 = INT32_MIN;
	static int16_t x355 = -1;
	int32_t x356 = INT32_MIN;
	static volatile int32_t t87 = 12901464;

	t87 = (((x353&x354)<x355)+x356);

	if (t87 != -2147483647) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x358 = INT16_MIN;
	int64_t x359 = 59442LL;
	uint8_t x360 = 2U;
	static int32_t t88 = -1;

	t88 = (((x357&x358)<x359)+x360);

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x362 = INT64_MIN;
	volatile int64_t x363 = INT64_MIN;
	int16_t x364 = -1887;

	t89 = (((x361&x362)<x363)+x364);

	if (t89 != -1887) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x365 = 16220787650LLU;
	uint16_t x366 = UINT16_MAX;
	volatile uint8_t x367 = UINT8_MAX;
	volatile uint16_t x368 = 3U;
	volatile int32_t t90 = -51213;

	t90 = (((x365&x366)<x367)+x368);

	if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x369 = -1LL;
	volatile int64_t x370 = -1LL;
	volatile int16_t x371 = -48;
	int64_t t91 = INT64_MIN;

	t91 = (((x369&x370)<x371)+x372);

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = INT32_MIN;
	static uint32_t x374 = 12681737U;
	uint16_t x375 = 442U;
	uint16_t x376 = UINT16_MAX;
	static volatile int32_t t92 = 57;

	t92 = (((x373&x374)<x375)+x376);

	if (t92 != 65536) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x377 = INT16_MIN;
	int64_t x378 = -1LL;
	uint64_t x379 = 314907788630LLU;
	volatile int8_t x380 = 1;
	volatile int32_t t93 = -77;

	t93 = (((x377&x378)<x379)+x380);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x381 = 16U;
	int64_t x382 = INT64_MIN;
	volatile uint16_t x383 = 15128U;
	uint32_t x384 = 1929051754U;
	static uint32_t t94 = 799774592U;

	t94 = (((x381&x382)<x383)+x384);

	if (t94 != 1929051755U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x385 = -1025684131;
	int16_t x386 = 0;
	int32_t x387 = 1072;
	volatile int32_t x388 = -1;

	t95 = (((x385&x386)<x387)+x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x389 = 1677U;
	int8_t x390 = INT8_MIN;
	static int32_t x391 = INT32_MAX;
	static uint16_t x392 = UINT16_MAX;

	t96 = (((x389&x390)<x391)+x392);

	if (t96 != 65536) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x394 = INT64_MIN;
	static int16_t x395 = -2;
	volatile int32_t t97 = -39651217;

	t97 = (((x393&x394)<x395)+x396);

	if (t97 != 5) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x397 = UINT32_MAX;
	uint16_t x398 = 28U;
	int8_t x399 = 1;
	static volatile int16_t x400 = INT16_MAX;

	t98 = (((x397&x398)<x399)+x400);

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x401 = 248U;
	volatile uint32_t x402 = UINT32_MAX;
	int8_t x403 = INT8_MAX;
	int16_t x404 = INT16_MIN;

	t99 = (((x401&x402)<x403)+x404);

	if (t99 != -32768) { NG(); } else { ; }
	
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

