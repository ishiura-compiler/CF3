#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
int32_t x9 = -100764;
int8_t x15 = INT8_MIN;
volatile int32_t x17 = INT32_MIN;
int32_t x19 = INT32_MAX;
static int16_t x21 = INT16_MIN;
volatile int64_t x28 = -459068666LL;
volatile int32_t t7 = -60226442;
int16_t x36 = -1;
uint64_t x41 = UINT64_MAX;
static volatile int32_t t10 = -474333732;
static volatile int8_t x47 = -11;
int32_t x48 = -489165251;
static int16_t x65 = 7754;
static int32_t t16 = 3554449;
int8_t x78 = -1;
volatile int32_t t18 = -1;
uint64_t x83 = 17629704582931817LLU;
static uint16_t x95 = 599U;
volatile int32_t t22 = 1465;
static volatile int8_t x98 = INT8_MIN;
int32_t t23 = 36002556;
int16_t x104 = INT16_MIN;
volatile int32_t t25 = 2651;
volatile uint32_t x132 = 987502784U;
volatile int32_t t28 = 1;
int32_t x138 = -1;
uint32_t x154 = UINT32_MAX;
int32_t t32 = -90;
int32_t x168 = 4040;
static volatile int32_t t36 = 3165581;
int64_t x176 = INT64_MIN;
volatile uint32_t x178 = UINT32_MAX;
static uint16_t x179 = UINT16_MAX;
uint64_t x206 = 33648721432376LLU;
uint8_t x208 = 25U;
volatile int32_t t44 = -309667;
volatile int32_t t45 = 79494345;
static int32_t x225 = 42219;
uint16_t x226 = 2992U;
uint16_t x238 = 494U;
int8_t x242 = -39;
static int8_t x264 = INT8_MAX;
static uint64_t x266 = 637794448421745LLU;
int16_t x267 = INT16_MIN;
uint64_t x270 = UINT64_MAX;
static volatile int32_t x273 = INT32_MAX;
uint32_t x285 = UINT32_MAX;
static int16_t x286 = -6113;
volatile int8_t x287 = INT8_MIN;
int16_t x288 = -1;
volatile int32_t t64 = -611782069;
volatile int32_t t65 = -13618;
volatile int8_t x314 = -1;
int8_t x316 = INT8_MIN;
int16_t x318 = 50;
uint8_t x332 = 27U;
static volatile int32_t t72 = -28562;
uint16_t x337 = UINT16_MAX;
volatile int64_t x347 = -1LL;
static volatile int32_t t75 = 1;
int32_t x349 = 23;
int32_t t76 = -10;
static volatile int32_t t78 = -6;
int16_t x362 = 8755;
int32_t x363 = 2098606;
uint32_t x365 = 2015923804U;
static int64_t x367 = -1960303889364728525LL;
int64_t x370 = -96939LL;
uint8_t x384 = 0U;
uint16_t x389 = UINT16_MAX;
int64_t x391 = INT64_MAX;
int64_t x394 = -1LL;
uint8_t x400 = UINT8_MAX;
static uint32_t x404 = 2168725U;
static volatile uint64_t x406 = 0LLU;
int16_t x413 = -1;
int32_t t94 = -11305401;
int64_t x433 = -1LL;
volatile int16_t x434 = INT16_MAX;
volatile int32_t t95 = 25477662;
static int16_t x452 = INT16_MIN;
int32_t t99 = 45463759;


