#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x9 = INT16_MIN;
int64_t x14 = 4552339314LL;
uint8_t x15 = UINT8_MAX;
static volatile uint64_t x16 = 7966393358932809072LLU;
int32_t t2 = 83577;
volatile int32_t t3 = -54074152;
volatile int64_t x23 = 4361765602863LL;
int16_t x25 = -11841;
int64_t x28 = -5LL;
int64_t x31 = INT64_MIN;
int32_t x34 = -385812;
int32_t t7 = 2;
int8_t x37 = INT8_MIN;
uint64_t x38 = 103LLU;
int32_t t8 = -137;
int8_t x42 = 1;
int32_t t10 = -485;
int8_t x49 = 0;
int32_t t11 = -438403;
int16_t x63 = -1;
volatile int64_t x64 = INT64_MIN;
volatile int32_t t15 = 103673236;
int16_t x69 = INT16_MIN;
static int8_t x73 = INT8_MIN;
static int32_t x85 = INT32_MIN;
int32_t t20 = -5;
volatile int32_t x99 = INT32_MIN;
int32_t x102 = INT32_MIN;
uint16_t x107 = 29U;
int32_t x108 = INT32_MIN;
int32_t x111 = -1;
volatile int8_t x112 = INT8_MIN;
uint32_t x114 = UINT32_MAX;
int8_t x120 = -4;
int32_t x122 = 28296;
volatile int32_t x128 = -1;
int8_t x133 = -1;
static int16_t x140 = INT16_MIN;
int32_t t32 = 2408456;
uint64_t x141 = UINT64_MAX;
int64_t x143 = -1LL;
static int32_t t33 = -4040657;
volatile int16_t x150 = -1;
int64_t x151 = INT64_MAX;
int16_t x152 = INT16_MAX;
static uint32_t x155 = 82630U;
volatile uint32_t x156 = UINT32_MAX;
volatile int8_t x157 = INT8_MIN;
uint64_t x158 = 12538403923233LLU;
int16_t x160 = 7254;
int32_t t37 = -11;
uint8_t x163 = 7U;
int64_t x164 = INT64_MIN;
volatile uint32_t x169 = UINT32_MAX;
int64_t x173 = INT64_MIN;
int32_t x174 = INT32_MIN;
int8_t x177 = -10;
int16_t x180 = -1;
static int32_t x191 = 62;
int16_t x194 = 1;
static volatile uint16_t x200 = 156U;
uint32_t x203 = 5826511U;
int32_t x204 = -1;
int32_t x206 = 65339477;
volatile int8_t x207 = -60;
static int16_t x216 = INT16_MAX;
static int16_t x217 = 0;
int32_t x220 = -2714;
int32_t x221 = INT32_MAX;
uint8_t x230 = UINT8_MAX;
volatile uint64_t x232 = UINT64_MAX;
volatile int32_t t54 = -740;
int64_t x233 = 42672205009LL;
uint64_t x239 = 1751668789847464LLU;
int64_t x241 = INT64_MIN;
volatile int32_t t57 = -5;
volatile int32_t t59 = -112367;
volatile uint64_t x256 = UINT64_MAX;
uint64_t x258 = 8890726851002LLU;
int32_t t61 = 432345;
uint16_t x264 = UINT16_MAX;
int32_t x266 = -705305784;
volatile int32_t t64 = 55972826;
volatile int32_t x275 = INT32_MIN;
int16_t x277 = -1;
static uint8_t x283 = 14U;
volatile int32_t t67 = -12239630;
static volatile int16_t x287 = 916;
static uint64_t x289 = UINT64_MAX;
static volatile uint64_t x299 = 451491LLU;
static int16_t x304 = INT16_MIN;
volatile int32_t t73 = 0;
uint16_t x310 = UINT16_MAX;
int8_t x315 = -1;
int8_t x316 = -1;
volatile int16_t x318 = INT16_MIN;
volatile int32_t t76 = 35;
static int16_t x323 = 9292;
int16_t x325 = 54;
int32_t x327 = -524075200;
static volatile uint64_t x329 = UINT64_MAX;
int16_t x334 = 12;
volatile uint16_t x338 = UINT16_MAX;
int32_t x339 = INT32_MIN;
int8_t x341 = 0;
volatile int8_t x346 = 12;
static volatile uint8_t x348 = 0U;
static volatile int16_t x350 = -4464;
volatile int8_t x371 = -4;
int8_t x377 = INT8_MIN;
int8_t x381 = INT8_MIN;
int32_t t95 = 386629;
static int64_t x399 = -1LL;
static volatile int32_t t96 = 46106077;


