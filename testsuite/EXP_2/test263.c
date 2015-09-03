#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = INT16_MAX;
static int32_t t1 = 134554445;
uint32_t x15 = 831937U;
uint16_t x19 = UINT16_MAX;
static int32_t x23 = -875;
int32_t t5 = -8000;
int64_t x46 = 176740670343LL;
uint8_t x47 = UINT8_MAX;
int32_t t8 = 15533730;
static int32_t x54 = -63794359;
static uint64_t x64 = UINT64_MAX;
uint64_t t11 = 532175003837LLU;
volatile int64_t t13 = 123226358LL;
static volatile uint8_t x74 = 0U;
volatile int32_t t14 = 70156082;
int16_t x80 = INT16_MAX;
volatile int64_t x86 = 28923278248098113LL;
uint64_t x88 = UINT64_MAX;
int64_t x109 = INT64_MAX;
volatile uint8_t x119 = UINT8_MAX;
int16_t x131 = INT16_MIN;
int32_t t26 = 299482;
int16_t x138 = INT16_MIN;
int8_t x139 = INT8_MIN;
uint32_t x140 = 1790220U;
int32_t x154 = INT32_MIN;
int16_t x155 = INT16_MIN;
int64_t x168 = INT64_MAX;
uint8_t x179 = UINT8_MAX;
static int8_t x180 = INT8_MIN;
volatile int32_t x188 = INT32_MAX;
volatile uint16_t x189 = UINT16_MAX;
uint32_t x191 = 910U;
uint16_t x194 = 1U;
volatile int32_t x202 = INT32_MIN;
volatile int16_t x211 = 1258;
static int8_t x214 = INT8_MIN;
int32_t t46 = -169937578;
int8_t x218 = INT8_MAX;
int64_t x253 = INT64_MAX;
static volatile int32_t t54 = -37134;
int16_t x257 = -8743;
uint32_t x265 = UINT32_MAX;
int8_t x266 = INT8_MIN;
int64_t t57 = 2LL;
int64_t x273 = 4LL;
volatile int64_t x277 = INT64_MIN;
int64_t x279 = -7575LL;
int32_t t62 = 3999105;
int64_t x292 = -1LL;
uint64_t x295 = UINT64_MAX;
int64_t x312 = INT64_MIN;
static uint32_t x314 = 5648140U;
volatile uint32_t t68 = 1091U;
uint32_t x329 = 2190490U;
volatile int8_t x330 = 23;
static uint16_t x340 = UINT16_MAX;
int32_t t73 = -4566;
uint8_t x343 = UINT8_MAX;
volatile int64_t x344 = -65170019759LL;
int32_t x345 = INT32_MIN;
int64_t x347 = -1LL;
int16_t x348 = 14;
volatile uint32_t t76 = 507713581U;
int64_t x359 = INT64_MAX;
static volatile int64_t x364 = INT64_MIN;
int32_t x375 = -2768949;
uint64_t x380 = 367436804107277375LLU;
volatile int64_t x381 = INT64_MAX;
volatile uint64_t t82 = 2086721564274LLU;
static volatile uint16_t x389 = UINT16_MAX;
int32_t t84 = -7;
int32_t x394 = 297337686;
volatile int32_t t85 = 16585;
uint64_t x402 = 67960326179791712LLU;
int64_t x411 = INT64_MIN;
int32_t t87 = -129886736;
int16_t x416 = -735;
int32_t t88 = 2168;
uint64_t x417 = UINT64_MAX;
int8_t x421 = INT8_MAX;
int32_t x427 = INT32_MIN;
volatile int8_t x430 = -1;
int32_t x442 = -1;
static uint16_t x446 = UINT16_MAX;
int32_t t94 = -514530;
uint16_t x450 = 29501U;
static uint32_t x451 = 111U;
uint16_t x456 = UINT16_MAX;
int8_t x457 = INT8_MIN;
int32_t t98 = -559;
static int64_t x466 = -687278447922LL;
volatile int16_t x467 = 83;


