#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MAX;
volatile int64_t t0 = -14LL;
uint8_t x13 = 21U;
int16_t x16 = -466;
volatile uint64_t t2 = 84849333410LLU;
static volatile uint8_t x18 = 63U;
int64_t t3 = 356818174LL;
int8_t x30 = INT8_MIN;
int8_t x39 = INT8_MIN;
uint16_t x46 = 81U;
volatile uint8_t x48 = UINT8_MAX;
uint8_t x51 = 67U;
int16_t x55 = -10;
int64_t x56 = INT64_MAX;
int64_t t11 = 512113252543LL;
static volatile uint64_t t12 = 7183058LLU;
uint32_t x62 = 13U;
int32_t x64 = -1;
int64_t t14 = -14450LL;
int8_t x70 = -1;
static int16_t x78 = -1;
int64_t x87 = 106075854LL;
volatile uint64_t x90 = UINT64_MAX;
int8_t x92 = 3;
uint8_t x93 = UINT8_MAX;
int32_t x100 = INT32_MIN;
uint32_t x110 = 627162U;
int64_t x123 = -224854LL;
int32_t x129 = INT32_MIN;
int32_t x133 = INT32_MIN;
int64_t x136 = -52486232404257LL;
uint8_t x139 = UINT8_MAX;
static int64_t x142 = INT64_MIN;
uint16_t x146 = UINT16_MAX;
int32_t x151 = -99089719;
uint32_t x156 = 205U;
int32_t x157 = INT32_MIN;
int8_t x162 = INT8_MIN;
static uint32_t x163 = 159693U;
int32_t x164 = INT32_MIN;
int32_t x165 = -1;
int16_t x166 = INT16_MIN;
volatile uint16_t x167 = 8277U;
int64_t t35 = 76760801LL;
volatile int64_t x176 = INT64_MIN;
volatile int64_t t36 = -53889LL;
int8_t x179 = 36;
int16_t x192 = INT16_MAX;
uint64_t x194 = 3171576809105948LLU;
static volatile int32_t x196 = INT32_MIN;
volatile int64_t x201 = INT64_MIN;
int64_t x210 = INT64_MIN;
volatile uint32_t x212 = 11364651U;
int16_t x214 = INT16_MIN;
int64_t t44 = 9LL;
static int16_t x221 = INT16_MAX;
uint8_t x226 = 3U;
static volatile int64_t x227 = INT64_MAX;
uint32_t x234 = 8147U;
volatile uint32_t x240 = 38U;
int64_t x246 = INT64_MAX;
uint16_t x252 = 36U;
volatile uint16_t x256 = 123U;
int32_t x259 = -1;
int64_t x263 = -408012LL;
int32_t x268 = -3;
int64_t x271 = 3225313942LL;
uint8_t x277 = UINT8_MAX;
static uint8_t x281 = UINT8_MAX;
int64_t t59 = 11646220291737LL;
int64_t x288 = INT64_MIN;
int16_t x293 = 9486;
int8_t x295 = INT8_MIN;
int32_t x306 = INT32_MIN;
uint16_t x309 = 23U;
int32_t x319 = INT32_MIN;
static uint32_t t68 = 49U;
int64_t t69 = -911434LL;
uint8_t x326 = 95U;
int16_t x329 = 10101;
int32_t x331 = -4153220;
uint32_t x332 = 248U;
uint64_t t72 = 3944511958425817204LLU;
volatile uint16_t x342 = 10U;
volatile int32_t x349 = -1;
int16_t x351 = -1;
int32_t t76 = -1911162;
volatile int64_t x359 = 39024LL;
volatile int64_t x362 = 7957091459903LL;
volatile int16_t x363 = -3410;
uint8_t x364 = 30U;
static volatile int64_t t79 = -39946852167850431LL;
uint8_t x368 = UINT8_MAX;
volatile int64_t t80 = 3708LL;
int32_t x369 = INT32_MIN;
static int16_t x371 = INT16_MIN;
uint32_t x376 = UINT32_MAX;
int64_t t82 = 204969579236LL;
uint16_t x381 = UINT16_MAX;
int64_t x388 = INT64_MIN;
volatile int64_t t85 = 960510LL;
int16_t x403 = INT16_MAX;
static int8_t x414 = 8;
static int8_t x415 = INT8_MIN;
int64_t x416 = 2LL;
int64_t x418 = INT64_MIN;
int32_t x419 = -14;
int64_t x425 = -1LL;
int8_t x430 = INT8_MIN;
int16_t x432 = -1;
volatile uint64_t t97 = 17311771729026445LLU;
int64_t x438 = -4523001908323LL;
static int16_t x442 = INT16_MIN;