void f0(void) {
	int16_t x5 = INT16_MAX;
	int16_t x6 = INT16_MIN;
	uint32_t x7 = UINT32_MAX;
	int8_t x8 = 0;
	volatile int32_t t0 = -47557058;

	t0 = ((x5<=(x6/x7))<=x8);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x10 = -14710;
	int16_t x11 = INT16_MAX;
	uint32_t x12 = UINT32_MAX;
	int32_t t1 = 219;

	t1 = ((x9<=(x10/x11))<=x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;

	t2 = ((x13<=(x14/x15))<=x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	volatile int8_t x18 = INT8_MAX;
	uint16_t x19 = 1931U;
	static volatile uint8_t x20 = UINT8_MAX;

	t3 = ((x17<=(x18/x19))<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 1U;
	volatile uint64_t x22 = 4138966LLU;
	uint8_t x24 = UINT8_MAX;
	int32_t t4 = -16;

	t4 = ((x21<=(x22/x23))<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = 1;
	static uint64_t x27 = UINT64_MAX;
	int32_t t5 = -45986461;

	t5 = ((x25<=(x26/x27))<=x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MAX;
	int64_t x30 = 89637372197LL;
	uint8_t x32 = 3U;
	int32_t t6 = -524;

	t6 = ((x29<=(x30/x31))<=x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	volatile int64_t x35 = INT64_MIN;
	int64_t x36 = INT64_MIN;

	t7 = ((x33<=(x34/x35))<=x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x39 = UINT64_MAX;
	volatile int8_t x40 = INT8_MIN;

	t8 = ((x37<=(x38/x39))<=x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x41 = UINT16_MAX;
	volatile uint32_t x43 = UINT32_MAX;
	uint16_t x44 = 1156U;
	volatile int32_t t9 = 400825335;

	t9 = ((x41<=(x42/x43))<=x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 138521016269210LLU;
	int16_t x46 = INT16_MIN;
	volatile uint32_t x47 = 2U;
	static uint8_t x48 = 14U;

	t10 = ((x45<=(x46/x47))<=x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x50 = UINT32_MAX;
	volatile int64_t x51 = -128606651LL;
	uint16_t x52 = 885U;

	t11 = ((x49<=(x50/x51))<=x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x53 = UINT8_MAX;
	int64_t x54 = -45212989811LL;
	static uint16_t x55 = 256U;
	static int8_t x56 = INT8_MAX;
	int32_t t12 = -1;

	t12 = ((x53<=(x54/x55))<=x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MIN;
	int64_t x58 = -1LL;
	int16_t x59 = 15342;
	int16_t x60 = 1926;
	static int32_t t13 = -18;

	t13 = ((x57<=(x58/x59))<=x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	uint16_t x62 = 41U;
	volatile int32_t t14 = -315426574;

	t14 = ((x61<=(x62/x63))<=x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x65 = 2U;
	uint16_t x66 = UINT16_MAX;
	uint32_t x67 = UINT32_MAX;
	volatile int32_t x68 = INT32_MIN;

	t15 = ((x65<=(x66/x67))<=x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x70 = 96U;
	uint16_t x71 = 587U;
	int64_t x72 = INT64_MAX;
	static volatile int32_t t16 = -26640206;

	t16 = ((x69<=(x70/x71))<=x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x74 = INT16_MIN;
	uint8_t x75 = 1U;
	static int8_t x76 = 51;
	volatile int32_t t17 = -94;

	t17 = ((x73<=(x74/x75))<=x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 10U;
	static int8_t x78 = 0;
	volatile int32_t x79 = INT32_MAX;
	uint32_t x80 = 20244U;
	volatile int32_t t18 = 212102;

	t18 = ((x77<=(x78/x79))<=x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x86 = -4;
	static uint8_t x87 = UINT8_MAX;
	static uint8_t x88 = 0U;
	int32_t t19 = -1065530;

	t19 = ((x85<=(x86/x87))<=x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = INT64_MIN;
	volatile int16_t x90 = INT16_MAX;
	static volatile uint32_t x91 = 27U;
	static int32_t x92 = -24008889;

	t20 = ((x89<=(x90/x91))<=x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MAX;
	static int32_t x94 = -741513158;
	uint32_t x95 = 10782358U;
	uint32_t x96 = 1005447U;
	volatile int32_t t21 = 41385939;

	t21 = ((x93<=(x94/x95))<=x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x97 = -2278725199384121333LL;
	static int32_t x98 = INT32_MIN;
	volatile uint8_t x100 = 3U;
	static int32_t t22 = -1;

	t22 = ((x97<=(x98/x99))<=x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MIN;
	int32_t x103 = INT32_MIN;
	static int32_t x104 = -171672;
	int32_t t23 = -226;

	t23 = ((x101<=(x102/x103))<=x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = -5;
	int8_t x106 = -1;
	int32_t t24 = 2836361;

	t24 = ((x105<=(x106/x107))<=x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = 132;
	int16_t x110 = -110;
	volatile int32_t t25 = 108;

	t25 = ((x109<=(x110/x111))<=x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = 67U;
	static volatile uint64_t x115 = UINT64_MAX;
	static uint16_t x116 = UINT16_MAX;
	volatile int32_t t26 = -105;

	t26 = ((x113<=(x114/x115))<=x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = 2LL;
	volatile int8_t x118 = -30;
	int64_t x119 = INT64_MAX;
	volatile int32_t t27 = 10;

	t27 = ((x117<=(x118/x119))<=x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x121 = UINT16_MAX;
	uint16_t x123 = 201U;
	static int64_t x124 = -1LL;
	int32_t t28 = -418;

	t28 = ((x121<=(x122/x123))<=x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x125 = -1;
	volatile uint8_t x126 = 1U;
	static int8_t x127 = INT8_MAX;
	int32_t t29 = 806300;

	t29 = ((x125<=(x126/x127))<=x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x129 = 908LL;
	static int32_t x130 = INT32_MAX;
	static int64_t x131 = -32098LL;
	static uint8_t x132 = UINT8_MAX;
	static volatile int32_t t30 = 571929009;

	t30 = ((x129<=(x130/x131))<=x132);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x134 = UINT8_MAX;
	uint16_t x135 = 2U;
	int64_t x136 = INT64_MIN;
	static volatile int32_t t31 = -1;

	t31 = ((x133<=(x134/x135))<=x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x137 = INT64_MAX;
	int64_t x138 = -1LL;
	int64_t x139 = INT64_MAX;

	t32 = ((x137<=(x138/x139))<=x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x142 = -1;
	static int32_t x144 = INT32_MAX;

	t33 = ((x141<=(x142/x143))<=x144);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = 6948U;
	int32_t x146 = 9;
	int32_t x147 = INT32_MIN;
	uint16_t x148 = 237U;
	volatile int32_t t34 = 30476694;

	t34 = ((x145<=(x146/x147))<=x148);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x149 = 2404942279496LL;
	volatile int32_t t35 = -1;

	t35 = ((x149<=(x150/x151))<=x152);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x153 = UINT16_MAX;
	static int16_t x154 = INT16_MAX;
	volatile int32_t t36 = 23202312;

	t36 = ((x153<=(x154/x155))<=x156);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x159 = -1;

	t37 = ((x157<=(x158/x159))<=x160);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x161 = 22119104LLU;
	int64_t x162 = -1LL;
	int32_t t38 = -26948730;

	t38 = ((x161<=(x162/x163))<=x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = INT32_MIN;
	int8_t x166 = -12;
	int8_t x167 = INT8_MIN;
	static volatile uint64_t x168 = UINT64_MAX;
	int32_t t39 = 1;

	t39 = ((x165<=(x166/x167))<=x168);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x170 = 593001930U;
	int32_t x171 = 587312;
	int32_t x172 = INT32_MIN;
	volatile int32_t t40 = -39148731;

	t40 = ((x169<=(x170/x171))<=x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x175 = 380766507LLU;
	static uint32_t x176 = 226850U;
	static volatile int32_t t41 = -191586065;

	t41 = ((x173<=(x174/x175))<=x176);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x178 = 40U;
	uint64_t x179 = UINT64_MAX;
	int32_t t42 = 74136;

	t42 = ((x177<=(x178/x179))<=x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x185 = INT64_MAX;
	int64_t x186 = INT64_MAX;
	static volatile int64_t x187 = INT64_MIN;
	static volatile int16_t x188 = -1;
	int32_t t43 = -1968;

	t43 = ((x185<=(x186/x187))<=x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x189 = 1U;
	static uint64_t x190 = UINT64_MAX;
	uint8_t x192 = 1U;
	volatile int32_t t44 = -863026;

	t44 = ((x189<=(x190/x191))<=x192);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x193 = 289046658703958183LL;
	int32_t x195 = 737;
	static volatile int16_t x196 = INT16_MIN;
	volatile int32_t t45 = 64179649;

	t45 = ((x193<=(x194/x195))<=x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x197 = -1;
	volatile int8_t x198 = INT8_MAX;
	uint64_t x199 = 3633269528443365LLU;
	int32_t t46 = 7151;

	t46 = ((x197<=(x198/x199))<=x200);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = -1;
	int64_t x202 = 197441313LL;
	volatile int32_t t47 = -46;

	t47 = ((x201<=(x202/x203))<=x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x205 = -1;
	static int8_t x208 = INT8_MIN;
	static int32_t t48 = 1;

	t48 = ((x205<=(x206/x207))<=x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x209 = UINT32_MAX;
	int16_t x210 = 0;
	int32_t x211 = -207190115;
	int8_t x212 = INT8_MAX;
	volatile int32_t t49 = 3985;

	t49 = ((x209<=(x210/x211))<=x212);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x213 = -238;
	uint32_t x214 = UINT32_MAX;
	static uint32_t x215 = UINT32_MAX;
	volatile int32_t t50 = 868;

	t50 = ((x213<=(x214/x215))<=x216);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x218 = -47309LL;
	static int32_t x219 = 907489;
	volatile int32_t t51 = -62913;

	t51 = ((x217<=(x218/x219))<=x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x222 = 31U;
	int8_t x223 = INT8_MIN;
	volatile int8_t x224 = -1;
	static volatile int32_t t52 = -123939;

	t52 = ((x221<=(x222/x223))<=x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x225 = -1LL;
	uint32_t x226 = 114U;
	volatile uint32_t x227 = 411U;
	int8_t x228 = INT8_MIN;
	volatile int32_t t53 = 369;

	t53 = ((x225<=(x226/x227))<=x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x229 = -1;
	int8_t x231 = INT8_MIN;

	t54 = ((x229<=(x230/x231))<=x232);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x234 = -15021356144LL;
	uint32_t x235 = 3128398U;
	int16_t x236 = 3;
	static int32_t t55 = 42027;

	t55 = ((x233<=(x234/x235))<=x236);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = INT8_MIN;
	uint32_t x238 = UINT32_MAX;
	uint64_t x240 = 1793926LLU;
	volatile int32_t t56 = 5378712;

	t56 = ((x237<=(x238/x239))<=x240);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x242 = INT64_MIN;
	static uint64_t x243 = UINT64_MAX;
	int16_t x244 = INT16_MIN;

	t57 = ((x241<=(x242/x243))<=x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x245 = INT8_MIN;
	int16_t x246 = INT16_MIN;
	int64_t x247 = INT64_MAX;
	uint64_t x248 = UINT64_MAX;
	volatile int32_t t58 = 88582358;

	t58 = ((x245<=(x246/x247))<=x248);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = 52;
	int8_t x250 = INT8_MIN;
	int32_t x251 = 3382231;
	static uint8_t x252 = 3U;

	t59 = ((x249<=(x250/x251))<=x252);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x253 = 0U;
	static int8_t x254 = INT8_MIN;
	volatile int32_t x255 = INT32_MAX;
	volatile int32_t t60 = -3009783;

	t60 = ((x253<=(x254/x255))<=x256);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x257 = -1LL;
	uint64_t x259 = 33LLU;
	static uint8_t x260 = 2U;

	t61 = ((x257<=(x258/x259))<=x260);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = INT32_MIN;
	int8_t x262 = -1;
	int16_t x263 = -28;
	static volatile int32_t t62 = 600999;

	t62 = ((x261<=(x262/x263))<=x264);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x265 = 6;
	static volatile uint8_t x267 = 29U;
	int16_t x268 = -4;
	static volatile int32_t t63 = 110571165;

	t63 = ((x265<=(x266/x267))<=x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x269 = UINT32_MAX;
	int32_t x270 = -1;
	static int8_t x271 = INT8_MIN;
	volatile int32_t x272 = INT32_MAX;

	t64 = ((x269<=(x270/x271))<=x272);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x273 = INT16_MAX;
	static int8_t x274 = INT8_MIN;
	int8_t x276 = -1;
	static volatile int32_t t65 = 2532922;

	t65 = ((x273<=(x274/x275))<=x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x278 = INT16_MAX;
	int32_t x279 = 339210;
	volatile int8_t x280 = INT8_MIN;
	int32_t t66 = -823;

	t66 = ((x277<=(x278/x279))<=x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x281 = INT16_MIN;
	int8_t x282 = INT8_MIN;
	static uint8_t x284 = 7U;

	t67 = ((x281<=(x282/x283))<=x284);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x285 = -719;
	int16_t x286 = INT16_MIN;
	int32_t x288 = INT32_MIN;
	int32_t t68 = -9271224;

	t68 = ((x285<=(x286/x287))<=x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x290 = INT32_MIN;
	uint16_t x291 = UINT16_MAX;
	volatile int32_t x292 = -1;
	static int32_t t69 = 196996652;

	t69 = ((x289<=(x290/x291))<=x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x293 = UINT32_MAX;
	static int64_t x294 = 138088024LL;
	int32_t x295 = INT32_MAX;
	int16_t x296 = -1;
	int32_t t70 = 29414296;

	t70 = ((x293<=(x294/x295))<=x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x297 = INT8_MIN;
	int32_t x298 = 694;
	int16_t x300 = -113;
	static int32_t t71 = 746823491;

	t71 = ((x297<=(x298/x299))<=x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x301 = 1586;
	int64_t x302 = INT64_MAX;
	static int16_t x303 = INT16_MAX;
	static volatile int32_t t72 = 26928382;

	t72 = ((x301<=(x302/x303))<=x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x305 = INT32_MIN;
	uint8_t x306 = UINT8_MAX;
	int8_t x307 = INT8_MAX;
	uint16_t x308 = 96U;

	t73 = ((x305<=(x306/x307))<=x308);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x309 = INT64_MAX;
	int64_t x311 = -1LL;
	uint32_t x312 = 14654U;
	volatile int32_t t74 = 88;

	t74 = ((x309<=(x310/x311))<=x312);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x313 = 70520460118622LLU;
	volatile uint64_t x314 = 521366918LLU;
	int32_t t75 = -773228;

	t75 = ((x313<=(x314/x315))<=x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x317 = -559;
	int64_t x319 = INT64_MAX;
	int8_t x320 = 2;

	t76 = ((x317<=(x318/x319))<=x320);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x321 = -262251804;
	int64_t x322 = INT64_MIN;
	volatile int8_t x324 = -16;
	volatile int32_t t77 = 6;

	t77 = ((x321<=(x322/x323))<=x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x326 = UINT32_MAX;
	static uint32_t x328 = 443459905U;
	int32_t t78 = -689;

	t78 = ((x325<=(x326/x327))<=x328);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x330 = 18U;
	int32_t x331 = -1;
	int64_t x332 = INT64_MAX;
	int32_t t79 = 16089599;

	t79 = ((x329<=(x330/x331))<=x332);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x333 = 10U;
	int8_t x335 = INT8_MAX;
	static int8_t x336 = -1;
	static int32_t t80 = -13763004;

	t80 = ((x333<=(x334/x335))<=x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x337 = INT32_MIN;
	int16_t x340 = INT16_MIN;
	int32_t t81 = -63;

	t81 = ((x337<=(x338/x339))<=x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x342 = 112249155U;
	volatile int32_t x343 = -222441200;
	int8_t x344 = -5;
	volatile int32_t t82 = 119475;

	t82 = ((x341<=(x342/x343))<=x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x345 = -29;
	uint32_t x347 = 4503051U;
	int32_t t83 = -126974604;

	t83 = ((x345<=(x346/x347))<=x348);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = INT16_MIN;
	static int16_t x351 = 1;
	uint16_t x352 = 1U;
	volatile int32_t t84 = -91409716;

	t84 = ((x349<=(x350/x351))<=x352);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = INT16_MIN;
	uint8_t x354 = 11U;
	static int8_t x355 = INT8_MIN;
	int16_t x356 = INT16_MIN;
	volatile int32_t t85 = 30146;

	t85 = ((x353<=(x354/x355))<=x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x357 = 251U;
	static int64_t x358 = INT64_MAX;
	static volatile uint16_t x359 = UINT16_MAX;
	volatile uint16_t x360 = 6U;
	int32_t t86 = -33;

	t86 = ((x357<=(x358/x359))<=x360);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x361 = -1;
	volatile int64_t x362 = -1LL;
	volatile int8_t x363 = INT8_MIN;
	static int8_t x364 = INT8_MAX;
	int32_t t87 = 1203;

	t87 = ((x361<=(x362/x363))<=x364);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x365 = UINT64_MAX;
	volatile uint32_t x366 = UINT32_MAX;
	uint64_t x367 = 269LLU;
	volatile int16_t x368 = -1606;
	int32_t t88 = 1;

	t88 = ((x365<=(x366/x367))<=x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x369 = INT32_MAX;
	static int32_t x370 = -4284;
	int16_t x372 = -6377;
	int32_t t89 = -7938;

	t89 = ((x369<=(x370/x371))<=x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x373 = INT32_MAX;
	uint16_t x374 = UINT16_MAX;
	uint8_t x375 = UINT8_MAX;
	volatile int16_t x376 = -6;
	int32_t t90 = 919225739;

	t90 = ((x373<=(x374/x375))<=x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x378 = -51;
	int32_t x379 = -368;
	int16_t x380 = INT16_MAX;
	int32_t t91 = 85917;

	t91 = ((x377<=(x378/x379))<=x380);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x382 = -1;
	int16_t x383 = INT16_MIN;
	int32_t x384 = 145572608;
	int32_t t92 = 8281454;

	t92 = ((x381<=(x382/x383))<=x384);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x385 = -1;
	uint32_t x386 = UINT32_MAX;
	int32_t x387 = -278608;
	static uint64_t x388 = 1LLU;
	int32_t t93 = -75;

	t93 = ((x385<=(x386/x387))<=x388);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = 2;
	static uint8_t x390 = UINT8_MAX;
	int32_t x391 = -6028;
	int8_t x392 = -2;
	volatile int32_t t94 = 249721;

	t94 = ((x389<=(x390/x391))<=x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x393 = UINT16_MAX;
	static volatile int64_t x394 = -3563747898667LL;
	uint64_t x395 = 30752612203143114LLU;
	static int32_t x396 = -1965948;

	t95 = ((x393<=(x394/x395))<=x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x397 = INT8_MIN;
	static int32_t x398 = INT32_MAX;
	int16_t x400 = INT16_MIN;

	t96 = ((x397<=(x398/x399))<=x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x401 = INT16_MIN;
	int32_t x402 = INT32_MAX;
	volatile int16_t x403 = INT16_MIN;
	int32_t x404 = INT32_MAX;
	volatile int32_t t97 = 996;

	t97 = ((x401<=(x402/x403))<=x404);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x405 = INT32_MIN;
	uint64_t x406 = 35041618LLU;
	int32_t x407 = 290210;
	int64_t x408 = INT64_MAX;
	volatile int32_t t98 = -13315;

	t98 = ((x405<=(x406/x407))<=x408);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x409 = -1;
	static int8_t x410 = INT8_MIN;
	uint32_t x411 = 12679050U;
	int16_t x412 = -49;
	int32_t t99 = -2;

	t99 = ((x409<=(x410/x411))<=x412);

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

