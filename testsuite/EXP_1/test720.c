#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 45679809U;
uint64_t x2 = UINT64_MAX;
int64_t x5 = 1299688LL;
int16_t x6 = -246;
volatile int64_t x10 = INT64_MIN;
int8_t x14 = INT8_MIN;
uint16_t x17 = 915U;
uint8_t x21 = UINT8_MAX;
uint16_t x29 = 2531U;
int64_t t7 = 165121109LL;
int32_t x37 = -230789;
int32_t x39 = INT32_MAX;
uint8_t x40 = 15U;
int64_t x45 = -1LL;
int32_t x48 = INT32_MIN;
int64_t x55 = -95751LL;
static volatile uint32_t x60 = UINT32_MAX;
int16_t x63 = INT16_MIN;
int64_t x67 = 1437717LL;
int8_t x68 = INT8_MIN;
int16_t x72 = INT16_MIN;
static int16_t x75 = -1;
uint16_t x79 = 1290U;
static uint32_t x82 = 15U;
static int32_t x88 = -1;
volatile uint64_t x98 = 4929434686728497LLU;
int32_t x100 = -16386453;
uint32_t x103 = 1404156038U;
static volatile int64_t x108 = -148LL;
int64_t t26 = -3LL;
volatile int64_t x110 = INT64_MAX;
int64_t x112 = -16420LL;
volatile int8_t x116 = 15;
uint16_t x120 = 1U;
static int8_t x129 = INT8_MIN;
int8_t x134 = INT8_MIN;
static uint64_t x137 = 0LLU;
int8_t x138 = -1;
int64_t x151 = INT64_MIN;
uint64_t x155 = 710219LLU;
volatile uint16_t x163 = 2062U;
volatile int64_t t38 = -384722596902841131LL;
int64_t x165 = INT64_MAX;
static int32_t x168 = INT32_MIN;
volatile int64_t x179 = 97181516LL;
static int32_t x181 = INT32_MAX;
int16_t x183 = INT16_MIN;
int8_t x184 = INT8_MIN;
uint64_t t43 = 90LLU;
uint16_t x188 = 1U;
static uint8_t x192 = 6U;
int32_t x199 = 2049557;
volatile int64_t x200 = -7LL;
int32_t x203 = 83174;
uint32_t x225 = 3987300U;
int16_t x229 = INT16_MAX;
int16_t x237 = -841;
volatile uint32_t x246 = UINT32_MAX;
int8_t x248 = INT8_MIN;
int64_t t58 = 486967430210LL;
static int64_t x249 = INT64_MAX;
static int16_t x264 = INT16_MIN;
volatile uint32_t t64 = 7220362U;
int8_t x275 = INT8_MAX;
static uint8_t x291 = UINT8_MAX;
uint32_t x292 = 3U;
uint32_t t70 = 204826U;
int64_t x299 = INT64_MAX;
int64_t x301 = INT64_MIN;
int64_t t72 = 920277822852398807LL;
int8_t x308 = 19;
int32_t x314 = -34;
volatile uint64_t t75 = 2358690392LLU;
int16_t x318 = -1;
int16_t x322 = INT16_MAX;
volatile int32_t x323 = 308105393;
int32_t x324 = 355317806;
volatile int8_t x336 = -1;
int64_t t83 = 5LL;
static uint8_t x352 = 5U;
int32_t x353 = 795680748;
uint32_t x358 = UINT32_MAX;
uint8_t x361 = UINT8_MAX;
static int64_t x362 = INT64_MIN;
volatile uint8_t x363 = UINT8_MAX;
int16_t x375 = -858;
volatile int8_t x377 = 1;
int32_t x379 = -34909431;
int8_t x394 = -1;
uint16_t x419 = 8U;
static int8_t x420 = INT8_MIN;