void f0(void) {
	volatile int8_t x1 = -22;
	int8_t x2 = -1;
	uint32_t x4 = 17565U;

	t0 = ((x1&(x2-x3))%x4);

	if (t0 != -1268LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 29U;
	static int32_t x6 = -1;
	int16_t x7 = -996;
	uint8_t x8 = 6U;
	int32_t t1 = -363487;

	t1 = ((x5&(x6-x7))%x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x14 = -45;
	uint64_t x15 = 105LLU;

	t2 = ((x13&(x14-x15))%x16);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	uint16_t x19 = 298U;
	volatile int64_t x20 = -4041299301854180496LL;

	t3 = ((x17&(x18-x19))%x20);

	if (t3 != -235LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x25 = 209766;
	volatile int16_t x26 = INT16_MAX;
	int16_t x27 = INT16_MIN;
	int64_t x28 = INT64_MIN;
	volatile int64_t t4 = -2179766666125038LL;

	t4 = ((x25&(x26-x27))%x28);

	if (t4 != 13158LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x29 = 5616252329407504LLU;
	volatile int16_t x31 = INT16_MIN;
	uint64_t x32 = UINT64_MAX;
	uint64_t t5 = 185902136723686152LLU;

	t5 = ((x29&(x30-x31))%x32);

	if (t5 != 13312LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = -988281LL;
	uint16_t x34 = UINT16_MAX;
	int32_t x35 = -523;
	static uint64_t x36 = UINT64_MAX;
	uint64_t t6 = 0LLU;

	t6 = ((x33&(x34-x35))%x36);

	if (t6 != 514LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = 8107;
	int8_t x38 = INT8_MIN;
	uint16_t x40 = 2647U;
	volatile int32_t t7 = -284458886;

	t7 = ((x37&(x38-x39))%x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MIN;
	static int8_t x42 = -1;
	volatile int64_t x43 = INT64_MIN;
	volatile uint16_t x44 = 158U;
	int64_t t8 = 2LL;

	t8 = ((x41&(x42-x43))%x44);

	if (t8 != 82LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = -1LL;
	uint64_t x47 = 11180943512257233LLU;
	static volatile uint64_t t9 = 42935419752LLU;

	t9 = ((x45&(x46-x47))%x48);

	if (t9 != 199LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x49 = -17;
	int64_t x50 = 6LL;
	volatile int32_t x52 = -2943;
	int64_t t10 = 31299811054LL;

	t10 = ((x49&(x50-x51))%x52);

	if (t10 != -61LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x53 = 11455U;
	int64_t x54 = 2666915820913272265LL;

	t11 = ((x53&(x54-x55))%x56);

	if (t11 != 9363LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = UINT8_MAX;
	uint64_t x58 = UINT64_MAX;
	int64_t x59 = 3770LL;
	int16_t x60 = INT16_MIN;

	t12 = ((x57&(x58-x59))%x60);

	if (t12 != 69LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MIN;
	int16_t x63 = INT16_MAX;
	uint32_t t13 = 380U;

	t13 = ((x61&(x62-x63))%x64);

	if (t13 != 4294934528U) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x65 = -2027LL;
	uint32_t x66 = 16267718U;
	volatile int8_t x67 = -13;
	volatile int16_t x68 = -267;

	t14 = ((x65&(x66-x67))%x68);

	if (t14 != 39LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = 6;
	int8_t x71 = -1;
	volatile int16_t x72 = 2990;
	volatile int32_t t15 = -89;

	t15 = ((x69&(x70-x71))%x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MAX;
	uint8_t x79 = 1U;
	int16_t x80 = -1;
	int32_t t16 = -169;

	t16 = ((x77&(x78-x79))%x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x85 = 897LLU;
	volatile int64_t x86 = -1LL;
	int8_t x88 = 15;
	uint64_t t17 = 38LLU;

	t17 = ((x85&(x86-x87))%x88);

	if (t17 != 2LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = -1LL;
	uint8_t x91 = 4U;
	uint64_t t18 = 49640722433417LLU;

	t18 = ((x89&(x90-x91))%x92);

	if (t18 != 2LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x94 = INT64_MIN;
	int16_t x95 = -49;
	int64_t x96 = INT64_MIN;
	volatile int64_t t19 = 45LL;

	t19 = ((x93&(x94-x95))%x96);

	if (t19 != 49LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x97 = 4;
	int64_t x98 = INT64_MIN;
	int16_t x99 = INT16_MIN;
	volatile int64_t t20 = 0LL;

	t20 = ((x97&(x98-x99))%x100);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = INT8_MIN;
	int16_t x102 = INT16_MIN;
	uint32_t x103 = UINT32_MAX;
	static int8_t x104 = 3;
	volatile uint32_t t21 = 6503U;

	t21 = ((x101&(x102-x103))%x104);

	if (t21 != 2U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = -1;
	static int8_t x111 = 0;
	uint64_t x112 = 1514LLU;
	uint64_t t22 = 50812040LLU;

	t22 = ((x109&(x110-x111))%x112);

	if (t22 != 366LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x117 = 0U;
	static uint32_t x118 = 3986594U;
	static volatile int16_t x119 = 0;
	int8_t x120 = INT8_MIN;
	volatile uint32_t t23 = 1971525U;

	t23 = ((x117&(x118-x119))%x120);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x121 = -1;
	int16_t x122 = -1;
	static uint64_t x124 = UINT64_MAX;
	uint64_t t24 = 2891340123661028LLU;

	t24 = ((x121&(x122-x123))%x124);

	if (t24 != 224853LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x130 = INT8_MAX;
	static volatile uint32_t x131 = 161088788U;
	int32_t x132 = INT32_MIN;
	volatile uint32_t t25 = 1573912982U;

	t25 = ((x129&(x130-x131))%x132);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x134 = 288825475715981LL;
	int32_t x135 = 185;
	static int64_t t26 = -865425953214LL;

	t26 = ((x133&(x134-x135))%x136);

	if (t26 != 26392503732827LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x137 = 1137213770LL;
	static int16_t x138 = INT16_MIN;
	int32_t x140 = 395;
	int64_t t27 = -224035LL;

	t27 = ((x137&(x138-x139))%x140);

	if (t27 != 23LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x141 = UINT8_MAX;
	int64_t x143 = INT64_MIN;
	int64_t x144 = -67LL;
	int64_t t28 = -4878LL;

	t28 = ((x141&(x142-x143))%x144);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x145 = 13U;
	uint32_t x147 = UINT32_MAX;
	uint32_t x148 = 679850U;
	volatile uint32_t t29 = 15U;

	t29 = ((x145&(x146-x147))%x148);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x149 = 3U;
	uint8_t x150 = 3U;
	int64_t x152 = INT64_MAX;
	volatile int64_t t30 = 10LL;

	t30 = ((x149&(x150-x151))%x152);

	if (t30 != 2LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x153 = 0;
	static uint32_t x154 = 509U;
	static int64_t x155 = INT64_MAX;
	static int64_t t31 = -65929768601807LL;

	t31 = ((x153&(x154-x155))%x156);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x158 = 62010844;
	int32_t x159 = 106989479;
	int8_t x160 = -1;
	static volatile int32_t t32 = 8;

	t32 = ((x157&(x158-x159))%x160);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x161 = INT64_MIN;
	volatile int64_t t33 = -33562908410374800LL;

	t33 = ((x161&(x162-x163))%x164);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x168 = -1;
	static volatile int32_t t34 = -722768;

	t34 = ((x165&(x166-x167))%x168);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x169 = -50;
	int8_t x170 = INT8_MIN;
	int64_t x171 = INT64_MIN;
	int8_t x172 = INT8_MIN;

	t35 = ((x169&(x170-x171))%x172);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x173 = 11082U;
	static int16_t x174 = -2135;
	uint16_t x175 = 42U;

	t36 = ((x173&(x174-x175))%x176);

	if (t36 != 9034LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x177 = INT64_MIN;
	int8_t x178 = -7;
	int64_t x180 = INT64_MIN;
	int64_t t37 = -1292963755618811LL;

	t37 = ((x177&(x178-x179))%x180);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x185 = INT8_MAX;
	static uint32_t x186 = UINT32_MAX;
	volatile uint8_t x187 = 15U;
	volatile int64_t x188 = INT64_MIN;
	static volatile int64_t t38 = 4637583LL;

	t38 = ((x185&(x186-x187))%x188);

	if (t38 != 112LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x189 = -1;
	int8_t x190 = INT8_MIN;
	int16_t x191 = INT16_MIN;
	int32_t t39 = -30381;

	t39 = ((x189&(x190-x191))%x192);

	if (t39 != 32640) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x193 = INT32_MIN;
	static volatile int64_t x195 = INT64_MIN;
	volatile uint64_t t40 = 12123976734410915LLU;

	t40 = ((x193&(x194-x195))%x196);

	if (t40 != 9226543612504834048LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x202 = INT16_MIN;
	uint32_t x203 = 698764U;
	int8_t x204 = INT8_MIN;
	volatile int64_t t41 = -2861672882988LL;

	t41 = ((x201&(x202-x203))%x204);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x205 = UINT32_MAX;
	int32_t x206 = -76;
	volatile uint16_t x207 = 1179U;
	volatile uint16_t x208 = UINT16_MAX;
	volatile uint32_t t42 = 0U;

	t42 = ((x205&(x206-x207))%x208);

	if (t42 != 64281U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x209 = INT32_MIN;
	static int16_t x211 = -1;
	int64_t t43 = -30550LL;

	t43 = ((x209&(x210-x211))%x212);

	if (t43 != -5888402LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x213 = INT16_MIN;
	static volatile int64_t x215 = INT64_MIN;
	static uint8_t x216 = 69U;

	t44 = ((x213&(x214-x215))%x216);

	if (t44 != 33LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x217 = UINT8_MAX;
	static int16_t x218 = INT16_MAX;
	int16_t x219 = INT16_MAX;
	uint16_t x220 = UINT16_MAX;
	int32_t t45 = 52005;

	t45 = ((x217&(x218-x219))%x220);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x222 = -1;
	int16_t x223 = INT16_MIN;
	static volatile int32_t x224 = -5039;
	static volatile int32_t t46 = -361026913;

	t46 = ((x221&(x222-x223))%x224);

	if (t46 != 2533) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x225 = INT64_MIN;
	static volatile uint8_t x228 = 122U;
	volatile int64_t t47 = 133LL;

	t47 = ((x225&(x226-x227))%x228);

	if (t47 != -8LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x233 = INT32_MAX;
	uint32_t x235 = 1589804U;
	uint32_t x236 = 126865U;
	uint32_t t48 = 550120821U;

	t48 = ((x233&(x234-x235))%x236);

	if (t48 != 107381U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x237 = INT8_MIN;
	volatile int64_t x238 = -406276547LL;
	int64_t x239 = INT64_MIN;
	static int64_t t49 = -1307322592183843420LL;

	t49 = ((x237&(x238-x239))%x240);

	if (t49 != 30LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x245 = UINT64_MAX;
	uint8_t x247 = 47U;
	int8_t x248 = INT8_MIN;
	uint64_t t50 = 302257LLU;

	t50 = ((x245&(x246-x247))%x248);

	if (t50 != 9223372036854775760LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x249 = 22294604746448LL;
	int8_t x250 = -1;
	volatile uint8_t x251 = UINT8_MAX;
	volatile int64_t t51 = 187582793LL;

	t51 = ((x249&(x250-x251))%x252);

	if (t51 != 16LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x253 = INT16_MIN;
	static int16_t x254 = 0;
	uint32_t x255 = 1771U;
	uint32_t t52 = 1U;

	t52 = ((x253&(x254-x255))%x256);

	if (t52 != 110U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x257 = UINT16_MAX;
	int64_t x258 = 875400115771LL;
	uint32_t x260 = 25664U;
	int64_t t53 = 14LL;

	t53 = ((x257&(x258-x259))%x260);

	if (t53 != 20988LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x261 = 22LL;
	volatile int64_t x262 = INT64_MIN;
	static volatile int16_t x264 = INT16_MIN;
	volatile int64_t t54 = -56115834015976724LL;

	t54 = ((x261&(x262-x263))%x264);

	if (t54 != 4LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x265 = UINT32_MAX;
	int64_t x266 = -18498LL;
	static uint64_t x267 = UINT64_MAX;
	static uint64_t t55 = 67090783339661LLU;

	t55 = ((x265&(x266-x267))%x268);

	if (t55 != 4294948799LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x269 = 7U;
	uint32_t x270 = 3475U;
	uint16_t x272 = 50U;
	static int64_t t56 = 615122LL;

	t56 = ((x269&(x270-x271))%x272);

	if (t56 != 5LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x273 = 23U;
	static uint32_t x274 = 1716203955U;
	volatile int8_t x275 = INT8_MAX;
	int64_t x276 = INT64_MAX;
	volatile int64_t t57 = 232281513155396500LL;

	t57 = ((x273&(x274-x275))%x276);

	if (t57 != 20LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x278 = INT32_MIN;
	volatile uint64_t x279 = 52910144714LLU;
	uint64_t x280 = 378759552LLU;
	uint64_t t58 = 121921782LLU;

	t58 = ((x277&(x278-x279))%x280);

	if (t58 != 54LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x282 = UINT32_MAX;
	int8_t x283 = 24;
	static int64_t x284 = INT64_MIN;

	t59 = ((x281&(x282-x283))%x284);

	if (t59 != 231LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x285 = -1;
	static int64_t x286 = -1LL;
	volatile int32_t x287 = -191;
	int64_t t60 = -64685971LL;

	t60 = ((x285&(x286-x287))%x288);

	if (t60 != 190LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x289 = 4;
	int64_t x290 = INT64_MIN;
	int8_t x291 = INT8_MIN;
	uint8_t x292 = 4U;
	volatile int64_t t61 = 213787016119580179LL;

	t61 = ((x289&(x290-x291))%x292);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x294 = -56;
	uint64_t x296 = 283920653255397680LLU;
	volatile uint64_t t62 = 6511902691493730932LLU;

	t62 = ((x293&(x294-x295))%x296);

	if (t62 != 8LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x297 = UINT64_MAX;
	volatile int32_t x298 = INT32_MAX;
	int8_t x299 = 0;
	volatile uint64_t x300 = UINT64_MAX;
	volatile uint64_t t63 = 8396777LLU;

	t63 = ((x297&(x298-x299))%x300);

	if (t63 != 2147483647LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x301 = 28U;
	volatile int32_t x302 = 1;
	static int64_t x303 = -65248348538146077LL;
	volatile int16_t x304 = 1;
	volatile int64_t t64 = -2155420845983051706LL;

	t64 = ((x301&(x302-x303))%x304);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x305 = 5U;
	int64_t x307 = INT64_MIN;
	int16_t x308 = INT16_MAX;
	volatile int64_t t65 = -5752LL;

	t65 = ((x305&(x306-x307))%x308);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x310 = -1LL;
	int8_t x311 = INT8_MIN;
	int32_t x312 = INT32_MIN;
	int64_t t66 = -611705767958383000LL;

	t66 = ((x309&(x310-x311))%x312);

	if (t66 != 23LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x313 = INT8_MIN;
	uint16_t x314 = 89U;
	int16_t x315 = 1;
	int32_t x316 = 492;
	int32_t t67 = -2741541;

	t67 = ((x313&(x314-x315))%x316);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x317 = 368466U;
	int16_t x318 = -1;
	uint16_t x320 = 1164U;

	t68 = ((x317&(x318-x319))%x320);

	if (t68 != 642U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x321 = UINT8_MAX;
	int64_t x322 = -155538887543603194LL;
	static int8_t x323 = INT8_MIN;
	int16_t x324 = 16;

	t69 = ((x321&(x322-x323))%x324);

	if (t69 != 6LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x325 = 239265LL;
	static uint32_t x327 = 95700U;
	int64_t x328 = 44LL;
	int64_t t70 = -77273585LL;

	t70 = ((x325&(x326-x327))%x328);

	if (t70 != 9LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x330 = -176LL;
	volatile int64_t t71 = 34832635965LL;

	t71 = ((x329&(x330-x331))%x332);

	if (t71 != 132LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x333 = 10U;
	volatile uint32_t x334 = 1992U;
	static uint64_t x335 = UINT64_MAX;
	int16_t x336 = INT16_MAX;

	t72 = ((x333&(x334-x335))%x336);

	if (t72 != 8LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x337 = 3U;
	static uint16_t x338 = 152U;
	uint8_t x339 = 6U;
	static int32_t x340 = INT32_MAX;
	int32_t t73 = 48466;

	t73 = ((x337&(x338-x339))%x340);

	if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x341 = INT32_MIN;
	int64_t x343 = INT64_MAX;
	int32_t x344 = INT32_MAX;
	volatile int64_t t74 = 10682939452LL;

	t74 = ((x341&(x342-x343))%x344);

	if (t74 != -2LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x345 = -1;
	int64_t x346 = -1LL;
	volatile int32_t x347 = INT32_MIN;
	int16_t x348 = INT16_MIN;
	int64_t t75 = 1448130401LL;

	t75 = ((x345&(x346-x347))%x348);

	if (t75 != 32767LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x350 = UINT16_MAX;
	int16_t x352 = -1;

	t76 = ((x349&(x350-x351))%x352);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x353 = INT32_MIN;
	uint64_t x354 = UINT64_MAX;
	uint32_t x355 = 0U;
	int32_t x356 = -1;
	uint64_t t77 = 74LLU;

	t77 = ((x353&(x354-x355))%x356);

	if (t77 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x357 = INT8_MIN;
	volatile uint64_t x358 = 1116700732401947526LLU;
	volatile int16_t x360 = INT16_MIN;
	volatile uint64_t t78 = 1627225LLU;

	t78 = ((x357&(x358-x359))%x360);

	if (t78 != 1116700732401908480LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x361 = INT8_MIN;

	t79 = ((x361&(x362-x363))%x364);

	if (t79 != 26LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x365 = 3U;
	volatile int8_t x366 = 0;
	volatile int64_t x367 = 20LL;

	t80 = ((x365&(x366-x367))%x368);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x370 = UINT32_MAX;
	static int8_t x372 = INT8_MAX;
	volatile uint32_t t81 = 983615539U;

	t81 = ((x369&(x370-x371))%x372);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x373 = -1LL;
	int16_t x374 = INT16_MIN;
	int16_t x375 = INT16_MAX;

	t82 = ((x373&(x374-x375))%x376);

	if (t82 != -65535LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x377 = -64104758718626077LL;
	volatile int16_t x378 = INT16_MIN;
	volatile uint32_t x379 = 473009331U;
	static int64_t x380 = -3533145799378375317LL;
	volatile int64_t t83 = 61411803721595903LL;

	t83 = ((x377&(x378-x379))%x380);

	if (t83 != 3221750337LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x382 = 12695;
	int64_t x383 = INT64_MAX;
	int16_t x384 = -1;
	int64_t t84 = -26962242367LL;

	t84 = ((x381&(x382-x383))%x384);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x385 = -1;
	int16_t x386 = 5;
	volatile int32_t x387 = -1;

	t85 = ((x385&(x386-x387))%x388);

	if (t85 != 6LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x389 = INT32_MIN;
	static int32_t x390 = INT32_MIN;
	uint64_t x391 = 1700133046LLU;
	volatile int32_t x392 = INT32_MAX;
	volatile uint64_t t86 = 169685780LLU;

	t86 = ((x389&(x390-x391))%x392);

	if (t86 != 2LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x393 = INT64_MIN;
	static int16_t x394 = INT16_MIN;
	int64_t x395 = INT64_MIN;
	volatile int64_t x396 = -2291627LL;
	volatile int64_t t87 = -380950LL;

	t87 = ((x393&(x394-x395))%x396);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x397 = INT64_MAX;
	int32_t x398 = 50;
	uint8_t x399 = UINT8_MAX;
	static int8_t x400 = 38;
	volatile int64_t t88 = -24267LL;

	t88 = ((x397&(x398-x399))%x400);

	if (t88 != 3LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x401 = 232U;
	int16_t x402 = INT16_MIN;
	int32_t x404 = INT32_MIN;
	static int32_t t89 = -2;

	t89 = ((x401&(x402-x403))%x404);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x405 = 0U;
	static int8_t x406 = INT8_MIN;
	static int16_t x407 = INT16_MIN;
	uint64_t x408 = 816645LLU;
	volatile uint64_t t90 = 255002LLU;

	t90 = ((x405&(x406-x407))%x408);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x409 = 30547;
	int8_t x410 = -3;
	volatile uint64_t x411 = UINT64_MAX;
	static volatile int64_t x412 = -2LL;
	volatile uint64_t t91 = 4589837LLU;

	t91 = ((x409&(x410-x411))%x412);

	if (t91 != 30546LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x413 = UINT8_MAX;
	int64_t t92 = 3584454752596LL;

	t92 = ((x413&(x414-x415))%x416);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x417 = 3U;
	int64_t x420 = -1LL;
	int64_t t93 = 77430745LL;

	t93 = ((x417&(x418-x419))%x420);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x421 = -1;
	static uint64_t x422 = UINT64_MAX;
	uint32_t x423 = 3415U;
	uint8_t x424 = 1U;
	volatile uint64_t t94 = 8059862820468302LLU;

	t94 = ((x421&(x422-x423))%x424);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x426 = 31521LL;
	static volatile int16_t x427 = -1;
	volatile int32_t x428 = INT32_MIN;
	int64_t t95 = -772357304701419713LL;

	t95 = ((x425&(x426-x427))%x428);

	if (t95 != 31522LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x429 = -21;
	volatile int32_t x431 = INT32_MIN;
	volatile int32_t t96 = 0;

	t96 = ((x429&(x430-x431))%x432);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x433 = INT16_MAX;
	int8_t x434 = INT8_MIN;
	int8_t x435 = INT8_MIN;
	uint64_t x436 = 124240891405057844LLU;

	t97 = ((x433&(x434-x435))%x436);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x437 = -454528495;
	int64_t x439 = 29LL;
	int32_t x440 = 311447;
	volatile int64_t t98 = -61820320379LL;

	t98 = ((x437&(x438-x439))%x440);

	if (t98 != -98144LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x441 = -1;
	uint64_t x443 = 56722200445LLU;
	int8_t x444 = 6;
	uint64_t t99 = 60458LLU;

	t99 = ((x441&(x442-x443))%x444);

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

