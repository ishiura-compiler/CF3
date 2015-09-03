#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x2 = -134274524237769915LL;
int8_t x8 = 39;
int16_t x9 = 2815;
static int8_t x10 = 0;
volatile uint16_t x13 = 1U;
int32_t x16 = 765015741;
volatile uint64_t t3 = 63626LLU;
static uint8_t x17 = 14U;
uint8_t x20 = UINT8_MAX;
uint32_t x29 = 13U;
int16_t x37 = 22;
int8_t x39 = INT8_MIN;
static int8_t x42 = -30;
volatile uint16_t x45 = 7U;
uint8_t x46 = 0U;
int32_t x56 = INT32_MIN;
uint64_t x59 = UINT64_MAX;
int8_t x77 = 20;
uint32_t x81 = 0U;
int64_t t18 = -11531523031872LL;
uint64_t x87 = 1LLU;
uint16_t x95 = UINT16_MAX;
uint16_t x96 = 751U;
static int64_t x102 = INT64_MAX;
int8_t x103 = 0;
volatile int64_t t22 = 4259025905LL;
int64_t x115 = INT64_MIN;
uint64_t x117 = UINT64_MAX;
uint8_t x118 = 1U;
int32_t x120 = INT32_MIN;
static int16_t x122 = INT16_MIN;
int8_t x132 = INT8_MAX;
int64_t t30 = -113571LL;
uint32_t x145 = UINT32_MAX;
int64_t x148 = INT64_MIN;
volatile int64_t t31 = 2384LL;
static uint8_t x149 = UINT8_MAX;
static volatile int32_t t32 = 1294904;
uint32_t x154 = 3U;
volatile int32_t x156 = -14184;
volatile uint32_t x157 = 13U;
int8_t x159 = -1;
volatile uint32_t t34 = 3U;
uint64_t t35 = 1864958551263LLU;
int8_t x170 = -6;
int8_t x174 = -1;
int32_t x175 = INT32_MIN;
static uint8_t x178 = UINT8_MAX;
volatile uint8_t x193 = UINT8_MAX;
uint64_t t40 = 317771151727890LLU;
uint8_t x197 = 3U;
int8_t x202 = -1;
uint16_t x212 = UINT16_MAX;
static uint32_t x220 = 405491078U;
int64_t t45 = 293481818836LL;
int64_t x226 = INT64_MAX;
static int16_t x227 = INT16_MIN;
int32_t x228 = INT32_MIN;
uint16_t x231 = 2788U;
uint16_t x237 = 7U;
int8_t x238 = INT8_MIN;
int16_t x239 = INT16_MIN;
uint16_t x250 = 100U;
int32_t x252 = INT32_MAX;
static int8_t x254 = INT8_MAX;
volatile int64_t x258 = -1LL;
uint32_t t54 = 190323U;
int16_t x275 = -1256;
int32_t x284 = 123240;
uint64_t x286 = UINT64_MAX;
int8_t x287 = -1;
int16_t x288 = INT16_MIN;
uint8_t x291 = UINT8_MAX;
int32_t x293 = INT32_MAX;
int16_t x297 = -3666;
static int16_t x299 = INT16_MIN;
static int64_t x306 = 1034615001376332341LL;
int64_t x307 = 30235325942717492LL;
int32_t x309 = -1;
static uint32_t x324 = 1243981881U;
static volatile uint32_t t66 = 2U;
volatile int32_t x346 = INT32_MIN;
uint64_t t69 = 105458181LLU;
int64_t x351 = INT64_MIN;
static int64_t x354 = -1LL;
static int64_t x366 = INT64_MIN;
int64_t x371 = -1LL;
uint64_t x373 = UINT64_MAX;
static volatile int8_t x375 = INT8_MIN;
volatile uint64_t t76 = 1819LLU;
static int8_t x377 = -1;
volatile int16_t x383 = INT16_MIN;
int32_t t78 = -4;
int32_t x388 = INT32_MIN;
int32_t x398 = 108321;
int32_t x405 = 60;
static uint32_t x407 = UINT32_MAX;
int16_t x410 = INT16_MAX;
int8_t x411 = -1;
volatile int64_t t85 = -42250848539445LL;
int16_t x417 = -1;
int32_t x429 = -30;
int8_t x432 = -29;
uint64_t x438 = 25LLU;
int16_t x440 = INT16_MAX;
int32_t x461 = INT32_MAX;
int32_t t98 = INT32_MAX;


