#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
volatile int8_t x3 = -25;
uint32_t x5 = 205901U;
int32_t t1 = -33840513;
static int64_t x12 = -1LL;
static uint64_t x14 = UINT64_MAX;
int16_t x18 = INT16_MIN;
uint16_t x33 = 43U;
volatile uint64_t x44 = 445LLU;
static int32_t t11 = -13113169;
int64_t x52 = INT64_MIN;
volatile int8_t x56 = INT8_MIN;
int16_t x61 = INT16_MAX;
int32_t t15 = 231;
static int16_t x69 = INT16_MIN;
volatile int8_t x71 = INT8_MAX;
uint8_t x81 = 2U;
int16_t x85 = INT16_MIN;
int32_t t20 = -14554231;
volatile int32_t t21 = -26;
int8_t x93 = INT8_MIN;
int64_t x97 = -197013643LL;
int64_t x100 = 3343977414375LL;
uint8_t x102 = 1U;
volatile int64_t x103 = INT64_MIN;
int64_t x111 = INT64_MAX;
int32_t t27 = 190738;
static uint32_t x124 = 1820U;
int32_t t29 = 256173;
int32_t x128 = INT32_MAX;
uint32_t x129 = UINT32_MAX;
int64_t x130 = INT64_MIN;
volatile int64_t x132 = -1LL;
int32_t t31 = -685;
uint32_t x134 = UINT32_MAX;
int32_t x135 = INT32_MIN;
static int32_t x145 = INT32_MIN;
volatile uint8_t x147 = 37U;
int16_t x150 = -61;
int8_t x151 = -1;
volatile int32_t x156 = 40;
int32_t t37 = 7630;
int8_t x157 = 2;
int32_t x160 = INT32_MIN;
static volatile int64_t x172 = -1LL;
volatile int32_t x173 = -1;
volatile int8_t x181 = INT8_MAX;
static int8_t x183 = INT8_MAX;
static int32_t t44 = 25;
int32_t x187 = INT32_MAX;
int32_t x197 = -1846743;
int64_t x199 = -246555657LL;
uint32_t x201 = 130036U;
int32_t t48 = 713204;
uint64_t x206 = 84335673LLU;
int32_t x215 = INT32_MAX;
int64_t x217 = INT64_MIN;
int32_t x220 = 4827;
uint32_t x222 = 9288U;
static int8_t x226 = 3;
uint32_t x227 = 0U;
static volatile int32_t t54 = 493627;
static int64_t x230 = INT64_MAX;
uint16_t x232 = UINT16_MAX;
int32_t t55 = 2;
int16_t x233 = INT16_MAX;
static int64_t x240 = 11408LL;
int32_t t60 = 80104817;
int64_t x253 = INT64_MIN;
volatile int16_t x260 = -1;
int16_t x262 = -1;
uint16_t x268 = 9085U;
volatile int32_t t64 = 25809;
static volatile int32_t x272 = INT32_MIN;
uint32_t x274 = 41U;
int8_t x282 = -1;
int32_t x284 = INT32_MIN;
static uint8_t x286 = UINT8_MAX;
int16_t x290 = 161;
volatile uint16_t x292 = 13701U;
int64_t x293 = 162102219147784348LL;
int8_t x296 = 63;
uint32_t x303 = 3U;
uint32_t x313 = UINT32_MAX;
int32_t x317 = INT32_MAX;
int32_t x321 = 2;
int8_t x327 = INT8_MIN;
int32_t x329 = -39980;
int8_t x331 = -1;
int32_t t79 = 0;
int16_t x336 = INT16_MIN;
uint16_t x343 = UINT16_MAX;
int32_t x344 = INT32_MIN;
static volatile int64_t x345 = -3347916902286467LL;
int16_t x348 = -12;
int64_t x349 = INT64_MIN;
int32_t x356 = INT32_MIN;
uint64_t x369 = 1328589LLU;
int32_t x379 = INT32_MIN;
static int64_t x381 = -1LL;
static int64_t x383 = 44246LL;
volatile uint8_t x388 = UINT8_MAX;
int32_t x401 = INT32_MIN;
int32_t t98 = -1;
uint16_t x416 = 11576U;


