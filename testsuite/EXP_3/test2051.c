#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -29;
static uint8_t x9 = UINT8_MAX;
int64_t x10 = 198141LL;
uint8_t x11 = 7U;
uint8_t x16 = 111U;
int32_t t4 = 86;
static volatile int32_t x21 = INT32_MIN;
int8_t x31 = -1;
uint64_t x33 = UINT64_MAX;
int64_t x38 = -1LL;
static int8_t x42 = INT8_MAX;
int16_t x50 = -1;
volatile int64_t x60 = INT64_MAX;
uint64_t x61 = 7LLU;
int16_t x64 = INT16_MIN;
int32_t x70 = INT32_MAX;
int32_t x72 = INT32_MAX;
int32_t t20 = -79794;
volatile int32_t x94 = -1;
int32_t t22 = -353486285;
static volatile int32_t t23 = -47732695;
uint16_t x109 = 17784U;
uint8_t x113 = 23U;
uint8_t x115 = 32U;
int16_t x125 = 5;
static int16_t x129 = INT16_MIN;
static volatile int8_t x133 = INT8_MAX;
int16_t x135 = -1;
int8_t x136 = INT8_MIN;
static int16_t x152 = INT16_MIN;
uint64_t x154 = UINT64_MAX;
volatile int32_t x156 = INT32_MIN;
int32_t t36 = 25355365;
int32_t x186 = 31582352;
volatile int32_t t42 = -63;
uint8_t x195 = 57U;
uint8_t x202 = 72U;
static volatile int64_t x204 = -1LL;
volatile uint16_t x212 = 214U;
static int16_t x224 = INT16_MAX;
static uint32_t x225 = UINT32_MAX;
static int32_t x226 = 146481;
uint32_t x228 = 59U;
int16_t x239 = -14258;
int32_t t54 = -27335;
static volatile uint64_t x243 = 1398724321299LLU;
int64_t x249 = -43107LL;
int8_t x254 = -6;
static int64_t x266 = 31700853923716860LL;
int8_t x267 = INT8_MIN;
int32_t t60 = -2777153;
uint8_t x276 = 0U;
static uint8_t x278 = 30U;
volatile int64_t x279 = 258436299749LL;
volatile int64_t x292 = INT64_MAX;
volatile int32_t x298 = -347;
int8_t x299 = 2;
static int16_t x300 = INT16_MIN;
static int32_t t66 = -24621993;
int64_t x302 = INT64_MAX;
int32_t t68 = -22;
volatile int64_t x309 = -1LL;
int32_t x324 = 69;
uint32_t x344 = 191U;
int32_t x347 = -1;
static int32_t t80 = 127272;
uint64_t x367 = 229286699832875922LLU;
static int32_t t81 = -4391;
int8_t x376 = INT8_MIN;
static int8_t x378 = INT8_MIN;
int16_t x391 = INT16_MIN;
int16_t x394 = -1;
int32_t t88 = -21;
int8_t x405 = -1;
volatile int16_t x407 = 782;
volatile int32_t t89 = -1858;
volatile int32_t x413 = -1;
int16_t x416 = -75;
uint16_t x419 = UINT16_MAX;
volatile uint8_t x425 = UINT8_MAX;
uint16_t x430 = 1305U;
volatile int32_t t96 = -7;
int8_t x444 = 7;
int32_t t98 = 39048;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	uint64_t x2 = 1815264LLU;
	static volatile int8_t x3 = INT8_MIN;
	uint32_t x4 = 9486583U;

	t0 = ((x1-x2)<=(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = 15;
	int8_t x6 = INT8_MAX;
	uint8_t x7 = 0U;
	int8_t x8 = INT8_MIN;
	int32_t t1 = 987394591;

	t1 = ((x5-x6)<=(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = 0;

	t2 = ((x9-x10)<=(x11^x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	uint64_t x14 = 272885LLU;
	int8_t x15 = INT8_MIN;
	int32_t t3 = -924354;

	t3 = ((x13-x14)<=(x15^x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -4;
	volatile int8_t x18 = INT8_MIN;
	int16_t x19 = INT16_MIN;
	volatile int64_t x20 = -1LL;

	t4 = ((x17-x18)<=(x19^x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -63;
	static int64_t x23 = INT64_MIN;
	int64_t x24 = INT64_MIN;
	static volatile int32_t t5 = 0;

	t5 = ((x21-x22)<=(x23^x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 363502515LLU;
	int32_t x26 = INT32_MIN;
	int16_t x27 = INT16_MIN;
	uint8_t x28 = 2U;
	volatile int32_t t6 = 1421;

	t6 = ((x25-x26)<=(x27^x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	static uint8_t x30 = 59U;
	int8_t x32 = -1;
	int32_t t7 = 231;

	t7 = ((x29-x30)<=(x31^x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 10U;
	static int8_t x35 = 33;
	uint32_t x36 = 1692682U;
	volatile int32_t t8 = 16;

	t8 = ((x33-x34)<=(x35^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	volatile int32_t x39 = INT32_MIN;
	int64_t x40 = -13103576096299LL;
	volatile int32_t t9 = -304039;

	t9 = ((x37-x38)<=(x39^x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	uint32_t x43 = 11449215U;
	static int16_t x44 = -7;
	volatile int32_t t10 = 25535486;

	t10 = ((x41-x42)<=(x43^x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 2U;
	uint64_t x46 = UINT64_MAX;
	volatile int64_t x47 = INT64_MIN;
	static uint32_t x48 = UINT32_MAX;
	volatile int32_t t11 = 285741468;

	t11 = ((x45-x46)<=(x47^x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	static uint32_t x51 = 738322816U;
	int64_t x52 = INT64_MAX;
	int32_t t12 = 4246;

	t12 = ((x49-x50)<=(x51^x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = 32U;
	volatile int16_t x58 = -1;
	static int32_t x59 = INT32_MAX;
	int32_t t13 = -6751598;

	t13 = ((x57-x58)<=(x59^x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x62 = -1;
	int32_t x63 = INT32_MIN;
	volatile int32_t t14 = 260780127;

	t14 = ((x61-x62)<=(x63^x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	volatile int16_t x66 = -23;
	volatile uint64_t x67 = 10017077633LLU;
	volatile int64_t x68 = -1530457LL;
	int32_t t15 = -10;

	t15 = ((x65-x66)<=(x67^x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x69 = -1;
	static uint8_t x71 = UINT8_MAX;
	volatile int32_t t16 = 13543;

	t16 = ((x69-x70)<=(x71^x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = 3;
	volatile int16_t x74 = INT16_MIN;
	static uint32_t x75 = 213607U;
	int16_t x76 = INT16_MIN;
	static int32_t t17 = 5983;

	t17 = ((x73-x74)<=(x75^x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 13U;
	uint16_t x78 = 5656U;
	static int32_t x79 = -1;
	uint16_t x80 = 4083U;
	volatile int32_t t18 = -37;

	t18 = ((x77-x78)<=(x79^x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -7691360025LL;
	int32_t x82 = INT32_MIN;
	int32_t x83 = -198;
	int8_t x84 = -1;
	static int32_t t19 = 239206;

	t19 = ((x81-x82)<=(x83^x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = UINT16_MAX;
	volatile int16_t x86 = -1;
	int16_t x87 = INT16_MAX;
	int8_t x88 = INT8_MAX;

	t20 = ((x85-x86)<=(x87^x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	volatile uint8_t x90 = 4U;
	uint32_t x91 = 190U;
	volatile int32_t x92 = 10192024;
	static volatile int32_t t21 = 936834;

	t21 = ((x89-x90)<=(x91^x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x93 = 15264735;
	uint8_t x95 = 0U;
	int64_t x96 = -1LL;

	t22 = ((x93-x94)<=(x95^x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x101 = UINT32_MAX;
	int16_t x102 = INT16_MAX;
	volatile uint64_t x103 = 29593555972474464LLU;
	int64_t x104 = INT64_MAX;

	t23 = ((x101-x102)<=(x103^x104));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MIN;
	int32_t x106 = INT32_MIN;
	static volatile int64_t x107 = -1LL;
	int64_t x108 = -1LL;
	int32_t t24 = 15833810;

	t24 = ((x105-x106)<=(x107^x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x110 = -1;
	int32_t x111 = 590;
	uint8_t x112 = 74U;
	int32_t t25 = 51;

	t25 = ((x109-x110)<=(x111^x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x114 = UINT8_MAX;
	volatile int64_t x116 = INT64_MIN;
	volatile int32_t t26 = -48;

	t26 = ((x113-x114)<=(x115^x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = -1;
	volatile int32_t x118 = INT32_MIN;
	volatile int16_t x119 = -107;
	int32_t x120 = INT32_MIN;
	volatile int32_t t27 = -487052006;

	t27 = ((x117-x118)<=(x119^x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x121 = 6U;
	int16_t x122 = 87;
	volatile int8_t x123 = -31;
	static uint32_t x124 = 90432777U;
	static int32_t t28 = 1001;

	t28 = ((x121-x122)<=(x123^x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x126 = INT16_MIN;
	int8_t x127 = 0;
	volatile int64_t x128 = INT64_MAX;
	int32_t t29 = 156;

	t29 = ((x125-x126)<=(x127^x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x130 = 1U;
	int16_t x131 = INT16_MIN;
	volatile int8_t x132 = INT8_MIN;
	volatile int32_t t30 = 12;

	t30 = ((x129-x130)<=(x131^x132));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x134 = -1LL;
	volatile int32_t t31 = -15885898;

	t31 = ((x133-x134)<=(x135^x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x141 = 0;
	int16_t x142 = -1;
	uint64_t x143 = UINT64_MAX;
	int32_t x144 = INT32_MAX;
	volatile int32_t t32 = -121346961;

	t32 = ((x141-x142)<=(x143^x144));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = 2;
	static int32_t x146 = 64659;
	int16_t x147 = 1;
	int64_t x148 = -59215LL;
	int32_t t33 = -1;

	t33 = ((x145-x146)<=(x147^x148));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x149 = 19618491547460LLU;
	uint64_t x150 = 6LLU;
	int64_t x151 = INT64_MIN;
	volatile int32_t t34 = 8746452;

	t34 = ((x149-x150)<=(x151^x152));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = INT8_MIN;
	int16_t x155 = -1;
	static int32_t t35 = 6731;

	t35 = ((x153-x154)<=(x155^x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = -1;
	static volatile uint8_t x162 = 3U;
	static uint64_t x163 = 316300261341LLU;
	static int64_t x164 = -1LL;

	t36 = ((x161-x162)<=(x163^x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = 129663353LL;
	int8_t x166 = INT8_MAX;
	int32_t x167 = -720;
	static int32_t x168 = -1;
	int32_t t37 = 19;

	t37 = ((x165-x166)<=(x167^x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x169 = 8U;
	int32_t x170 = 1;
	static volatile int16_t x171 = -11;
	int32_t x172 = INT32_MIN;
	volatile int32_t t38 = 1870165;

	t38 = ((x169-x170)<=(x171^x172));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x173 = 13U;
	int64_t x174 = INT64_MAX;
	int16_t x175 = -1;
	int64_t x176 = INT64_MIN;
	int32_t t39 = -213286;

	t39 = ((x173-x174)<=(x175^x176));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x177 = INT16_MIN;
	int16_t x178 = INT16_MAX;
	uint16_t x179 = 9456U;
	uint8_t x180 = 31U;
	int32_t t40 = -16155;

	t40 = ((x177-x178)<=(x179^x180));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x185 = -524;
	static uint16_t x187 = 147U;
	volatile uint64_t x188 = 17969398350757338LLU;
	volatile int32_t t41 = 6410;

	t41 = ((x185-x186)<=(x187^x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = INT64_MAX;
	uint16_t x190 = 57U;
	int64_t x191 = INT64_MIN;
	static int32_t x192 = INT32_MIN;

	t42 = ((x189-x190)<=(x191^x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x193 = 239514563U;
	volatile uint64_t x194 = 155751520737LLU;
	uint8_t x196 = 3U;
	volatile int32_t t43 = -4;

	t43 = ((x193-x194)<=(x195^x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x197 = 219U;
	static uint8_t x198 = UINT8_MAX;
	static int16_t x199 = INT16_MIN;
	volatile int16_t x200 = INT16_MIN;
	int32_t t44 = 58804415;

	t44 = ((x197-x198)<=(x199^x200));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x201 = UINT16_MAX;
	int16_t x203 = INT16_MIN;
	volatile int32_t t45 = 1502834;

	t45 = ((x201-x202)<=(x203^x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x205 = -136184910412LL;
	int64_t x206 = 163341434LL;
	int8_t x207 = 25;
	static uint8_t x208 = 7U;
	volatile int32_t t46 = -17208;

	t46 = ((x205-x206)<=(x207^x208));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = INT8_MIN;
	uint16_t x210 = 0U;
	static uint32_t x211 = 1359957U;
	volatile int32_t t47 = 220;

	t47 = ((x209-x210)<=(x211^x212));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x213 = 1216322LLU;
	int64_t x214 = INT64_MIN;
	int8_t x215 = -1;
	int32_t x216 = INT32_MAX;
	volatile int32_t t48 = 0;

	t48 = ((x213-x214)<=(x215^x216));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x217 = 2U;
	uint32_t x218 = UINT32_MAX;
	int8_t x219 = 35;
	volatile uint16_t x220 = 1U;
	volatile int32_t t49 = 50712;

	t49 = ((x217-x218)<=(x219^x220));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x221 = -39831;
	uint32_t x222 = 3853645U;
	uint16_t x223 = 1891U;
	volatile int32_t t50 = -58847429;

	t50 = ((x221-x222)<=(x223^x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x227 = 467;
	static volatile int32_t t51 = 93695811;

	t51 = ((x225-x226)<=(x227^x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x229 = UINT32_MAX;
	static uint16_t x230 = 0U;
	static int64_t x231 = -1LL;
	static int64_t x232 = INT64_MAX;
	volatile int32_t t52 = -40895471;

	t52 = ((x229-x230)<=(x231^x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x233 = UINT32_MAX;
	int32_t x234 = INT32_MAX;
	int8_t x235 = INT8_MIN;
	volatile uint32_t x236 = UINT32_MAX;
	int32_t t53 = -12;

	t53 = ((x233-x234)<=(x235^x236));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x237 = INT16_MAX;
	int32_t x238 = 436433;
	volatile int64_t x240 = INT64_MAX;

	t54 = ((x237-x238)<=(x239^x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x241 = 9U;
	int8_t x242 = -1;
	static int8_t x244 = 11;
	volatile int32_t t55 = 322447;

	t55 = ((x241-x242)<=(x243^x244));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = INT16_MIN;
	volatile uint8_t x246 = 0U;
	int64_t x247 = 97077467LL;
	int8_t x248 = INT8_MIN;
	int32_t t56 = 31;

	t56 = ((x245-x246)<=(x247^x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x250 = UINT8_MAX;
	int64_t x251 = -7109750063LL;
	volatile int16_t x252 = -16131;
	int32_t t57 = 31486;

	t57 = ((x249-x250)<=(x251^x252));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x253 = INT16_MAX;
	int16_t x255 = 0;
	int8_t x256 = -1;
	static int32_t t58 = 95510;

	t58 = ((x253-x254)<=(x255^x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x261 = 8LL;
	uint32_t x262 = 28U;
	uint32_t x263 = 790U;
	int8_t x264 = INT8_MAX;
	volatile int32_t t59 = 17;

	t59 = ((x261-x262)<=(x263^x264));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x265 = UINT32_MAX;
	static uint64_t x268 = UINT64_MAX;

	t60 = ((x265-x266)<=(x267^x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x273 = 571372631385103378LLU;
	static int16_t x274 = INT16_MIN;
	uint64_t x275 = 3115LLU;
	static volatile int32_t t61 = -119816;

	t61 = ((x273-x274)<=(x275^x276));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = INT8_MAX;
	int8_t x280 = INT8_MIN;
	static int32_t t62 = 571969059;

	t62 = ((x277-x278)<=(x279^x280));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x285 = 85735751LLU;
	int64_t x286 = INT64_MIN;
	static int32_t x287 = INT32_MIN;
	int8_t x288 = INT8_MAX;
	int32_t t63 = -6;

	t63 = ((x285-x286)<=(x287^x288));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x289 = INT16_MAX;
	int16_t x290 = INT16_MAX;
	uint8_t x291 = 75U;
	static int32_t t64 = 816473;

	t64 = ((x289-x290)<=(x291^x292));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x293 = -1LL;
	int64_t x294 = INT64_MAX;
	volatile int32_t x295 = -1;
	static int16_t x296 = 2805;
	int32_t t65 = 35;

	t65 = ((x293-x294)<=(x295^x296));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x297 = 4U;

	t66 = ((x297-x298)<=(x299^x300));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x301 = -1;
	int16_t x303 = -1;
	int32_t x304 = INT32_MAX;
	int32_t t67 = -58;

	t67 = ((x301-x302)<=(x303^x304));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x305 = INT8_MIN;
	int32_t x306 = INT32_MIN;
	uint16_t x307 = 12U;
	static volatile int16_t x308 = INT16_MIN;

	t68 = ((x305-x306)<=(x307^x308));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x310 = 13;
	int64_t x311 = INT64_MIN;
	int8_t x312 = INT8_MIN;
	volatile int32_t t69 = -7889238;

	t69 = ((x309-x310)<=(x311^x312));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x313 = -1LL;
	int32_t x314 = -1;
	uint32_t x315 = 37U;
	static int8_t x316 = INT8_MAX;
	int32_t t70 = 93169525;

	t70 = ((x313-x314)<=(x315^x316));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x321 = 338;
	int32_t x322 = 30814163;
	uint16_t x323 = UINT16_MAX;
	volatile int32_t t71 = -5859;

	t71 = ((x321-x322)<=(x323^x324));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x325 = INT16_MIN;
	uint16_t x326 = 13U;
	int8_t x327 = INT8_MIN;
	uint16_t x328 = 175U;
	static volatile int32_t t72 = 55;

	t72 = ((x325-x326)<=(x327^x328));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x329 = 20;
	uint8_t x330 = UINT8_MAX;
	volatile int64_t x331 = 3LL;
	volatile uint16_t x332 = 1884U;
	int32_t t73 = 220;

	t73 = ((x329-x330)<=(x331^x332));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x333 = -3;
	static uint64_t x334 = 121796382785215107LLU;
	uint16_t x335 = UINT16_MAX;
	uint8_t x336 = UINT8_MAX;
	volatile int32_t t74 = 4560;

	t74 = ((x333-x334)<=(x335^x336));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x337 = 3U;
	int8_t x338 = -1;
	uint32_t x339 = 404521108U;
	uint16_t x340 = 19202U;
	volatile int32_t t75 = 8538603;

	t75 = ((x337-x338)<=(x339^x340));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x341 = 34U;
	int32_t x342 = -234444;
	int64_t x343 = -1LL;
	int32_t t76 = -3383088;

	t76 = ((x341-x342)<=(x343^x344));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x345 = -1;
	uint16_t x346 = 218U;
	static volatile uint32_t x348 = UINT32_MAX;
	int32_t t77 = 3542603;

	t77 = ((x345-x346)<=(x347^x348));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x353 = INT16_MIN;
	volatile uint32_t x354 = 81623385U;
	uint16_t x355 = 467U;
	uint8_t x356 = 15U;
	int32_t t78 = 455;

	t78 = ((x353-x354)<=(x355^x356));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x357 = -1;
	uint8_t x358 = 40U;
	int64_t x359 = INT64_MIN;
	static int8_t x360 = -1;
	int32_t t79 = -798164;

	t79 = ((x357-x358)<=(x359^x360));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x361 = -1;
	int16_t x362 = 10200;
	int64_t x363 = -1LL;
	static int8_t x364 = INT8_MAX;

	t80 = ((x361-x362)<=(x363^x364));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x365 = INT16_MAX;
	static volatile uint16_t x366 = UINT16_MAX;
	volatile int32_t x368 = -1;

	t81 = ((x365-x366)<=(x367^x368));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x373 = -1LL;
	uint16_t x374 = 622U;
	uint16_t x375 = 2U;
	volatile int32_t t82 = -28867;

	t82 = ((x373-x374)<=(x375^x376));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x377 = 124564613LLU;
	volatile int8_t x379 = INT8_MIN;
	static int16_t x380 = -1;
	volatile int32_t t83 = 0;

	t83 = ((x377-x378)<=(x379^x380));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x381 = INT16_MAX;
	volatile int64_t x382 = INT64_MAX;
	int32_t x383 = INT32_MAX;
	volatile int16_t x384 = INT16_MIN;
	volatile int32_t t84 = -10235575;

	t84 = ((x381-x382)<=(x383^x384));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x389 = -5;
	static volatile int8_t x390 = 1;
	uint64_t x392 = 0LLU;
	static int32_t t85 = -173767523;

	t85 = ((x389-x390)<=(x391^x392));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x393 = -1LL;
	uint32_t x395 = UINT32_MAX;
	int64_t x396 = -1LL;
	int32_t t86 = 752900264;

	t86 = ((x393-x394)<=(x395^x396));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x397 = 497415621889651LLU;
	int64_t x398 = -10390126717123551LL;
	uint8_t x399 = 1U;
	volatile int8_t x400 = -17;
	volatile int32_t t87 = 252924;

	t87 = ((x397-x398)<=(x399^x400));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x401 = 171442968LLU;
	volatile int8_t x402 = INT8_MIN;
	static uint8_t x403 = UINT8_MAX;
	uint8_t x404 = 1U;

	t88 = ((x401-x402)<=(x403^x404));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x406 = INT16_MIN;
	int8_t x408 = INT8_MIN;

	t89 = ((x405-x406)<=(x407^x408));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x409 = UINT8_MAX;
	volatile int64_t x410 = 1899126296LL;
	volatile int64_t x411 = -1LL;
	int32_t x412 = 31360047;
	static volatile int32_t t90 = 1;

	t90 = ((x409-x410)<=(x411^x412));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x414 = 2;
	static uint8_t x415 = 21U;
	int32_t t91 = -160233;

	t91 = ((x413-x414)<=(x415^x416));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x417 = INT16_MAX;
	uint8_t x418 = 7U;
	int32_t x420 = -1;
	static volatile int32_t t92 = -1630;

	t92 = ((x417-x418)<=(x419^x420));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x421 = UINT16_MAX;
	uint64_t x422 = UINT64_MAX;
	volatile uint32_t x423 = UINT32_MAX;
	static uint8_t x424 = UINT8_MAX;
	volatile int32_t t93 = 1;

	t93 = ((x421-x422)<=(x423^x424));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x426 = 3317LLU;
	uint64_t x427 = UINT64_MAX;
	uint64_t x428 = 86306LLU;
	volatile int32_t t94 = -651417049;

	t94 = ((x425-x426)<=(x427^x428));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x429 = 14814633639593LLU;
	int8_t x431 = INT8_MAX;
	int64_t x432 = 301255267927534330LL;
	volatile int32_t t95 = 1;

	t95 = ((x429-x430)<=(x431^x432));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x433 = INT32_MIN;
	int32_t x434 = INT32_MIN;
	int16_t x435 = INT16_MIN;
	uint16_t x436 = 1946U;

	t96 = ((x433-x434)<=(x435^x436));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x437 = INT8_MIN;
	uint32_t x438 = 287232871U;
	static int16_t x439 = -1;
	int32_t x440 = -831590;
	volatile int32_t t97 = -60623420;

	t97 = ((x437-x438)<=(x439^x440));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x441 = -210;
	int64_t x442 = INT64_MIN;
	uint16_t x443 = UINT16_MAX;

	t98 = ((x441-x442)<=(x443^x444));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x449 = UINT64_MAX;
	static volatile int64_t x450 = INT64_MAX;
	uint16_t x451 = 0U;
	volatile uint32_t x452 = UINT32_MAX;
	volatile int32_t t99 = 1101605;

	t99 = ((x449-x450)<=(x451^x452));

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

