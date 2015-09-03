#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x4 = INT64_MIN;
int16_t x5 = -1;
static int32_t x6 = INT32_MIN;
int32_t t1 = 14923109;
volatile uint8_t x25 = 4U;
volatile int32_t x29 = -1;
int32_t t4 = -268;
int8_t x36 = INT8_MIN;
static uint64_t x43 = UINT64_MAX;
uint8_t x44 = UINT8_MAX;
volatile uint64_t t6 = UINT64_MAX;
static uint32_t t8 = 1625U;
uint64_t x53 = UINT64_MAX;
int8_t x54 = -38;
static int32_t x55 = -1;
volatile int8_t x56 = 2;
int16_t x58 = INT16_MAX;
int64_t t10 = -14895191LL;
int32_t x65 = 77932783;
volatile int32_t t12 = -14480;
int8_t x71 = INT8_MIN;
uint64_t x75 = 130164127704LLU;
volatile uint64_t t14 = 14940LLU;
int16_t x77 = -1;
uint64_t x83 = 10460401475958430LLU;
static int8_t x105 = INT8_MIN;
static int64_t x116 = 84853203050574786LL;
uint32_t x119 = 161339203U;
int64_t x124 = INT64_MIN;
int64_t t25 = -32522354727996LL;
int32_t x126 = -106033081;
int16_t x127 = INT16_MAX;
int64_t x137 = INT64_MIN;
int16_t x141 = -1;
volatile uint16_t x162 = 597U;
volatile int32_t x168 = INT32_MIN;
volatile uint16_t x175 = 0U;
static volatile int32_t t39 = 301612;
volatile int32_t t40 = 9;
static uint16_t x189 = 885U;
volatile uint8_t x204 = 8U;
volatile uint64_t t44 = 8577LLU;
volatile uint16_t x205 = 361U;
int8_t x211 = 0;
volatile int32_t x212 = -65125729;
uint32_t x213 = 3956U;
static int8_t x214 = -3;
int8_t x217 = -1;
int32_t t51 = 999395693;
static int8_t x234 = -43;
static volatile int32_t x241 = INT32_MAX;
uint32_t x242 = UINT32_MAX;
static uint16_t x245 = 38U;
static int64_t x246 = -1LL;
uint64_t x248 = 19447109910912794LLU;
uint32_t x251 = UINT32_MAX;
int8_t x264 = INT8_MIN;
uint64_t t57 = UINT64_MAX;
volatile int16_t x272 = INT16_MIN;
int32_t x273 = INT32_MAX;
int16_t x290 = INT16_MIN;
static uint64_t x292 = UINT64_MAX;
int8_t x297 = -1;
int64_t x298 = INT64_MAX;
int16_t x302 = INT16_MIN;
int8_t x312 = -3;
int8_t x313 = 1;
volatile uint64_t t69 = 61113076005LLU;
static int32_t x326 = 15292663;
uint64_t x329 = UINT64_MAX;
int16_t x334 = -128;
uint64_t t73 = 13970436620445103LLU;
int16_t x341 = INT16_MIN;
int32_t t76 = 3430;
uint32_t x357 = UINT32_MAX;
volatile int64_t x363 = -1LL;
uint64_t x368 = UINT64_MAX;
volatile uint64_t t79 = 360257LLU;
int64_t t80 = 1129381006LL;
uint32_t x376 = 3900U;
static volatile uint64_t x385 = 63517415LLU;
int64_t x386 = 9816318948LL;
uint64_t t85 = 64912620324LLU;
static uint32_t x397 = 356972461U;
int32_t x398 = INT32_MIN;
static int8_t x400 = INT8_MAX;
uint16_t x402 = UINT16_MAX;
volatile int32_t t87 = 6576953;
static int32_t x408 = -1;
volatile uint32_t x409 = 1050090U;
int8_t x421 = -1;
int16_t x433 = INT16_MIN;
uint8_t x437 = 69U;
volatile int32_t x442 = INT32_MIN;
volatile uint32_t x443 = 1U;
volatile int64_t t96 = 954897961LL;