void f0(void) {
	static volatile int8_t x2 = INT8_MIN;
	int8_t x4 = 1;
	volatile int32_t t0 = 659;

	t0 = (x1<((x2<=x3)%x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MIN;
	static int16_t x7 = INT16_MAX;
	int16_t x8 = INT16_MAX;

	t1 = (x5<((x6<=x7)%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	int32_t x10 = -1;
	static volatile int64_t x11 = -4026869838586LL;
	static int32_t t2 = 21268729;

	t2 = (x9<((x10<=x11)%x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 112U;
	int64_t x15 = -10772181278596972LL;
	volatile int64_t x16 = -1LL;
	static volatile int32_t t3 = 2324;

	t3 = (x13<((x14<=x15)%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 14222783804804849LL;
	int64_t x19 = INT64_MAX;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -567439;

	t4 = (x17<((x18<=x19)%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = -1;
	static volatile uint8_t x22 = UINT8_MAX;
	int8_t x23 = INT8_MIN;
	static volatile uint64_t x24 = 32555LLU;
	volatile int32_t t5 = -14;

	t5 = (x21<((x22<=x23)%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 8U;
	uint64_t x26 = 8689298937266LLU;
	int8_t x27 = INT8_MIN;
	static uint64_t x28 = UINT64_MAX;
	volatile int32_t t6 = 1;

	t6 = (x25<((x26<=x27)%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	static volatile uint32_t x30 = 183843800U;
	int64_t x31 = INT64_MAX;
	volatile uint64_t x32 = UINT64_MAX;
	static volatile int32_t t7 = 106655;

	t7 = (x29<((x30<=x31)%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x34 = 13;
	volatile uint32_t x35 = UINT32_MAX;
	static int8_t x36 = -10;
	volatile int32_t t8 = 7;

	t8 = (x33<((x34<=x35)%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -51;
	volatile uint64_t x38 = 504316842407LLU;
	int8_t x39 = INT8_MIN;
	volatile int64_t x40 = INT64_MAX;
	volatile int32_t t9 = -50137;

	t9 = (x37<((x38<=x39)%x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 6670LL;
	static int8_t x42 = INT8_MAX;
	uint32_t x43 = UINT32_MAX;
	volatile int32_t t10 = -107743;

	t10 = (x41<((x42<=x43)%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = 1U;
	int16_t x46 = INT16_MIN;
	int32_t x47 = -1360103;
	int64_t x48 = INT64_MIN;

	t11 = (x45<((x46<=x47)%x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = UINT32_MAX;
	uint32_t x50 = 204023U;
	uint64_t x51 = 41931883633805LLU;
	int32_t t12 = -27420468;

	t12 = (x49<((x50<=x51)%x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int64_t x54 = -441LL;
	static int64_t x55 = INT64_MIN;
	volatile int32_t t13 = 1;

	t13 = (x53<((x54<=x55)%x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x62 = UINT64_MAX;
	static volatile int32_t x63 = INT32_MIN;
	static int8_t x64 = -1;
	static volatile int32_t t14 = -94814;

	t14 = (x61<((x62<=x63)%x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = UINT16_MAX;
	int64_t x66 = 1828841207511276605LL;
	int16_t x67 = -1;
	int16_t x68 = INT16_MIN;

	t15 = (x65<((x66<=x67)%x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x70 = 76056124924LL;
	volatile uint64_t x72 = 3LLU;
	volatile int32_t t16 = -198612;

	t16 = (x69<((x70<=x71)%x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = 5363;
	uint8_t x74 = UINT8_MAX;
	uint8_t x75 = 0U;
	int8_t x76 = INT8_MIN;
	int32_t t17 = 1699135;

	t17 = (x73<((x74<=x75)%x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	static uint16_t x78 = 399U;
	volatile int32_t x79 = INT32_MIN;
	volatile int32_t x80 = INT32_MIN;
	int32_t t18 = -24477915;

	t18 = (x77<((x78<=x79)%x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x82 = -1;
	int64_t x83 = -1LL;
	static int32_t x84 = INT32_MAX;
	static int32_t t19 = 0;

	t19 = (x81<((x82<=x83)%x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x86 = 48810;
	int16_t x87 = INT16_MIN;
	int8_t x88 = -1;

	t20 = (x85<((x86<=x87)%x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = 13U;
	int8_t x90 = -23;
	static uint64_t x91 = 5LLU;
	int32_t x92 = -1;

	t21 = (x89<((x90<=x91)%x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x94 = UINT16_MAX;
	int64_t x95 = INT64_MAX;
	static int32_t x96 = INT32_MIN;
	volatile int32_t t22 = -46;

	t22 = (x93<((x94<=x95)%x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x98 = -1;
	int16_t x99 = -12875;
	volatile int32_t t23 = 1984;

	t23 = (x97<((x98<=x99)%x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = 15U;
	uint64_t x104 = UINT64_MAX;
	int32_t t24 = -531819727;

	t24 = (x101<((x102<=x103)%x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MIN;
	static int64_t x106 = 2LL;
	static uint64_t x107 = 425141289692LLU;
	int64_t x108 = -70905389398411LL;
	int32_t t25 = 3700160;

	t25 = (x105<((x106<=x107)%x108));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x109 = 1000006000LLU;
	static volatile int8_t x110 = -1;
	int32_t x112 = INT32_MIN;
	volatile int32_t t26 = -875;

	t26 = (x109<((x110<=x111)%x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x113 = INT8_MIN;
	int8_t x114 = INT8_MIN;
	int8_t x115 = -1;
	static int16_t x116 = INT16_MIN;

	t27 = (x113<((x114<=x115)%x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = 241U;
	static uint8_t x118 = UINT8_MAX;
	int32_t x119 = INT32_MIN;
	uint32_t x120 = 25U;
	volatile int32_t t28 = 26980;

	t28 = (x117<((x118<=x119)%x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MIN;
	uint8_t x122 = 6U;
	uint64_t x123 = 358LLU;

	t29 = (x121<((x122<=x123)%x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = 194U;
	int8_t x126 = -3;
	static int64_t x127 = 5943146322445524LL;
	volatile int32_t t30 = 12586;

	t30 = (x125<((x126<=x127)%x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x131 = 7941564802327018LLU;

	t31 = (x129<((x130<=x131)%x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x133 = 349035428405274LLU;
	uint16_t x136 = 1U;
	static int32_t t32 = 3115329;

	t32 = (x133<((x134<=x135)%x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x137 = 53801LLU;
	static volatile int32_t x138 = -1;
	uint16_t x139 = 1U;
	uint16_t x140 = 2727U;
	int32_t t33 = -10752;

	t33 = (x137<((x138<=x139)%x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x141 = 12923U;
	volatile int32_t x142 = -1;
	uint32_t x143 = 5U;
	int8_t x144 = 1;
	int32_t t34 = 31867653;

	t34 = (x141<((x142<=x143)%x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x146 = INT16_MIN;
	int32_t x148 = INT32_MAX;
	volatile int32_t t35 = 1;

	t35 = (x145<((x146<=x147)%x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x149 = -1;
	uint32_t x152 = 8786U;
	int32_t t36 = 38534864;

	t36 = (x149<((x150<=x151)%x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x153 = 14761;
	int8_t x154 = 1;
	static uint16_t x155 = UINT16_MAX;

	t37 = (x153<((x154<=x155)%x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x158 = 29;
	int16_t x159 = -17;
	int32_t t38 = -2087218;

	t38 = (x157<((x158<=x159)%x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x161 = -1;
	volatile int16_t x162 = -1;
	int32_t x163 = -81;
	uint8_t x164 = 2U;
	int32_t t39 = -319806577;

	t39 = (x161<((x162<=x163)%x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = 0;
	static int64_t x166 = 22704640582413235LL;
	int16_t x167 = INT16_MAX;
	int32_t x168 = INT32_MIN;
	volatile int32_t t40 = 1795;

	t40 = (x165<((x166<=x167)%x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x169 = INT32_MAX;
	int32_t x170 = -1;
	uint8_t x171 = UINT8_MAX;
	int32_t t41 = -2208766;

	t41 = (x169<((x170<=x171)%x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x174 = -3LL;
	static int8_t x175 = INT8_MAX;
	volatile int16_t x176 = -1;
	static int32_t t42 = -1763;

	t42 = (x173<((x174<=x175)%x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = INT32_MAX;
	volatile uint32_t x178 = 3167891U;
	uint64_t x179 = 35637534202198718LLU;
	int32_t x180 = INT32_MAX;
	volatile int32_t t43 = 3856;

	t43 = (x177<((x178<=x179)%x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x182 = INT8_MAX;
	volatile int32_t x184 = INT32_MIN;

	t44 = (x181<((x182<=x183)%x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = INT8_MIN;
	static volatile uint64_t x186 = 907325345LLU;
	volatile int64_t x188 = INT64_MAX;
	volatile int32_t t45 = 0;

	t45 = (x185<((x186<=x187)%x188));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = UINT16_MAX;
	int32_t x190 = -100394;
	int64_t x191 = -1LL;
	int32_t x192 = INT32_MIN;
	volatile int32_t t46 = 19552031;

	t46 = (x189<((x190<=x191)%x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x198 = INT8_MIN;
	int16_t x200 = INT16_MIN;
	volatile int32_t t47 = -46284349;

	t47 = (x197<((x198<=x199)%x200));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x202 = INT64_MAX;
	int16_t x203 = INT16_MIN;
	volatile uint64_t x204 = UINT64_MAX;

	t48 = (x201<((x202<=x203)%x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = INT64_MIN;
	uint64_t x207 = 316LLU;
	int8_t x208 = -6;
	int32_t t49 = 31455;

	t49 = (x205<((x206<=x207)%x208));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x209 = INT8_MIN;
	int64_t x210 = 1035509003536LL;
	static int8_t x211 = -15;
	int64_t x212 = INT64_MIN;
	static int32_t t50 = -938060;

	t50 = (x209<((x210<=x211)%x212));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x213 = 2058877U;
	int64_t x214 = INT64_MAX;
	uint64_t x216 = UINT64_MAX;
	static int32_t t51 = -14756;

	t51 = (x213<((x214<=x215)%x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x218 = 1;
	int16_t x219 = -2;
	int32_t t52 = 11804294;

	t52 = (x217<((x218<=x219)%x220));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = INT8_MIN;
	int16_t x223 = INT16_MAX;
	uint8_t x224 = 95U;
	volatile int32_t t53 = 5;

	t53 = (x221<((x222<=x223)%x224));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x225 = INT64_MIN;
	uint64_t x228 = 2802014736630471981LLU;

	t54 = (x225<((x226<=x227)%x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = -1;
	int32_t x231 = -1;

	t55 = (x229<((x230<=x231)%x232));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x234 = INT64_MAX;
	static int64_t x235 = -5742791360722588LL;
	int16_t x236 = INT16_MAX;
	int32_t t56 = 27804;

	t56 = (x233<((x234<=x235)%x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = INT8_MAX;
	int8_t x238 = INT8_MIN;
	static volatile int64_t x239 = -1LL;
	volatile int32_t t57 = -2673;

	t57 = (x237<((x238<=x239)%x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x241 = 857954358443LLU;
	volatile int8_t x242 = INT8_MIN;
	int16_t x243 = -152;
	uint64_t x244 = UINT64_MAX;
	static volatile int32_t t58 = 28122;

	t58 = (x241<((x242<=x243)%x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x245 = UINT32_MAX;
	int8_t x246 = -1;
	static volatile int32_t x247 = INT32_MIN;
	int16_t x248 = 56;
	int32_t t59 = -15;

	t59 = (x245<((x246<=x247)%x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = INT16_MIN;
	uint64_t x250 = 0LLU;
	int32_t x251 = INT32_MIN;
	uint32_t x252 = UINT32_MAX;

	t60 = (x249<((x250<=x251)%x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x254 = 76U;
	static volatile uint16_t x255 = 1U;
	static uint32_t x256 = UINT32_MAX;
	static int32_t t61 = -86042206;

	t61 = (x253<((x254<=x255)%x256));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x257 = INT8_MIN;
	int32_t x258 = INT32_MIN;
	static int32_t x259 = -706535652;
	volatile int32_t t62 = 5188;

	t62 = (x257<((x258<=x259)%x260));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = INT64_MAX;
	int32_t x263 = 80627;
	uint64_t x264 = 7515938713426576LLU;
	static volatile int32_t t63 = -273;

	t63 = (x261<((x262<=x263)%x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x265 = 10U;
	uint8_t x266 = 2U;
	uint32_t x267 = UINT32_MAX;

	t64 = (x265<((x266<=x267)%x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x269 = UINT8_MAX;
	uint64_t x270 = 35414LLU;
	int8_t x271 = INT8_MAX;
	int32_t t65 = -30321477;

	t65 = (x269<((x270<=x271)%x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x273 = 17192300LLU;
	static int8_t x275 = INT8_MIN;
	uint16_t x276 = 112U;
	int32_t t66 = 1286;

	t66 = (x273<((x274<=x275)%x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x277 = INT8_MIN;
	static uint8_t x278 = UINT8_MAX;
	int32_t x279 = 72663385;
	int64_t x280 = -1LL;
	volatile int32_t t67 = -41154;

	t67 = (x277<((x278<=x279)%x280));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = -42599494479054LL;
	uint32_t x283 = 3U;
	volatile int32_t t68 = 135303028;

	t68 = (x281<((x282<=x283)%x284));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x285 = 3957946746LLU;
	int32_t x287 = INT32_MIN;
	int64_t x288 = 3LL;
	volatile int32_t t69 = -1;

	t69 = (x285<((x286<=x287)%x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = -1LL;
	static volatile uint8_t x291 = 0U;
	static volatile int32_t t70 = 83;

	t70 = (x289<((x290<=x291)%x292));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x294 = UINT8_MAX;
	uint64_t x295 = UINT64_MAX;
	static volatile int32_t t71 = 30;

	t71 = (x293<((x294<=x295)%x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x297 = 31489LL;
	int64_t x298 = -1LL;
	uint16_t x299 = UINT16_MAX;
	static uint32_t x300 = UINT32_MAX;
	int32_t t72 = -19771029;

	t72 = (x297<((x298<=x299)%x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = INT32_MIN;
	int8_t x302 = INT8_MAX;
	uint32_t x304 = UINT32_MAX;
	static int32_t t73 = 1;

	t73 = (x301<((x302<=x303)%x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x305 = INT16_MIN;
	uint32_t x306 = 278013065U;
	static uint8_t x307 = 55U;
	volatile int32_t x308 = -108118185;
	static volatile int32_t t74 = 813;

	t74 = (x305<((x306<=x307)%x308));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x314 = INT8_MIN;
	volatile int16_t x315 = 56;
	static int64_t x316 = -1LL;
	static int32_t t75 = -163;

	t75 = (x313<((x314<=x315)%x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x318 = INT32_MIN;
	volatile uint8_t x319 = 9U;
	volatile int8_t x320 = -10;
	int32_t t76 = 1072906367;

	t76 = (x317<((x318<=x319)%x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x322 = -1;
	int8_t x323 = INT8_MAX;
	static int32_t x324 = INT32_MIN;
	int32_t t77 = 51;

	t77 = (x321<((x322<=x323)%x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = INT16_MAX;
	int8_t x326 = -1;
	static int8_t x328 = INT8_MIN;
	volatile int32_t t78 = -19;

	t78 = (x325<((x326<=x327)%x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x330 = 663U;
	static int16_t x332 = INT16_MAX;

	t79 = (x329<((x330<=x331)%x332));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = INT64_MIN;
	int8_t x334 = -1;
	uint8_t x335 = 0U;
	volatile int32_t t80 = -952;

	t80 = (x333<((x334<=x335)%x336));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x337 = -3;
	uint8_t x338 = 0U;
	volatile int16_t x339 = INT16_MIN;
	int8_t x340 = -40;
	int32_t t81 = -895353;

	t81 = (x337<((x338<=x339)%x340));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x341 = UINT64_MAX;
	static int32_t x342 = -1;
	int32_t t82 = -1121;

	t82 = (x341<((x342<=x343)%x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x346 = 663U;
	volatile uint8_t x347 = 0U;
	static volatile int32_t t83 = 2601;

	t83 = (x345<((x346<=x347)%x348));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x350 = INT8_MIN;
	int32_t x351 = -1;
	uint8_t x352 = 1U;
	volatile int32_t t84 = -1;

	t84 = (x349<((x350<=x351)%x352));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x353 = -1LL;
	int64_t x354 = -33133859296LL;
	volatile int8_t x355 = -1;
	static int32_t t85 = 45166478;

	t85 = (x353<((x354<=x355)%x356));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x357 = UINT64_MAX;
	volatile uint16_t x358 = UINT16_MAX;
	static volatile int8_t x359 = -1;
	int16_t x360 = -19;
	int32_t t86 = 870;

	t86 = (x357<((x358<=x359)%x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x361 = 2U;
	volatile int32_t x362 = INT32_MIN;
	static volatile uint64_t x363 = UINT64_MAX;
	uint32_t x364 = 600208873U;
	volatile int32_t t87 = 26123385;

	t87 = (x361<((x362<=x363)%x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x365 = -7;
	uint8_t x366 = 22U;
	int16_t x367 = INT16_MIN;
	int16_t x368 = INT16_MIN;
	int32_t t88 = -3975918;

	t88 = (x365<((x366<=x367)%x368));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x370 = UINT64_MAX;
	int64_t x371 = INT64_MIN;
	int16_t x372 = INT16_MAX;
	static volatile int32_t t89 = 4072;

	t89 = (x369<((x370<=x371)%x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x373 = UINT8_MAX;
	uint16_t x374 = UINT16_MAX;
	static int8_t x375 = -1;
	uint32_t x376 = 74094521U;
	int32_t t90 = -18465700;

	t90 = (x373<((x374<=x375)%x376));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x377 = -1;
	volatile uint8_t x378 = 45U;
	volatile int16_t x380 = INT16_MAX;
	volatile int32_t t91 = -127;

	t91 = (x377<((x378<=x379)%x380));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x382 = INT8_MIN;
	volatile int16_t x384 = INT16_MIN;
	volatile int32_t t92 = 3;

	t92 = (x381<((x382<=x383)%x384));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = INT8_MIN;
	int64_t x386 = -1LL;
	volatile uint16_t x387 = UINT16_MAX;
	volatile int32_t t93 = 36179;

	t93 = (x385<((x386<=x387)%x388));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x389 = 137251;
	volatile uint8_t x390 = UINT8_MAX;
	int32_t x391 = -1;
	static uint8_t x392 = UINT8_MAX;
	volatile int32_t t94 = -209232616;

	t94 = (x389<((x390<=x391)%x392));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x393 = INT16_MIN;
	static int32_t x394 = INT32_MAX;
	int16_t x395 = INT16_MAX;
	uint32_t x396 = 902086U;
	static int32_t t95 = 581704;

	t95 = (x393<((x394<=x395)%x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x402 = INT32_MIN;
	volatile uint64_t x403 = 125651582324LLU;
	volatile uint8_t x404 = UINT8_MAX;
	volatile int32_t t96 = 696325;

	t96 = (x401<((x402<=x403)%x404));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x405 = INT8_MIN;
	volatile int64_t x406 = INT64_MAX;
	volatile uint64_t x407 = UINT64_MAX;
	int32_t x408 = -1;
	volatile int32_t t97 = 2663;

	t97 = (x405<((x406<=x407)%x408));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x409 = INT64_MIN;
	static int8_t x410 = INT8_MIN;
	uint16_t x411 = UINT16_MAX;
	static uint8_t x412 = 10U;

	t98 = (x409<((x410<=x411)%x412));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x413 = -8;
	uint16_t x414 = 2031U;
	uint32_t x415 = 314463217U;
	volatile int32_t t99 = 77095362;

	t99 = (x413<((x414<=x415)%x416));

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

