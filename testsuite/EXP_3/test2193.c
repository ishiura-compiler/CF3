#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x4 = INT32_MIN;
static int64_t x6 = INT64_MIN;
volatile uint8_t x10 = UINT8_MAX;
int64_t x14 = INT64_MAX;
static volatile int8_t x19 = INT8_MIN;
volatile uint64_t x20 = 11874LLU;
uint32_t x21 = UINT32_MAX;
int16_t x24 = INT16_MIN;
static volatile int16_t x32 = INT16_MIN;
int32_t t7 = -178662722;
static int64_t x37 = INT64_MIN;
static int8_t x39 = 34;
uint16_t x44 = 111U;
volatile int32_t t10 = -45520;
uint8_t x45 = 5U;
int32_t x48 = 114485041;
int32_t t11 = -45248064;
uint16_t x50 = 5988U;
volatile int32_t t12 = -1;
int16_t x60 = INT16_MAX;
int32_t t15 = -764248;
volatile int32_t t16 = -12727679;
int16_t x78 = -1;
static uint64_t x84 = UINT64_MAX;
volatile int16_t x87 = 1042;
volatile int32_t t21 = 426;
static volatile int32_t x94 = INT32_MIN;
int32_t x95 = INT32_MIN;
int8_t x100 = -10;
static int64_t x107 = 1LL;
int8_t x118 = INT8_MAX;
static int32_t x119 = INT32_MIN;
static int32_t x121 = INT32_MIN;
volatile int32_t t31 = -41304760;
int16_t x129 = -1;
uint16_t x136 = 7U;
volatile uint16_t x142 = UINT16_MAX;
volatile int32_t t35 = 1;
int32_t x146 = -2285;
static int32_t t36 = -30;
static int16_t x149 = 1;
uint32_t x155 = 1902U;
int64_t x168 = INT64_MAX;
uint8_t x172 = 15U;
int32_t x173 = INT32_MAX;
uint16_t x174 = UINT16_MAX;
static volatile uint64_t x181 = 5310946226647902068LLU;
static int16_t x194 = 9791;
int16_t x205 = INT16_MIN;
int32_t x209 = 130798514;
uint32_t x215 = 1447877U;
int32_t x217 = 12;
volatile int32_t t55 = -37;
int32_t x231 = INT32_MIN;
int8_t x232 = INT8_MIN;
volatile int64_t x235 = -57379075LL;
static uint16_t x240 = 5235U;
int32_t x245 = INT32_MAX;
volatile int16_t x248 = INT16_MIN;
static uint8_t x258 = UINT8_MAX;
int32_t t65 = 11370564;
int8_t x267 = -39;
volatile int16_t x272 = -1;
volatile int32_t x274 = 2798804;
static int32_t x277 = INT32_MAX;
static int64_t x281 = INT64_MIN;
static int8_t x285 = -1;
int32_t t72 = -39;
volatile uint16_t x297 = 17U;
int64_t x300 = INT64_MIN;
volatile int32_t t74 = -14835249;
int16_t x303 = INT16_MIN;
uint16_t x316 = 3501U;
int8_t x317 = INT8_MAX;
int32_t x319 = INT32_MIN;
volatile int16_t x320 = INT16_MIN;
volatile int64_t x322 = 31655LL;
uint64_t x323 = UINT64_MAX;
volatile int16_t x329 = INT16_MIN;
int32_t t82 = 8107;
int32_t x335 = 7040091;
int32_t t84 = 121197375;
volatile int16_t x348 = -1;
int8_t x353 = -1;
uint8_t x355 = UINT8_MAX;
volatile int32_t t88 = 7;
static int64_t x357 = -3543LL;
int16_t x358 = INT16_MAX;
volatile int32_t t89 = 680377;
int32_t t91 = 488617;
volatile int32_t x371 = -1;
int32_t x376 = INT32_MIN;
int64_t x377 = 618081266713974086LL;
int16_t x379 = 62;
int32_t t95 = 53017;
uint64_t x389 = 6LLU;
uint8_t x390 = 8U;
static int8_t x391 = INT8_MAX;
int32_t t97 = -492260721;
volatile int32_t x397 = 178882;
static volatile int32_t t99 = 744;