void f0(void) {
	static volatile int64_t x1 = 46693968723LL;
	volatile uint32_t x2 = 5U;
	uint32_t x3 = 147267U;
	int64_t t0 = 348336LL;

	t0 = (x1|((x2^x3)+x4));

	if (t0 != -9223371990160670889LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x7 = INT32_MAX;
	uint16_t x8 = UINT16_MAX;

	t1 = (x5|((x6^x7)+x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x21 = -1;
	volatile int16_t x22 = 13977;
	uint8_t x23 = 8U;
	volatile int16_t x24 = INT16_MIN;
	int32_t t2 = 3;

	t2 = (x21|((x22^x23)+x24));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x26 = 119U;
	static int16_t x27 = -422;
	int16_t x28 = -24;
	volatile int32_t t3 = -243504423;

	t3 = (x25|((x26^x27)+x28));

	if (t3 != -491) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x30 = INT16_MIN;
	uint16_t x31 = UINT16_MAX;
	int16_t x32 = INT16_MIN;

	t4 = (x29|((x30^x31)+x32));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x33 = UINT32_MAX;
	int16_t x34 = INT16_MIN;
	int64_t x35 = INT64_MAX;
	volatile int64_t t5 = 70988900896LL;

	t5 = (x33|((x34^x35)+x36));

	if (t5 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = INT32_MAX;
	volatile uint16_t x42 = 27124U;

	t6 = (x41|((x42^x43)+x44));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x45 = INT64_MAX;
	static int8_t x46 = INT8_MIN;
	int32_t x47 = -1;
	int8_t x48 = INT8_MIN;
	int64_t t7 = -1199424338LL;

	t7 = (x45|((x46^x47)+x48));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x49 = UINT16_MAX;
	volatile uint32_t x50 = 1109809666U;
	int8_t x51 = -6;
	uint8_t x52 = 3U;

	t8 = (x49|((x50^x51)+x52));

	if (t8 != 3185180671U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t t9 = UINT64_MAX;

	t9 = (x53|((x54^x55)+x56));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x57 = -222768915764798037LL;
	int64_t x59 = -8171487LL;
	volatile int8_t x60 = INT8_MIN;

	t10 = (x57|((x58^x59)+x60));

	if (t10 != -2670593LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x61 = INT32_MIN;
	volatile int64_t x62 = -4LL;
	uint8_t x63 = 15U;
	int32_t x64 = 186933480;
	volatile int64_t t11 = -1057123208LL;

	t11 = (x61|((x62^x63)+x64));

	if (t11 != -1960550181LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x66 = UINT8_MAX;
	uint16_t x67 = UINT16_MAX;
	uint16_t x68 = UINT16_MAX;

	t12 = (x65|((x66^x67)+x68));

	if (t12 != 77987583) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = -27;
	int8_t x70 = INT8_MIN;
	int64_t x72 = INT64_MIN;
	int64_t t13 = -6973LL;

	t13 = (x69|((x70^x71)+x72));

	if (t13 != -27LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = INT16_MIN;
	volatile uint16_t x74 = 25418U;
	int64_t x76 = 82890558LL;

	t14 = (x73|((x74^x75)+x76));

	if (t14 != 18446744073709544400LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x78 = INT8_MIN;
	static int64_t x79 = INT64_MIN;
	static int8_t x80 = -1;
	int64_t t15 = -12LL;

	t15 = (x77|((x78^x79)+x80));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x81 = INT32_MIN;
	volatile int16_t x82 = INT16_MIN;
	volatile int32_t x84 = INT32_MIN;
	volatile uint64_t t16 = 906381178639LLU;

	t16 = (x81|((x82^x83)+x84));

	if (t16 != 18446744073672930974LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x89 = 75U;
	volatile int16_t x90 = INT16_MAX;
	int16_t x91 = INT16_MIN;
	int32_t x92 = INT32_MAX;
	static volatile int32_t t17 = INT32_MAX;

	t17 = (x89|((x90^x91)+x92));

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x93 = -1LL;
	int64_t x94 = INT64_MIN;
	int8_t x95 = INT8_MAX;
	int8_t x96 = INT8_MAX;
	volatile int64_t t18 = -311LL;

	t18 = (x93|((x94^x95)+x96));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x97 = INT16_MIN;
	static int16_t x98 = -1668;
	static volatile int16_t x99 = INT16_MIN;
	uint8_t x100 = UINT8_MAX;
	int32_t t19 = -3968;

	t19 = (x97|((x98^x99)+x100));

	if (t19 != -1413) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x101 = 22598831U;
	int32_t x102 = -1;
	uint16_t x103 = 9U;
	int16_t x104 = INT16_MAX;
	volatile uint32_t t20 = 524059U;

	t20 = (x101|((x102^x103)+x104));

	if (t20 != 22609919U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x106 = INT32_MAX;
	int8_t x107 = -24;
	static volatile uint32_t x108 = 71614208U;
	uint32_t t21 = 2U;

	t21 = (x105|((x106^x107)+x108));

	if (t21 != 4294967191U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x109 = 3587042259LL;
	int64_t x110 = 4398060984695LL;
	int64_t x111 = 962135050381053LL;
	int32_t x112 = 1300469;
	int64_t t22 = 317174350801LL;

	t22 = (x109|((x110^x111)+x112));

	if (t22 != 966534437535743LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x113 = 7170541;
	int16_t x114 = INT16_MIN;
	uint64_t x115 = UINT64_MAX;
	volatile uint64_t t23 = 1982960421963094LLU;

	t23 = (x113|((x114^x115)+x116));

	if (t23 != 84853203051477997LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x117 = -1;
	static uint32_t x118 = UINT32_MAX;
	uint16_t x120 = 6U;
	volatile uint32_t t24 = UINT32_MAX;

	t24 = (x117|((x118^x119)+x120));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x121 = INT32_MAX;
	uint8_t x122 = UINT8_MAX;
	int64_t x123 = 2140779035487629LL;

	t25 = (x121|((x122^x123)+x124));

	if (t25 != -9221231257650724865LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x125 = UINT8_MAX;
	static int8_t x128 = -1;
	int32_t t26 = 169613466;

	t26 = (x125|((x126^x127)+x128));

	if (t26 != -106008577) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = INT32_MIN;
	static int8_t x130 = INT8_MAX;
	int16_t x131 = INT16_MAX;
	uint32_t x132 = 22240U;
	static volatile uint32_t t27 = 9U;

	t27 = (x129|((x130^x131)+x132));

	if (t27 != 2147538528U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = -4142613623753LL;
	static int32_t x134 = -33;
	volatile int8_t x135 = INT8_MIN;
	volatile int8_t x136 = 0;
	static volatile int64_t t28 = -990094817145LL;

	t28 = (x133|((x134^x135)+x136));

	if (t28 != -4142613623681LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x138 = 542842LLU;
	int32_t x139 = INT32_MIN;
	static int8_t x140 = 2;
	volatile uint64_t t29 = 12794842LLU;

	t29 = (x137|((x138^x139)+x140));

	if (t29 != 18446744071562610812LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x142 = -1;
	int8_t x143 = INT8_MIN;
	uint8_t x144 = UINT8_MAX;
	static int32_t t30 = -3467446;

	t30 = (x141|((x142^x143)+x144));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = -1;
	uint8_t x146 = 109U;
	static volatile uint8_t x147 = UINT8_MAX;
	int32_t x148 = INT32_MIN;
	int32_t t31 = -10;

	t31 = (x145|((x146^x147)+x148));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x149 = INT16_MIN;
	static int16_t x150 = INT16_MAX;
	int16_t x151 = -88;
	int16_t x152 = INT16_MIN;
	static int32_t t32 = 6;

	t32 = (x149|((x150^x151)+x152));

	if (t32 != -32681) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x153 = INT8_MAX;
	int32_t x154 = INT32_MIN;
	int8_t x155 = -59;
	uint64_t x156 = 3647LLU;
	static uint64_t t33 = 422132LLU;

	t33 = (x153|((x154^x155)+x156));

	if (t33 != 2147487359LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x157 = 7285;
	int8_t x158 = -1;
	int16_t x159 = INT16_MIN;
	uint16_t x160 = 10425U;
	static int32_t t34 = 14;

	t34 = (x157|((x158^x159)+x160));

	if (t34 != 48381) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x161 = 37;
	static int16_t x163 = INT16_MAX;
	uint64_t x164 = 10880149037LLU;
	uint64_t t35 = 1LLU;

	t35 = (x161|((x162^x163)+x164));

	if (t35 != 10880181239LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = -1LL;
	uint16_t x166 = UINT16_MAX;
	static uint16_t x167 = 14456U;
	int64_t t36 = -704990485LL;

	t36 = (x165|((x166^x167)+x168));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x173 = -1;
	int8_t x174 = 16;
	static uint64_t x176 = 219498138LLU;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = (x173|((x174^x175)+x176));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x177 = INT64_MIN;
	volatile uint64_t x178 = 48LLU;
	volatile int16_t x179 = INT16_MAX;
	int32_t x180 = INT32_MIN;
	volatile uint64_t t38 = 4237851889879792LLU;

	t38 = (x177|((x178^x179)+x180));

	if (t38 != 18446744071562100687LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x181 = INT8_MIN;
	uint8_t x182 = 1U;
	int32_t x183 = INT32_MIN;
	int16_t x184 = INT16_MAX;

	t39 = (x181|((x182^x183)+x184));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x185 = -1;
	int32_t x186 = INT32_MIN;
	int32_t x187 = INT32_MIN;
	static volatile int8_t x188 = INT8_MIN;

	t40 = (x185|((x186^x187)+x188));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x190 = UINT32_MAX;
	uint8_t x191 = 27U;
	int8_t x192 = -13;
	uint32_t t41 = 1U;

	t41 = (x189|((x190^x191)+x192));

	if (t41 != 4294967287U) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x193 = INT8_MIN;
	uint8_t x194 = UINT8_MAX;
	uint8_t x195 = UINT8_MAX;
	static uint32_t x196 = 1588550466U;
	uint32_t t42 = 13007413U;

	t42 = (x193|((x194^x195)+x196));

	if (t42 != 4294967234U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x197 = 26U;
	int8_t x198 = INT8_MIN;
	volatile int16_t x199 = -52;
	volatile int16_t x200 = 1;
	int32_t t43 = -105470;

	t43 = (x197|((x198^x199)+x200));

	if (t43 != 95) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x201 = INT64_MIN;
	volatile uint64_t x202 = UINT64_MAX;
	static volatile int16_t x203 = -1;

	t44 = (x201|((x202^x203)+x204));

	if (t44 != 9223372036854775816LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x206 = 1186616947412032LL;
	int64_t x207 = INT64_MAX;
	static int64_t x208 = INT64_MIN;
	volatile int64_t t45 = 3362565430345365544LL;

	t45 = (x205|((x206^x207)+x208));

	if (t45 != -1186616947411969LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = INT8_MIN;
	volatile uint16_t x210 = 1U;
	volatile int32_t t46 = 179981;

	t46 = (x209|((x210^x211)+x212));

	if (t46 != -96) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x215 = INT16_MIN;
	int64_t x216 = 1152781205782171408LL;
	volatile int64_t t47 = 1LL;

	t47 = (x213|((x214^x215)+x216));

	if (t47 != 1152781205782204285LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x218 = 6371916225099LLU;
	int16_t x219 = INT16_MIN;
	int32_t x220 = -1;
	static uint64_t t48 = UINT64_MAX;

	t48 = (x217|((x218^x219)+x220));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = INT16_MIN;
	static volatile int16_t x222 = INT16_MIN;
	static int64_t x223 = -1LL;
	volatile int16_t x224 = INT16_MIN;
	int64_t t49 = -29LL;

	t49 = (x221|((x222^x223)+x224));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x225 = INT8_MIN;
	int64_t x226 = INT64_MAX;
	static int16_t x227 = -11439;
	uint16_t x228 = 13668U;
	int64_t t50 = -1LL;

	t50 = (x225|((x226^x227)+x228));

	if (t50 != -110LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x229 = -10;
	static int32_t x230 = -932461846;
	static int32_t x231 = INT32_MIN;
	int8_t x232 = -2;

	t51 = (x229|((x230^x231)+x232));

	if (t51 != -2) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x233 = 924761;
	int16_t x235 = INT16_MAX;
	uint8_t x236 = 1U;
	int32_t t52 = 0;

	t52 = (x233|((x234^x235)+x236));

	if (t52 != -25477) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x243 = INT32_MIN;
	int16_t x244 = INT16_MIN;
	static uint32_t t53 = 106910U;

	t53 = (x241|((x242^x243)+x244));

	if (t53 != 2147483647U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x247 = INT8_MIN;
	volatile uint64_t t54 = 3012080LLU;

	t54 = (x245|((x246^x247)+x248));

	if (t54 != 19447109910912959LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x249 = 807LLU;
	volatile int8_t x250 = INT8_MAX;
	volatile int8_t x252 = INT8_MIN;
	static volatile uint64_t t55 = 11LLU;

	t55 = (x249|((x250^x251)+x252));

	if (t55 != 4294967079LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x253 = INT16_MAX;
	int8_t x254 = -1;
	static uint32_t x255 = UINT32_MAX;
	uint64_t x256 = UINT64_MAX;
	uint64_t t56 = UINT64_MAX;

	t56 = (x253|((x254^x255)+x256));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x261 = -1;
	int32_t x262 = INT32_MAX;
	uint64_t x263 = 8994057596964375458LLU;

	t57 = (x261|((x262^x263)+x264));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x269 = 28416;
	int64_t x270 = -20542009616LL;
	int32_t x271 = -21035;
	volatile int64_t t58 = 3647925386919479LL;

	t58 = (x269|((x270^x271)+x272));

	if (t58 != 20541992741LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x274 = 1U;
	static int8_t x275 = -28;
	static volatile int64_t x276 = 394318615910LL;
	static int64_t t59 = 26755767819LL;

	t59 = (x273|((x274^x275)+x276));

	if (t59 != 395136991231LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x277 = 42641807U;
	static uint8_t x278 = 0U;
	int64_t x279 = 21615501473LL;
	int16_t x280 = INT16_MIN;
	int64_t t60 = 626859LL;

	t60 = (x277|((x278^x279)+x280));

	if (t60 != 21658069423LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x285 = INT16_MAX;
	int8_t x286 = INT8_MIN;
	int16_t x287 = -1;
	int16_t x288 = -1;
	int32_t t61 = 12702;

	t61 = (x285|((x286^x287)+x288));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x289 = 168;
	int16_t x291 = -1;
	static volatile uint64_t t62 = 3LLU;

	t62 = (x289|((x290^x291)+x292));

	if (t62 != 32766LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x293 = INT16_MIN;
	int16_t x294 = -1;
	static volatile int64_t x295 = INT64_MIN;
	static int8_t x296 = INT8_MIN;
	static int64_t t63 = 1445LL;

	t63 = (x293|((x294^x295)+x296));

	if (t63 != -129LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x299 = -415859828253652LL;
	volatile int32_t x300 = INT32_MIN;
	static int64_t t64 = -2017583782863090990LL;

	t64 = (x297|((x298^x299)+x300));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x301 = -1LL;
	uint32_t x303 = 3785744U;
	int16_t x304 = INT16_MIN;
	volatile int64_t t65 = 527997856LL;

	t65 = (x301|((x302^x303)+x304));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x305 = INT64_MIN;
	uint32_t x306 = 7116268U;
	int8_t x307 = INT8_MIN;
	static int32_t x308 = INT32_MIN;
	volatile int64_t t66 = 15738436407LL;

	t66 = (x305|((x306^x307)+x308));

	if (t66 != -9223372034714408340LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x309 = -1229;
	uint32_t x310 = 45U;
	volatile int32_t x311 = INT32_MAX;
	uint32_t t67 = UINT32_MAX;

	t67 = (x309|((x310^x311)+x312));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x314 = UINT16_MAX;
	volatile int16_t x315 = INT16_MAX;
	volatile int16_t x316 = -491;
	int32_t t68 = 3132;

	t68 = (x313|((x314^x315)+x316));

	if (t68 != 32277) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x317 = 8U;
	static volatile uint8_t x318 = UINT8_MAX;
	uint64_t x319 = 25306985923LLU;
	volatile uint64_t x320 = UINT64_MAX;

	t69 = (x317|((x318^x319)+x320));

	if (t69 != 25306985787LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x325 = INT32_MAX;
	volatile int32_t x327 = 222;
	int8_t x328 = -1;
	int32_t t70 = INT32_MAX;

	t70 = (x325|((x326^x327)+x328));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x330 = 1986;
	int16_t x331 = 11;
	static int16_t x332 = -67;
	uint64_t t71 = UINT64_MAX;

	t71 = (x329|((x330^x331)+x332));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x333 = 51145731U;
	int64_t x335 = INT64_MAX;
	int32_t x336 = 183714597;
	volatile int64_t t72 = -41354514399993LL;

	t72 = (x333|((x334^x335)+x336));

	if (t72 != -9223372036653486169LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x337 = 144274522920LLU;
	int16_t x338 = 17;
	int8_t x339 = INT8_MIN;
	uint64_t x340 = 23696202299182145LLU;

	t73 = (x337|((x338^x339)+x340));

	if (t73 != 23696346573671418LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x342 = -678;
	int32_t x343 = INT32_MAX;
	static uint8_t x344 = 0U;
	int32_t t74 = 222224;

	t74 = (x341|((x342^x343)+x344));

	if (t74 != -32091) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x345 = 18LLU;
	volatile int16_t x346 = -1;
	volatile int8_t x347 = INT8_MIN;
	int8_t x348 = INT8_MAX;
	volatile uint64_t t75 = 52896724085412466LLU;

	t75 = (x345|((x346^x347)+x348));

	if (t75 != 254LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x353 = INT16_MAX;
	int8_t x354 = -1;
	volatile int16_t x355 = 397;
	volatile int16_t x356 = INT16_MAX;

	t76 = (x353|((x354^x355)+x356));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x358 = 4U;
	int64_t x359 = INT64_MIN;
	uint8_t x360 = UINT8_MAX;
	int64_t t77 = -184540148142LL;

	t77 = (x357|((x358^x359)+x360));

	if (t77 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x361 = 4;
	int8_t x362 = INT8_MIN;
	int64_t x364 = INT64_MIN;
	volatile int64_t t78 = -7479326677111LL;

	t78 = (x361|((x362^x363)+x364));

	if (t78 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x365 = 215U;
	uint32_t x366 = 10U;
	int32_t x367 = INT32_MAX;

	t79 = (x365|((x366^x367)+x368));

	if (t79 != 2147483639LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x369 = 1;
	volatile int32_t x370 = INT32_MIN;
	int64_t x371 = 148LL;
	static uint16_t x372 = 2559U;

	t80 = (x369|((x370^x371)+x372));

	if (t80 != -2147480941LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x373 = INT16_MIN;
	int64_t x374 = INT64_MAX;
	uint64_t x375 = UINT64_MAX;
	static volatile uint64_t t81 = 123LLU;

	t81 = (x373|((x374^x375)+x376));

	if (t81 != 18446744073709522748LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x377 = INT64_MAX;
	uint8_t x378 = 1U;
	static uint8_t x379 = UINT8_MAX;
	int16_t x380 = -1;
	volatile int64_t t82 = INT64_MAX;

	t82 = (x377|((x378^x379)+x380));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x381 = -5621;
	int64_t x382 = 30227758LL;
	static volatile int32_t x383 = INT32_MIN;
	volatile uint32_t x384 = 1947U;
	volatile int64_t t83 = 1674025LL;

	t83 = (x381|((x382^x383)+x384));

	if (t83 != -4405LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x387 = 749;
	uint32_t x388 = 19529U;
	static volatile uint64_t t84 = 231LLU;

	t84 = (x385|((x386^x387)+x388));

	if (t84 != 9862479863LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x393 = 5U;
	int32_t x394 = -1;
	uint64_t x395 = 44705343670LLU;
	int8_t x396 = -25;

	t85 = (x393|((x394^x395)+x396));

	if (t85 != 18446744029004207925LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x399 = UINT8_MAX;
	uint32_t t86 = 87798962U;

	t86 = (x397|((x398^x399)+x400));

	if (t86 != 2504456191U) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x401 = -39;
	volatile int16_t x403 = -114;
	int16_t x404 = INT16_MAX;

	t87 = (x401|((x402^x403)+x404));

	if (t87 != -7) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x405 = -1;
	int16_t x406 = -1;
	uint32_t x407 = 2U;
	uint32_t t88 = UINT32_MAX;

	t88 = (x405|((x406^x407)+x408));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x410 = 2105U;
	static int64_t x411 = -1LL;
	uint64_t x412 = 133197895831391LLU;
	volatile uint64_t t89 = 236LLU;

	t89 = (x409|((x410^x411)+x412));

	if (t89 != 133197896878063LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x413 = INT16_MAX;
	uint16_t x414 = 77U;
	int16_t x415 = -1;
	uint64_t x416 = 40287476LLU;
	uint64_t t90 = 423722491555126LLU;

	t90 = (x413|((x414^x415)+x416));

	if (t90 != 40304639LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x417 = INT32_MAX;
	int64_t x418 = INT64_MAX;
	uint64_t x419 = 15741689LLU;
	uint16_t x420 = UINT16_MAX;
	volatile uint64_t t91 = 2082558784437095956LLU;

	t91 = (x417|((x418^x419)+x420));

	if (t91 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x422 = 193U;
	int8_t x423 = INT8_MIN;
	static uint32_t x424 = UINT32_MAX;
	static uint32_t t92 = UINT32_MAX;

	t92 = (x421|((x422^x423)+x424));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x425 = 16201;
	int8_t x426 = INT8_MAX;
	volatile int32_t x427 = INT32_MAX;
	int8_t x428 = INT8_MIN;
	volatile int32_t t93 = 32712830;

	t93 = (x425|((x426^x427)+x428));

	if (t93 != 2147483465) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x434 = 3;
	int64_t x435 = 332265222589384533LL;
	int64_t x436 = -326865534419LL;
	int64_t t94 = 11LL;

	t94 = (x433|((x434^x435)+x436));

	if (t94 != -13949LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x438 = INT64_MAX;
	volatile int32_t x439 = INT32_MIN;
	int32_t x440 = 0;
	volatile int64_t t95 = -13569585115891LL;

	t95 = (x437|((x438^x439)+x440));

	if (t95 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x441 = -1320607LL;
	static int32_t x444 = INT32_MIN;

	t96 = (x441|((x442^x443)+x444));

	if (t96 != -1320607LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x445 = UINT64_MAX;
	int8_t x446 = 0;
	int32_t x447 = INT32_MIN;
	static int64_t x448 = -1LL;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (x445|((x446^x447)+x448));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x453 = 60;
	volatile uint8_t x454 = 51U;
	volatile uint16_t x455 = UINT16_MAX;
	static uint64_t x456 = 83452LLU;
	uint64_t t98 = 456711815850LLU;

	t98 = (x453|((x454^x455)+x456));

	if (t98 != 148988LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x457 = 9319U;
	volatile int32_t x458 = -1;
	static uint16_t x459 = 10838U;
	int16_t x460 = 5;
	uint32_t t99 = 5085573U;

	t99 = (x457|((x458^x459)+x460));

	if (t99 != 4294964719U) { NG(); } else { ; }
	
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

