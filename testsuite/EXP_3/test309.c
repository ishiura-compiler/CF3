#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = 14;
int32_t x11 = -1;
static volatile int64_t x20 = -1LL;
int64_t x23 = -4157217406LL;
static int16_t x29 = INT16_MAX;
int8_t x33 = INT8_MAX;
volatile int32_t x46 = INT32_MAX;
volatile int32_t t9 = 186524651;
static uint32_t x54 = 90112143U;
uint32_t x55 = 304894717U;
static volatile int32_t t10 = 62158039;
static int64_t x59 = INT64_MIN;
int16_t x61 = INT16_MIN;
int64_t x64 = 1344285869LL;
int8_t x75 = INT8_MIN;
volatile int32_t t13 = 806050;
static int32_t t16 = 3;
static uint64_t x102 = 2763839LLU;
volatile int32_t t18 = 13378;
int64_t x107 = -1LL;
static int32_t x111 = 56108148;
static int16_t x112 = -1;
volatile int16_t x119 = -1;
int8_t x121 = INT8_MAX;
int8_t x123 = 2;
uint32_t x124 = 180212U;
int32_t x125 = INT32_MAX;
int32_t x127 = INT32_MAX;
volatile int32_t t25 = -5206;
int64_t x138 = -128733879LL;
uint32_t x143 = 722U;
static int64_t x144 = 1LL;
uint32_t x147 = 1256U;
int8_t x149 = -1;
uint64_t x151 = UINT64_MAX;
uint8_t x152 = UINT8_MAX;
volatile int8_t x169 = INT8_MIN;
static int64_t x171 = 71759059118LL;
volatile int32_t t33 = 5;
uint32_t x175 = 102U;
uint8_t x176 = UINT8_MAX;
int8_t x181 = 1;
int16_t x187 = INT16_MIN;
int8_t x188 = INT8_MIN;
volatile uint64_t x191 = 2038885LLU;
int8_t x198 = -11;
int32_t t40 = -9347;
static int16_t x207 = INT16_MAX;
volatile int32_t t42 = -11716114;
uint32_t x226 = 16877U;
uint32_t x246 = 71138964U;
int8_t x248 = -1;
int32_t t51 = 4;
static int8_t x252 = -2;
uint16_t x253 = UINT16_MAX;
volatile int16_t x266 = INT16_MAX;
int64_t x269 = -4LL;
int64_t x270 = -1LL;
uint32_t x272 = UINT32_MAX;
uint16_t x274 = 3888U;
static volatile int64_t x275 = -1LL;
volatile int32_t t58 = -833088652;
static uint8_t x284 = UINT8_MAX;
int32_t x297 = -784;
volatile int32_t t63 = 14250209;
int64_t x302 = INT64_MIN;
volatile uint8_t x304 = 11U;
uint8_t x305 = 7U;
uint64_t x306 = 3949LLU;
static uint64_t x308 = UINT64_MAX;
int32_t t67 = -751840;
uint16_t x320 = UINT16_MAX;
uint8_t x322 = 13U;
uint16_t x323 = 461U;
int32_t t69 = -845793;
int8_t x328 = INT8_MAX;
int64_t x329 = -1LL;
int8_t x331 = INT8_MIN;
int16_t x342 = INT16_MIN;
int64_t x343 = -45566632LL;
uint8_t x346 = 23U;
int64_t x347 = -24212051LL;
uint64_t x358 = 3307726295LLU;
static int32_t x361 = 10629;
volatile int64_t x365 = INT64_MAX;
static int16_t x368 = -114;
volatile int32_t t80 = 11;
volatile int8_t x369 = INT8_MAX;
static int32_t x371 = -1;
int16_t x378 = INT16_MIN;
volatile int32_t t83 = -21;
int32_t x383 = -1;
static int64_t x384 = INT64_MIN;
static uint16_t x386 = 0U;
int32_t t85 = 619708533;
static int16_t x390 = 1;
int8_t x392 = INT8_MIN;
static int32_t x394 = INT32_MAX;
int8_t x398 = -2;
int16_t x399 = INT16_MAX;
uint64_t x402 = 10046524444279748LLU;
int8_t x404 = -1;
int32_t t89 = -16492759;
int32_t x411 = 1;
int8_t x412 = -11;
volatile int32_t x415 = INT32_MAX;
int32_t t92 = 0;
static volatile int16_t x419 = INT16_MIN;
uint32_t x420 = 29U;
uint16_t x438 = 1U;


