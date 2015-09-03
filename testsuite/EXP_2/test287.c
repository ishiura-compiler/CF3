#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x8 = 2U;
static volatile int32_t t1 = 53718909;
volatile int16_t x19 = INT16_MIN;
int32_t x22 = -1;
volatile int32_t t5 = 0;
int16_t x47 = INT16_MAX;
static uint32_t x48 = 162628099U;
volatile int8_t x57 = 0;
int32_t x61 = 0;
volatile int32_t t16 = -1;
int32_t t19 = 435420146;
static int8_t x89 = 51;
uint8_t x94 = 63U;
int32_t t21 = -1694;
int64_t x103 = -1LL;
int64_t t22 = 2219347818682LL;
int16_t x108 = 403;
int64_t x125 = -1LL;
volatile uint32_t x128 = 28351561U;
uint32_t t28 = 6042U;
int16_t x136 = INT16_MIN;
static int32_t t30 = -233028914;
static int16_t x138 = INT16_MAX;
uint16_t x144 = UINT16_MAX;
int16_t x148 = -1;
int64_t x153 = INT64_MAX;
static int16_t x155 = INT16_MIN;
int8_t x156 = INT8_MIN;
int64_t x174 = 732803745LL;
int64_t x179 = -135021606720LL;
volatile int32_t t38 = 0;
uint8_t x190 = UINT8_MAX;
uint16_t x192 = UINT16_MAX;
volatile int64_t x204 = INT64_MIN;
uint64_t x206 = 2699842856372LLU;
volatile uint64_t t44 = 30LLU;
int32_t x218 = -1;
int32_t x228 = INT32_MIN;
int16_t x229 = INT16_MIN;
int64_t x230 = INT64_MAX;
uint32_t x231 = 609590U;
uint64_t x233 = 1941957023003539874LLU;
static volatile int16_t x244 = INT16_MAX;
uint32_t x247 = 567499016U;
volatile uint16_t x248 = 1350U;
volatile uint32_t x255 = 994983U;
int32_t t53 = 2269695;
volatile int64_t x258 = -1LL;
volatile int32_t t56 = 394252257;
int32_t t57 = 827286;
int16_t x276 = -1;
uint8_t x279 = 24U;
int8_t x304 = -3;
int32_t t64 = 129380725;
uint8_t x340 = 1U;
int32_t x346 = -1;
volatile int32_t t73 = 3688316;
int32_t t76 = -1;
uint8_t x367 = 11U;
int32_t t79 = 38014347;
uint32_t x382 = 43484U;
volatile int32_t x386 = INT32_MAX;
int32_t x391 = INT32_MAX;
int32_t t86 = -302572232;
int8_t x419 = -15;
int64_t x422 = INT64_MIN;
int32_t t91 = -65103;
volatile int16_t x425 = -1;
volatile int64_t t95 = -1732876451961826781LL;
volatile uint8_t x448 = 35U;
uint32_t x453 = 1525386573U;
uint16_t x458 = 9608U;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int8_t x2 = INT8_MAX;
	int16_t x3 = 0;
	uint16_t x4 = 2U;
	static int32_t t0 = 53064626;

	t0 = ((x1<=(x2-x3))+x4);

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile int8_t x6 = INT8_MIN;
	uint32_t x7 = 47872U;

	t1 = ((x5<=(x6-x7))+x8);

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -60;
	volatile uint32_t x10 = 456736009U;
	uint16_t x11 = 833U;
	volatile int16_t x12 = -1562;
	int32_t t2 = -2517;

	t2 = ((x9<=(x10-x11))+x12);

	if (t2 != -1562) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 79U;
	static uint8_t x14 = 53U;
	static volatile int32_t x15 = -2324987;
	static volatile int64_t x16 = -1LL;
	volatile int64_t t3 = 145105LL;

	t3 = ((x13<=(x14-x15))+x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = UINT16_MAX;
	static int32_t x18 = 1565;
	uint32_t x20 = 435U;
	static uint32_t t4 = 86605U;

	t4 = ((x17<=(x18-x19))+x20);

	if (t4 != 435U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int16_t x23 = -4058;
	static int16_t x24 = INT16_MAX;

	t5 = ((x21<=(x22-x23))+x24);

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	uint32_t x26 = 93221685U;
	uint16_t x27 = 55U;
	static uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = -115788488;

	t6 = ((x25<=(x26-x27))+x28);

	if (t6 != 256) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -1;
	static volatile int8_t x34 = INT8_MIN;
	uint32_t x35 = 20U;
	int8_t x36 = 1;
	volatile int32_t t7 = 208;

	t7 = ((x33<=(x34-x35))+x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	static int8_t x38 = INT8_MIN;
	static int64_t x39 = -1LL;
	volatile uint8_t x40 = 3U;
	volatile int32_t t8 = -14;

	t8 = ((x37<=(x38-x39))+x40);

	if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x41 = 322U;
	static uint16_t x42 = 29U;
	int16_t x43 = -15;
	int8_t x44 = 0;
	int32_t t9 = 2303;

	t9 = ((x41<=(x42-x43))+x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -88820918;
	int64_t x46 = -1LL;
	uint32_t t10 = 1005U;

	t10 = ((x45<=(x46-x47))+x48);

	if (t10 != 162628100U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x49 = -164498533;
	int16_t x50 = 69;
	static volatile int64_t x51 = 51158LL;
	volatile int64_t x52 = 17660LL;
	int64_t t11 = -3776847019024LL;

	t11 = ((x49<=(x50-x51))+x52);

	if (t11 != 17661LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = INT8_MIN;
	uint8_t x54 = 1U;
	int16_t x55 = INT16_MAX;
	static int32_t x56 = -1;
	int32_t t12 = 27590;

	t12 = ((x53<=(x54-x55))+x56);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x58 = 32U;
	int32_t x59 = 82294447;
	static int32_t x60 = INT32_MIN;
	volatile int32_t t13 = INT32_MIN;

	t13 = ((x57<=(x58-x59))+x60);

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x62 = -1LL;
	static int64_t x63 = -1LL;
	uint32_t x64 = 1021645U;
	volatile uint32_t t14 = 2691U;

	t14 = ((x61<=(x62-x63))+x64);

	if (t14 != 1021646U) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x69 = -1;
	volatile uint32_t x70 = 153231U;
	int32_t x71 = 787656;
	static volatile uint8_t x72 = 7U;
	volatile int32_t t15 = 36889;

	t15 = ((x69<=(x70-x71))+x72);

	if (t15 != 7) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x73 = 2U;
	static uint8_t x74 = 7U;
	int32_t x75 = 947939329;
	int16_t x76 = INT16_MIN;

	t16 = ((x73<=(x74-x75))+x76);

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x77 = 151867016785673634LLU;
	volatile int64_t x78 = -1LL;
	int16_t x79 = -1;
	int8_t x80 = INT8_MAX;
	volatile int32_t t17 = -1;

	t17 = ((x77<=(x78-x79))+x80);

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x81 = -30LL;
	int32_t x82 = 0;
	int8_t x83 = 0;
	static volatile int64_t x84 = INT64_MIN;
	volatile int64_t t18 = -2388168LL;

	t18 = ((x81<=(x82-x83))+x84);

	if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = 37317296334861LL;
	static int64_t x86 = -1467507LL;
	uint32_t x87 = 106247541U;
	int32_t x88 = -1;

	t19 = ((x85<=(x86-x87))+x88);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x90 = -1;
	static uint32_t x91 = 6100U;
	volatile int64_t x92 = -1LL;
	int64_t t20 = -226LL;

	t20 = ((x89<=(x90-x91))+x92);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MAX;
	int64_t x95 = 25LL;
	uint16_t x96 = UINT16_MAX;

	t21 = ((x93<=(x94-x95))+x96);

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x101 = 487U;
	uint32_t x102 = UINT32_MAX;
	static int64_t x104 = -15945493218LL;

	t22 = ((x101<=(x102-x103))+x104);

	if (t22 != -15945493217LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x105 = INT16_MAX;
	static uint8_t x106 = 5U;
	volatile int32_t x107 = -1;
	static volatile int32_t t23 = 0;

	t23 = ((x105<=(x106-x107))+x108);

	if (t23 != 403) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = 335U;
	uint32_t x110 = UINT32_MAX;
	int32_t x111 = -1;
	int32_t x112 = INT32_MIN;
	static int32_t t24 = INT32_MIN;

	t24 = ((x109<=(x110-x111))+x112);

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = 5U;
	volatile uint16_t x114 = 6U;
	uint64_t x115 = 7LLU;
	volatile uint32_t x116 = 191205U;
	uint32_t t25 = 0U;

	t25 = ((x113<=(x114-x115))+x116);

	if (t25 != 191206U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x117 = -3369809LL;
	static int16_t x118 = INT16_MIN;
	int32_t x119 = -1;
	static int32_t x120 = -1;
	static volatile int32_t t26 = 476076772;

	t26 = ((x117<=(x118-x119))+x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x121 = UINT64_MAX;
	int16_t x122 = -1;
	uint64_t x123 = 870460509261LLU;
	volatile int32_t x124 = -1;
	static int32_t t27 = 5804;

	t27 = ((x121<=(x122-x123))+x124);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x126 = -15LL;
	uint64_t x127 = 359547823954LLU;

	t28 = ((x125<=(x126-x127))+x128);

	if (t28 != 28351561U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x129 = UINT64_MAX;
	static int64_t x130 = INT64_MIN;
	int16_t x131 = INT16_MIN;
	int8_t x132 = INT8_MIN;
	int32_t t29 = -33;

	t29 = ((x129<=(x130-x131))+x132);

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x133 = 3U;
	uint16_t x134 = UINT16_MAX;
	static int32_t x135 = 384909;

	t30 = ((x133<=(x134-x135))+x136);

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x137 = 1;
	static volatile uint64_t x139 = UINT64_MAX;
	int8_t x140 = INT8_MIN;
	int32_t t31 = 1127136;

	t31 = ((x137<=(x138-x139))+x140);

	if (t31 != -127) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = 53;
	int32_t x142 = INT32_MIN;
	int64_t x143 = 2LL;
	int32_t t32 = 28942;

	t32 = ((x141<=(x142-x143))+x144);

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = 486705223742447LLU;
	int8_t x146 = 9;
	uint8_t x147 = UINT8_MAX;
	volatile int32_t t33 = 30571;

	t33 = ((x145<=(x146-x147))+x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x154 = INT8_MIN;
	int32_t t34 = -132;

	t34 = ((x153<=(x154-x155))+x156);

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = -1;
	int64_t x162 = 3619768897805838LL;
	volatile int32_t x163 = INT32_MAX;
	int8_t x164 = -42;
	int32_t t35 = 1;

	t35 = ((x161<=(x162-x163))+x164);

	if (t35 != -41) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x173 = -1;
	uint32_t x175 = UINT32_MAX;
	uint16_t x176 = UINT16_MAX;
	volatile int32_t t36 = 0;

	t36 = ((x173<=(x174-x175))+x176);

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = 3;
	static uint16_t x178 = 7U;
	int8_t x180 = 17;
	int32_t t37 = 3204;

	t37 = ((x177<=(x178-x179))+x180);

	if (t37 != 18) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x181 = -2;
	int8_t x182 = -1;
	uint32_t x183 = 5006483U;
	uint8_t x184 = 0U;

	t38 = ((x181<=(x182-x183))+x184);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x185 = INT64_MIN;
	static int8_t x186 = INT8_MAX;
	uint32_t x187 = UINT32_MAX;
	volatile int64_t x188 = INT64_MIN;
	static volatile int64_t t39 = 53652083653836LL;

	t39 = ((x185<=(x186-x187))+x188);

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x189 = INT16_MIN;
	int8_t x191 = 1;
	volatile int32_t t40 = 14425;

	t40 = ((x189<=(x190-x191))+x192);

	if (t40 != 65536) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x193 = 4345U;
	uint64_t x194 = 1LLU;
	static int64_t x195 = INT64_MAX;
	volatile int32_t x196 = INT32_MIN;
	static int32_t t41 = -30569;

	t41 = ((x193<=(x194-x195))+x196);

	if (t41 != -2147483647) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x197 = -20LL;
	volatile int64_t x198 = INT64_MIN;
	int8_t x199 = -3;
	static int16_t x200 = -175;
	volatile int32_t t42 = -174;

	t42 = ((x197<=(x198-x199))+x200);

	if (t42 != -175) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = 0LL;
	int8_t x202 = INT8_MAX;
	int8_t x203 = INT8_MIN;
	int64_t t43 = -2263LL;

	t43 = ((x201<=(x202-x203))+x204);

	if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x205 = 46181U;
	static volatile int8_t x207 = INT8_MIN;
	uint64_t x208 = UINT64_MAX;

	t44 = ((x205<=(x206-x207))+x208);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x213 = -1;
	volatile int16_t x214 = -9878;
	static volatile int64_t x215 = -975270LL;
	int16_t x216 = INT16_MAX;
	int32_t t45 = 2049601;

	t45 = ((x213<=(x214-x215))+x216);

	if (t45 != 32768) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x217 = -1;
	int32_t x219 = INT32_MAX;
	int8_t x220 = INT8_MIN;
	static volatile int32_t t46 = -7;

	t46 = ((x217<=(x218-x219))+x220);

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x225 = 2146893259LLU;
	int64_t x226 = 753LL;
	volatile uint8_t x227 = 3U;
	int32_t t47 = INT32_MIN;

	t47 = ((x225<=(x226-x227))+x228);

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x232 = 4;
	volatile int32_t t48 = -654362;

	t48 = ((x229<=(x230-x231))+x232);

	if (t48 != 5) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x234 = 117283U;
	uint16_t x235 = 20249U;
	int8_t x236 = INT8_MIN;
	volatile int32_t t49 = -11626;

	t49 = ((x233<=(x234-x235))+x236);

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x241 = -1;
	static int8_t x242 = 0;
	static volatile int8_t x243 = INT8_MAX;
	int32_t t50 = 4274;

	t50 = ((x241<=(x242-x243))+x244);

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x245 = INT8_MIN;
	uint8_t x246 = UINT8_MAX;
	volatile int32_t t51 = 12089;

	t51 = ((x245<=(x246-x247))+x248);

	if (t51 != 1350) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x249 = INT32_MAX;
	int16_t x250 = -11666;
	uint32_t x251 = 1153520U;
	volatile int16_t x252 = INT16_MAX;
	static int32_t t52 = -148479;

	t52 = ((x249<=(x250-x251))+x252);

	if (t52 != 32768) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x253 = 1047U;
	int32_t x254 = -25;
	volatile int32_t x256 = 192992420;

	t53 = ((x253<=(x254-x255))+x256);

	if (t53 != 192992421) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x257 = -1;
	volatile int64_t x259 = -813351433337LL;
	int16_t x260 = INT16_MIN;
	int32_t t54 = -292;

	t54 = ((x257<=(x258-x259))+x260);

	if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x261 = UINT8_MAX;
	uint16_t x262 = 1778U;
	int32_t x263 = -10914512;
	int8_t x264 = INT8_MIN;
	volatile int32_t t55 = 0;

	t55 = ((x261<=(x262-x263))+x264);

	if (t55 != -127) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x265 = -439538;
	int8_t x266 = INT8_MIN;
	volatile int16_t x267 = INT16_MIN;
	int32_t x268 = INT32_MIN;

	t56 = ((x265<=(x266-x267))+x268);

	if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x269 = 1961204667U;
	int16_t x270 = INT16_MIN;
	volatile int32_t x271 = 123315;
	volatile int32_t x272 = INT32_MIN;

	t57 = ((x269<=(x270-x271))+x272);

	if (t57 != -2147483647) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x273 = INT8_MAX;
	static uint64_t x274 = UINT64_MAX;
	uint64_t x275 = UINT64_MAX;
	int32_t t58 = 58;

	t58 = ((x273<=(x274-x275))+x276);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x277 = 1196669477U;
	int16_t x278 = INT16_MAX;
	uint16_t x280 = UINT16_MAX;
	int32_t t59 = 15018750;

	t59 = ((x277<=(x278-x279))+x280);

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x285 = INT64_MIN;
	static uint32_t x286 = 520352709U;
	int16_t x287 = INT16_MIN;
	volatile uint32_t x288 = 37852597U;
	uint32_t t60 = 179577869U;

	t60 = ((x285<=(x286-x287))+x288);

	if (t60 != 37852598U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x289 = -1971;
	volatile int32_t x290 = INT32_MIN;
	int8_t x291 = -1;
	int32_t x292 = INT32_MIN;
	int32_t t61 = INT32_MIN;

	t61 = ((x289<=(x290-x291))+x292);

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x301 = INT16_MIN;
	uint32_t x302 = 22U;
	int16_t x303 = INT16_MIN;
	int32_t t62 = 3;

	t62 = ((x301<=(x302-x303))+x304);

	if (t62 != -3) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x305 = -53;
	int32_t x306 = INT32_MIN;
	volatile int8_t x307 = 0;
	uint8_t x308 = 0U;
	volatile int32_t t63 = -84766;

	t63 = ((x305<=(x306-x307))+x308);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x309 = -1;
	int32_t x310 = INT32_MIN;
	volatile int64_t x311 = -14714881143983LL;
	int32_t x312 = INT32_MIN;

	t64 = ((x309<=(x310-x311))+x312);

	if (t64 != -2147483647) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x313 = 23647613U;
	int64_t x314 = INT64_MAX;
	uint32_t x315 = UINT32_MAX;
	uint64_t x316 = UINT64_MAX;
	uint64_t t65 = 16354959609066826LLU;

	t65 = ((x313<=(x314-x315))+x316);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x317 = INT32_MAX;
	uint8_t x318 = 30U;
	volatile uint32_t x319 = UINT32_MAX;
	int64_t x320 = INT64_MIN;
	volatile int64_t t66 = INT64_MIN;

	t66 = ((x317<=(x318-x319))+x320);

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x321 = 29U;
	volatile uint16_t x322 = 2U;
	int8_t x323 = INT8_MIN;
	int32_t x324 = INT32_MIN;
	int32_t t67 = -768;

	t67 = ((x321<=(x322-x323))+x324);

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = INT8_MIN;
	uint32_t x326 = UINT32_MAX;
	static uint32_t x327 = 3400370U;
	static uint16_t x328 = 5U;
	int32_t t68 = -3715806;

	t68 = ((x325<=(x326-x327))+x328);

	if (t68 != 5) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x329 = -3033231LL;
	static int64_t x330 = INT64_MIN;
	int32_t x331 = INT32_MIN;
	int16_t x332 = -1;
	int32_t t69 = -210611235;

	t69 = ((x329<=(x330-x331))+x332);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x333 = 28U;
	int16_t x334 = INT16_MIN;
	uint8_t x335 = UINT8_MAX;
	int32_t x336 = 0;
	int32_t t70 = 217777;

	t70 = ((x333<=(x334-x335))+x336);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x337 = UINT64_MAX;
	static uint8_t x338 = 30U;
	int16_t x339 = -1;
	int32_t t71 = -3792;

	t71 = ((x337<=(x338-x339))+x340);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x341 = 11;
	int8_t x342 = INT8_MIN;
	int8_t x343 = INT8_MAX;
	volatile int16_t x344 = INT16_MIN;
	volatile int32_t t72 = -568;

	t72 = ((x341<=(x342-x343))+x344);

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x345 = UINT32_MAX;
	volatile uint16_t x347 = 0U;
	static uint8_t x348 = 4U;

	t73 = ((x345<=(x346-x347))+x348);

	if (t73 != 5) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x349 = -1706268658541LL;
	int32_t x350 = INT32_MAX;
	int8_t x351 = INT8_MAX;
	uint32_t x352 = UINT32_MAX;
	uint32_t t74 = 72088U;

	t74 = ((x349<=(x350-x351))+x352);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x353 = 43871636480815882LLU;
	static int64_t x354 = -1LL;
	uint64_t x355 = 204LLU;
	int8_t x356 = INT8_MIN;
	volatile int32_t t75 = -50;

	t75 = ((x353<=(x354-x355))+x356);

	if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x357 = INT32_MIN;
	int16_t x358 = 1749;
	volatile int16_t x359 = INT16_MAX;
	uint8_t x360 = UINT8_MAX;

	t76 = ((x357<=(x358-x359))+x360);

	if (t76 != 256) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x361 = -1LL;
	int16_t x362 = 16022;
	volatile int16_t x363 = -22;
	static int8_t x364 = INT8_MAX;
	volatile int32_t t77 = -149145;

	t77 = ((x361<=(x362-x363))+x364);

	if (t77 != 128) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x365 = 25930;
	int16_t x366 = -1736;
	static uint32_t x368 = UINT32_MAX;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = ((x365<=(x366-x367))+x368);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x369 = UINT32_MAX;
	uint32_t x370 = 4037788U;
	static int8_t x371 = -1;
	int8_t x372 = 1;

	t79 = ((x369<=(x370-x371))+x372);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x373 = 34;
	volatile uint64_t x374 = 5855661LLU;
	int8_t x375 = -1;
	static int64_t x376 = 176649LL;
	int64_t t80 = 26LL;

	t80 = ((x373<=(x374-x375))+x376);

	if (t80 != 176650LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x381 = -1;
	volatile int8_t x383 = INT8_MIN;
	volatile uint32_t x384 = 254627899U;
	volatile uint32_t t81 = 4081215U;

	t81 = ((x381<=(x382-x383))+x384);

	if (t81 != 254627899U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x385 = -25;
	uint8_t x387 = UINT8_MAX;
	int32_t x388 = -15;
	volatile int32_t t82 = 3249302;

	t82 = ((x385<=(x386-x387))+x388);

	if (t82 != -14) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x389 = INT32_MAX;
	int32_t x390 = -1;
	int32_t x392 = -3111;
	int32_t t83 = 0;

	t83 = ((x389<=(x390-x391))+x392);

	if (t83 != -3111) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x393 = 0;
	static volatile uint32_t x394 = 530928638U;
	static volatile int32_t x395 = -1;
	int32_t x396 = -851412;
	static int32_t t84 = 56;

	t84 = ((x393<=(x394-x395))+x396);

	if (t84 != -851411) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x397 = UINT16_MAX;
	int16_t x398 = INT16_MIN;
	int32_t x399 = -1;
	int8_t x400 = -1;
	int32_t t85 = 22459229;

	t85 = ((x397<=(x398-x399))+x400);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x401 = INT32_MIN;
	volatile int8_t x402 = INT8_MIN;
	int64_t x403 = -14008LL;
	uint8_t x404 = 13U;

	t86 = ((x401<=(x402-x403))+x404);

	if (t86 != 14) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint16_t x405 = 3U;
	uint16_t x406 = UINT16_MAX;
	int16_t x407 = -214;
	int8_t x408 = INT8_MIN;
	volatile int32_t t87 = 0;

	t87 = ((x405<=(x406-x407))+x408);

	if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x409 = 119724179U;
	volatile uint16_t x410 = 11U;
	static uint8_t x411 = 91U;
	uint16_t x412 = 824U;
	volatile int32_t t88 = 693558329;

	t88 = ((x409<=(x410-x411))+x412);

	if (t88 != 825) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x413 = -1;
	int8_t x414 = INT8_MIN;
	uint8_t x415 = 4U;
	static int8_t x416 = INT8_MIN;
	int32_t t89 = -4;

	t89 = ((x413<=(x414-x415))+x416);

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x417 = 25U;
	uint64_t x418 = 103812LLU;
	int64_t x420 = -1LL;
	int64_t t90 = 6374096392LL;

	t90 = ((x417<=(x418-x419))+x420);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x421 = -1;
	static int8_t x423 = -1;
	int16_t x424 = INT16_MIN;

	t91 = ((x421<=(x422-x423))+x424);

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x426 = 8073009995684413943LLU;
	int64_t x427 = -1LL;
	uint32_t x428 = 31219U;
	uint32_t t92 = 12U;

	t92 = ((x425<=(x426-x427))+x428);

	if (t92 != 31219U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x429 = -24679655;
	int32_t x430 = INT32_MIN;
	int64_t x431 = INT64_MIN;
	uint64_t x432 = 1087504393169634225LLU;
	volatile uint64_t t93 = 6627LLU;

	t93 = ((x429<=(x430-x431))+x432);

	if (t93 != 1087504393169634226LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x437 = -2;
	static int16_t x438 = INT16_MAX;
	static volatile int16_t x439 = 71;
	int32_t x440 = INT32_MIN;
	volatile int32_t t94 = 7082;

	t94 = ((x437<=(x438-x439))+x440);

	if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x441 = INT16_MIN;
	uint32_t x442 = 1453627U;
	uint64_t x443 = UINT64_MAX;
	int64_t x444 = -1055259043LL;

	t95 = ((x441<=(x442-x443))+x444);

	if (t95 != -1055259043LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x445 = UINT32_MAX;
	uint32_t x446 = 1566U;
	static uint64_t x447 = 7499LLU;
	volatile int32_t t96 = 3234701;

	t96 = ((x445<=(x446-x447))+x448);

	if (t96 != 36) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x449 = -1;
	volatile int64_t x450 = INT64_MIN;
	int64_t x451 = INT64_MIN;
	int16_t x452 = -286;
	int32_t t97 = 47;

	t97 = ((x449<=(x450-x451))+x452);

	if (t97 != -285) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x454 = 1772214462586988742LLU;
	int32_t x455 = -1;
	static volatile int16_t x456 = INT16_MAX;
	static volatile int32_t t98 = -3186;

	t98 = ((x453<=(x454-x455))+x456);

	if (t98 != 32768) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x457 = -1LL;
	volatile uint16_t x459 = 566U;
	int8_t x460 = -1;
	static volatile int32_t t99 = -193;

	t99 = ((x457<=(x458-x459))+x460);

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