void f0(void) {
	volatile uint8_t x3 = UINT8_MAX;
	uint64_t x4 = UINT64_MAX;
	static volatile uint64_t t0 = 1020504LLU;

	t0 = (((x1%x2)/x3)%x4);

	if (t0 != 179136LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x7 = 1459;
	uint8_t x8 = UINT8_MAX;
	int64_t t1 = 2301219LL;

	t1 = (((x5%x6)/x7)%x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 23U;
	int64_t x11 = INT64_MAX;
	uint16_t x12 = UINT16_MAX;
	int64_t t2 = 2932703599455550LL;

	t2 = (((x9%x10)/x11)%x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	uint64_t x15 = 112251640525863LLU;
	static volatile int64_t x16 = -1LL;
	volatile uint64_t t3 = 1882224482302195LLU;

	t3 = (((x13%x14)/x15)%x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = 147U;
	int32_t x19 = 3003;
	int8_t x20 = INT8_MAX;
	int32_t t4 = 5023285;

	t4 = (((x17%x18)/x19)%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x22 = 1780937U;
	uint32_t x23 = UINT32_MAX;
	uint8_t x24 = UINT8_MAX;
	volatile uint32_t t5 = 3598U;

	t5 = (((x21%x22)/x23)%x24);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = 5;
	static uint16_t x26 = 8284U;
	int32_t x27 = -1;
	int8_t x28 = INT8_MAX;
	volatile int32_t t6 = 328651;

	t6 = (((x25%x26)/x27)%x28);

	if (t6 != -5) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = -55888LL;
	int64_t x31 = INT64_MAX;
	static volatile int16_t x32 = INT16_MIN;

	t7 = (((x29%x30)/x31)%x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = UINT32_MAX;
	int64_t x34 = INT64_MIN;
	uint16_t x35 = UINT16_MAX;
	int32_t x36 = -1;
	int64_t t8 = -617LL;

	t8 = (((x33%x34)/x35)%x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x38 = INT8_MIN;
	volatile int32_t t9 = -6442997;

	t9 = (((x37%x38)/x39)%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	uint16_t x42 = 13838U;
	int32_t x43 = INT32_MIN;
	volatile int64_t x44 = INT64_MIN;
	volatile int64_t t10 = 720683LL;

	t10 = (((x41%x42)/x43)%x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = -97081400533LL;
	int8_t x47 = 52;
	int64_t t11 = 8740607332LL;

	t11 = (((x45%x46)/x47)%x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = -1;
	static uint8_t x50 = 5U;
	volatile int8_t x51 = -1;
	uint16_t x52 = 1302U;
	int32_t t12 = -3860;

	t12 = (((x49%x50)/x51)%x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 955U;
	uint64_t x54 = 1042549323038LLU;
	int32_t x56 = INT32_MAX;
	volatile uint64_t t13 = 906405145457126164LLU;

	t13 = (((x53%x54)/x55)%x56);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	volatile int64_t x58 = -1LL;
	static volatile int8_t x59 = INT8_MIN;
	static volatile int64_t t14 = -135729668496LL;

	t14 = (((x57%x58)/x59)%x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 573U;
	volatile uint32_t x62 = 1U;
	uint16_t x64 = UINT16_MAX;
	volatile uint32_t t15 = 720U;

	t15 = (((x61%x62)/x63)%x64);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = -4684;
	uint16_t x66 = 2018U;
	int64_t t16 = -186069057840LL;

	t16 = (((x65%x66)/x67)%x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MIN;
	volatile int16_t x70 = 6577;
	int16_t x71 = INT16_MIN;
	volatile int32_t t17 = -58617;

	t17 = (((x69%x70)/x71)%x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -2;
	volatile int32_t x74 = INT32_MIN;
	uint32_t x76 = 53408397U;
	volatile uint32_t t18 = 490U;

	t18 = (((x73%x74)/x75)%x76);

	if (t18 != 2U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 647246879LLU;
	int8_t x78 = INT8_MIN;
	int64_t x80 = -1LL;
	uint64_t t19 = 130097368772LLU;

	t19 = (((x77%x78)/x79)%x80);

	if (t19 != 501741LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	uint32_t x83 = 397U;
	int16_t x84 = 1;
	volatile uint32_t t20 = 1207145U;

	t20 = (((x81%x82)/x83)%x84);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	int16_t x86 = INT16_MIN;
	int32_t x87 = INT32_MIN;
	static volatile uint64_t t21 = 88230884155174572LLU;

	t21 = (((x85%x86)/x87)%x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x89 = -129839;
	int16_t x90 = 8242;
	int16_t x91 = -131;
	int64_t x92 = INT64_MIN;
	static volatile int64_t t22 = 2932323501565446995LL;

	t22 = (((x89%x90)/x91)%x92);

	if (t22 != 47LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = 154648;
	int16_t x95 = INT16_MIN;
	uint32_t x96 = 3U;
	uint32_t t23 = 39007U;

	t23 = (((x93%x94)/x95)%x96);

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 750558425109LLU;
	int32_t x99 = INT32_MIN;
	volatile uint64_t t24 = 15579419LLU;

	t24 = (((x97%x98)/x99)%x100);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	int64_t x102 = INT64_MIN;
	uint32_t x104 = 50638107U;
	volatile int64_t t25 = 110576208LL;

	t25 = (((x101%x102)/x103)%x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	int16_t x106 = INT16_MIN;
	static uint16_t x107 = UINT16_MAX;

	t26 = (((x105%x106)/x107)%x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = UINT32_MAX;
	volatile uint32_t x111 = 38U;
	static int64_t t27 = 430LL;

	t27 = (((x109%x110)/x111)%x112);

	if (t27 != 6595LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = -1;
	int16_t x114 = INT16_MIN;
	uint32_t x115 = 3639U;
	uint32_t t28 = 456U;

	t28 = (((x113%x114)/x115)%x116);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = 147651107;
	static uint64_t x118 = 48104334LLU;
	int8_t x119 = INT8_MIN;
	uint64_t t29 = 36277723687126LLU;

	t29 = (((x117%x118)/x119)%x120);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x125 = INT16_MAX;
	int32_t x126 = INT32_MIN;
	int64_t x127 = 2068059LL;
	int32_t x128 = INT32_MIN;
	int64_t t30 = -15590316LL;

	t30 = (((x125%x126)/x127)%x128);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x130 = INT16_MIN;
	int64_t x131 = -25048458850185349LL;
	volatile uint32_t x132 = UINT32_MAX;
	int64_t t31 = 3LL;

	t31 = (((x129%x130)/x131)%x132);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = 286;
	uint32_t x135 = 2U;
	uint32_t x136 = 3071U;
	uint32_t t32 = 28U;

	t32 = (((x133%x134)/x135)%x136);

	if (t32 != 15U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x139 = UINT16_MAX;
	uint64_t x140 = UINT64_MAX;
	volatile uint64_t t33 = 46589400018LLU;

	t33 = (((x137%x138)/x139)%x140);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = -1;
	volatile int8_t x146 = -18;
	int16_t x147 = INT16_MIN;
	int64_t x148 = INT64_MAX;
	volatile int64_t t34 = 655629716941LL;

	t34 = (((x145%x146)/x147)%x148);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = -64320;
	uint8_t x150 = UINT8_MAX;
	int64_t x152 = -1183979LL;
	int64_t t35 = -2LL;

	t35 = (((x149%x150)/x151)%x152);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x153 = 6776513142LLU;
	int64_t x154 = INT64_MIN;
	int64_t x156 = -1LL;
	uint64_t t36 = 3LLU;

	t36 = (((x153%x154)/x155)%x156);

	if (t36 != 9541LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = -1;
	uint16_t x158 = 6319U;
	int8_t x159 = -31;
	int16_t x160 = INT16_MIN;
	volatile int32_t t37 = 1903652;

	t37 = (((x157%x158)/x159)%x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x161 = INT16_MIN;
	volatile int64_t x162 = -1966678143799LL;
	static int16_t x164 = 3492;

	t38 = (((x161%x162)/x163)%x164);

	if (t38 != -15LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x166 = UINT64_MAX;
	int16_t x167 = INT16_MIN;
	volatile uint64_t t39 = 5675534210LLU;

	t39 = (((x165%x166)/x167)%x168);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x169 = 83U;
	volatile uint16_t x170 = 173U;
	uint8_t x171 = UINT8_MAX;
	static volatile int16_t x172 = -6070;
	volatile int32_t t40 = 41526;

	t40 = (((x169%x170)/x171)%x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x173 = UINT64_MAX;
	uint16_t x174 = 14826U;
	volatile int64_t x175 = INT64_MIN;
	volatile int64_t x176 = INT64_MAX;
	static uint64_t t41 = 1LLU;

	t41 = (((x173%x174)/x175)%x176);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x177 = UINT64_MAX;
	int8_t x178 = 1;
	uint32_t x180 = UINT32_MAX;
	static volatile uint64_t t42 = 2237787LLU;

	t42 = (((x177%x178)/x179)%x180);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x182 = 156474987817LLU;

	t43 = (((x181%x182)/x183)%x184);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x185 = 306U;
	static int16_t x186 = -1;
	int64_t x187 = INT64_MIN;
	int64_t t44 = -62295796063499117LL;

	t44 = (((x185%x186)/x187)%x188);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x189 = INT16_MAX;
	uint32_t x190 = UINT32_MAX;
	uint8_t x191 = UINT8_MAX;
	volatile uint32_t t45 = 450U;

	t45 = (((x189%x190)/x191)%x192);

	if (t45 != 2U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x193 = INT32_MIN;
	volatile int64_t x194 = 114534114155LL;
	uint16_t x195 = 15243U;
	int16_t x196 = -3;
	volatile int64_t t46 = 6969144076LL;

	t46 = (((x193%x194)/x195)%x196);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = INT32_MIN;
	int8_t x198 = INT8_MAX;
	volatile int64_t t47 = 87654053060336LL;

	t47 = (((x197%x198)/x199)%x200);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x201 = 13153527286150LLU;
	int8_t x202 = INT8_MIN;
	uint32_t x204 = 29191U;
	volatile uint64_t t48 = 707344099573584938LLU;

	t48 = (((x201%x202)/x203)%x204);

	if (t48 != 17053LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x209 = 980;
	uint16_t x210 = 863U;
	int8_t x211 = 1;
	static uint8_t x212 = 6U;
	int32_t t49 = 1469000;

	t49 = (((x209%x210)/x211)%x212);

	if (t49 != 3) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x213 = -2328;
	uint8_t x214 = UINT8_MAX;
	uint64_t x215 = 1903499588942LLU;
	int32_t x216 = -160;
	volatile uint64_t t50 = 101546LLU;

	t50 = (((x213%x214)/x215)%x216);

	if (t50 != 9690962LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x217 = -1;
	volatile int64_t x218 = -1101LL;
	uint16_t x219 = UINT16_MAX;
	static int8_t x220 = -1;
	int64_t t51 = 19672LL;

	t51 = (((x217%x218)/x219)%x220);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = INT8_MIN;
	static volatile uint64_t x222 = 4210642475249LLU;
	uint64_t x223 = 1877890LLU;
	int16_t x224 = 1;
	volatile uint64_t t52 = 2915642534669LLU;

	t52 = (((x221%x222)/x223)%x224);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x226 = INT32_MIN;
	int16_t x227 = 11125;
	static volatile uint16_t x228 = UINT16_MAX;
	uint32_t t53 = 33287622U;

	t53 = (((x225%x226)/x227)%x228);

	if (t53 != 358U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x230 = INT16_MIN;
	int16_t x231 = INT16_MIN;
	static uint64_t x232 = 29640199LLU;
	volatile uint64_t t54 = 9LLU;

	t54 = (((x229%x230)/x231)%x232);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = -1;
	static volatile int32_t x234 = INT32_MIN;
	uint16_t x235 = 18U;
	int64_t x236 = -6379124006LL;
	int64_t t55 = -8505830551LL;

	t55 = (((x233%x234)/x235)%x236);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x238 = UINT16_MAX;
	int32_t x239 = -76064;
	int32_t x240 = -1;
	volatile int32_t t56 = 25;

	t56 = (((x237%x238)/x239)%x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x241 = UINT64_MAX;
	int16_t x242 = INT16_MIN;
	int64_t x243 = -1LL;
	int32_t x244 = -1;
	static uint64_t t57 = 111924826914LLU;

	t57 = (((x241%x242)/x243)%x244);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = INT64_MIN;
	int32_t x247 = -1;

	t58 = (((x245%x246)/x247)%x248);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x250 = INT16_MIN;
	volatile uint32_t x251 = 3U;
	uint64_t x252 = 171069002388LLU;
	uint64_t t59 = 70379642788151835LLU;

	t59 = (((x249%x250)/x251)%x252);

	if (t59 != 10922LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x253 = 493166709LL;
	volatile uint16_t x254 = 30622U;
	int64_t x255 = -1LL;
	volatile uint8_t x256 = 16U;
	int64_t t60 = -1LL;

	t60 = (((x253%x254)/x255)%x256);

	if (t60 != -5LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x257 = -1;
	int8_t x258 = 1;
	int64_t x259 = INT64_MIN;
	int8_t x260 = -1;
	static volatile int64_t t61 = 2LL;

	t61 = (((x257%x258)/x259)%x260);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = INT16_MAX;
	int16_t x262 = INT16_MIN;
	int64_t x263 = INT64_MAX;
	volatile int64_t t62 = -46550LL;

	t62 = (((x261%x262)/x263)%x264);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x265 = -35;
	static volatile uint32_t x266 = UINT32_MAX;
	uint32_t x267 = UINT32_MAX;
	static int16_t x268 = INT16_MIN;
	uint32_t t63 = 8140U;

	t63 = (((x265%x266)/x267)%x268);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = 428;
	static uint32_t x270 = UINT32_MAX;
	volatile uint16_t x271 = 5U;
	int16_t x272 = -1;

	t64 = (((x269%x270)/x271)%x272);

	if (t64 != 85U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x273 = UINT16_MAX;
	static int16_t x274 = 15;
	int32_t x276 = INT32_MAX;
	volatile int32_t t65 = -679;

	t65 = (((x273%x274)/x275)%x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x277 = INT8_MAX;
	volatile uint16_t x278 = UINT16_MAX;
	int32_t x279 = -28234881;
	static volatile int16_t x280 = 2555;
	volatile int32_t t66 = -7699;

	t66 = (((x277%x278)/x279)%x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x281 = -1;
	int32_t x282 = -66484;
	static int8_t x283 = INT8_MIN;
	uint8_t x284 = UINT8_MAX;
	int32_t t67 = -1234;

	t67 = (((x281%x282)/x283)%x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x285 = 45U;
	uint32_t x286 = 30645U;
	int16_t x287 = -1;
	volatile uint8_t x288 = 7U;
	volatile uint32_t t68 = 0U;

	t68 = (((x285%x286)/x287)%x288);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x289 = UINT64_MAX;
	volatile int32_t x290 = INT32_MIN;
	static volatile uint64_t t69 = 2LLU;

	t69 = (((x289%x290)/x291)%x292);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x293 = UINT32_MAX;
	static int16_t x294 = INT16_MIN;
	int16_t x295 = INT16_MAX;
	static uint8_t x296 = UINT8_MAX;

	t70 = (((x293%x294)/x295)%x296);

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x297 = 241;
	int16_t x298 = INT16_MAX;
	static int16_t x300 = 229;
	int64_t t71 = 217LL;

	t71 = (((x297%x298)/x299)%x300);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x302 = 678443U;
	volatile uint32_t x303 = 39U;
	static int8_t x304 = INT8_MAX;

	t72 = (((x301%x302)/x303)%x304);

	if (t72 != -34LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x305 = INT8_MAX;
	int8_t x306 = INT8_MIN;
	static int64_t x307 = INT64_MIN;
	static volatile int64_t t73 = 22121528405515798LL;

	t73 = (((x305%x306)/x307)%x308);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x309 = 98322048748993505LLU;
	static int8_t x310 = INT8_MAX;
	int8_t x311 = INT8_MAX;
	int32_t x312 = INT32_MIN;
	volatile uint64_t t74 = 20317301800LLU;

	t74 = (((x309%x310)/x311)%x312);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x313 = 448421728296904LLU;
	int8_t x315 = INT8_MIN;
	int8_t x316 = INT8_MIN;

	t75 = (((x313%x314)/x315)%x316);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x317 = 0U;
	static uint64_t x319 = 15950LLU;
	volatile int16_t x320 = 3105;
	volatile uint64_t t76 = 717267402LLU;

	t76 = (((x317%x318)/x319)%x320);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x321 = 21203;
	static int32_t t77 = 1;

	t77 = (((x321%x322)/x323)%x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x325 = -1;
	uint64_t x326 = 1022227LLU;
	int8_t x327 = -1;
	volatile uint32_t x328 = 1024U;
	volatile uint64_t t78 = 22700960507743LLU;

	t78 = (((x325%x326)/x327)%x328);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x329 = 2025LLU;
	static volatile uint64_t x330 = 7896506236303LLU;
	int16_t x331 = INT16_MAX;
	volatile int64_t x332 = INT64_MAX;
	static volatile uint64_t t79 = 50159919640LLU;

	t79 = (((x329%x330)/x331)%x332);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x333 = -1;
	int32_t x334 = INT32_MAX;
	static uint8_t x335 = 3U;
	volatile int32_t t80 = 981957667;

	t80 = (((x333%x334)/x335)%x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x337 = INT16_MIN;
	static int64_t x338 = INT64_MIN;
	uint8_t x339 = UINT8_MAX;
	static uint32_t x340 = 8750379U;
	volatile int64_t t81 = 686941175629394508LL;

	t81 = (((x337%x338)/x339)%x340);

	if (t81 != -128LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x341 = 32917LLU;
	uint64_t x342 = UINT64_MAX;
	int8_t x343 = -1;
	uint32_t x344 = 61068U;
	volatile uint64_t t82 = 197LLU;

	t82 = (((x341%x342)/x343)%x344);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = INT64_MIN;
	volatile uint32_t x346 = 8590U;
	int8_t x347 = INT8_MAX;
	int64_t x348 = 54196631587570221LL;

	t83 = (((x345%x346)/x347)%x348);

	if (t83 != -42LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x349 = -7;
	static int16_t x350 = -195;
	uint32_t x351 = 7U;
	uint32_t t84 = 388U;

	t84 = (((x349%x350)/x351)%x352);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x354 = 1U;
	volatile int64_t x355 = 2977124660606LL;
	volatile int8_t x356 = -1;
	int64_t t85 = 558845290015361425LL;

	t85 = (((x353%x354)/x355)%x356);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x357 = UINT16_MAX;
	int64_t x359 = INT64_MIN;
	volatile int64_t x360 = INT64_MIN;
	int64_t t86 = -14099511534LL;

	t86 = (((x357%x358)/x359)%x360);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x364 = 30;
	int64_t t87 = 2770197527448LL;

	t87 = (((x361%x362)/x363)%x364);

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x365 = 22;
	uint64_t x366 = UINT64_MAX;
	uint8_t x367 = UINT8_MAX;
	int8_t x368 = INT8_MIN;
	uint64_t t88 = 75830456214786828LLU;

	t88 = (((x365%x366)/x367)%x368);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x369 = -3;
	uint32_t x370 = UINT32_MAX;
	volatile int32_t x371 = -8;
	volatile int32_t x372 = INT32_MIN;
	volatile uint32_t t89 = 196542U;

	t89 = (((x369%x370)/x371)%x372);

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x373 = -1;
	volatile int16_t x374 = -1434;
	uint8_t x376 = UINT8_MAX;
	static volatile int32_t t90 = -672;

	t90 = (((x373%x374)/x375)%x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x378 = -1;
	int16_t x380 = -1567;
	volatile int32_t t91 = -38733;

	t91 = (((x377%x378)/x379)%x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x381 = 898;
	uint64_t x382 = UINT64_MAX;
	int16_t x383 = INT16_MAX;
	volatile uint8_t x384 = 111U;
	uint64_t t92 = 61101903826LLU;

	t92 = (((x381%x382)/x383)%x384);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x385 = UINT32_MAX;
	uint32_t x386 = 288826U;
	static uint32_t x387 = 603809U;
	volatile uint64_t x388 = 3203494135974461LLU;
	static volatile uint64_t t93 = 6383672991476LLU;

	t93 = (((x385%x386)/x387)%x388);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x389 = INT16_MAX;
	int32_t x390 = -1;
	int8_t x391 = INT8_MAX;
	volatile uint8_t x392 = UINT8_MAX;
	static volatile int32_t t94 = 283299;

	t94 = (((x389%x390)/x391)%x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x393 = 186U;
	int16_t x395 = INT16_MIN;
	static int32_t x396 = INT32_MAX;
	static volatile int32_t t95 = -9644931;

	t95 = (((x393%x394)/x395)%x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x397 = -137;
	static uint16_t x398 = UINT16_MAX;
	int8_t x399 = -1;
	int8_t x400 = 1;
	volatile int32_t t96 = -27896860;

	t96 = (((x397%x398)/x399)%x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x401 = INT16_MIN;
	int8_t x402 = INT8_MAX;
	int8_t x403 = INT8_MIN;
	int16_t x404 = -803;
	volatile int32_t t97 = -5789236;

	t97 = (((x401%x402)/x403)%x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x417 = INT64_MIN;
	uint32_t x418 = UINT32_MAX;
	volatile int64_t t98 = -133663373553LL;

	t98 = (((x417%x418)/x419)%x420);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x421 = -1;
	static uint16_t x422 = 479U;
	static int16_t x423 = -1;
	int32_t x424 = 6883;
	volatile int32_t t99 = 102574;

	t99 = (((x421%x422)/x423)%x424);

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