void f0(void) {
	uint16_t x2 = 1027U;
	volatile int32_t x3 = INT32_MAX;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -1533393;

	t0 = (x1==((x2/x3)-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = UINT64_MAX;
	int32_t x6 = INT32_MAX;
	uint32_t x7 = UINT32_MAX;
	int8_t x8 = INT8_MIN;
	int32_t t1 = -4689540;

	t1 = (x5==((x6/x7)-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -1LL;
	uint64_t x11 = 115756LLU;
	uint64_t x12 = 3943744008610465731LLU;
	volatile int32_t t2 = -203304854;

	t2 = (x9==((x10/x11)-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MAX;
	int32_t x14 = INT32_MAX;
	int16_t x16 = INT16_MIN;
	int32_t t3 = -3223665;

	t3 = (x13==((x14/x15)-x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x18 = INT8_MAX;
	int8_t x20 = INT8_MIN;
	int32_t t4 = 60374;

	t4 = (x17==((x18/x19)-x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x22 = 127559023332LLU;
	static int64_t x23 = INT64_MIN;
	int16_t x24 = 292;
	volatile int32_t t5 = -1846;

	t5 = (x21==((x22/x23)-x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x25 = 0LLU;
	uint32_t x26 = 265U;
	int64_t x27 = 1999LL;
	volatile int32_t t6 = -39;

	t6 = (x25==((x26/x27)-x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MAX;
	int8_t x30 = INT8_MIN;
	int64_t x31 = INT64_MAX;
	volatile int16_t x32 = INT16_MAX;

	t7 = (x29==((x30/x31)-x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 2906U;
	uint8_t x34 = 26U;
	volatile int32_t x35 = INT32_MAX;
	volatile int32_t t8 = 1;

	t8 = (x33==((x34/x35)-x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x37 = -1;
	int64_t x38 = INT64_MAX;
	volatile int32_t x39 = -1;
	volatile uint64_t x40 = UINT64_MAX;
	static volatile int32_t t9 = -1426145;

	t9 = (x37==((x38/x39)-x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x42 = UINT8_MAX;
	static volatile uint64_t x43 = UINT64_MAX;
	volatile uint16_t x44 = UINT16_MAX;

	t10 = (x41==((x42/x43)-x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 968279533LL;
	static int16_t x46 = -1;
	volatile int32_t t11 = 95758298;

	t11 = (x45==((x46/x47)-x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	int64_t x54 = INT64_MIN;
	uint64_t x55 = 16491178581LLU;
	int32_t x56 = INT32_MIN;
	int32_t t12 = 0;

	t12 = (x53==((x54/x55)-x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = -2;
	int32_t x58 = 94525;
	static uint8_t x59 = 1U;
	int64_t x60 = -252884LL;
	volatile int32_t t13 = -1328727;

	t13 = (x57==((x58/x59)-x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = UINT16_MAX;
	uint8_t x62 = UINT8_MAX;
	volatile uint64_t x63 = UINT64_MAX;
	uint64_t x64 = UINT64_MAX;
	volatile int32_t t14 = 0;

	t14 = (x61==((x62/x63)-x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x66 = -941316702LL;
	static int16_t x67 = -12;
	static int16_t x68 = -10;
	volatile int32_t t15 = 1;

	t15 = (x65==((x66/x67)-x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = -1;
	static uint32_t x70 = 108751800U;
	volatile int64_t x71 = -1LL;
	int64_t x72 = 257048102932647055LL;

	t16 = (x69==((x70/x71)-x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MIN;
	static int64_t x74 = INT64_MIN;
	int32_t x75 = -254896864;
	uint8_t x76 = UINT8_MAX;
	int32_t t17 = -7;

	t17 = (x73==((x74/x75)-x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -1LL;
	volatile int8_t x79 = -1;
	int32_t x80 = -1;

	t18 = (x77==((x78/x79)-x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x81 = -1LL;
	static uint64_t x82 = 4LLU;
	int16_t x84 = INT16_MAX;
	static volatile int32_t t19 = -6;

	t19 = (x81==((x82/x83)-x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x85 = 3345348608LLU;
	volatile int64_t x86 = INT64_MAX;
	volatile uint32_t x87 = UINT32_MAX;
	static uint16_t x88 = 1300U;
	int32_t t20 = 9533;

	t20 = (x85==((x86/x87)-x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x89 = 1U;
	int16_t x90 = INT16_MAX;
	int32_t x91 = -1;
	uint8_t x92 = 12U;
	volatile int32_t t21 = 0;

	t21 = (x89==((x90/x91)-x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MIN;
	uint64_t x94 = 336777326750LLU;
	int32_t x96 = INT32_MIN;

	t22 = (x93==((x94/x95)-x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = 109U;
	int8_t x99 = -1;
	uint64_t x100 = 251252194444202551LLU;

	t23 = (x97==((x98/x99)-x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = -1;
	static volatile int32_t x102 = -1;
	uint8_t x103 = UINT8_MAX;
	static int32_t t24 = -3386114;

	t24 = (x101==((x102/x103)-x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = 7;
	int64_t x118 = INT64_MIN;
	volatile uint32_t x119 = 895118820U;
	static int16_t x120 = -1;

	t25 = (x117==((x118/x119)-x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x121 = -1;
	uint64_t x122 = 1008473253LLU;
	static uint8_t x123 = 4U;
	static int16_t x124 = -1;
	volatile int32_t t26 = -441655;

	t26 = (x121==((x122/x123)-x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = INT64_MIN;
	int32_t x126 = -23446270;
	static uint32_t x127 = 17U;
	uint16_t x128 = UINT16_MAX;
	int32_t t27 = -13573;

	t27 = (x125==((x126/x127)-x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x129 = INT32_MAX;
	volatile int16_t x130 = INT16_MIN;
	int16_t x131 = INT16_MIN;

	t28 = (x129==((x130/x131)-x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = INT8_MIN;
	int64_t x139 = -1LL;
	volatile uint8_t x140 = UINT8_MAX;
	int32_t t29 = -6;

	t29 = (x137==((x138/x139)-x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x141 = INT64_MAX;
	int64_t x142 = -92188156636188417LL;
	volatile int16_t x143 = -1;
	uint8_t x144 = 1U;
	static int32_t t30 = 0;

	t30 = (x141==((x142/x143)-x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x145 = 30U;
	volatile int32_t x146 = INT32_MAX;
	uint8_t x147 = 12U;
	int8_t x148 = INT8_MIN;
	static volatile int32_t t31 = -1;

	t31 = (x145==((x146/x147)-x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x153 = -1;
	int64_t x155 = INT64_MIN;
	int16_t x156 = INT16_MIN;

	t32 = (x153==((x154/x155)-x156));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x157 = -1;
	static uint32_t x158 = UINT32_MAX;
	int64_t x159 = INT64_MIN;
	uint64_t x160 = 2625420404620612486LLU;
	volatile int32_t t33 = 1;

	t33 = (x157==((x158/x159)-x160));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x161 = INT64_MIN;
	int32_t x162 = INT32_MIN;
	uint8_t x163 = UINT8_MAX;
	uint32_t x164 = 184655U;
	int32_t t34 = 1;

	t34 = (x161==((x162/x163)-x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x165 = 0U;
	int8_t x166 = 0;
	static uint64_t x167 = 3067782416103618LLU;
	int32_t t35 = 246520022;

	t35 = (x165==((x166/x167)-x168));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x169 = UINT64_MAX;
	static int64_t x170 = INT64_MIN;
	static uint64_t x171 = 4917LLU;
	int64_t x172 = -1LL;

	t36 = (x169==((x170/x171)-x172));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x173 = 1;
	static int64_t x174 = INT64_MIN;
	uint32_t x175 = 48369417U;
	int32_t t37 = 878;

	t37 = (x173==((x174/x175)-x176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x177 = 440633LLU;
	int8_t x180 = -7;
	int32_t t38 = 1;

	t38 = (x177==((x178/x179)-x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x181 = 947;
	volatile int8_t x182 = INT8_MIN;
	static int16_t x183 = -878;
	int32_t x184 = INT32_MAX;
	static volatile int32_t t39 = -898;

	t39 = (x181==((x182/x183)-x184));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x185 = INT8_MIN;
	volatile int16_t x186 = -1;
	volatile int8_t x187 = -45;
	static int32_t x188 = INT32_MAX;
	volatile int32_t t40 = 54;

	t40 = (x185==((x186/x187)-x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x189 = INT32_MAX;
	int32_t x190 = 78271;
	volatile int64_t x191 = INT64_MIN;
	int32_t x192 = INT32_MAX;
	volatile int32_t t41 = 0;

	t41 = (x189==((x190/x191)-x192));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x193 = UINT8_MAX;
	int64_t x194 = INT64_MIN;
	int16_t x195 = INT16_MIN;
	uint64_t x196 = 126559217961131164LLU;
	static volatile int32_t t42 = -77418;

	t42 = (x193==((x194/x195)-x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x201 = UINT16_MAX;
	uint32_t x202 = 157831U;
	uint64_t x203 = 3374722064174LLU;
	int32_t x204 = 126;
	volatile int32_t t43 = 59055;

	t43 = (x201==((x202/x203)-x204));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x205 = INT64_MAX;
	static volatile uint8_t x207 = 1U;

	t44 = (x205==((x206/x207)-x208));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x209 = 0;
	int8_t x210 = INT8_MIN;
	static volatile int16_t x211 = INT16_MAX;
	int8_t x212 = INT8_MAX;

	t45 = (x209==((x210/x211)-x212));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x213 = INT32_MAX;
	uint32_t x214 = 16517U;
	uint32_t x215 = 6U;
	int16_t x216 = INT16_MIN;
	volatile int32_t t46 = 103;

	t46 = (x213==((x214/x215)-x216));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x221 = INT64_MIN;
	static int16_t x222 = INT16_MAX;
	int16_t x223 = -1;
	int8_t x224 = INT8_MIN;
	volatile int32_t t47 = -435699;

	t47 = (x221==((x222/x223)-x224));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x227 = 19991U;
	int64_t x228 = 3063882841490LL;
	int32_t t48 = 1545;

	t48 = (x225==((x226/x227)-x228));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x237 = 44258500353295LLU;
	int32_t x239 = -7869;
	int8_t x240 = INT8_MIN;
	volatile int32_t t49 = -35038792;

	t49 = (x237==((x238/x239)-x240));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x241 = UINT32_MAX;
	int32_t x243 = INT32_MAX;
	uint8_t x244 = UINT8_MAX;
	int32_t t50 = -2;

	t50 = (x241==((x242/x243)-x244));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x245 = 11832;
	int32_t x246 = -667894311;
	volatile uint8_t x247 = 122U;
	static uint16_t x248 = 10221U;
	int32_t t51 = 72968;

	t51 = (x245==((x246/x247)-x248));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x249 = INT16_MIN;
	static uint16_t x250 = 1190U;
	int64_t x251 = INT64_MAX;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t52 = -44827765;

	t52 = (x249==((x250/x251)-x252));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x253 = 4;
	uint8_t x254 = 1U;
	uint64_t x255 = 34510301748LLU;
	int16_t x256 = 6;
	int32_t t53 = 5929361;

	t53 = (x253==((x254/x255)-x256));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x257 = INT64_MAX;
	volatile int16_t x258 = INT16_MIN;
	uint64_t x259 = 70664242882095LLU;
	static uint8_t x260 = UINT8_MAX;
	volatile int32_t t54 = -3352;

	t54 = (x257==((x258/x259)-x260));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x261 = 1735078193U;
	volatile uint64_t x262 = 190923944LLU;
	volatile int64_t x263 = INT64_MIN;
	volatile int32_t t55 = 13511011;

	t55 = (x261==((x262/x263)-x264));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x265 = 416842194647737839LLU;
	volatile uint64_t x268 = 900367396098284LLU;
	volatile int32_t t56 = 15657776;

	t56 = (x265==((x266/x267)-x268));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x269 = -61LL;
	volatile uint32_t x271 = 122540592U;
	int64_t x272 = INT64_MIN;
	int32_t t57 = 27140;

	t57 = (x269==((x270/x271)-x272));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x274 = 175746962066092775LL;
	int8_t x275 = -1;
	volatile uint64_t x276 = UINT64_MAX;
	int32_t t58 = 1149;

	t58 = (x273==((x274/x275)-x276));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x277 = INT8_MIN;
	volatile int16_t x278 = -499;
	int8_t x279 = INT8_MIN;
	volatile uint64_t x280 = 77596718048LLU;
	static int32_t t59 = -9;

	t59 = (x277==((x278/x279)-x280));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x281 = -6;
	int8_t x282 = -1;
	int8_t x283 = -1;
	int8_t x284 = -1;
	volatile int32_t t60 = 1;

	t60 = (x281==((x282/x283)-x284));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t t61 = -243847;

	t61 = (x285==((x286/x287)-x288));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x289 = -8;
	int16_t x290 = INT16_MAX;
	volatile int64_t x291 = INT64_MIN;
	uint8_t x292 = 1U;
	int32_t t62 = 1;

	t62 = (x289==((x290/x291)-x292));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x293 = INT32_MIN;
	volatile int8_t x294 = INT8_MIN;
	volatile uint8_t x295 = UINT8_MAX;
	int8_t x296 = INT8_MIN;
	volatile int32_t t63 = -2;

	t63 = (x293==((x294/x295)-x296));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x301 = 186168238378LL;
	int64_t x302 = -1LL;
	volatile uint32_t x303 = UINT32_MAX;
	int16_t x304 = INT16_MIN;

	t64 = (x301==((x302/x303)-x304));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x305 = UINT32_MAX;
	volatile uint32_t x306 = UINT32_MAX;
	int32_t x307 = 23;
	static uint64_t x308 = 62976075901928LLU;

	t65 = (x305==((x306/x307)-x308));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x309 = UINT16_MAX;
	static int64_t x310 = INT64_MAX;
	volatile int32_t x311 = INT32_MAX;
	static int32_t x312 = INT32_MIN;
	volatile int32_t t66 = 1959025;

	t66 = (x309==((x310/x311)-x312));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x313 = INT16_MAX;
	uint64_t x315 = UINT64_MAX;
	int32_t t67 = 449;

	t67 = (x313==((x314/x315)-x316));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x317 = 22U;
	int32_t x319 = INT32_MAX;
	int16_t x320 = INT16_MAX;
	static volatile int32_t t68 = -5;

	t68 = (x317==((x318/x319)-x320));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x321 = 2195368871349LLU;
	uint64_t x322 = 56094399149431LLU;
	static int16_t x323 = -1;
	int8_t x324 = INT8_MIN;
	volatile int32_t t69 = 319556641;

	t69 = (x321==((x322/x323)-x324));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x325 = INT64_MAX;
	uint8_t x326 = 27U;
	int64_t x327 = -1LL;
	int16_t x328 = -1;
	int32_t t70 = 1124;

	t70 = (x325==((x326/x327)-x328));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x329 = -1;
	static int16_t x330 = INT16_MIN;
	int32_t x331 = INT32_MAX;
	int32_t t71 = 12;

	t71 = (x329==((x330/x331)-x332));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x333 = INT32_MIN;
	volatile int8_t x334 = -1;
	static uint16_t x335 = 5285U;
	int16_t x336 = 9443;

	t72 = (x333==((x334/x335)-x336));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x338 = 1U;
	int8_t x339 = -1;
	uint32_t x340 = 5913041U;
	static volatile int32_t t73 = 13;

	t73 = (x337==((x338/x339)-x340));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x341 = -271543140062LL;
	int16_t x342 = -1;
	int64_t x343 = INT64_MIN;
	int32_t x344 = -493918;
	static volatile int32_t t74 = -1;

	t74 = (x341==((x342/x343)-x344));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x345 = INT64_MIN;
	static volatile int16_t x346 = 896;
	uint8_t x348 = 118U;

	t75 = (x345==((x346/x347)-x348));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x350 = 1U;
	int16_t x351 = INT16_MIN;
	volatile uint8_t x352 = 0U;

	t76 = (x349==((x350/x351)-x352));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x353 = UINT32_MAX;
	uint64_t x354 = 63954863839640LLU;
	volatile int64_t x355 = INT64_MAX;
	uint16_t x356 = 0U;
	static volatile int32_t t77 = -3;

	t77 = (x353==((x354/x355)-x356));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x357 = -366290860LL;
	int16_t x358 = -1;
	int8_t x359 = INT8_MIN;
	uint8_t x360 = UINT8_MAX;

	t78 = (x357==((x358/x359)-x360));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x361 = INT64_MAX;
	uint16_t x364 = UINT16_MAX;
	int32_t t79 = -3157;

	t79 = (x361==((x362/x363)-x364));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x366 = -1;
	volatile int8_t x368 = INT8_MIN;
	int32_t t80 = -1;

	t80 = (x365==((x366/x367)-x368));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x369 = INT32_MIN;
	uint16_t x371 = UINT16_MAX;
	int8_t x372 = INT8_MIN;
	volatile int32_t t81 = 314385;

	t81 = (x369==((x370/x371)-x372));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x377 = 45760228385521LLU;
	int16_t x378 = -15554;
	int16_t x379 = -1;
	uint64_t x380 = UINT64_MAX;
	int32_t t82 = -403;

	t82 = (x377==((x378/x379)-x380));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x381 = INT16_MAX;
	uint8_t x382 = 0U;
	uint64_t x383 = UINT64_MAX;
	volatile int32_t t83 = -1;

	t83 = (x381==((x382/x383)-x384));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x385 = 15;
	int8_t x386 = -1;
	uint32_t x387 = UINT32_MAX;
	int32_t x388 = INT32_MIN;
	static int32_t t84 = 2856;

	t84 = (x385==((x386/x387)-x388));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x390 = -1LL;
	int32_t x392 = -1;
	int32_t t85 = -2993;

	t85 = (x389==((x390/x391)-x392));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x393 = INT8_MIN;
	int32_t x395 = INT32_MIN;
	int32_t x396 = 2773247;
	volatile int32_t t86 = -95195;

	t86 = (x393==((x394/x395)-x396));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x397 = -1;
	int32_t x398 = INT32_MIN;
	volatile uint64_t x399 = 166837680946567LLU;
	int32_t t87 = 1;

	t87 = (x397==((x398/x399)-x400));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x401 = UINT16_MAX;
	int32_t x402 = INT32_MAX;
	uint8_t x403 = 16U;
	static volatile int32_t t88 = 0;

	t88 = (x401==((x402/x403)-x404));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x405 = -5538LL;
	static int32_t x407 = -4;
	uint32_t x408 = 209910U;
	static int32_t t89 = -69;

	t89 = (x405==((x406/x407)-x408));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x409 = 2015666823U;
	int64_t x410 = -47600LL;
	static int64_t x411 = -12618673451LL;
	uint64_t x412 = 7LLU;
	volatile int32_t t90 = 944;

	t90 = (x409==((x410/x411)-x412));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x414 = 157U;
	uint64_t x415 = 7839020659061LLU;
	volatile int64_t x416 = 24LL;
	volatile int32_t t91 = -182075;

	t91 = (x413==((x414/x415)-x416));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x417 = -1;
	int16_t x418 = -51;
	int8_t x419 = -2;
	volatile int16_t x420 = INT16_MIN;
	volatile int32_t t92 = 3432;

	t92 = (x417==((x418/x419)-x420));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x421 = 3;
	int32_t x422 = 3;
	int8_t x423 = -1;
	static int32_t x424 = -532387;
	volatile int32_t t93 = 263205;

	t93 = (x421==((x422/x423)-x424));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x429 = 71U;
	volatile int64_t x430 = INT64_MAX;
	uint32_t x431 = 4376U;
	volatile int8_t x432 = INT8_MAX;

	t94 = (x429==((x430/x431)-x432));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x435 = -1;
	int32_t x436 = -145;

	t95 = (x433==((x434/x435)-x436));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x437 = INT64_MIN;
	static uint8_t x438 = 84U;
	uint8_t x439 = 3U;
	uint64_t x440 = UINT64_MAX;
	volatile int32_t t96 = -7082309;

	t96 = (x437==((x438/x439)-x440));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x441 = INT32_MIN;
	uint8_t x442 = 2U;
	int64_t x443 = -1LL;
	volatile uint64_t x444 = UINT64_MAX;
	volatile int32_t t97 = 266;

	t97 = (x441==((x442/x443)-x444));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x445 = 3;
	int64_t x446 = -676LL;
	int64_t x447 = INT64_MIN;
	int8_t x448 = 38;
	volatile int32_t t98 = 225;

	t98 = (x445==((x446/x447)-x448));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x449 = 2019U;
	uint32_t x450 = UINT32_MAX;
	int32_t x451 = INT32_MAX;

	t99 = (x449==((x450/x451)-x452));

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