void f0(void) {
	int8_t x1 = 42;
	int64_t x2 = 1LL;
	int64_t x3 = INT64_MIN;
	int32_t t0 = 349;

	t0 = ((x1^x2)<(x3^x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	uint64_t x7 = 94877LLU;
	volatile int64_t x8 = -1LL;
	volatile int32_t t1 = -41583;

	t1 = ((x5^x6)<(x7^x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	uint64_t x11 = UINT64_MAX;
	int64_t x12 = 28LL;
	volatile int32_t t2 = 5;

	t2 = ((x9^x10)<(x11^x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	uint32_t x15 = UINT32_MAX;
	uint64_t x16 = 19659629855091213LLU;
	int32_t t3 = 30123;

	t3 = ((x13^x14)<(x15^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 665124LLU;
	static volatile int16_t x18 = INT16_MAX;
	int32_t t4 = 75415;

	t4 = ((x17^x18)<(x19^x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x22 = UINT32_MAX;
	uint64_t x23 = 51198566008385705LLU;
	volatile int32_t t5 = -3110;

	t5 = ((x21^x22)<(x23^x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = 5;
	uint16_t x26 = 28495U;
	int16_t x27 = INT16_MAX;
	static int16_t x28 = 74;
	static int32_t t6 = -1628473;

	t6 = ((x25^x26)<(x27^x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -28;
	int64_t x30 = INT64_MAX;
	int32_t x31 = INT32_MIN;

	t7 = ((x29^x30)<(x31^x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MIN;
	int64_t x34 = INT64_MIN;
	static uint64_t x35 = 445758LLU;
	static int8_t x36 = 2;
	static int32_t t8 = 2;

	t8 = ((x33^x34)<(x35^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = -14;
	uint64_t x40 = 351610109153341263LLU;
	int32_t t9 = -55031;

	t9 = ((x37^x38)<(x39^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	volatile uint32_t x42 = 1234750458U;
	int8_t x43 = -2;

	t10 = ((x41^x42)<(x43^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x46 = INT64_MIN;
	volatile int32_t x47 = -1;

	t11 = ((x45^x46)<(x47^x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 607094680;
	volatile uint8_t x51 = 24U;
	int16_t x52 = 72;

	t12 = ((x49^x50)<(x51^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 836692U;
	int64_t x54 = INT64_MIN;
	int8_t x55 = INT8_MIN;
	int8_t x56 = -30;
	int32_t t13 = 9;

	t13 = ((x53^x54)<(x55^x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -9550379188707754LL;
	int64_t x58 = INT64_MIN;
	int8_t x59 = -1;
	volatile int32_t t14 = -137;

	t14 = ((x57^x58)<(x59^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = 11833;
	int16_t x62 = 0;
	volatile int64_t x63 = INT64_MAX;
	static int64_t x64 = 39602063718LL;

	t15 = ((x61^x62)<(x63^x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	volatile uint32_t x66 = 0U;
	volatile int8_t x67 = INT8_MIN;
	volatile int64_t x68 = -50655046552724397LL;

	t16 = ((x65^x66)<(x67^x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = INT64_MIN;
	int8_t x70 = 1;
	static int64_t x71 = INT64_MAX;
	static int8_t x72 = 1;
	volatile int32_t t17 = -137;

	t17 = ((x69^x70)<(x71^x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x73 = 975702U;
	volatile int32_t x74 = INT32_MIN;
	volatile int64_t x75 = INT64_MAX;
	int16_t x76 = -519;
	volatile int32_t t18 = 255937075;

	t18 = ((x73^x74)<(x75^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x77 = INT32_MIN;
	int64_t x79 = INT64_MIN;
	uint8_t x80 = 27U;
	static volatile int32_t t19 = -2;

	t19 = ((x77^x78)<(x79^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MAX;
	static int8_t x82 = INT8_MIN;
	int64_t x83 = -1LL;
	int32_t t20 = -10207;

	t20 = ((x81^x82)<(x83^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 230483103256LLU;
	static uint8_t x86 = UINT8_MAX;
	uint8_t x88 = 59U;

	t21 = ((x85^x86)<(x87^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 0U;
	int8_t x90 = -1;
	int16_t x91 = 1;
	static int64_t x92 = INT64_MIN;
	volatile int32_t t22 = -12886569;

	t22 = ((x89^x90)<(x91^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x93 = UINT16_MAX;
	int16_t x96 = INT16_MIN;
	int32_t t23 = -382756039;

	t23 = ((x93^x94)<(x95^x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x97 = UINT16_MAX;
	uint32_t x98 = 3U;
	uint8_t x99 = 5U;
	int32_t t24 = -67;

	t24 = ((x97^x98)<(x99^x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MIN;
	int16_t x102 = 15678;
	int32_t x103 = -284;
	int16_t x104 = 8;
	int32_t t25 = 780312;

	t25 = ((x101^x102)<(x103^x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	int16_t x106 = INT16_MIN;
	int64_t x108 = INT64_MAX;
	volatile int32_t t26 = 439;

	t26 = ((x105^x106)<(x107^x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	int16_t x110 = -1;
	int16_t x111 = INT16_MIN;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t27 = -11;

	t27 = ((x109^x110)<(x111^x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x113 = 4U;
	uint64_t x114 = UINT64_MAX;
	int64_t x115 = 1LL;
	int64_t x116 = 92942760027LL;
	volatile int32_t t28 = 1053540343;

	t28 = ((x113^x114)<(x115^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x117 = 14158105U;
	int64_t x120 = INT64_MIN;
	int32_t t29 = -770333407;

	t29 = ((x117^x118)<(x119^x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = 13;
	int16_t x123 = 7437;
	volatile int16_t x124 = INT16_MAX;
	int32_t t30 = -2050;

	t30 = ((x121^x122)<(x123^x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = 0;
	int8_t x126 = INT8_MAX;
	int32_t x127 = INT32_MIN;
	int8_t x128 = -1;

	t31 = ((x125^x126)<(x127^x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x130 = -5;
	static int64_t x131 = -1LL;
	static int16_t x132 = INT16_MIN;
	static volatile int32_t t32 = -37597;

	t32 = ((x129^x130)<(x131^x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	uint16_t x134 = 0U;
	static volatile int32_t x135 = INT32_MIN;
	int32_t t33 = -7669;

	t33 = ((x133^x134)<(x135^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 1520U;
	int16_t x138 = INT16_MIN;
	uint64_t x139 = 348LLU;
	uint8_t x140 = 96U;
	int32_t t34 = 1871429;

	t34 = ((x137^x138)<(x139^x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = UINT16_MAX;
	int32_t x143 = -9612;
	int32_t x144 = 55392;

	t35 = ((x141^x142)<(x143^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	static int32_t x147 = -16667124;
	volatile int64_t x148 = INT64_MIN;

	t36 = ((x145^x146)<(x147^x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = 61650284;
	uint32_t x151 = 22U;
	int16_t x152 = INT16_MIN;
	int32_t t37 = 244207;

	t37 = ((x149^x150)<(x151^x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -33;
	uint32_t x154 = 505U;
	volatile int32_t x156 = -1;
	int32_t t38 = 22;

	t38 = ((x153^x154)<(x155^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -61387;
	static uint32_t x158 = 21589543U;
	int8_t x159 = -3;
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t39 = 129034495;

	t39 = ((x157^x158)<(x159^x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = INT32_MAX;
	uint8_t x162 = 4U;
	int16_t x163 = INT16_MIN;
	uint8_t x164 = 7U;
	volatile int32_t t40 = -5;

	t40 = ((x161^x162)<(x163^x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	int64_t x166 = -1LL;
	static volatile int8_t x167 = -1;
	int32_t t41 = 0;

	t41 = ((x165^x166)<(x167^x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 4LL;
	int8_t x170 = INT8_MIN;
	uint64_t x171 = 604211130853877899LLU;
	static volatile int32_t t42 = 312529041;

	t42 = ((x169^x170)<(x171^x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x175 = -55;
	volatile int8_t x176 = INT8_MAX;
	volatile int32_t t43 = -4483;

	t43 = ((x173^x174)<(x175^x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 14419U;
	int64_t x178 = -1LL;
	int16_t x179 = INT16_MIN;
	int32_t x180 = -1;
	int32_t t44 = 93;

	t44 = ((x177^x178)<(x179^x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x182 = 6437U;
	static int32_t x183 = INT32_MIN;
	int64_t x184 = 2353LL;
	static int32_t t45 = -594675315;

	t45 = ((x181^x182)<(x183^x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	static int16_t x186 = INT16_MIN;
	int32_t x187 = -1;
	uint64_t x188 = UINT64_MAX;
	volatile int32_t t46 = 2713686;

	t46 = ((x185^x186)<(x187^x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	uint64_t x190 = 47426298122866LLU;
	volatile int64_t x191 = 16109513855LL;
	int64_t x192 = INT64_MAX;
	volatile int32_t t47 = -1074094;

	t47 = ((x189^x190)<(x191^x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x193 = 4U;
	volatile int32_t x195 = INT32_MIN;
	volatile int32_t x196 = 156;
	static int32_t t48 = -2;

	t48 = ((x193^x194)<(x195^x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = -1LL;
	volatile uint8_t x198 = 17U;
	uint16_t x199 = 70U;
	volatile int16_t x200 = -1;
	int32_t t49 = 15521;

	t49 = ((x197^x198)<(x199^x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = UINT64_MAX;
	volatile uint32_t x202 = 11689U;
	int16_t x203 = INT16_MIN;
	int16_t x204 = -3435;
	int32_t t50 = -8686934;

	t50 = ((x201^x202)<(x203^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = -1;
	uint64_t x207 = 1345698318614918463LLU;
	uint8_t x208 = UINT8_MAX;
	volatile int32_t t51 = -663642092;

	t51 = ((x205^x206)<(x207^x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = INT16_MAX;
	uint32_t x211 = UINT32_MAX;
	int16_t x212 = -537;
	int32_t t52 = -7000230;

	t52 = ((x209^x210)<(x211^x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = -204548LL;
	uint8_t x214 = 127U;
	uint8_t x216 = 68U;
	volatile int32_t t53 = -12378;

	t53 = ((x213^x214)<(x215^x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = 24;
	static volatile uint32_t x219 = 907U;
	volatile int8_t x220 = -1;
	volatile int32_t t54 = -5784248;

	t54 = ((x217^x218)<(x219^x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = -1LL;
	int64_t x222 = -20LL;
	int8_t x223 = 0;
	int16_t x224 = INT16_MAX;

	t55 = ((x221^x222)<(x223^x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 3;
	static int64_t x226 = INT64_MAX;
	uint64_t x227 = UINT64_MAX;
	int64_t x228 = INT64_MAX;
	int32_t t56 = -180;

	t56 = ((x225^x226)<(x227^x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	int8_t x230 = -8;
	int32_t t57 = -120;

	t57 = ((x229^x230)<(x231^x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	int16_t x234 = INT16_MAX;
	static uint8_t x236 = 8U;
	int32_t t58 = 26982175;

	t58 = ((x233^x234)<(x235^x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = 2;
	int16_t x238 = -3;
	volatile int64_t x239 = INT64_MAX;
	volatile int32_t t59 = -46200822;

	t59 = ((x237^x238)<(x239^x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = 1747345002121LL;
	uint64_t x242 = UINT64_MAX;
	int64_t x243 = 16895070196LL;
	uint8_t x244 = 6U;
	volatile int32_t t60 = -45697245;

	t60 = ((x241^x242)<(x243^x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x246 = 828;
	uint32_t x247 = UINT32_MAX;
	volatile int32_t t61 = -14535713;

	t61 = ((x245^x246)<(x247^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	int64_t x250 = -2188791801169641LL;
	int32_t x251 = INT32_MIN;
	int16_t x252 = INT16_MIN;
	int32_t t62 = 6058779;

	t62 = ((x249^x250)<(x251^x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -7LL;
	volatile int32_t x254 = -1;
	int16_t x255 = 0;
	int64_t x256 = INT64_MAX;
	static volatile int32_t t63 = 8;

	t63 = ((x253^x254)<(x255^x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	uint8_t x259 = 26U;
	static int64_t x260 = -237341LL;
	int32_t t64 = 226424199;

	t64 = ((x257^x258)<(x259^x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 655873U;
	int8_t x262 = -1;
	int64_t x263 = 1LL;
	int64_t x264 = 52LL;

	t65 = ((x261^x262)<(x263^x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = -3;
	uint16_t x266 = 0U;
	volatile int16_t x268 = -3812;
	int32_t t66 = -26452;

	t66 = ((x265^x266)<(x267^x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = INT8_MIN;
	volatile int8_t x270 = INT8_MIN;
	int8_t x271 = INT8_MIN;
	volatile int32_t t67 = 87259;

	t67 = ((x269^x270)<(x271^x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MAX;
	uint16_t x275 = 3U;
	int64_t x276 = -22LL;
	int32_t t68 = 2;

	t68 = ((x273^x274)<(x275^x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x278 = INT8_MIN;
	int32_t x279 = INT32_MIN;
	static int16_t x280 = -1;
	static int32_t t69 = 2026124;

	t69 = ((x277^x278)<(x279^x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x282 = -1;
	volatile uint64_t x283 = 690158818697730LLU;
	int16_t x284 = -3283;
	volatile int32_t t70 = 1012791444;

	t70 = ((x281^x282)<(x283^x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x286 = INT8_MAX;
	uint8_t x287 = UINT8_MAX;
	static volatile uint32_t x288 = 237U;
	volatile int32_t t71 = -139068;

	t71 = ((x285^x286)<(x287^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = INT32_MAX;
	static int16_t x290 = 10145;
	int8_t x291 = -1;
	int16_t x292 = -1;

	t72 = ((x289^x290)<(x291^x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MAX;
	int8_t x294 = 1;
	uint64_t x295 = UINT64_MAX;
	volatile uint8_t x296 = 0U;
	int32_t t73 = -940223;

	t73 = ((x293^x294)<(x295^x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x298 = INT16_MIN;
	volatile int8_t x299 = INT8_MIN;

	t74 = ((x297^x298)<(x299^x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -1;
	volatile int16_t x302 = 697;
	int64_t x304 = INT64_MIN;
	int32_t t75 = -431506494;

	t75 = ((x301^x302)<(x303^x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = INT64_MIN;
	int8_t x306 = -1;
	static int32_t x307 = INT32_MIN;
	uint32_t x308 = 67U;
	volatile int32_t t76 = 24;

	t76 = ((x305^x306)<(x307^x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 28447409484535LLU;
	static int8_t x310 = INT8_MAX;
	uint64_t x311 = UINT64_MAX;
	int64_t x312 = 24544407402LL;
	int32_t t77 = 64;

	t77 = ((x309^x310)<(x311^x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	uint64_t x314 = 23LLU;
	uint16_t x315 = 3030U;
	volatile int32_t t78 = 77375;

	t78 = ((x313^x314)<(x315^x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x318 = 13;
	volatile int32_t t79 = 3;

	t79 = ((x317^x318)<(x319^x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 27U;
	int8_t x324 = INT8_MAX;
	static volatile int32_t t80 = -34;

	t80 = ((x321^x322)<(x323^x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MAX;
	uint32_t x326 = 1096306U;
	static uint64_t x327 = 35989881116048LLU;
	uint64_t x328 = 74090LLU;
	static volatile int32_t t81 = -169;

	t81 = ((x325^x326)<(x327^x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x330 = 32;
	static int32_t x331 = -2621;
	int32_t x332 = -1;

	t82 = ((x329^x330)<(x331^x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	int16_t x334 = 23;
	int32_t x336 = -1;
	int32_t t83 = 0;

	t83 = ((x333^x334)<(x335^x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = INT16_MIN;
	uint32_t x338 = 947989U;
	volatile int16_t x339 = INT16_MIN;
	uint16_t x340 = UINT16_MAX;

	t84 = ((x337^x338)<(x339^x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	int16_t x342 = -1;
	uint16_t x343 = UINT16_MAX;
	uint32_t x344 = 117U;
	static int32_t t85 = 155476329;

	t85 = ((x341^x342)<(x343^x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 14827LLU;
	volatile int16_t x346 = INT16_MAX;
	int8_t x347 = INT8_MIN;
	volatile int32_t t86 = 1;

	t86 = ((x345^x346)<(x347^x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x349 = 8558366135769900LLU;
	int16_t x350 = 3;
	static int8_t x351 = -45;
	static int32_t x352 = -5;
	int32_t t87 = -776739;

	t87 = ((x349^x350)<(x351^x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x354 = INT32_MIN;
	int16_t x356 = INT16_MIN;

	t88 = ((x353^x354)<(x355^x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x359 = -1;
	uint16_t x360 = UINT16_MAX;

	t89 = ((x357^x358)<(x359^x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	int8_t x362 = 58;
	static uint32_t x363 = 2032U;
	int32_t x364 = INT32_MAX;
	static volatile int32_t t90 = 908539122;

	t90 = ((x361^x362)<(x363^x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	static int64_t x366 = 8LL;
	static int64_t x367 = -1LL;
	int32_t x368 = INT32_MAX;

	t91 = ((x365^x366)<(x367^x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	int32_t x370 = INT32_MAX;
	static uint16_t x372 = UINT16_MAX;
	volatile int32_t t92 = 1;

	t92 = ((x369^x370)<(x371^x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MAX;
	int32_t x374 = -114099;
	int64_t x375 = INT64_MIN;
	int32_t t93 = -22686314;

	t93 = ((x373^x374)<(x375^x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x378 = INT64_MIN;
	static uint32_t x380 = UINT32_MAX;
	int32_t t94 = 622932351;

	t94 = ((x377^x378)<(x379^x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -11;
	uint16_t x382 = UINT16_MAX;
	volatile int64_t x383 = INT64_MIN;
	int8_t x384 = INT8_MAX;

	t95 = ((x381^x382)<(x383^x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	int64_t x386 = -658686922939LL;
	static int32_t x387 = -1;
	volatile int64_t x388 = INT64_MIN;
	int32_t t96 = -17703360;

	t96 = ((x385^x386)<(x387^x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x392 = 532055749U;

	t97 = ((x389^x390)<(x391^x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	uint8_t x394 = 9U;
	uint64_t x395 = 17053LLU;
	uint64_t x396 = UINT64_MAX;
	volatile int32_t t98 = 0;

	t98 = ((x393^x394)<(x395^x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = -8661036LL;
	int8_t x399 = 1;
	int64_t x400 = INT64_MIN;

	t99 = ((x397^x398)<(x399^x400));

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