void f0(void) {
	volatile uint32_t x1 = 0U;
	uint32_t x2 = 16659544U;
	uint16_t x3 = 11U;
	static int32_t x4 = -1;
	static volatile int32_t t0 = 194856;

	t0 = ((x1==(x2-x3))*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int32_t x7 = INT32_MAX;
	static uint8_t x8 = 1U;

	t1 = ((x5==(x6-x7))*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	uint32_t x10 = 194713800U;
	int8_t x11 = -1;
	static uint32_t x12 = 13U;
	uint32_t t2 = 969397993U;

	t2 = ((x9==(x10-x11))*x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int16_t x14 = INT16_MIN;
	static uint8_t x16 = UINT8_MAX;
	static volatile int32_t t3 = 972304;

	t3 = ((x13==(x14-x15))*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = UINT64_MAX;
	uint8_t x18 = 105U;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 5388521;

	t4 = ((x17==(x18-x19))*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int16_t x22 = 87;
	int16_t x24 = INT16_MIN;

	t5 = ((x21==(x22-x23))*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int64_t x26 = -617282LL;
	static volatile int8_t x27 = INT8_MIN;
	static int64_t x28 = INT64_MIN;
	int64_t t6 = -138799LL;

	t6 = ((x25==(x26-x27))*x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x45 = INT8_MIN;
	int32_t x48 = INT32_MAX;
	volatile int32_t t7 = -13085;

	t7 = ((x45==(x46-x47))*x48);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x49 = 418003;
	int32_t x50 = INT32_MIN;
	static uint64_t x51 = UINT64_MAX;
	uint16_t x52 = 1735U;

	t8 = ((x49==(x50-x51))*x52);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = -1LL;
	uint64_t x55 = 1LLU;
	static int8_t x56 = INT8_MIN;
	int32_t t9 = -1021;

	t9 = ((x53==(x54-x55))*x56);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = INT64_MAX;
	int16_t x58 = INT16_MIN;
	int64_t x59 = 40874273686183227LL;
	static uint32_t x60 = 5156894U;
	volatile uint32_t t10 = 256028928U;

	t10 = ((x57==(x58-x59))*x60);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = INT16_MIN;
	int8_t x62 = INT8_MIN;
	int64_t x63 = INT64_MIN;

	t11 = ((x61==(x62-x63))*x64);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x65 = -1;
	uint64_t x66 = UINT64_MAX;
	uint64_t x67 = 5961LLU;
	volatile uint16_t x68 = 31U;
	volatile int32_t t12 = 866137442;

	t12 = ((x65==(x66-x67))*x68);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x69 = UINT64_MAX;
	int8_t x70 = INT8_MAX;
	int64_t x71 = -1LL;
	int64_t x72 = INT64_MIN;

	t13 = ((x69==(x70-x71))*x72);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = INT64_MAX;
	int16_t x75 = -1;
	int32_t x76 = -1;

	t14 = ((x73==(x74-x75))*x76);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x77 = INT16_MIN;
	int8_t x78 = -5;
	int16_t x79 = -1;
	int32_t t15 = -1;

	t15 = ((x77==(x78-x79))*x80);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x81 = 208966577U;
	uint64_t x82 = 0LLU;
	int64_t x83 = 4069LL;
	int16_t x84 = INT16_MIN;
	static volatile int32_t t16 = -484792;

	t16 = ((x81==(x82-x83))*x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x85 = 311751LLU;
	static volatile int32_t x87 = -1;
	uint64_t t17 = 3948491314880727474LLU;

	t17 = ((x85==(x86-x87))*x88);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x93 = 22560U;
	volatile uint64_t x94 = 1684195818LLU;
	int16_t x95 = -2;
	uint32_t x96 = 10312243U;
	uint32_t t18 = 17U;

	t18 = ((x93==(x94-x95))*x96);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = 1;
	int16_t x98 = 3998;
	int32_t x99 = INT32_MAX;
	static uint16_t x100 = 1869U;
	int32_t t19 = -34;

	t19 = ((x97==(x98-x99))*x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = INT16_MIN;
	uint8_t x102 = 47U;
	uint16_t x103 = UINT16_MAX;
	static uint32_t x104 = UINT32_MAX;
	uint32_t t20 = 1125U;

	t20 = ((x101==(x102-x103))*x104);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x110 = INT16_MIN;
	int32_t x111 = -157920;
	int64_t x112 = 14612LL;
	static int64_t t21 = -3242813064803213LL;

	t21 = ((x109==(x110-x111))*x112);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x113 = -350;
	static int32_t x114 = -71954696;
	int16_t x115 = -1;
	volatile int32_t x116 = 1061639;
	volatile int32_t t22 = -45;

	t22 = ((x113==(x114-x115))*x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x117 = INT64_MIN;
	static volatile int8_t x118 = 18;
	int8_t x120 = -1;
	static int32_t t23 = 12;

	t23 = ((x117==(x118-x119))*x120);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x121 = INT64_MAX;
	uint64_t x122 = 135LLU;
	int8_t x123 = INT8_MIN;
	int32_t x124 = INT32_MIN;
	volatile int32_t t24 = -14108633;

	t24 = ((x121==(x122-x123))*x124);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x125 = 1U;
	int8_t x126 = -30;
	int64_t x127 = 57863489LL;
	uint32_t x128 = UINT32_MAX;
	static volatile uint32_t t25 = 203760U;

	t25 = ((x125==(x126-x127))*x128);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x129 = INT8_MIN;
	volatile int8_t x130 = INT8_MIN;
	volatile int32_t x132 = INT32_MIN;

	t26 = ((x129==(x130-x131))*x132);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x133 = 2245544U;
	volatile int16_t x134 = INT16_MIN;
	static int8_t x135 = -1;
	int8_t x136 = 0;
	volatile int32_t t27 = 262;

	t27 = ((x133==(x134-x135))*x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x137 = 1U;
	volatile uint32_t t28 = 1973417803U;

	t28 = ((x137==(x138-x139))*x140);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x141 = INT8_MAX;
	int16_t x142 = INT16_MIN;
	volatile uint8_t x143 = 2U;
	uint16_t x144 = UINT16_MAX;
	int32_t t29 = -958166318;

	t29 = ((x141==(x142-x143))*x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = INT64_MIN;
	int16_t x146 = -17;
	int16_t x147 = -1;
	int8_t x148 = INT8_MAX;
	int32_t t30 = -12;

	t30 = ((x145==(x146-x147))*x148);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = -1;
	int32_t x150 = -1032382069;
	int64_t x151 = -672474972567781449LL;
	uint8_t x152 = 10U;
	int32_t t31 = 92057443;

	t31 = ((x149==(x150-x151))*x152);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x153 = INT32_MIN;
	static uint16_t x156 = 4730U;
	int32_t t32 = -14;

	t32 = ((x153==(x154-x155))*x156);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x157 = 23402U;
	int32_t x158 = INT32_MIN;
	int32_t x159 = -1058322;
	int8_t x160 = INT8_MIN;
	volatile int32_t t33 = -124163;

	t33 = ((x157==(x158-x159))*x160);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = INT32_MIN;
	int16_t x162 = -1;
	volatile int8_t x163 = 1;
	uint16_t x164 = 1018U;
	static int32_t t34 = 42;

	t34 = ((x161==(x162-x163))*x164);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x165 = -2;
	static int64_t x166 = -1LL;
	static int16_t x167 = 5;
	volatile int64_t t35 = 61872634LL;

	t35 = ((x165==(x166-x167))*x168);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x169 = 7;
	volatile uint32_t x170 = 1506774U;
	static uint8_t x171 = 0U;
	volatile int32_t x172 = INT32_MAX;
	static int32_t t36 = 344707;

	t36 = ((x169==(x170-x171))*x172);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x173 = UINT32_MAX;
	static int64_t x174 = -1LL;
	volatile uint64_t x175 = 12401889092LLU;
	static int64_t x176 = INT64_MAX;
	static volatile int64_t t37 = -31963LL;

	t37 = ((x173==(x174-x175))*x176);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x177 = -1;
	volatile int8_t x178 = 0;
	int32_t t38 = 18236206;

	t38 = ((x177==(x178-x179))*x180);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x185 = 17840U;
	int8_t x186 = INT8_MIN;
	int8_t x187 = -4;
	int32_t t39 = -2114;

	t39 = ((x185==(x186-x187))*x188);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x190 = INT32_MAX;
	int8_t x192 = INT8_MIN;
	volatile int32_t t40 = -1307321;

	t40 = ((x189==(x190-x191))*x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x193 = 24239U;
	int8_t x195 = 45;
	int16_t x196 = INT16_MIN;
	int32_t t41 = -296;

	t41 = ((x193==(x194-x195))*x196);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x197 = -3644082;
	int64_t x198 = -380619452494968LL;
	uint16_t x199 = 15U;
	int64_t x200 = -1LL;
	volatile int64_t t42 = -128599201LL;

	t42 = ((x197==(x198-x199))*x200);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x201 = INT8_MIN;
	uint32_t x203 = UINT32_MAX;
	static int32_t x204 = INT32_MIN;
	volatile int32_t t43 = -117539;

	t43 = ((x201==(x202-x203))*x204);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x205 = INT8_MAX;
	int32_t x206 = -1;
	volatile int16_t x207 = -1;
	volatile int32_t x208 = 1;
	volatile int32_t t44 = 2;

	t44 = ((x205==(x206-x207))*x208);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x209 = INT64_MIN;
	volatile uint16_t x210 = 0U;
	int64_t x212 = INT64_MAX;
	volatile int64_t t45 = 1LL;

	t45 = ((x209==(x210-x211))*x212);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x213 = -3;
	int8_t x215 = INT8_MAX;
	int16_t x216 = INT16_MAX;

	t46 = ((x213==(x214-x215))*x216);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x217 = 737545685416380516LL;
	volatile int8_t x219 = 1;
	static uint16_t x220 = UINT16_MAX;
	int32_t t47 = -152214998;

	t47 = ((x217==(x218-x219))*x220);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint64_t x221 = 7302101LLU;
	uint32_t x222 = 4016U;
	volatile int16_t x223 = INT16_MIN;
	int16_t x224 = 14;
	volatile int32_t t48 = -2675;

	t48 = ((x221==(x222-x223))*x224);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x229 = INT32_MIN;
	int8_t x230 = INT8_MIN;
	volatile int32_t x231 = 72;
	volatile uint8_t x232 = 51U;
	volatile int32_t t49 = 35536;

	t49 = ((x229==(x230-x231))*x232);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x233 = 709750743932979LL;
	static uint16_t x234 = 29U;
	volatile int8_t x235 = 3;
	uint32_t x236 = UINT32_MAX;
	volatile uint32_t t50 = 181430662U;

	t50 = ((x233==(x234-x235))*x236);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x237 = 1;
	volatile int32_t x238 = -1;
	int64_t x239 = -48LL;
	int64_t x240 = 1620LL;
	volatile int64_t t51 = 740786LL;

	t51 = ((x237==(x238-x239))*x240);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x245 = INT64_MIN;
	int32_t x246 = 10406;
	static int32_t x247 = -1;
	uint32_t x248 = 8568406U;
	uint32_t t52 = 16959088U;

	t52 = ((x245==(x246-x247))*x248);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x249 = UINT16_MAX;
	int16_t x250 = INT16_MIN;
	volatile int16_t x251 = -1;
	int8_t x252 = -1;
	volatile int32_t t53 = 124109274;

	t53 = ((x249==(x250-x251))*x252);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x254 = -3;
	static uint64_t x255 = 7981699LLU;
	volatile int16_t x256 = 42;

	t54 = ((x253==(x254-x255))*x256);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x258 = INT32_MIN;
	uint64_t x259 = 1LLU;
	int8_t x260 = 13;
	int32_t t55 = 106213135;

	t55 = ((x257==(x258-x259))*x260);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x261 = UINT8_MAX;
	static int32_t x262 = -2;
	uint16_t x263 = UINT16_MAX;
	int64_t x264 = -630606735395LL;
	volatile int64_t t56 = -96320625661503683LL;

	t56 = ((x261==(x262-x263))*x264);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x267 = INT64_MIN;
	int64_t x268 = 942742081337680365LL;

	t57 = ((x265==(x266-x267))*x268);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x269 = INT32_MIN;
	int8_t x270 = 9;
	static int64_t x271 = -1LL;
	int8_t x272 = 1;
	volatile int32_t t58 = 91;

	t58 = ((x269==(x270-x271))*x272);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x274 = 29367LLU;
	static volatile uint16_t x275 = 24571U;
	static int32_t x276 = INT32_MIN;
	volatile int32_t t59 = -97203782;

	t59 = ((x273==(x274-x275))*x276);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x278 = INT8_MIN;
	static int8_t x280 = INT8_MIN;
	int32_t t60 = -63;

	t60 = ((x277==(x278-x279))*x280);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x281 = INT8_MIN;
	int64_t x282 = INT64_MAX;
	static int16_t x283 = 312;
	int32_t x284 = 629942765;
	volatile int32_t t61 = 7394;

	t61 = ((x281==(x282-x283))*x284);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x285 = -1LL;
	static int32_t x286 = 2078677;
	volatile uint16_t x287 = 126U;
	static int8_t x288 = INT8_MIN;

	t62 = ((x285==(x286-x287))*x288);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x289 = -1;
	int64_t x290 = INT64_MIN;
	uint8_t x291 = 0U;
	volatile int64_t t63 = -5507236565LL;

	t63 = ((x289==(x290-x291))*x292);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x293 = -74;
	int8_t x294 = INT8_MIN;
	volatile int16_t x296 = INT16_MIN;
	int32_t t64 = -1;

	t64 = ((x293==(x294-x295))*x296);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x297 = 13U;
	int16_t x298 = INT16_MIN;
	static int8_t x299 = 12;
	static int8_t x300 = INT8_MIN;
	int32_t t65 = -264262385;

	t65 = ((x297==(x298-x299))*x300);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x305 = INT64_MAX;
	int16_t x306 = INT16_MIN;
	static int8_t x307 = INT8_MAX;
	int64_t x308 = INT64_MIN;
	int64_t t66 = -21708153LL;

	t66 = ((x305==(x306-x307))*x308);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x309 = -1LL;
	volatile uint32_t x310 = 1279U;
	static int8_t x311 = -1;
	static volatile int64_t t67 = -1LL;

	t67 = ((x309==(x310-x311))*x312);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x313 = INT32_MIN;
	uint16_t x315 = UINT16_MAX;
	uint32_t x316 = 733U;

	t68 = ((x313==(x314-x315))*x316);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = -1;
	static int32_t x318 = INT32_MIN;
	uint32_t x319 = UINT32_MAX;
	uint32_t x320 = 433813U;
	uint32_t t69 = 240U;

	t69 = ((x317==(x318-x319))*x320);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x321 = INT8_MIN;
	volatile int32_t x322 = -133494055;
	int64_t x323 = INT64_MIN;
	uint16_t x324 = 3926U;
	int32_t t70 = 217;

	t70 = ((x321==(x322-x323))*x324);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x325 = INT64_MIN;
	static int16_t x326 = INT16_MIN;
	int8_t x327 = -1;
	volatile int64_t x328 = -80315051354719LL;
	volatile int64_t t71 = 39702025786725LL;

	t71 = ((x325==(x326-x327))*x328);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x331 = 0U;
	volatile int32_t x332 = INT32_MIN;
	volatile int32_t t72 = -8035941;

	t72 = ((x329==(x330-x331))*x332);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x337 = INT64_MIN;
	volatile uint64_t x338 = UINT64_MAX;
	int64_t x339 = -1LL;

	t73 = ((x337==(x338-x339))*x340);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x341 = -1;
	uint32_t x342 = UINT32_MAX;
	int64_t t74 = -34852LL;

	t74 = ((x341==(x342-x343))*x344);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x346 = -1;
	int32_t t75 = 4052;

	t75 = ((x345==(x346-x347))*x348);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x349 = -6714;
	uint16_t x350 = 178U;
	static int8_t x351 = 61;
	uint32_t x352 = 2U;

	t76 = ((x349==(x350-x351))*x352);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x353 = INT8_MIN;
	volatile uint32_t x354 = UINT32_MAX;
	int32_t x355 = 306853;
	int64_t x356 = -1LL;
	volatile int64_t t77 = -66661821376400122LL;

	t77 = ((x353==(x354-x355))*x356);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x357 = -1;
	uint8_t x358 = 1U;
	uint16_t x360 = 7442U;
	static int32_t t78 = -25;

	t78 = ((x357==(x358-x359))*x360);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x361 = INT64_MIN;
	int32_t x362 = -1;
	static int8_t x363 = INT8_MIN;
	int64_t t79 = -2515690034105316729LL;

	t79 = ((x361==(x362-x363))*x364);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x373 = 1140763146551864534LL;
	int8_t x374 = INT8_MIN;
	uint64_t x376 = 486830991LLU;
	uint64_t t80 = 266056614LLU;

	t80 = ((x373==(x374-x375))*x376);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x377 = INT8_MIN;
	uint16_t x378 = 6U;
	int32_t x379 = -30016;
	volatile uint64_t t81 = 32549463372718LLU;

	t81 = ((x377==(x378-x379))*x380);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x382 = UINT64_MAX;
	uint16_t x383 = 78U;
	uint64_t x384 = UINT64_MAX;

	t82 = ((x381==(x382-x383))*x384);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x385 = 436;
	int8_t x386 = INT8_MAX;
	static int8_t x387 = -44;
	int8_t x388 = 1;
	int32_t t83 = 64718;

	t83 = ((x385==(x386-x387))*x388);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x390 = -11;
	int16_t x391 = -4753;
	static int8_t x392 = 0;

	t84 = ((x389==(x390-x391))*x392);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x393 = 19685470U;
	volatile uint64_t x395 = 2786153LLU;
	volatile int16_t x396 = INT16_MIN;

	t85 = ((x393==(x394-x395))*x396);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x401 = 4430;
	uint16_t x403 = 484U;
	static int8_t x404 = INT8_MAX;
	int32_t t86 = -116;

	t86 = ((x401==(x402-x403))*x404);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x409 = -1;
	int8_t x410 = -1;
	int32_t x412 = -771;

	t87 = ((x409==(x410-x411))*x412);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x413 = 62U;
	static uint8_t x414 = 1U;
	static int16_t x415 = INT16_MIN;

	t88 = ((x413==(x414-x415))*x416);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x418 = UINT32_MAX;
	static uint32_t x419 = 2487636U;
	int8_t x420 = -18;
	volatile int32_t t89 = -1;

	t89 = ((x417==(x418-x419))*x420);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x422 = -1868;
	int16_t x423 = INT16_MAX;
	uint32_t x424 = 6U;
	volatile uint32_t t90 = 31255095U;

	t90 = ((x421==(x422-x423))*x424);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x425 = UINT32_MAX;
	volatile int8_t x426 = INT8_MIN;
	static int16_t x428 = -385;
	int32_t t91 = 9133;

	t91 = ((x425==(x426-x427))*x428);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x429 = 1;
	int16_t x431 = -1;
	volatile int64_t x432 = INT64_MIN;
	static int64_t t92 = -10LL;

	t92 = ((x429==(x430-x431))*x432);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x441 = 166203024LL;
	int32_t x443 = 1664342;
	int16_t x444 = INT16_MAX;
	static int32_t t93 = -1;

	t93 = ((x441==(x442-x443))*x444);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x445 = 44U;
	uint64_t x447 = UINT64_MAX;
	volatile int8_t x448 = -1;

	t94 = ((x445==(x446-x447))*x448);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x449 = INT32_MIN;
	int64_t x452 = INT64_MAX;
	volatile int64_t t95 = -9726285LL;

	t95 = ((x449==(x450-x451))*x452);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x453 = INT8_MIN;
	static volatile uint64_t x454 = UINT64_MAX;
	uint8_t x455 = 9U;
	static volatile int32_t t96 = 16149;

	t96 = ((x453==(x454-x455))*x456);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x458 = 214105072003866LLU;
	static uint8_t x459 = 89U;
	int16_t x460 = -1;
	int32_t t97 = 0;

	t97 = ((x457==(x458-x459))*x460);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x461 = -1LL;
	uint8_t x462 = UINT8_MAX;
	int16_t x463 = INT16_MIN;
	uint8_t x464 = 7U;

	t98 = ((x461==(x462-x463))*x464);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x465 = INT8_MIN;
	volatile uint64_t x468 = 78LLU;
	uint64_t t99 = 5502520555820086210LLU;

	t99 = ((x465==(x466-x467))*x468);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