void f0(void) {
	int16_t x1 = 0;
	static uint8_t x3 = 4U;
	static int64_t x4 = INT64_MAX;
	volatile int64_t t0 = -108LL;

	t0 = ((x1-x2)+(x3%x4));

	if (t0 != 134274524237769919LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 155359092U;
	uint32_t x6 = 1664U;
	int64_t x7 = -1LL;
	volatile int64_t t1 = 33803620014748134LL;

	t1 = ((x5-x6)+(x7%x8));

	if (t1 != 155357427LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x11 = 3629558;
	volatile int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -56876;

	t2 = ((x9-x10)+(x11%x12));

	if (t2 != 27893) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = 4U;
	uint64_t x15 = 3LLU;

	t3 = ((x13-x14)+(x15%x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 15015316012175417LLU;
	int32_t x19 = -371292048;
	uint64_t t4 = 108LLU;

	t4 = ((x17-x18)+(x19%x20));

	if (t4 != 18431728757697376150LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	int64_t x22 = -941656372607LL;
	uint16_t x23 = UINT16_MAX;
	static int64_t x24 = INT64_MIN;
	volatile int64_t t5 = 8128968257429LL;

	t5 = ((x21-x22)+(x23%x24));

	if (t5 != 941656438141LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x30 = -90383982;
	int64_t x31 = 925LL;
	uint64_t x32 = UINT64_MAX;
	uint64_t t6 = 711371668544733LLU;

	t6 = ((x29-x30)+(x31%x32));

	if (t6 != 90384920LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -178;
	static int8_t x34 = -1;
	int32_t x35 = -1;
	static uint8_t x36 = 62U;
	volatile int32_t t7 = 3;

	t7 = ((x33-x34)+(x35%x36));

	if (t7 != -178) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x38 = 1915070791LLU;
	volatile int32_t x40 = INT32_MIN;
	uint64_t t8 = 66482LLU;

	t8 = ((x37-x38)+(x39%x40));

	if (t8 != 18446744071794480719LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x41 = INT8_MIN;
	volatile uint16_t x43 = UINT16_MAX;
	volatile int16_t x44 = INT16_MAX;
	int32_t t9 = 849910664;

	t9 = ((x41-x42)+(x43%x44));

	if (t9 != -97) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x47 = -1640979;
	int8_t x48 = INT8_MAX;
	volatile int32_t t10 = -2;

	t10 = ((x45-x46)+(x47%x48));

	if (t10 != -5) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = 25U;
	int64_t x54 = -1LL;
	int32_t x55 = INT32_MAX;
	int64_t t11 = 40971LL;

	t11 = ((x53-x54)+(x55%x56));

	if (t11 != 2147483673LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MIN;
	static int64_t x58 = 1LL;
	uint16_t x60 = 1578U;
	uint64_t t12 = 38LLU;

	t12 = ((x57-x58)+(x59%x60));

	if (t12 != 18446744073709520002LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	volatile int32_t x62 = 371;
	uint32_t x63 = 17439155U;
	int16_t x64 = INT16_MIN;
	volatile uint32_t t13 = 2073933237U;

	t13 = ((x61-x62)+(x63%x64));

	if (t13 != 17406016U) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x65 = INT16_MIN;
	static int32_t x66 = 107929;
	int16_t x67 = INT16_MIN;
	int8_t x68 = INT8_MIN;
	int32_t t14 = 94492;

	t14 = ((x65-x66)+(x67%x68));

	if (t14 != -140697) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x69 = 7U;
	int32_t x70 = -1;
	volatile int8_t x71 = INT8_MIN;
	uint32_t x72 = 3939268U;
	uint32_t t15 = 23U;

	t15 = ((x69-x70)+(x71%x72));

	if (t15 != 1165056U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = -7305;
	static int8_t x74 = INT8_MIN;
	int64_t x75 = -1LL;
	static int8_t x76 = -1;
	volatile int64_t t16 = 17969994907619LL;

	t16 = ((x73-x74)+(x75%x76));

	if (t16 != -7177LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x78 = -1;
	int8_t x79 = 0;
	uint8_t x80 = 121U;
	volatile int32_t t17 = 919560440;

	t17 = ((x77-x78)+(x79%x80));

	if (t17 != 21) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x82 = 134U;
	int64_t x83 = INT64_MIN;
	int8_t x84 = -1;

	t18 = ((x81-x82)+(x83%x84));

	if (t18 != 4294967162LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = 5;
	int8_t x86 = -25;
	uint8_t x88 = 10U;
	static uint64_t t19 = 928988007LLU;

	t19 = ((x85-x86)+(x87%x88));

	if (t19 != 31LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = 4U;
	uint64_t x90 = UINT64_MAX;
	int32_t x91 = 251033132;
	uint64_t x92 = UINT64_MAX;
	volatile uint64_t t20 = 78192065151942LLU;

	t20 = ((x89-x90)+(x91%x92));

	if (t20 != 251033137LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MIN;
	int8_t x94 = INT8_MIN;
	static int32_t t21 = -3;

	t21 = ((x93-x94)+(x95%x96));

	if (t21 != -2147483322) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x101 = INT16_MAX;
	int64_t x104 = -79990057376LL;

	t22 = ((x101-x102)+(x103%x104));

	if (t22 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x109 = -264770688184LL;
	volatile int32_t x110 = INT32_MIN;
	int32_t x111 = INT32_MAX;
	uint8_t x112 = UINT8_MAX;
	static int64_t t23 = -829831564235LL;

	t23 = ((x109-x110)+(x111%x112));

	if (t23 != -262623204409LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = INT16_MAX;
	int16_t x114 = INT16_MAX;
	uint8_t x116 = 37U;
	volatile int64_t t24 = 109703166347LL;

	t24 = ((x113-x114)+(x115%x116));

	if (t24 != -6LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x119 = INT8_MIN;
	volatile uint64_t t25 = 66538335853LLU;

	t25 = ((x117-x118)+(x119%x120));

	if (t25 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x121 = UINT64_MAX;
	int32_t x123 = 16180652;
	volatile uint64_t x124 = UINT64_MAX;
	volatile uint64_t t26 = 5692696LLU;

	t26 = ((x121-x122)+(x123%x124));

	if (t26 != 16213419LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = -19;
	int8_t x126 = -3;
	int8_t x127 = INT8_MIN;
	static int16_t x128 = -1;
	static volatile int32_t t27 = -469117;

	t27 = ((x125-x126)+(x127%x128));

	if (t27 != -16) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MIN;
	int8_t x130 = INT8_MIN;
	static volatile int32_t x131 = 159187;
	int32_t t28 = 87;

	t28 = ((x129-x130)+(x131%x132));

	if (t28 != 56) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = 423;
	int8_t x134 = INT8_MIN;
	int16_t x135 = -1;
	int64_t x136 = INT64_MIN;
	volatile int64_t t29 = 4259057509805LL;

	t29 = ((x133-x134)+(x135%x136));

	if (t29 != 550LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x137 = 3U;
	static volatile uint8_t x138 = UINT8_MAX;
	uint32_t x139 = UINT32_MAX;
	static int64_t x140 = INT64_MIN;

	t30 = ((x137-x138)+(x139%x140));

	if (t30 != 8589934339LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x146 = -1862LL;
	int32_t x147 = 14;

	t31 = ((x145-x146)+(x147%x148));

	if (t31 != 4294969171LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x150 = 4U;
	int16_t x151 = 5;
	int8_t x152 = -1;

	t32 = ((x149-x150)+(x151%x152));

	if (t32 != 251) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x153 = -1;
	volatile int8_t x155 = INT8_MIN;
	static uint32_t t33 = 190U;

	t33 = ((x153-x154)+(x155%x156));

	if (t33 != 4294967164U) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x158 = INT32_MIN;
	uint32_t x160 = UINT32_MAX;

	t34 = ((x157-x158)+(x159%x160));

	if (t34 != 2147483661U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = INT16_MIN;
	static uint32_t x162 = UINT32_MAX;
	static int8_t x163 = INT8_MAX;
	uint64_t x164 = 4982LLU;

	t35 = ((x161-x162)+(x163%x164));

	if (t35 != 4294934656LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x169 = UINT8_MAX;
	uint16_t x171 = 13U;
	int16_t x172 = -1;
	int32_t t36 = 24;

	t36 = ((x169-x170)+(x171%x172));

	if (t36 != 261) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x173 = INT8_MIN;
	volatile int16_t x176 = INT16_MIN;
	static volatile int32_t t37 = 10382521;

	t37 = ((x173-x174)+(x175%x176));

	if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = -1;
	static int8_t x179 = INT8_MIN;
	volatile int8_t x180 = -1;
	static volatile int32_t t38 = 998262;

	t38 = ((x177-x178)+(x179%x180));

	if (t38 != -256) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x181 = INT32_MIN;
	uint32_t x182 = UINT32_MAX;
	int16_t x183 = INT16_MIN;
	static uint16_t x184 = 19914U;
	volatile uint32_t t39 = 1085623U;

	t39 = ((x181-x182)+(x183%x184));

	if (t39 != 2147470795U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x194 = 19614236LLU;
	static int8_t x195 = INT8_MAX;
	static int8_t x196 = INT8_MIN;

	t40 = ((x193-x194)+(x195%x196));

	if (t40 != 18446744073689937762LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x198 = 9U;
	static uint64_t x199 = 209882535597889082LLU;
	int16_t x200 = INT16_MIN;
	uint64_t t41 = 1434069395LLU;

	t41 = ((x197-x198)+(x199%x200));

	if (t41 != 209882539892856372LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x201 = 168490;
	volatile int8_t x203 = INT8_MIN;
	int16_t x204 = -863;
	int32_t t42 = -125789251;

	t42 = ((x201-x202)+(x203%x204));

	if (t42 != 168363) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x205 = INT8_MIN;
	static uint16_t x206 = 1U;
	static int32_t x207 = -1;
	int64_t x208 = -1LL;
	int64_t t43 = -441908LL;

	t43 = ((x205-x206)+(x207%x208));

	if (t43 != -129LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x209 = -12;
	static uint8_t x210 = 11U;
	int32_t x211 = -227583349;
	static int32_t t44 = -16592;

	t44 = ((x209-x210)+(x211%x212));

	if (t44 != -45852) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x217 = -1;
	int64_t x218 = 1246889367913LL;
	int16_t x219 = INT16_MAX;

	t45 = ((x217-x218)+(x219%x220));

	if (t45 != -1246889335147LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x221 = UINT8_MAX;
	volatile int16_t x222 = -640;
	volatile int32_t x223 = -1066972;
	uint32_t x224 = 72082652U;
	static volatile uint32_t t46 = 457U;

	t46 = ((x221-x222)+(x223%x224));

	if (t46 != 41024751U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x225 = INT64_MAX;
	volatile int64_t t47 = -685241741LL;

	t47 = ((x225-x226)+(x227%x228));

	if (t47 != -32768LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x229 = INT64_MIN;
	static volatile int64_t x230 = INT64_MIN;
	int16_t x232 = INT16_MIN;
	volatile int64_t t48 = 161174692LL;

	t48 = ((x229-x230)+(x231%x232));

	if (t48 != 2788LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x233 = 44U;
	static volatile int32_t x234 = 1;
	static int32_t x235 = INT32_MAX;
	int32_t x236 = 490304;
	int32_t t49 = -232320521;

	t49 = ((x233-x234)+(x235%x236));

	if (t49 != 442474) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x240 = 1;
	int32_t t50 = -739308;

	t50 = ((x237-x238)+(x239%x240));

	if (t50 != 135) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x249 = 15LL;
	uint16_t x251 = UINT16_MAX;
	static int64_t t51 = 85878LL;

	t51 = ((x249-x250)+(x251%x252));

	if (t51 != 65450LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x253 = 82;
	int8_t x255 = INT8_MIN;
	uint8_t x256 = 4U;
	volatile int32_t t52 = 146639527;

	t52 = ((x253-x254)+(x255%x256));

	if (t52 != -45) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x257 = -58613588;
	uint8_t x259 = UINT8_MAX;
	int64_t x260 = INT64_MAX;
	int64_t t53 = 73760352498LL;

	t53 = ((x257-x258)+(x259%x260));

	if (t53 != -58613332LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x261 = -1;
	int32_t x262 = INT32_MAX;
	volatile uint32_t x263 = 21U;
	volatile int16_t x264 = INT16_MAX;

	t54 = ((x261-x262)+(x263%x264));

	if (t54 != 2147483669U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x269 = -1;
	uint32_t x270 = UINT32_MAX;
	int16_t x271 = -1;
	uint32_t x272 = UINT32_MAX;
	static volatile uint32_t t55 = 258114623U;

	t55 = ((x269-x270)+(x271%x272));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x273 = INT16_MIN;
	uint32_t x274 = 31596U;
	volatile int16_t x276 = INT16_MIN;
	uint32_t t56 = 74576U;

	t56 = ((x273-x274)+(x275%x276));

	if (t56 != 4294901676U) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x281 = INT32_MIN;
	int32_t x282 = INT32_MIN;
	int32_t x283 = INT32_MIN;
	int32_t t57 = -61000;

	t57 = ((x281-x282)+(x283%x284));

	if (t57 != -26648) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x285 = INT32_MIN;
	volatile uint64_t t58 = 1671LLU;

	t58 = ((x285-x286)+(x287%x288));

	if (t58 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x289 = 1834U;
	volatile int16_t x290 = -5;
	uint32_t x292 = 662915298U;
	uint32_t t59 = 16U;

	t59 = ((x289-x290)+(x291%x292));

	if (t59 != 2094U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x294 = 2905U;
	int32_t x295 = -26106;
	int32_t x296 = -734582;
	static volatile int32_t t60 = 1501199;

	t60 = ((x293-x294)+(x295%x296));

	if (t60 != 2147454636) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x298 = UINT8_MAX;
	int32_t x300 = 1285559;
	static volatile int32_t t61 = 0;

	t61 = ((x297-x298)+(x299%x300));

	if (t61 != -36689) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x301 = -1;
	uint64_t x302 = 55380621624975LLU;
	int32_t x303 = INT32_MIN;
	int16_t x304 = INT16_MIN;
	uint64_t t62 = 15610LLU;

	t62 = ((x301-x302)+(x303%x304));

	if (t62 != 18446688693087926640LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x305 = 27224893LL;
	int64_t x308 = INT64_MIN;
	volatile int64_t t63 = -3639LL;

	t63 = ((x305-x306)+(x307%x308));

	if (t63 != -1004379675406389956LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x310 = 14U;
	int8_t x311 = -15;
	uint16_t x312 = UINT16_MAX;
	int32_t t64 = 0;

	t64 = ((x309-x310)+(x311%x312));

	if (t64 != -30) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x321 = 3690;
	volatile int8_t x322 = INT8_MIN;
	int32_t x323 = -1;
	uint32_t t65 = 3555258U;

	t65 = ((x321-x322)+(x323%x324));

	if (t65 != 563025470U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x325 = INT8_MIN;
	uint16_t x326 = UINT16_MAX;
	uint16_t x327 = UINT16_MAX;
	uint32_t x328 = 367503289U;

	t66 = ((x325-x326)+(x327%x328));

	if (t66 != 4294967168U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x333 = INT64_MAX;
	static int16_t x334 = 0;
	static volatile int8_t x335 = INT8_MAX;
	uint64_t x336 = UINT64_MAX;
	uint64_t t67 = 19094984LLU;

	t67 = ((x333-x334)+(x335%x336));

	if (t67 != 9223372036854775934LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x341 = INT16_MAX;
	int64_t x342 = INT64_MAX;
	uint8_t x343 = 21U;
	uint32_t x344 = 43780517U;
	volatile int64_t t68 = 131484743732634227LL;

	t68 = ((x341-x342)+(x343%x344));

	if (t68 != -9223372036854743019LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x345 = UINT64_MAX;
	static uint8_t x347 = 3U;
	volatile uint64_t x348 = 88013325630LLU;

	t69 = ((x345-x346)+(x347%x348));

	if (t69 != 2147483650LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x349 = -3735;
	int32_t x350 = 1042495658;
	static uint8_t x352 = 75U;
	static int64_t t70 = -1190438968002LL;

	t70 = ((x349-x350)+(x351%x352));

	if (t70 != -1042499401LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x353 = 7842;
	static volatile int64_t x355 = -19LL;
	int64_t x356 = INT64_MAX;
	volatile int64_t t71 = -2711332267622003LL;

	t71 = ((x353-x354)+(x355%x356));

	if (t71 != 7824LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x357 = -1;
	int16_t x358 = 1837;
	int16_t x359 = INT16_MAX;
	static int32_t x360 = -688050363;
	int32_t t72 = 29817879;

	t72 = ((x357-x358)+(x359%x360));

	if (t72 != 30929) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x361 = 1U;
	static volatile uint64_t x362 = UINT64_MAX;
	static volatile int16_t x363 = -1;
	volatile uint16_t x364 = 2528U;
	uint64_t t73 = 1275LLU;

	t73 = ((x361-x362)+(x363%x364));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x365 = INT64_MIN;
	static uint64_t x367 = 14266LLU;
	static volatile int8_t x368 = INT8_MIN;
	volatile uint64_t t74 = 15417404643LLU;

	t74 = ((x365-x366)+(x367%x368));

	if (t74 != 14266LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x369 = -1;
	int64_t x370 = -1LL;
	volatile int32_t x372 = 5201698;
	volatile int64_t t75 = 3127LL;

	t75 = ((x369-x370)+(x371%x372));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x374 = -1;
	static uint8_t x376 = UINT8_MAX;

	t76 = ((x373-x374)+(x375%x376));

	if (t76 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x378 = INT8_MIN;
	int64_t x379 = INT64_MIN;
	volatile int16_t x380 = 143;
	volatile int64_t t77 = -31LL;

	t77 = ((x377-x378)+(x379%x380));

	if (t77 != 119LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x381 = INT16_MAX;
	int16_t x382 = INT16_MIN;
	int32_t x384 = INT32_MIN;

	t78 = ((x381-x382)+(x383%x384));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x385 = INT16_MIN;
	uint32_t x386 = 9685200U;
	uint16_t x387 = UINT16_MAX;
	static volatile uint32_t t79 = 33546168U;

	t79 = ((x385-x386)+(x387%x388));

	if (t79 != 4285314863U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x389 = -1;
	volatile uint64_t x390 = 4687LLU;
	int64_t x391 = 1117408LL;
	int32_t x392 = 107;
	uint64_t t80 = 1263393234LLU;

	t80 = ((x389-x390)+(x391%x392));

	if (t80 != 18446744073709546935LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x393 = INT8_MAX;
	static int32_t x394 = -1;
	static uint16_t x395 = UINT16_MAX;
	static uint32_t x396 = UINT32_MAX;
	static volatile uint32_t t81 = 8553117U;

	t81 = ((x393-x394)+(x395%x396));

	if (t81 != 65663U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x397 = 0;
	uint64_t x399 = UINT64_MAX;
	int16_t x400 = -165;
	volatile uint64_t t82 = 54LLU;

	t82 = ((x397-x398)+(x399%x400));

	if (t82 != 18446744073709443459LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x401 = -1;
	int8_t x402 = -1;
	uint8_t x403 = 112U;
	int64_t x404 = INT64_MAX;
	volatile int64_t t83 = 837LL;

	t83 = ((x401-x402)+(x403%x404));

	if (t83 != 112LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x406 = 42580574U;
	volatile int64_t x408 = -1LL;
	int64_t t84 = -7993082214LL;

	t84 = ((x405-x406)+(x407%x408));

	if (t84 != 4252386782LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x409 = UINT8_MAX;
	int64_t x412 = -61166605641LL;

	t85 = ((x409-x410)+(x411%x412));

	if (t85 != -32513LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x413 = INT8_MAX;
	volatile uint16_t x414 = 10278U;
	int16_t x415 = INT16_MAX;
	int8_t x416 = INT8_MIN;
	volatile int32_t t86 = 21619905;

	t86 = ((x413-x414)+(x415%x416));

	if (t86 != -10024) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x418 = INT8_MIN;
	uint32_t x419 = 1U;
	int16_t x420 = INT16_MIN;
	uint32_t t87 = 250029U;

	t87 = ((x417-x418)+(x419%x420));

	if (t87 != 128U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x421 = -1LL;
	int32_t x422 = INT32_MAX;
	volatile uint16_t x423 = UINT16_MAX;
	static uint8_t x424 = UINT8_MAX;
	static int64_t t88 = 6LL;

	t88 = ((x421-x422)+(x423%x424));

	if (t88 != -2147483648LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x430 = 9;
	volatile uint16_t x431 = UINT16_MAX;
	static volatile int32_t t89 = 1713563;

	t89 = ((x429-x430)+(x431%x432));

	if (t89 != -15) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x433 = 7254;
	static volatile uint64_t x434 = UINT64_MAX;
	int8_t x435 = INT8_MIN;
	volatile int32_t x436 = INT32_MAX;
	volatile uint64_t t90 = 937505LLU;

	t90 = ((x433-x434)+(x435%x436));

	if (t90 != 7127LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x437 = 30371LLU;
	static int64_t x439 = INT64_MIN;
	uint64_t t91 = 8LLU;

	t91 = ((x437-x438)+(x439%x440));

	if (t91 != 30338LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x441 = -1LL;
	volatile uint64_t x442 = 507751LLU;
	int64_t x443 = 15986LL;
	int64_t x444 = INT64_MIN;
	volatile uint64_t t92 = 3970LLU;

	t92 = ((x441-x442)+(x443%x444));

	if (t92 != 18446744073709059850LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x445 = 28U;
	int8_t x446 = -5;
	int64_t x447 = INT64_MAX;
	static volatile int8_t x448 = INT8_MIN;
	volatile int64_t t93 = -1LL;

	t93 = ((x445-x446)+(x447%x448));

	if (t93 != 160LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint8_t x453 = UINT8_MAX;
	uint32_t x454 = UINT32_MAX;
	uint64_t x455 = 126192604026LLU;
	int64_t x456 = INT64_MAX;
	static volatile uint64_t t94 = 61LLU;

	t94 = ((x453-x454)+(x455%x456));

	if (t94 != 126192604282LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x457 = 12415167U;
	static volatile uint64_t x458 = 1LLU;
	volatile int64_t x459 = INT64_MIN;
	int64_t x460 = -1LL;
	uint64_t t95 = 25957876698772LLU;

	t95 = ((x457-x458)+(x459%x460));

	if (t95 != 12415166LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x462 = UINT16_MAX;
	int32_t x463 = INT32_MAX;
	uint32_t x464 = UINT32_MAX;
	uint32_t t96 = 90883U;

	t96 = ((x461-x462)+(x463%x464));

	if (t96 != 4294901759U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x469 = INT16_MIN;
	volatile int32_t x470 = INT32_MIN;
	int32_t x471 = -1;
	int64_t x472 = 538421914995LL;
	static volatile int64_t t97 = 6568996338135LL;

	t97 = ((x469-x470)+(x471%x472));

	if (t97 != 2147450879LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x473 = -1;
	int32_t x474 = INT32_MIN;
	int8_t x475 = 0;
	volatile int8_t x476 = -1;

	t98 = ((x473-x474)+(x475%x476));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x477 = UINT32_MAX;
	volatile int16_t x478 = 11875;
	uint64_t x479 = UINT64_MAX;
	static int16_t x480 = 3618;
	uint64_t t99 = 239891396345238751LLU;

	t99 = ((x477-x478)+(x479%x480));

	if (t99 != 4294956173LLU) { NG(); } else { ; }
	
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