void f0(void) {
	static int64_t x1 = -1LL;
	static int8_t x2 = INT8_MIN;
	uint8_t x3 = 6U;
	int32_t t0 = 76525112;

	t0 = ((x1&x2)<=(x3-x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = INT16_MIN;
	int32_t x6 = INT32_MAX;
	volatile uint8_t x7 = 8U;
	int16_t x8 = INT16_MIN;
	int32_t t1 = -11534;

	t1 = ((x5&x6)<=(x7-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MAX;
	static uint32_t x10 = UINT32_MAX;
	uint8_t x12 = 3U;
	volatile int32_t t2 = -9;

	t2 = ((x9&x10)<=(x11-x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint16_t x14 = 2U;
	int64_t x15 = 292164613477842LL;
	int64_t x16 = -10LL;
	int32_t t3 = -2903705;

	t3 = ((x13&x14)<=(x15-x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1538;
	uint64_t x18 = 59159132841311LLU;
	volatile int64_t x19 = 0LL;
	volatile int32_t t4 = -2883719;

	t4 = ((x17&x18)<=(x19-x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MAX;
	volatile int8_t x22 = INT8_MIN;
	int32_t x24 = -729527;
	int32_t t5 = -2002399;

	t5 = ((x21&x22)<=(x23-x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x30 = INT16_MAX;
	static volatile int8_t x31 = 0;
	volatile int8_t x32 = -1;
	volatile int32_t t6 = 95862;

	t6 = ((x29&x30)<=(x31-x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x34 = INT64_MIN;
	static volatile int32_t x35 = INT32_MAX;
	volatile uint64_t x36 = 14565221483569LLU;
	static int32_t t7 = -18107255;

	t7 = ((x33&x34)<=(x35-x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MIN;
	volatile uint16_t x42 = 1092U;
	volatile int16_t x43 = 0;
	volatile uint16_t x44 = 43U;
	static int32_t t8 = 0;

	t8 = ((x41&x42)<=(x43-x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MIN;
	int64_t x47 = 1631282773487LL;
	int16_t x48 = INT16_MIN;

	t9 = ((x45&x46)<=(x47-x48));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x53 = -784;
	static int8_t x56 = -1;

	t10 = ((x53&x54)<=(x55-x56));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x57 = INT64_MIN;
	static int8_t x58 = -1;
	int8_t x60 = -1;
	int32_t t11 = -205079;

	t11 = ((x57&x58)<=(x59-x60));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x62 = -1;
	static int32_t x63 = -1;
	static volatile int32_t t12 = -125068;

	t12 = ((x61&x62)<=(x63-x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x73 = INT16_MIN;
	int64_t x74 = -1LL;
	static int16_t x76 = INT16_MAX;

	t13 = ((x73&x74)<=(x75-x76));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x77 = 3290;
	int64_t x78 = INT64_MIN;
	int8_t x79 = -1;
	uint16_t x80 = UINT16_MAX;
	int32_t t14 = -693470119;

	t14 = ((x77&x78)<=(x79-x80));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x85 = 62833;
	int8_t x86 = -1;
	volatile int8_t x87 = INT8_MIN;
	int64_t x88 = INT64_MIN;
	static volatile int32_t t15 = 11631990;

	t15 = ((x85&x86)<=(x87-x88));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x89 = INT64_MAX;
	static volatile int64_t x90 = INT64_MIN;
	int8_t x91 = -55;
	int32_t x92 = -1;

	t16 = ((x89&x90)<=(x91-x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x93 = INT8_MAX;
	int64_t x94 = INT64_MAX;
	int16_t x95 = INT16_MAX;
	volatile int8_t x96 = -46;
	int32_t t17 = -2002;

	t17 = ((x93&x94)<=(x95-x96));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x101 = 409580129;
	int8_t x103 = INT8_MAX;
	static int32_t x104 = -27954;

	t18 = ((x101&x102)<=(x103-x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x105 = -1LL;
	volatile uint16_t x106 = 1U;
	int32_t x108 = INT32_MAX;
	volatile int32_t t19 = -17987;

	t19 = ((x105&x106)<=(x107-x108));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x109 = 171676784421904LLU;
	static int64_t x110 = -238025663LL;
	volatile int32_t t20 = -5599;

	t20 = ((x109&x110)<=(x111-x112));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x117 = -1;
	uint64_t x118 = 46688LLU;
	volatile uint8_t x120 = UINT8_MAX;
	int32_t t21 = -187877679;

	t21 = ((x117&x118)<=(x119-x120));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x122 = INT16_MIN;
	volatile int32_t t22 = -8;

	t22 = ((x121&x122)<=(x123-x124));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x126 = 1014763203008827LLU;
	volatile uint16_t x128 = 236U;
	volatile int32_t t23 = 8335287;

	t23 = ((x125&x126)<=(x127-x128));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x129 = INT16_MAX;
	volatile int8_t x130 = INT8_MIN;
	int64_t x131 = -1LL;
	int16_t x132 = -1;
	static int32_t t24 = -503582;

	t24 = ((x129&x130)<=(x131-x132));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x133 = INT32_MIN;
	int16_t x134 = INT16_MAX;
	uint32_t x135 = 176U;
	volatile int16_t x136 = -1;

	t25 = ((x133&x134)<=(x135-x136));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x137 = INT32_MIN;
	uint8_t x139 = UINT8_MAX;
	int64_t x140 = 8327259057858468LL;
	static int32_t t26 = -432795725;

	t26 = ((x137&x138)<=(x139-x140));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x141 = UINT8_MAX;
	uint8_t x142 = 11U;
	static volatile int32_t t27 = -1608;

	t27 = ((x141&x142)<=(x143-x144));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x145 = INT16_MIN;
	uint32_t x146 = 960817894U;
	int8_t x148 = INT8_MIN;
	static int32_t t28 = -488;

	t28 = ((x145&x146)<=(x147-x148));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x150 = INT16_MIN;
	static int32_t t29 = -149283396;

	t29 = ((x149&x150)<=(x151-x152));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x157 = INT8_MIN;
	int64_t x158 = 217728LL;
	uint64_t x159 = 5704578990593697833LLU;
	int16_t x160 = INT16_MIN;
	int32_t t30 = 1788356;

	t30 = ((x157&x158)<=(x159-x160));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x161 = INT32_MAX;
	static int32_t x162 = INT32_MAX;
	uint8_t x163 = UINT8_MAX;
	int32_t x164 = 84042;
	volatile int32_t t31 = -46258;

	t31 = ((x161&x162)<=(x163-x164));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x165 = INT64_MIN;
	static int64_t x166 = -1LL;
	int64_t x167 = 331511634LL;
	static volatile int32_t x168 = -1;
	static volatile int32_t t32 = -154537;

	t32 = ((x165&x166)<=(x167-x168));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x170 = 4030390U;
	int64_t x172 = INT64_MAX;

	t33 = ((x169&x170)<=(x171-x172));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x173 = 85U;
	volatile uint8_t x174 = UINT8_MAX;
	volatile int32_t t34 = -29;

	t34 = ((x173&x174)<=(x175-x176));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x177 = INT16_MIN;
	volatile int32_t x178 = -1;
	static int32_t x179 = INT32_MIN;
	static int64_t x180 = -1LL;
	volatile int32_t t35 = 96926;

	t35 = ((x177&x178)<=(x179-x180));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x182 = -1;
	static int64_t x183 = 882293742442885318LL;
	int16_t x184 = INT16_MIN;
	volatile int32_t t36 = -3848892;

	t36 = ((x181&x182)<=(x183-x184));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x185 = 0U;
	uint64_t x186 = UINT64_MAX;
	int32_t t37 = -32;

	t37 = ((x185&x186)<=(x187-x188));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x189 = INT64_MAX;
	int32_t x190 = INT32_MIN;
	static int64_t x192 = -864404804849LL;
	int32_t t38 = -604847215;

	t38 = ((x189&x190)<=(x191-x192));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x193 = INT8_MIN;
	int16_t x194 = -2;
	int32_t x195 = -1;
	int32_t x196 = -4238769;
	int32_t t39 = -87069;

	t39 = ((x193&x194)<=(x195-x196));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x197 = 4U;
	static volatile int8_t x199 = INT8_MIN;
	uint64_t x200 = 907794LLU;

	t40 = ((x197&x198)<=(x199-x200));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x205 = 62U;
	uint8_t x206 = UINT8_MAX;
	uint8_t x208 = UINT8_MAX;
	volatile int32_t t41 = 10;

	t41 = ((x205&x206)<=(x207-x208));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x209 = 113U;
	int16_t x210 = INT16_MIN;
	static uint8_t x211 = 4U;
	int8_t x212 = -1;

	t42 = ((x209&x210)<=(x211-x212));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x213 = -1;
	static int8_t x214 = 3;
	uint8_t x215 = 2U;
	static uint64_t x216 = 7LLU;
	static volatile int32_t t43 = -35793;

	t43 = ((x213&x214)<=(x215-x216));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x217 = INT16_MIN;
	static uint8_t x218 = UINT8_MAX;
	int16_t x219 = -1;
	int64_t x220 = INT64_MIN;
	volatile int32_t t44 = -105;

	t44 = ((x217&x218)<=(x219-x220));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x221 = -1;
	static uint16_t x222 = UINT16_MAX;
	int32_t x223 = INT32_MAX;
	static uint64_t x224 = 4642838299LLU;
	int32_t t45 = -39057235;

	t45 = ((x221&x222)<=(x223-x224));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x225 = -646726107;
	int16_t x227 = -2072;
	int16_t x228 = 11313;
	volatile int32_t t46 = 172089;

	t46 = ((x225&x226)<=(x227-x228));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint8_t x229 = 19U;
	volatile uint8_t x230 = UINT8_MAX;
	int8_t x231 = INT8_MAX;
	volatile int64_t x232 = -1LL;
	volatile int32_t t47 = 3;

	t47 = ((x229&x230)<=(x231-x232));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x233 = -424626124;
	static uint8_t x234 = UINT8_MAX;
	int8_t x235 = -1;
	static int8_t x236 = INT8_MIN;
	volatile int32_t t48 = 268677;

	t48 = ((x233&x234)<=(x235-x236));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x237 = INT8_MAX;
	int16_t x238 = INT16_MAX;
	int64_t x239 = INT64_MIN;
	volatile int8_t x240 = INT8_MIN;
	int32_t t49 = 0;

	t49 = ((x237&x238)<=(x239-x240));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x241 = 1027076778LLU;
	int16_t x242 = -1;
	int8_t x243 = 22;
	uint64_t x244 = 193LLU;
	int32_t t50 = 0;

	t50 = ((x241&x242)<=(x243-x244));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x245 = INT8_MIN;
	int16_t x247 = INT16_MIN;

	t51 = ((x245&x246)<=(x247-x248));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x249 = -1;
	int64_t x250 = -1827975156033641821LL;
	int32_t x251 = -3803;
	static volatile int32_t t52 = -55;

	t52 = ((x249&x250)<=(x251-x252));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x254 = -236;
	uint64_t x255 = 3LLU;
	int8_t x256 = INT8_MIN;
	volatile int32_t t53 = 17916;

	t53 = ((x253&x254)<=(x255-x256));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x257 = 3U;
	uint8_t x258 = 0U;
	static int8_t x259 = INT8_MAX;
	uint32_t x260 = 978076734U;
	int32_t t54 = -47790;

	t54 = ((x257&x258)<=(x259-x260));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x261 = -1;
	int8_t x262 = INT8_MIN;
	int16_t x263 = -1;
	static int64_t x264 = -1LL;
	volatile int32_t t55 = -489;

	t55 = ((x261&x262)<=(x263-x264));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x265 = INT64_MIN;
	uint16_t x267 = 1U;
	static volatile int8_t x268 = -29;
	int32_t t56 = 6;

	t56 = ((x265&x266)<=(x267-x268));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x271 = INT32_MIN;
	volatile int32_t t57 = -22;

	t57 = ((x269&x270)<=(x271-x272));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x273 = -1;
	int8_t x276 = 0;

	t58 = ((x273&x274)<=(x275-x276));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x281 = -1;
	int16_t x282 = INT16_MIN;
	int16_t x283 = 809;
	volatile int32_t t59 = 14578610;

	t59 = ((x281&x282)<=(x283-x284));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x285 = INT32_MIN;
	static volatile int32_t x286 = INT32_MIN;
	volatile int32_t x287 = -1;
	int32_t x288 = -1;
	static int32_t t60 = 83581269;

	t60 = ((x285&x286)<=(x287-x288));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x289 = INT8_MIN;
	int64_t x290 = -3856586644136273LL;
	static volatile uint8_t x291 = 86U;
	uint64_t x292 = 72288424943497110LLU;
	static volatile int32_t t61 = 338330;

	t61 = ((x289&x290)<=(x291-x292));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x293 = 21729U;
	uint32_t x294 = UINT32_MAX;
	uint64_t x295 = 99404444194LLU;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t62 = -144;

	t62 = ((x293&x294)<=(x295-x296));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x298 = 13U;
	int32_t x299 = 374;
	int8_t x300 = -5;

	t63 = ((x297&x298)<=(x299-x300));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x301 = INT16_MIN;
	uint8_t x303 = 43U;
	int32_t t64 = -1;

	t64 = ((x301&x302)<=(x303-x304));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x307 = INT64_MAX;
	volatile int32_t t65 = -26384;

	t65 = ((x305&x306)<=(x307-x308));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x309 = 263952509U;
	static volatile int8_t x310 = INT8_MIN;
	int8_t x311 = INT8_MIN;
	volatile int64_t x312 = 430670658501060104LL;
	volatile int32_t t66 = -26;

	t66 = ((x309&x310)<=(x311-x312));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x313 = INT16_MIN;
	uint32_t x314 = 62272918U;
	static uint8_t x315 = 10U;
	volatile int64_t x316 = 456863964974LL;

	t67 = ((x313&x314)<=(x315-x316));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x317 = 175770363LL;
	volatile uint16_t x318 = 7U;
	static uint64_t x319 = UINT64_MAX;
	volatile int32_t t68 = -346958594;

	t68 = ((x317&x318)<=(x319-x320));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x321 = 4905903LLU;
	int16_t x324 = 56;

	t69 = ((x321&x322)<=(x323-x324));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x325 = INT8_MIN;
	int32_t x326 = INT32_MIN;
	volatile int64_t x327 = -1LL;
	static int32_t t70 = 5923;

	t70 = ((x325&x326)<=(x327-x328));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x330 = UINT64_MAX;
	uint16_t x332 = 2032U;
	int32_t t71 = -350236;

	t71 = ((x329&x330)<=(x331-x332));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x333 = INT8_MIN;
	uint64_t x334 = UINT64_MAX;
	volatile uint64_t x335 = UINT64_MAX;
	int16_t x336 = INT16_MAX;
	static volatile int32_t t72 = 932;

	t72 = ((x333&x334)<=(x335-x336));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x337 = UINT8_MAX;
	uint16_t x338 = 706U;
	uint8_t x339 = UINT8_MAX;
	int16_t x340 = -36;
	int32_t t73 = 263643;

	t73 = ((x337&x338)<=(x339-x340));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x341 = INT32_MIN;
	int8_t x344 = 1;
	volatile int32_t t74 = 9;

	t74 = ((x341&x342)<=(x343-x344));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x345 = -1LL;
	int8_t x348 = -17;
	int32_t t75 = 0;

	t75 = ((x345&x346)<=(x347-x348));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x349 = -1;
	volatile int8_t x350 = INT8_MIN;
	volatile int16_t x351 = 15;
	static volatile int32_t x352 = 0;
	int32_t t76 = 378;

	t76 = ((x349&x350)<=(x351-x352));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x353 = 1880020114359LL;
	static int8_t x354 = INT8_MIN;
	int16_t x355 = -1269;
	int32_t x356 = 3230191;
	volatile int32_t t77 = 7544124;

	t77 = ((x353&x354)<=(x355-x356));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x357 = INT8_MAX;
	static int16_t x359 = -1;
	uint64_t x360 = UINT64_MAX;
	int32_t t78 = -2854679;

	t78 = ((x357&x358)<=(x359-x360));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x362 = 673U;
	uint64_t x363 = UINT64_MAX;
	volatile uint32_t x364 = 613205U;
	volatile int32_t t79 = -357;

	t79 = ((x361&x362)<=(x363-x364));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x366 = INT8_MIN;
	uint32_t x367 = 755019433U;

	t80 = ((x365&x366)<=(x367-x368));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x370 = 1447694024LLU;
	volatile int64_t x372 = -1LL;
	volatile int32_t t81 = -325;

	t81 = ((x369&x370)<=(x371-x372));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x373 = 1760U;
	int32_t x374 = -106418;
	int8_t x375 = INT8_MAX;
	int8_t x376 = INT8_MAX;
	int32_t t82 = 18435556;

	t82 = ((x373&x374)<=(x375-x376));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x377 = UINT32_MAX;
	uint8_t x379 = 20U;
	volatile int8_t x380 = 3;

	t83 = ((x377&x378)<=(x379-x380));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x381 = -12;
	int64_t x382 = -1LL;
	volatile int32_t t84 = 173422194;

	t84 = ((x381&x382)<=(x383-x384));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x385 = -1;
	uint64_t x387 = UINT64_MAX;
	uint64_t x388 = 48954LLU;

	t85 = ((x385&x386)<=(x387-x388));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x389 = INT8_MIN;
	uint64_t x391 = 1610547368LLU;
	static int32_t t86 = 2618;

	t86 = ((x389&x390)<=(x391-x392));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x393 = INT32_MAX;
	int64_t x395 = -761780912360978LL;
	int16_t x396 = INT16_MIN;
	int32_t t87 = -967145;

	t87 = ((x393&x394)<=(x395-x396));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x397 = -1;
	int32_t x400 = -1;
	volatile int32_t t88 = -15387086;

	t88 = ((x397&x398)<=(x399-x400));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x401 = INT32_MIN;
	int8_t x403 = -1;

	t89 = ((x401&x402)<=(x403-x404));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x405 = UINT16_MAX;
	int32_t x406 = -1;
	int32_t x407 = INT32_MAX;
	uint16_t x408 = UINT16_MAX;
	int32_t t90 = -550076;

	t90 = ((x405&x406)<=(x407-x408));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x409 = 5U;
	volatile int8_t x410 = -1;
	static volatile int32_t t91 = 275470437;

	t91 = ((x409&x410)<=(x411-x412));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x413 = -1;
	uint32_t x414 = 3426793U;
	volatile int64_t x416 = -1LL;

	t92 = ((x413&x414)<=(x415-x416));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x417 = INT32_MAX;
	static volatile int32_t x418 = -1;
	volatile int32_t t93 = -4;

	t93 = ((x417&x418)<=(x419-x420));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x421 = 890;
	uint32_t x422 = 2356U;
	int32_t x423 = 6838804;
	volatile int16_t x424 = -223;
	int32_t t94 = -792025;

	t94 = ((x421&x422)<=(x423-x424));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x425 = UINT64_MAX;
	int16_t x426 = -1;
	int32_t x427 = 13;
	int16_t x428 = INT16_MIN;
	int32_t t95 = 1;

	t95 = ((x425&x426)<=(x427-x428));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x429 = 3492504U;
	int32_t x430 = -1;
	static volatile int16_t x431 = -1;
	int32_t x432 = INT32_MIN;
	static int32_t t96 = -10606;

	t96 = ((x429&x430)<=(x431-x432));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x433 = -1LL;
	volatile uint8_t x434 = 112U;
	int16_t x435 = -44;
	uint16_t x436 = 252U;
	volatile int32_t t97 = 3;

	t97 = ((x433&x434)<=(x435-x436));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x437 = INT32_MAX;
	int64_t x439 = -1LL;
	static volatile uint8_t x440 = 1U;
	volatile int32_t t98 = -2348932;

	t98 = ((x437&x438)<=(x439-x440));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x441 = 4716U;
	static uint64_t x442 = 5008447099LLU;
	int64_t x443 = -1LL;
	uint32_t x444 = UINT32_MAX;
	volatile int32_t t99 = 195512254;

	t99 = ((x441&x442)<=(x443-x444));

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
