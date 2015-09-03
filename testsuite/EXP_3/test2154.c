#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x6 = -1;
static int64_t x7 = -1LL;
volatile int32_t x21 = -270;
static uint32_t x25 = 1595991001U;
volatile int32_t t6 = 844907;
volatile uint32_t x34 = UINT32_MAX;
volatile int32_t t8 = -25581566;
int64_t x43 = INT64_MIN;
volatile int32_t t10 = -53;
volatile int32_t t12 = 232;
int32_t t13 = 428958;
volatile uint32_t x57 = 1U;
volatile int32_t t14 = -13806;
int8_t x62 = 0;
static int64_t x63 = INT64_MIN;
int32_t x67 = 28408;
int64_t x70 = INT64_MIN;
uint16_t x71 = UINT16_MAX;
int64_t x85 = INT64_MIN;
int32_t x88 = INT32_MIN;
int16_t x89 = -1614;
int64_t x90 = 0LL;
volatile uint32_t x95 = UINT32_MAX;
volatile uint8_t x99 = 9U;
volatile int32_t t24 = -12711245;
int8_t x103 = INT8_MIN;
int64_t x104 = -1LL;
int32_t x116 = INT32_MIN;
int8_t x118 = INT8_MIN;
uint64_t x122 = 12331LLU;
static volatile int64_t x125 = INT64_MIN;
int64_t x127 = 778286860057887330LL;
volatile int32_t t31 = -9314;
int64_t x129 = INT64_MIN;
int32_t x132 = INT32_MIN;
int32_t x139 = INT32_MIN;
int32_t x146 = INT32_MIN;
static int32_t x150 = -1;
static int16_t x155 = INT16_MAX;
volatile uint32_t x162 = 1014102769U;
int16_t x163 = INT16_MIN;
volatile int64_t x165 = -1LL;
int16_t x168 = -1317;
volatile int16_t x170 = INT16_MAX;
int16_t x172 = INT16_MIN;
volatile int32_t t42 = -471;
int8_t x174 = 30;
uint32_t x184 = UINT32_MAX;
uint64_t x186 = 42483LLU;
int32_t x193 = 88792;
volatile int32_t t50 = 140291942;
uint16_t x211 = 1391U;
uint32_t x213 = 20U;
int32_t x223 = INT32_MAX;
int16_t x225 = -627;
uint8_t x232 = UINT8_MAX;
int8_t x234 = INT8_MIN;
int8_t x235 = -1;
volatile uint64_t x243 = 2536530798899LLU;
int8_t x247 = 3;
uint32_t x251 = 16093U;
uint32_t x257 = UINT32_MAX;
uint64_t x259 = UINT64_MAX;
int16_t x265 = INT16_MIN;
volatile int32_t t66 = -70681;
static int64_t x270 = -1LL;
int16_t x276 = 7;
uint64_t x280 = 248914LLU;
int8_t x286 = INT8_MIN;
int64_t x287 = 1LL;
static int8_t x294 = 3;
uint8_t x297 = UINT8_MAX;
volatile int32_t t77 = 7;
static int16_t x313 = INT16_MAX;
static uint16_t x317 = UINT16_MAX;
volatile int64_t x319 = -207469681LL;
int32_t t80 = 1;
volatile int8_t x330 = 0;
uint8_t x339 = UINT8_MAX;
int16_t x347 = -36;
volatile int32_t t86 = -1791;
static int32_t x349 = -33744;
uint32_t x357 = UINT32_MAX;
int64_t x359 = INT64_MIN;
static int32_t x360 = INT32_MIN;
static uint16_t x363 = 3270U;
static uint8_t x366 = 11U;
int32_t x371 = INT32_MAX;
uint16_t x386 = UINT16_MAX;
uint16_t x389 = 6U;
static int64_t x392 = -1LL;
int32_t t97 = 78507776;
static uint16_t x394 = UINT16_MAX;
volatile uint8_t x397 = UINT8_MAX;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int8_t x2 = -2;
	int16_t x3 = 0;
	int16_t x4 = INT16_MAX;
	volatile int32_t t0 = 896867696;

	t0 = ((x1<=x2)<(x3^x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	static uint32_t x8 = 5633399U;
	static volatile int32_t t1 = 4047;

	t1 = ((x5<=x6)<(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 51LL;
	uint32_t x10 = UINT32_MAX;
	uint32_t x11 = UINT32_MAX;
	volatile uint64_t x12 = 3852518277208LLU;
	int32_t t2 = -38;

	t2 = ((x9<=x10)<(x11^x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -1;
	int16_t x14 = INT16_MIN;
	static int16_t x15 = 1;
	uint32_t x16 = UINT32_MAX;
	volatile int32_t t3 = -116932445;

	t3 = ((x13<=x14)<(x15^x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int64_t x18 = INT64_MIN;
	uint32_t x19 = UINT32_MAX;
	int16_t x20 = -50;
	int32_t t4 = 1675;

	t4 = ((x17<=x18)<(x19^x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = 55;
	int8_t x23 = -1;
	volatile uint8_t x24 = 82U;
	volatile int32_t t5 = 846685070;

	t5 = ((x21<=x22)<(x23^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = UINT64_MAX;
	int8_t x27 = -8;
	int16_t x28 = -13;

	t6 = ((x25<=x26)<(x27^x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 2;
	static int16_t x30 = INT16_MIN;
	static uint16_t x31 = UINT16_MAX;
	int8_t x32 = -1;
	volatile int32_t t7 = -14;

	t7 = ((x29<=x30)<(x31^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	int16_t x35 = -8355;
	static int16_t x36 = INT16_MIN;

	t8 = ((x33<=x34)<(x35^x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -79;
	volatile uint32_t x38 = 46561700U;
	uint32_t x39 = 25211623U;
	int32_t x40 = -18096;
	int32_t t9 = 61269312;

	t9 = ((x37<=x38)<(x39^x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MIN;
	uint16_t x42 = UINT16_MAX;
	uint16_t x44 = 247U;

	t10 = ((x41<=x42)<(x43^x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MAX;
	uint32_t x46 = UINT32_MAX;
	int64_t x47 = INT64_MIN;
	uint8_t x48 = UINT8_MAX;
	static int32_t t11 = -163548;

	t11 = ((x45<=x46)<(x47^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = -1;
	volatile uint32_t x50 = 86421700U;
	uint16_t x51 = 0U;
	uint64_t x52 = 1953224307LLU;

	t12 = ((x49<=x50)<(x51^x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int64_t x54 = INT64_MIN;
	static int32_t x55 = INT32_MIN;
	uint32_t x56 = 2488U;

	t13 = ((x53<=x54)<(x55^x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = INT8_MIN;
	int64_t x59 = INT64_MAX;
	int64_t x60 = INT64_MIN;

	t14 = ((x57<=x58)<(x59^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int32_t x64 = 1;
	volatile int32_t t15 = 36017;

	t15 = ((x61<=x62)<(x63^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = 0U;
	static volatile int64_t x66 = INT64_MAX;
	int16_t x68 = INT16_MAX;
	int32_t t16 = 326;

	t16 = ((x65<=x66)<(x67^x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	int16_t x72 = INT16_MAX;
	int32_t t17 = 483775;

	t17 = ((x69<=x70)<(x71^x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 9U;
	uint32_t x74 = 5443399U;
	int64_t x75 = INT64_MIN;
	uint8_t x76 = 6U;
	int32_t t18 = 0;

	t18 = ((x73<=x74)<(x75^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = 0U;
	int8_t x78 = -1;
	volatile int8_t x79 = INT8_MAX;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = 15;

	t19 = ((x77<=x78)<(x79^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x81 = 1581529122LLU;
	int16_t x82 = INT16_MIN;
	uint16_t x83 = UINT16_MAX;
	static int8_t x84 = INT8_MIN;
	volatile int32_t t20 = -89366655;

	t20 = ((x81<=x82)<(x83^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = 2;
	int8_t x87 = INT8_MIN;
	volatile int32_t t21 = 1;

	t21 = ((x85<=x86)<(x87^x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x91 = INT16_MIN;
	int8_t x92 = 11;
	int32_t t22 = -21674;

	t22 = ((x89<=x90)<(x91^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 14U;
	volatile int32_t x94 = -1;
	volatile uint8_t x96 = 12U;
	static int32_t t23 = -228;

	t23 = ((x93<=x94)<(x95^x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 26;
	uint64_t x98 = UINT64_MAX;
	int64_t x100 = -743525106LL;

	t24 = ((x97<=x98)<(x99^x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x101 = 2289U;
	volatile int8_t x102 = INT8_MAX;
	static int32_t t25 = 8924;

	t25 = ((x101<=x102)<(x103^x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	int8_t x106 = INT8_MIN;
	static int32_t x107 = INT32_MIN;
	volatile int8_t x108 = -1;
	volatile int32_t t26 = 969443177;

	t26 = ((x105<=x106)<(x107^x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1;
	int16_t x110 = INT16_MIN;
	static uint16_t x111 = UINT16_MAX;
	static int64_t x112 = INT64_MAX;
	int32_t t27 = -4186282;

	t27 = ((x109<=x110)<(x111^x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = 1LLU;
	int32_t x114 = -62767;
	static uint16_t x115 = UINT16_MAX;
	int32_t t28 = 962;

	t28 = ((x113<=x114)<(x115^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	int64_t x119 = -1LL;
	int8_t x120 = 0;
	volatile int32_t t29 = -314073290;

	t29 = ((x117<=x118)<(x119^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	int32_t x123 = 1;
	int16_t x124 = -1;
	static int32_t t30 = -295571;

	t30 = ((x121<=x122)<(x123^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = -57;
	static int8_t x128 = -1;

	t31 = ((x125<=x126)<(x127^x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = INT8_MIN;
	int64_t x131 = INT64_MIN;
	int32_t t32 = 24;

	t32 = ((x129<=x130)<(x131^x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 84U;
	static uint64_t x134 = 34517582522534828LLU;
	uint8_t x135 = UINT8_MAX;
	uint16_t x136 = UINT16_MAX;
	static volatile int32_t t33 = 328;

	t33 = ((x133<=x134)<(x135^x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = INT16_MIN;
	static int64_t x138 = -1LL;
	int16_t x140 = -1;
	int32_t t34 = 4998;

	t34 = ((x137<=x138)<(x139^x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = -1;
	int16_t x142 = INT16_MIN;
	uint16_t x143 = 2081U;
	static uint64_t x144 = 3LLU;
	volatile int32_t t35 = 186497906;

	t35 = ((x141<=x142)<(x143^x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	static uint32_t x147 = UINT32_MAX;
	uint16_t x148 = 1U;
	volatile int32_t t36 = -3242;

	t36 = ((x145<=x146)<(x147^x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	volatile int64_t x151 = -1LL;
	int16_t x152 = INT16_MIN;
	static volatile int32_t t37 = -2519;

	t37 = ((x149<=x150)<(x151^x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 59802408U;
	uint16_t x154 = 405U;
	volatile uint8_t x156 = UINT8_MAX;
	int32_t t38 = 95;

	t38 = ((x153<=x154)<(x155^x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 124535488U;
	static uint64_t x158 = 1295171LLU;
	int64_t x159 = INT64_MIN;
	volatile int8_t x160 = INT8_MIN;
	volatile int32_t t39 = 30176;

	t39 = ((x157<=x158)<(x159^x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 247U;
	static uint64_t x164 = 3179LLU;
	int32_t t40 = 83;

	t40 = ((x161<=x162)<(x163^x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x166 = -1;
	int64_t x167 = -1LL;
	int32_t t41 = -1099088;

	t41 = ((x165<=x166)<(x167^x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -1LL;
	int32_t x171 = -1;

	t42 = ((x169<=x170)<(x171^x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = UINT16_MAX;
	int32_t x175 = INT32_MIN;
	uint64_t x176 = UINT64_MAX;
	static volatile int32_t t43 = -225;

	t43 = ((x173<=x174)<(x175^x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = INT8_MIN;
	static int32_t x178 = INT32_MIN;
	volatile uint32_t x179 = 6583U;
	int64_t x180 = -1LL;
	int32_t t44 = -170243051;

	t44 = ((x177<=x178)<(x179^x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = INT8_MIN;
	volatile int16_t x182 = -1;
	uint8_t x183 = 0U;
	static volatile int32_t t45 = 973391;

	t45 = ((x181<=x182)<(x183^x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x185 = INT16_MIN;
	int16_t x187 = -103;
	int8_t x188 = 19;
	int32_t t46 = -5401486;

	t46 = ((x185<=x186)<(x187^x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x189 = UINT64_MAX;
	uint64_t x190 = 817992277214938LLU;
	int16_t x191 = INT16_MAX;
	int8_t x192 = INT8_MAX;
	int32_t t47 = 60074;

	t47 = ((x189<=x190)<(x191^x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x194 = UINT64_MAX;
	uint8_t x195 = 11U;
	int64_t x196 = -1LL;
	static int32_t t48 = -11;

	t48 = ((x193<=x194)<(x195^x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = INT64_MIN;
	uint8_t x198 = 20U;
	uint32_t x199 = 74689U;
	int64_t x200 = INT64_MIN;
	int32_t t49 = 38;

	t49 = ((x197<=x198)<(x199^x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 0U;
	static int8_t x202 = INT8_MAX;
	int64_t x203 = INT64_MAX;
	volatile int64_t x204 = -1401249530946257053LL;

	t50 = ((x201<=x202)<(x203^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	int16_t x206 = -1;
	static uint16_t x207 = 1U;
	uint16_t x208 = 411U;
	int32_t t51 = 2;

	t51 = ((x205<=x206)<(x207^x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x209 = 4U;
	uint64_t x210 = 891777347154452173LLU;
	uint32_t x212 = UINT32_MAX;
	volatile int32_t t52 = -210;

	t52 = ((x209<=x210)<(x211^x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = INT64_MIN;
	static int64_t x215 = INT64_MIN;
	uint16_t x216 = UINT16_MAX;
	int32_t t53 = -6;

	t53 = ((x213<=x214)<(x215^x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MAX;
	int8_t x218 = INT8_MIN;
	int8_t x219 = INT8_MIN;
	volatile int16_t x220 = -10617;
	int32_t t54 = 665058171;

	t54 = ((x217<=x218)<(x219^x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -40;
	uint64_t x222 = 795LLU;
	int64_t x224 = -45964859028LL;
	int32_t t55 = 10;

	t55 = ((x221<=x222)<(x223^x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = INT32_MIN;
	static int8_t x227 = INT8_MIN;
	static volatile int8_t x228 = -5;
	int32_t t56 = -487980;

	t56 = ((x225<=x226)<(x227^x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 18483852LLU;
	volatile uint64_t x230 = 1926LLU;
	volatile int32_t x231 = INT32_MAX;
	volatile int32_t t57 = 295;

	t57 = ((x229<=x230)<(x231^x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 423U;
	static uint8_t x236 = UINT8_MAX;
	volatile int32_t t58 = -1656454;

	t58 = ((x233<=x234)<(x235^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MAX;
	static volatile int32_t x238 = INT32_MIN;
	volatile uint64_t x239 = 116902689093958LLU;
	int16_t x240 = INT16_MIN;
	int32_t t59 = -4;

	t59 = ((x237<=x238)<(x239^x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x241 = 6223432LLU;
	static int64_t x242 = INT64_MIN;
	int64_t x244 = INT64_MIN;
	static volatile int32_t t60 = 1876;

	t60 = ((x241<=x242)<(x243^x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 1462U;
	int32_t x246 = INT32_MIN;
	static uint8_t x248 = UINT8_MAX;
	static int32_t t61 = -13644643;

	t61 = ((x245<=x246)<(x247^x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x249 = INT8_MAX;
	int32_t x250 = 0;
	int8_t x252 = 3;
	volatile int32_t t62 = 23;

	t62 = ((x249<=x250)<(x251^x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	int16_t x254 = INT16_MIN;
	volatile int64_t x255 = INT64_MIN;
	static int32_t x256 = -1;
	volatile int32_t t63 = -66;

	t63 = ((x253<=x254)<(x255^x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = -2723LL;
	static int64_t x260 = -1LL;
	static int32_t t64 = 1483;

	t64 = ((x257<=x258)<(x259^x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -946471;
	int16_t x262 = -7747;
	int8_t x263 = INT8_MIN;
	int8_t x264 = INT8_MAX;
	int32_t t65 = -87828;

	t65 = ((x261<=x262)<(x263^x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x266 = -1;
	static int8_t x267 = 5;
	static int16_t x268 = INT16_MIN;

	t66 = ((x265<=x266)<(x267^x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -10909;
	static int16_t x271 = -1;
	uint16_t x272 = UINT16_MAX;
	static int32_t t67 = -7968492;

	t67 = ((x269<=x270)<(x271^x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	int8_t x274 = INT8_MAX;
	static int8_t x275 = -1;
	volatile int32_t t68 = -2038444;

	t68 = ((x273<=x274)<(x275^x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = INT64_MIN;
	int8_t x278 = -21;
	int16_t x279 = INT16_MAX;
	volatile int32_t t69 = 1;

	t69 = ((x277<=x278)<(x279^x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = -190826LL;
	static int16_t x282 = -15637;
	static int32_t x283 = INT32_MIN;
	volatile uint64_t x284 = UINT64_MAX;
	int32_t t70 = -362112392;

	t70 = ((x281<=x282)<(x283^x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	int64_t x288 = INT64_MIN;
	volatile int32_t t71 = -7530;

	t71 = ((x285<=x286)<(x287^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -15;
	int32_t x290 = INT32_MIN;
	uint8_t x291 = UINT8_MAX;
	int64_t x292 = -1LL;
	int32_t t72 = 3;

	t72 = ((x289<=x290)<(x291^x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 127U;
	uint8_t x295 = UINT8_MAX;
	int16_t x296 = -1;
	int32_t t73 = 58415;

	t73 = ((x293<=x294)<(x295^x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x298 = -1LL;
	uint8_t x299 = UINT8_MAX;
	static int32_t x300 = INT32_MIN;
	volatile int32_t t74 = -14785885;

	t74 = ((x297<=x298)<(x299^x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	uint16_t x302 = 19093U;
	int32_t x303 = -1;
	int16_t x304 = INT16_MIN;
	int32_t t75 = -316050;

	t75 = ((x301<=x302)<(x303^x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	int64_t x306 = INT64_MIN;
	int16_t x307 = INT16_MAX;
	uint64_t x308 = 722063LLU;
	int32_t t76 = -2792570;

	t76 = ((x305<=x306)<(x307^x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 64U;
	volatile int64_t x310 = INT64_MAX;
	volatile int8_t x311 = 10;
	int16_t x312 = -1;

	t77 = ((x309<=x310)<(x311^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x314 = 0U;
	int32_t x315 = -1;
	volatile uint8_t x316 = 0U;
	static int32_t t78 = -3044;

	t78 = ((x313<=x314)<(x315^x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x318 = INT16_MAX;
	static int64_t x320 = INT64_MAX;
	static volatile int32_t t79 = 31;

	t79 = ((x317<=x318)<(x319^x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x321 = 19738U;
	uint16_t x322 = 1874U;
	volatile int16_t x323 = INT16_MIN;
	uint16_t x324 = 102U;

	t80 = ((x321<=x322)<(x323^x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x325 = 581115661302668LLU;
	int16_t x326 = -1;
	int8_t x327 = INT8_MIN;
	int16_t x328 = -1;
	int32_t t81 = -237024089;

	t81 = ((x325<=x326)<(x327^x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MAX;
	int8_t x331 = -1;
	int8_t x332 = INT8_MIN;
	volatile int32_t t82 = 0;

	t82 = ((x329<=x330)<(x331^x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = 27311548470969LL;
	uint64_t x334 = 36LLU;
	int16_t x335 = 350;
	volatile int64_t x336 = 3789897365254266736LL;
	int32_t t83 = 12931158;

	t83 = ((x333<=x334)<(x335^x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MIN;
	int32_t x338 = 350227388;
	static uint8_t x340 = 38U;
	static int32_t t84 = 107;

	t84 = ((x337<=x338)<(x339^x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	int16_t x342 = INT16_MIN;
	volatile int16_t x343 = -1;
	static int8_t x344 = 44;
	static volatile int32_t t85 = 7;

	t85 = ((x341<=x342)<(x343^x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 233134U;
	int8_t x346 = -1;
	static int64_t x348 = 5265196676LL;

	t86 = ((x345<=x346)<(x347^x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x350 = UINT64_MAX;
	uint32_t x351 = 42836555U;
	static uint32_t x352 = UINT32_MAX;
	int32_t t87 = -575804495;

	t87 = ((x349<=x350)<(x351^x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	volatile uint32_t x354 = 1026168U;
	int32_t x355 = -698;
	uint16_t x356 = UINT16_MAX;
	int32_t t88 = 2449629;

	t88 = ((x353<=x354)<(x355^x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = -57;
	int32_t t89 = -25390;

	t89 = ((x357<=x358)<(x359^x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = -1351263303371814781LL;
	int16_t x362 = INT16_MIN;
	static int64_t x364 = -1LL;
	static int32_t t90 = -945;

	t90 = ((x361<=x362)<(x363^x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	volatile int16_t x367 = INT16_MIN;
	int8_t x368 = INT8_MAX;
	int32_t t91 = 423745;

	t91 = ((x365<=x366)<(x367^x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = 22;
	int8_t x370 = INT8_MAX;
	uint16_t x372 = UINT16_MAX;
	int32_t t92 = -7160978;

	t92 = ((x369<=x370)<(x371^x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -1;
	int64_t x374 = INT64_MAX;
	static volatile uint8_t x375 = 6U;
	int64_t x376 = INT64_MIN;
	volatile int32_t t93 = 2322;

	t93 = ((x373<=x374)<(x375^x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 1;
	int8_t x378 = INT8_MAX;
	uint8_t x379 = 0U;
	int8_t x380 = -1;
	int32_t t94 = 8;

	t94 = ((x377<=x378)<(x379^x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 10395133U;
	int32_t x382 = 0;
	int64_t x383 = INT64_MIN;
	int8_t x384 = INT8_MIN;
	int32_t t95 = -45538;

	t95 = ((x381<=x382)<(x383^x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	static int32_t x387 = -1;
	int8_t x388 = 0;
	int32_t t96 = -5727019;

	t96 = ((x385<=x386)<(x387^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x390 = 1U;
	static uint16_t x391 = 6883U;

	t97 = ((x389<=x390)<(x391^x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MAX;
	int64_t x395 = INT64_MIN;
	uint32_t x396 = 3041017U;
	volatile int32_t t98 = -856458;

	t98 = ((x393<=x394)<(x395^x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x398 = INT8_MIN;
	static int8_t x399 = INT8_MIN;
	uint64_t x400 = 37971355125LLU;
	volatile int32_t t99 = -251393;

	t99 = ((x397<=x398)<(x399^x400));

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

