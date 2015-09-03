#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x5 = INT32_MAX;
uint8_t x10 = 62U;
static int16_t x11 = INT16_MAX;
uint16_t x14 = UINT16_MAX;
volatile uint64_t x18 = 90700LLU;
static int32_t t4 = -434022;
volatile int32_t x21 = INT32_MIN;
uint8_t x33 = UINT8_MAX;
uint32_t x43 = UINT32_MAX;
volatile int32_t t12 = -27641902;
static uint16_t x55 = 35U;
int8_t x63 = -1;
static uint16_t x76 = 38U;
static int32_t t18 = 3716879;
int64_t x82 = -1LL;
int16_t x83 = INT16_MAX;
volatile uint64_t t20 = 1733LLU;
int8_t x85 = INT8_MAX;
int16_t x86 = -1;
static uint16_t x88 = 434U;
volatile int32_t x93 = -322089890;
static int8_t x96 = -2;
volatile int16_t x98 = INT16_MIN;
int16_t x116 = -1;
static volatile int32_t t28 = 816797;
uint32_t x124 = 596280U;
volatile uint32_t x127 = 149621U;
static int8_t x136 = INT8_MAX;
uint32_t x139 = 1105U;
uint32_t x140 = 3912207U;
volatile uint8_t x141 = 29U;
uint64_t x142 = 172633206953LLU;
uint16_t x144 = 235U;
int8_t x145 = -1;
volatile int64_t x146 = INT64_MAX;
int32_t x147 = INT32_MAX;
int64_t x150 = 16438733LL;
volatile int8_t x157 = -1;
int16_t x163 = -175;
static volatile int32_t t40 = 35566418;
static int16_t x177 = INT16_MAX;
uint8_t x180 = 23U;
int64_t x181 = INT64_MAX;
int8_t x186 = -1;
volatile uint32_t t46 = 52U;
volatile int32_t x190 = INT32_MIN;
volatile int32_t t47 = -729232550;
int16_t x215 = INT16_MIN;
int32_t t53 = -877842852;
volatile uint32_t x220 = 630309U;
int8_t x224 = -1;
static volatile int64_t x229 = INT64_MIN;
static int8_t x230 = 3;
uint16_t x249 = UINT16_MAX;
uint32_t x251 = 3475U;
int32_t x253 = INT32_MAX;
uint64_t x254 = 3869513404LLU;
int32_t t63 = 62250704;
uint8_t x262 = 21U;
int32_t x270 = -1;
int16_t x271 = -1;
uint16_t x272 = 11U;
uint16_t x277 = 6299U;
volatile int32_t t69 = 17644216;
int32_t t70 = -281339;
uint32_t x285 = UINT32_MAX;
volatile uint32_t x286 = UINT32_MAX;
volatile int8_t x288 = 41;
static uint32_t t71 = 3U;
volatile int32_t x291 = 69776;
static uint8_t x302 = 0U;
uint32_t x309 = UINT32_MAX;
int16_t x312 = 0;
volatile uint8_t x314 = 54U;
uint8_t x316 = 1U;
int8_t x319 = -1;
static int16_t x320 = -10355;
int16_t x323 = INT16_MIN;
int64_t x324 = INT64_MIN;
int64_t x327 = INT64_MAX;
uint32_t t81 = 6U;
int64_t x340 = INT64_MIN;
static uint32_t x341 = 3105U;
static uint16_t x344 = 0U;
int32_t x356 = 17;
static uint32_t x360 = 232580427U;
static uint64_t t89 = 5873230367888275980LLU;
int16_t x367 = 0;
static int32_t t92 = 124314;
volatile int8_t x379 = INT8_MIN;
static volatile int32_t t96 = -44979;
uint16_t x399 = 3U;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile int32_t x2 = INT32_MAX;
	uint64_t x3 = 4093072204629964600LLU;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -26645;

	t0 = (x1&((x2&x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MAX;
	int16_t x7 = 1;
	uint64_t x8 = UINT64_MAX;
	int32_t t1 = 1783;

	t1 = (x5&((x6&x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 0LL;
	static int8_t x12 = 3;
	static int64_t t2 = 212415LL;

	t2 = (x9&((x10&x11)==x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 6U;
	static uint16_t x15 = 116U;
	volatile int64_t x16 = 3745LL;
	int32_t t3 = 1;

	t3 = (x13&((x14&x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	static int64_t x19 = -17LL;
	int32_t x20 = INT32_MIN;

	t4 = (x17&((x18&x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MIN;
	volatile int64_t x23 = INT64_MAX;
	volatile uint16_t x24 = 118U;
	int32_t t5 = 5;

	t5 = (x21&((x22&x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -112;
	volatile uint16_t x26 = UINT16_MAX;
	static int8_t x27 = 22;
	static int32_t x28 = INT32_MAX;
	int32_t t6 = 4;

	t6 = (x25&((x26&x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = -1;
	int32_t x30 = -1540;
	int64_t x31 = -339299446682376LL;
	volatile uint16_t x32 = 5U;
	int32_t t7 = 837881;

	t7 = (x29&((x30&x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 21804180U;
	uint64_t x35 = UINT64_MAX;
	int8_t x36 = INT8_MAX;
	int32_t t8 = 314751;

	t8 = (x33&((x34&x35)==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x37 = UINT8_MAX;
	int64_t x38 = INT64_MIN;
	int64_t x39 = INT64_MIN;
	static int8_t x40 = INT8_MIN;
	volatile int32_t t9 = -15696363;

	t9 = (x37&((x38&x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int32_t x42 = -27447476;
	static uint16_t x44 = UINT16_MAX;
	int32_t t10 = 34;

	t10 = (x41&((x42&x43)==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = -1980046101873396LL;
	int16_t x46 = INT16_MIN;
	int8_t x47 = -1;
	uint64_t x48 = UINT64_MAX;
	volatile int64_t t11 = -405803781553LL;

	t11 = (x45&((x46&x47)==x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	static int64_t x50 = 4165550LL;
	volatile uint32_t x51 = 65522024U;
	volatile int8_t x52 = INT8_MAX;

	t12 = (x49&((x50&x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	uint8_t x54 = UINT8_MAX;
	int64_t x56 = INT64_MAX;
	int64_t t13 = 199203LL;

	t13 = (x53&((x54&x55)==x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x57 = 31061772725LLU;
	int64_t x58 = -52568LL;
	uint32_t x59 = 238232U;
	volatile int32_t x60 = 2;
	static uint64_t t14 = 19548811LLU;

	t14 = (x57&((x58&x59)==x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MAX;
	uint64_t x62 = UINT64_MAX;
	volatile uint8_t x64 = 98U;
	int32_t t15 = -9076024;

	t15 = (x61&((x62&x63)==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 3U;
	uint32_t x66 = UINT32_MAX;
	static uint16_t x67 = UINT16_MAX;
	int64_t x68 = INT64_MIN;
	int32_t t16 = -29018090;

	t16 = (x65&((x66&x67)==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MAX;
	static int32_t x70 = -70;
	static int8_t x71 = INT8_MAX;
	int32_t x72 = 51694504;
	volatile int32_t t17 = 232;

	t17 = (x69&((x70&x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	static volatile int8_t x74 = INT8_MIN;
	int8_t x75 = INT8_MAX;

	t18 = (x73&((x74&x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	volatile int32_t x78 = INT32_MAX;
	int64_t x79 = INT64_MIN;
	uint16_t x80 = 0U;
	int32_t t19 = 40682;

	t19 = (x77&((x78&x79)==x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x81 = 574850567LLU;
	uint16_t x84 = UINT16_MAX;

	t20 = (x81&((x82&x83)==x84));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x87 = 573091169185LLU;
	volatile int32_t t21 = -686;

	t21 = (x85&((x86&x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	volatile int8_t x90 = INT8_MIN;
	int8_t x91 = INT8_MIN;
	static volatile uint32_t x92 = 1935024U;
	int32_t t22 = -26060466;

	t22 = (x89&((x90&x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x94 = 1530;
	static uint64_t x95 = UINT64_MAX;
	volatile int32_t t23 = 0;

	t23 = (x93&((x94&x95)==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = -1;
	int32_t x99 = 878;
	uint64_t x100 = 8079591476LLU;
	int32_t t24 = -5664968;

	t24 = (x97&((x98&x99)==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 0U;
	static uint8_t x102 = 6U;
	uint8_t x103 = 7U;
	static uint8_t x104 = 41U;
	int32_t t25 = -5438;

	t25 = (x101&((x102&x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -3;
	int64_t x106 = INT64_MAX;
	volatile int16_t x107 = -3830;
	int8_t x108 = -3;
	volatile int32_t t26 = -47587778;

	t26 = (x105&((x106&x107)==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MAX;
	int32_t x110 = 232240;
	uint16_t x111 = 14U;
	volatile int64_t x112 = -10644874LL;
	volatile int32_t t27 = -1;

	t27 = (x109&((x110&x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int32_t x114 = INT32_MIN;
	int32_t x115 = INT32_MAX;

	t28 = (x113&((x114&x115)==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = INT64_MIN;
	uint32_t x118 = 30U;
	int32_t x119 = 850;
	uint16_t x120 = 93U;
	volatile int64_t t29 = -1005556750LL;

	t29 = (x117&((x118&x119)==x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	uint32_t x122 = 769109562U;
	volatile int16_t x123 = INT16_MIN;
	static volatile int32_t t30 = 91311209;

	t30 = (x121&((x122&x123)==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	volatile int8_t x126 = INT8_MIN;
	uint32_t x128 = UINT32_MAX;
	int32_t t31 = 7;

	t31 = (x125&((x126&x127)==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = 45U;
	int64_t x130 = 872782LL;
	int8_t x131 = 1;
	volatile uint32_t x132 = 32340832U;
	volatile uint32_t t32 = 1U;

	t32 = (x129&((x130&x131)==x132));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	volatile int64_t x134 = INT64_MIN;
	int64_t x135 = 1569178863LL;
	int32_t t33 = -9562278;

	t33 = (x133&((x134&x135)==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = 44;
	int32_t x138 = INT32_MIN;
	int32_t t34 = 2816720;

	t34 = (x137&((x138&x139)==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x143 = -1;
	volatile int32_t t35 = -7116;

	t35 = (x141&((x142&x143)==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x148 = UINT8_MAX;
	int32_t t36 = -180220;

	t36 = (x145&((x146&x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x149 = 73U;
	volatile uint16_t x151 = 7U;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = 4971;

	t37 = (x149&((x150&x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = 81U;
	volatile int16_t x154 = -1;
	int64_t x155 = -1LL;
	int8_t x156 = -3;
	volatile uint32_t t38 = 61085514U;

	t38 = (x153&((x154&x155)==x156));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x158 = UINT64_MAX;
	int32_t x159 = INT32_MAX;
	static int32_t x160 = INT32_MIN;
	volatile int32_t t39 = 2;

	t39 = (x157&((x158&x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	volatile int64_t x162 = INT64_MAX;
	int16_t x164 = INT16_MIN;

	t40 = (x161&((x162&x163)==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = -1;
	volatile int64_t x166 = 3853667915049695LL;
	static uint16_t x167 = UINT16_MAX;
	volatile int64_t x168 = -1LL;
	int32_t t41 = 177586141;

	t41 = (x165&((x166&x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	static int8_t x170 = INT8_MAX;
	static int32_t x171 = INT32_MAX;
	uint8_t x172 = 2U;
	volatile int64_t t42 = -169687322216141988LL;

	t42 = (x169&((x170&x171)==x172));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = INT16_MIN;
	volatile int64_t x174 = -1LL;
	int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MIN;
	static int32_t t43 = -149;

	t43 = (x173&((x174&x175)==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x178 = INT64_MIN;
	uint32_t x179 = 0U;
	volatile int32_t t44 = -2498315;

	t44 = (x177&((x178&x179)==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x182 = 24346U;
	uint32_t x183 = 164400U;
	int32_t x184 = INT32_MIN;
	int64_t t45 = -17540432812203759LL;

	t45 = (x181&((x182&x183)==x184));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	uint32_t x187 = UINT32_MAX;
	static int32_t x188 = INT32_MIN;

	t46 = (x185&((x186&x187)==x188));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 25838U;
	int32_t x191 = INT32_MAX;
	uint64_t x192 = 125219901506LLU;

	t47 = (x189&((x190&x191)==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = -1;
	volatile uint64_t x194 = 48451654049LLU;
	uint64_t x195 = 135784178847982152LLU;
	static uint16_t x196 = 19U;
	int32_t t48 = -1;

	t48 = (x193&((x194&x195)==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = -1;
	int8_t x198 = INT8_MIN;
	int64_t x199 = 239LL;
	uint64_t x200 = 461LLU;
	volatile int32_t t49 = 1759226;

	t49 = (x197&((x198&x199)==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = 0;
	int16_t x202 = INT16_MAX;
	static int8_t x203 = INT8_MAX;
	int64_t x204 = -63102748290LL;
	int32_t t50 = -133141847;

	t50 = (x201&((x202&x203)==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 896U;
	int16_t x206 = -1;
	int32_t x207 = -1943269;
	int8_t x208 = 1;
	int32_t t51 = -12172;

	t51 = (x205&((x206&x207)==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 55U;
	int64_t x210 = INT64_MIN;
	static volatile int32_t x211 = -1;
	static uint64_t x212 = 978427020LLU;
	static int32_t t52 = 58;

	t52 = (x209&((x210&x211)==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	int8_t x214 = 63;
	volatile int64_t x216 = 6923225LL;

	t53 = (x213&((x214&x215)==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	static int32_t x218 = INT32_MIN;
	int32_t x219 = INT32_MIN;
	static volatile int32_t t54 = -88232;

	t54 = (x217&((x218&x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x221 = UINT8_MAX;
	int16_t x222 = INT16_MAX;
	int16_t x223 = INT16_MIN;
	int32_t t55 = 54921645;

	t55 = (x221&((x222&x223)==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = INT8_MIN;
	static uint8_t x226 = 13U;
	int64_t x227 = INT64_MAX;
	int16_t x228 = INT16_MIN;
	volatile int32_t t56 = -26113;

	t56 = (x225&((x226&x227)==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x231 = -1778793;
	int64_t x232 = INT64_MIN;
	int64_t t57 = 42LL;

	t57 = (x229&((x230&x231)==x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = INT8_MIN;
	static int8_t x234 = 11;
	int8_t x235 = INT8_MIN;
	int16_t x236 = INT16_MAX;
	static volatile int32_t t58 = 170719;

	t58 = (x233&((x234&x235)==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	volatile uint16_t x238 = 6450U;
	volatile uint8_t x239 = 12U;
	int16_t x240 = INT16_MIN;
	static int32_t t59 = 108;

	t59 = (x237&((x238&x239)==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	static volatile uint8_t x242 = 2U;
	int64_t x243 = -1LL;
	int32_t x244 = INT32_MAX;
	int32_t t60 = 1;

	t60 = (x241&((x242&x243)==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x245 = 11402U;
	volatile int32_t x246 = -1;
	int64_t x247 = 223LL;
	static int16_t x248 = -1;
	volatile uint32_t t61 = 1U;

	t61 = (x245&((x246&x247)==x248));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x250 = -2;
	volatile int64_t x252 = -3817607651LL;
	int32_t t62 = -359;

	t62 = (x249&((x250&x251)==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x255 = 223784964668LLU;
	static int32_t x256 = -1;

	t63 = (x253&((x254&x255)==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = 10LL;
	static int64_t x258 = -1LL;
	uint64_t x259 = 240662579822198LLU;
	int16_t x260 = -310;
	int64_t t64 = -864842818139LL;

	t64 = (x257&((x258&x259)==x260));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	uint8_t x263 = 7U;
	static int64_t x264 = INT64_MIN;
	static int32_t t65 = -6;

	t65 = (x261&((x262&x263)==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 138U;
	volatile int8_t x266 = INT8_MIN;
	static int32_t x267 = INT32_MAX;
	int64_t x268 = -1LL;
	static volatile int32_t t66 = -58178396;

	t66 = (x265&((x266&x267)==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = INT64_MAX;
	int64_t t67 = -236403949508LL;

	t67 = (x269&((x270&x271)==x272));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x273 = UINT8_MAX;
	int32_t x274 = 145644;
	volatile int32_t x275 = -25;
	uint64_t x276 = 234166848LLU;
	volatile int32_t t68 = -211518967;

	t68 = (x273&((x274&x275)==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x278 = 250516547268843151LLU;
	uint32_t x279 = 3463U;
	uint64_t x280 = 8186702326734LLU;

	t69 = (x277&((x278&x279)==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = 1;
	int32_t x282 = INT32_MIN;
	int64_t x283 = -492410326604LL;
	uint64_t x284 = UINT64_MAX;

	t70 = (x281&((x282&x283)==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x287 = 5904635585LL;

	t71 = (x285&((x286&x287)==x288));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x289 = 18U;
	uint16_t x290 = UINT16_MAX;
	int8_t x292 = INT8_MIN;
	volatile int32_t t72 = 336711;

	t72 = (x289&((x290&x291)==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = INT32_MAX;
	static volatile int64_t x294 = -624941LL;
	int32_t x295 = -117146185;
	static int16_t x296 = INT16_MIN;
	int32_t t73 = 360547;

	t73 = (x293&((x294&x295)==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	volatile int32_t x298 = -14733;
	volatile int8_t x299 = INT8_MIN;
	uint8_t x300 = UINT8_MAX;
	int32_t t74 = 0;

	t74 = (x297&((x298&x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 20;
	uint8_t x303 = 0U;
	int16_t x304 = INT16_MIN;
	int32_t t75 = 603883;

	t75 = (x301&((x302&x303)==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 0;
	static volatile int16_t x306 = -1;
	volatile uint16_t x307 = UINT16_MAX;
	int8_t x308 = INT8_MIN;
	volatile int32_t t76 = 5251;

	t76 = (x305&((x306&x307)==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x310 = 45U;
	uint16_t x311 = 16U;
	volatile uint32_t t77 = 1626158264U;

	t77 = (x309&((x310&x311)==x312));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x313 = UINT16_MAX;
	static volatile int32_t x315 = INT32_MIN;
	int32_t t78 = 142;

	t78 = (x313&((x314&x315)==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x317 = 0U;
	static int32_t x318 = -245234071;
	volatile int32_t t79 = 12451;

	t79 = (x317&((x318&x319)==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 4U;
	static int8_t x322 = 1;
	int32_t t80 = 4567;

	t80 = (x321&((x322&x323)==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x325 = UINT32_MAX;
	int8_t x326 = INT8_MIN;
	int8_t x328 = INT8_MIN;

	t81 = (x325&((x326&x327)==x328));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	int64_t x330 = -4360606663059617LL;
	static uint64_t x331 = 1963378833093LLU;
	int64_t x332 = -1LL;
	volatile int32_t t82 = -297241;

	t82 = (x329&((x330&x331)==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	uint8_t x334 = UINT8_MAX;
	static uint32_t x335 = UINT32_MAX;
	volatile int32_t x336 = -1;
	int32_t t83 = -1;

	t83 = (x333&((x334&x335)==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = 7;
	int32_t x338 = -706870;
	volatile int8_t x339 = 0;
	volatile int32_t t84 = 1;

	t84 = (x337&((x338&x339)==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x342 = 13;
	uint32_t x343 = UINT32_MAX;
	uint32_t t85 = 3U;

	t85 = (x341&((x342&x343)==x344));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x345 = INT32_MAX;
	uint64_t x346 = UINT64_MAX;
	int64_t x347 = -203029303432367396LL;
	static uint64_t x348 = 2099386396469569997LLU;
	volatile int32_t t86 = -1719934;

	t86 = (x345&((x346&x347)==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = UINT32_MAX;
	int32_t x350 = INT32_MIN;
	uint32_t x351 = 549U;
	static int8_t x352 = INT8_MIN;
	volatile uint32_t t87 = 654U;

	t87 = (x349&((x350&x351)==x352));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x353 = 5U;
	static uint32_t x354 = 6U;
	uint32_t x355 = UINT32_MAX;
	volatile int32_t t88 = 16314121;

	t88 = (x353&((x354&x355)==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x357 = UINT64_MAX;
	static int16_t x358 = INT16_MIN;
	int8_t x359 = INT8_MIN;

	t89 = (x357&((x358&x359)==x360));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -32585932699752464LL;
	int32_t x362 = -1;
	volatile int64_t x363 = INT64_MAX;
	int32_t x364 = 3630620;
	volatile int64_t t90 = 1205820206412565179LL;

	t90 = (x361&((x362&x363)==x364));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = UINT64_MAX;
	uint8_t x366 = 28U;
	static volatile int8_t x368 = 40;
	static uint64_t t91 = 5028927LLU;

	t91 = (x365&((x366&x367)==x368));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MAX;
	uint16_t x370 = UINT16_MAX;
	static int32_t x371 = -11813006;
	int16_t x372 = INT16_MIN;

	t92 = (x369&((x370&x371)==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -5748271730603877LL;
	int8_t x374 = -57;
	volatile uint16_t x375 = UINT16_MAX;
	static int64_t x376 = -13752831LL;
	static volatile int64_t t93 = -1078LL;

	t93 = (x373&((x374&x375)==x376));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = -7;
	static int64_t x378 = INT64_MIN;
	volatile int64_t x380 = 0LL;
	int32_t t94 = 6552;

	t94 = (x377&((x378&x379)==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 49U;
	int64_t x382 = 90LL;
	uint8_t x383 = UINT8_MAX;
	int8_t x384 = -1;
	int32_t t95 = -1108701;

	t95 = (x381&((x382&x383)==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	static uint8_t x386 = 12U;
	volatile uint16_t x387 = 1082U;
	volatile int16_t x388 = 6771;

	t96 = (x385&((x386&x387)==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x389 = -1;
	int64_t x390 = -1LL;
	uint8_t x391 = UINT8_MAX;
	static volatile uint32_t x392 = 5U;
	int32_t t97 = 3107;

	t97 = (x389&((x390&x391)==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MAX;
	int64_t x394 = INT64_MIN;
	uint16_t x395 = 30U;
	int8_t x396 = INT8_MAX;
	volatile int32_t t98 = 29853087;

	t98 = (x393&((x394&x395)==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 0;
	static int32_t x398 = INT32_MIN;
	volatile int64_t x400 = -2432LL;
	static int32_t t99 = 574825292;

	t99 = (x397&((x398&x399)==x400));

	if (t99 != 0) { NG(); } else { ; }
	
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

