#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = -1;
volatile uint8_t x17 = UINT8_MAX;
static int64_t x19 = INT64_MIN;
int64_t x25 = INT64_MIN;
int16_t x26 = -1;
int16_t x28 = -6;
int8_t x34 = -13;
int32_t t6 = -141;
int16_t x39 = INT16_MIN;
volatile int64_t x48 = INT64_MIN;
volatile uint8_t x55 = UINT8_MAX;
int32_t t11 = 15367;
volatile int32_t x63 = -1;
volatile int32_t t12 = -13586260;
int64_t x66 = -611218099LL;
int32_t x67 = 4929940;
static int32_t t13 = 53479179;
int32_t t15 = 4;
int32_t t17 = 120188947;
uint8_t x88 = 90U;
int32_t t18 = -10491744;
static int8_t x90 = INT8_MIN;
static int8_t x104 = -1;
static int16_t x107 = -1;
int64_t x110 = INT64_MIN;
int8_t x120 = -1;
int64_t x135 = -1LL;
uint16_t x141 = UINT16_MAX;
int32_t x144 = -196202168;
uint32_t x157 = UINT32_MAX;
uint32_t x164 = UINT32_MAX;
uint8_t x167 = 2U;
uint32_t x168 = UINT32_MAX;
int16_t x169 = 175;
static uint64_t x173 = 54429689716LLU;
int32_t t35 = 79369;
static uint16_t x179 = 5U;
static int8_t x190 = INT8_MIN;
uint64_t x191 = 809690276675LLU;
uint8_t x192 = UINT8_MAX;
static int8_t x199 = 45;
uint16_t x208 = UINT16_MAX;
int64_t x209 = INT64_MIN;
static int64_t x212 = 54764LL;
int32_t x219 = -1;
int32_t x229 = -1;
int16_t x235 = -1;
uint8_t x238 = 1U;
volatile int32_t t49 = 3;
static int64_t x244 = INT64_MIN;
uint8_t x248 = UINT8_MAX;
static uint64_t x249 = UINT64_MAX;
static int16_t x250 = 965;
volatile uint32_t x252 = 470062658U;
volatile int64_t x255 = 2398450LL;
int32_t x259 = INT32_MAX;
int64_t x260 = INT64_MIN;
int8_t x271 = INT8_MAX;
int32_t t56 = 124;
volatile uint64_t x277 = UINT64_MAX;
int16_t x283 = INT16_MAX;
volatile int32_t t60 = 498017;
uint8_t x290 = 2U;
int16_t x292 = 4158;
int16_t x297 = -1;
int32_t t63 = -3955;
volatile int32_t t64 = -1287756;
volatile int32_t x305 = INT32_MIN;
int16_t x306 = 1984;
volatile uint32_t x308 = 7U;
static volatile int64_t x310 = 2244682681124466857LL;
uint16_t x314 = UINT16_MAX;
int64_t x316 = INT64_MIN;
int64_t x319 = 295LL;
volatile uint32_t x322 = 888311U;
uint32_t x327 = 1925761877U;
static int32_t t71 = -5425;
static volatile int16_t x338 = INT16_MIN;
volatile int8_t x341 = -1;
int32_t x342 = -1;
volatile int16_t x359 = -1;
static volatile uint8_t x360 = 3U;
volatile int64_t x365 = 13226245848061LL;
static uint64_t x367 = 3964LLU;
volatile int64_t x370 = INT64_MAX;
int32_t t79 = 31501;
volatile int32_t t80 = -9631783;
int8_t x377 = -12;
volatile int32_t t81 = 32370;
int32_t t84 = -775633579;
int32_t t85 = -2838859;
uint32_t x406 = 235157U;
volatile int32_t x412 = -1;
int32_t t87 = -843;
uint32_t x417 = 2327934U;
uint16_t x420 = 0U;
int16_t x433 = -1;
static int64_t x436 = INT64_MAX;
static int32_t x437 = -5886;
static uint32_t x438 = 66599U;
uint64_t x439 = 4LLU;
uint16_t x457 = 2U;
int32_t t97 = 112667773;
int64_t x472 = -844808016LL;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	int64_t x2 = INT64_MIN;
	volatile int8_t x4 = INT8_MIN;
	static volatile int32_t t0 = -63182198;

	t0 = (x1<=((x2-x3)|x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x13 = INT16_MIN;
	int64_t x14 = -1LL;
	volatile int32_t x15 = INT32_MIN;
	int8_t x16 = INT8_MIN;
	int32_t t1 = 11342673;

	t1 = (x13<=((x14-x15)|x16));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x18 = 8417986152LLU;
	static int64_t x20 = INT64_MIN;
	int32_t t2 = 1;

	t2 = (x17<=((x18-x19)|x20));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x21 = 1124035578U;
	int64_t x22 = INT64_MIN;
	volatile int32_t x23 = -1;
	int16_t x24 = 2441;
	static int32_t t3 = 426329;

	t3 = (x21<=((x22-x23)|x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x27 = INT16_MIN;
	int32_t t4 = 19148031;

	t4 = (x25<=((x26-x27)|x28));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x29 = INT32_MIN;
	volatile uint16_t x30 = 18007U;
	uint32_t x31 = 62484U;
	int64_t x32 = -1LL;
	volatile int32_t t5 = 10093;

	t5 = (x29<=((x30-x31)|x32));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x33 = INT64_MIN;
	int32_t x35 = 38746908;
	static int32_t x36 = INT32_MAX;

	t6 = (x33<=((x34-x35)|x36));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = UINT32_MAX;
	uint32_t x38 = 6U;
	volatile int16_t x40 = -127;
	volatile int32_t t7 = -41217;

	t7 = (x37<=((x38-x39)|x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = -1;
	uint32_t x46 = UINT32_MAX;
	volatile uint32_t x47 = UINT32_MAX;
	volatile int32_t t8 = 23;

	t8 = (x45<=((x46-x47)|x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = INT32_MIN;
	uint32_t x50 = UINT32_MAX;
	volatile int64_t x51 = -2313LL;
	uint64_t x52 = UINT64_MAX;
	volatile int32_t t9 = 1657;

	t9 = (x49<=((x50-x51)|x52));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x53 = -1LL;
	static int32_t x54 = -1;
	uint8_t x56 = UINT8_MAX;
	int32_t t10 = 5612;

	t10 = (x53<=((x54-x55)|x56));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x57 = 30U;
	int16_t x58 = 5;
	uint64_t x59 = UINT64_MAX;
	int64_t x60 = 674719860861640514LL;

	t11 = (x57<=((x58-x59)|x60));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x61 = 886683U;
	uint64_t x62 = UINT64_MAX;
	uint32_t x64 = UINT32_MAX;

	t12 = (x61<=((x62-x63)|x64));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = 3U;
	int64_t x68 = -1LL;

	t13 = (x65<=((x66-x67)|x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x69 = 7317556U;
	int64_t x70 = INT64_MIN;
	volatile uint64_t x71 = 1911561992317933901LLU;
	int16_t x72 = INT16_MIN;
	int32_t t14 = 4353;

	t14 = (x69<=((x70-x71)|x72));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = 45538410420471LLU;
	int8_t x74 = 4;
	int16_t x75 = 42;
	int64_t x76 = INT64_MAX;

	t15 = (x73<=((x74-x75)|x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = -171734566907LL;
	uint64_t x78 = 0LLU;
	volatile uint32_t x79 = UINT32_MAX;
	volatile int64_t x80 = -2007779811LL;
	volatile int32_t t16 = -291735509;

	t16 = (x77<=((x78-x79)|x80));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x81 = -1;
	static int8_t x82 = 1;
	static int16_t x83 = 21;
	int16_t x84 = INT16_MIN;

	t17 = (x81<=((x82-x83)|x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MIN;
	volatile int64_t x86 = INT64_MIN;
	uint32_t x87 = 0U;

	t18 = (x85<=((x86-x87)|x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = 104U;
	uint64_t x91 = UINT64_MAX;
	int16_t x92 = 166;
	static volatile int32_t t19 = -870;

	t19 = (x89<=((x90-x91)|x92));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x101 = UINT32_MAX;
	static int32_t x102 = 38;
	int8_t x103 = INT8_MIN;
	int32_t t20 = 3;

	t20 = (x101<=((x102-x103)|x104));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x105 = 0U;
	static int32_t x106 = 9;
	int64_t x108 = INT64_MIN;
	int32_t t21 = -2067;

	t21 = (x105<=((x106-x107)|x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x109 = 73969274U;
	uint64_t x111 = 30989666262930148LLU;
	uint8_t x112 = 92U;
	static int32_t t22 = 414;

	t22 = (x109<=((x110-x111)|x112));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x117 = UINT8_MAX;
	static int64_t x118 = -914056846557064247LL;
	int8_t x119 = -7;
	int32_t t23 = -76091;

	t23 = (x117<=((x118-x119)|x120));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x121 = -51754205;
	volatile uint32_t x122 = 71280654U;
	int8_t x123 = INT8_MAX;
	uint64_t x124 = 1012LLU;
	int32_t t24 = 1007925;

	t24 = (x121<=((x122-x123)|x124));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x129 = UINT64_MAX;
	int64_t x130 = 215343796756276LL;
	int64_t x131 = -73LL;
	volatile int64_t x132 = INT64_MIN;
	volatile int32_t t25 = 46635;

	t25 = (x129<=((x130-x131)|x132));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x133 = INT64_MIN;
	uint16_t x134 = 569U;
	volatile int64_t x136 = INT64_MIN;
	volatile int32_t t26 = -28203;

	t26 = (x133<=((x134-x135)|x136));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x142 = 1U;
	int16_t x143 = INT16_MIN;
	int32_t t27 = 36913;

	t27 = (x141<=((x142-x143)|x144));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x145 = INT16_MAX;
	int64_t x146 = INT64_MIN;
	int16_t x147 = INT16_MIN;
	int64_t x148 = 4929080007217278LL;
	int32_t t28 = -86871;

	t28 = (x145<=((x146-x147)|x148));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x149 = 2234658028LLU;
	int16_t x150 = INT16_MIN;
	int32_t x151 = -1;
	uint8_t x152 = 16U;
	volatile int32_t t29 = 276;

	t29 = (x149<=((x150-x151)|x152));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x153 = 15;
	int32_t x154 = INT32_MAX;
	volatile int64_t x155 = 312793224367LL;
	int64_t x156 = INT64_MIN;
	volatile int32_t t30 = -214288362;

	t30 = (x153<=((x154-x155)|x156));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x158 = 5;
	volatile int8_t x159 = INT8_MIN;
	uint16_t x160 = UINT16_MAX;
	volatile int32_t t31 = 14007;

	t31 = (x157<=((x158-x159)|x160));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x161 = 1573575741U;
	int8_t x162 = INT8_MAX;
	static volatile int32_t x163 = -1;
	static int32_t t32 = -57372724;

	t32 = (x161<=((x162-x163)|x164));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x165 = 1;
	int32_t x166 = -129;
	volatile int32_t t33 = -63149;

	t33 = (x165<=((x166-x167)|x168));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x170 = 9325U;
	uint16_t x171 = 8U;
	int32_t x172 = -294;
	volatile int32_t t34 = -5;

	t34 = (x169<=((x170-x171)|x172));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x174 = -1LL;
	volatile int8_t x175 = INT8_MAX;
	volatile int64_t x176 = -1LL;

	t35 = (x173<=((x174-x175)|x176));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x177 = 77335U;
	static int16_t x178 = INT16_MIN;
	int32_t x180 = 54;
	volatile int32_t t36 = -5006;

	t36 = (x177<=((x178-x179)|x180));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x181 = -9;
	int64_t x182 = -1LL;
	uint16_t x183 = 347U;
	uint8_t x184 = 19U;
	int32_t t37 = -6;

	t37 = (x181<=((x182-x183)|x184));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x189 = UINT8_MAX;
	volatile int32_t t38 = 2;

	t38 = (x189<=((x190-x191)|x192));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x193 = UINT64_MAX;
	int8_t x194 = -3;
	static int8_t x195 = -1;
	int8_t x196 = -1;
	int32_t t39 = -8177;

	t39 = (x193<=((x194-x195)|x196));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x197 = 48U;
	int64_t x198 = INT64_MAX;
	int8_t x200 = INT8_MAX;
	volatile int32_t t40 = -241;

	t40 = (x197<=((x198-x199)|x200));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x201 = UINT64_MAX;
	static uint8_t x202 = 13U;
	uint8_t x203 = 1U;
	volatile uint32_t x204 = 1086U;
	static int32_t t41 = 486699;

	t41 = (x201<=((x202-x203)|x204));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x205 = 6U;
	uint8_t x206 = 9U;
	volatile int8_t x207 = INT8_MAX;
	volatile int32_t t42 = 1219;

	t42 = (x205<=((x206-x207)|x208));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x210 = 70U;
	uint16_t x211 = 416U;
	int32_t t43 = -13467542;

	t43 = (x209<=((x210-x211)|x212));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x217 = 3161U;
	int8_t x218 = 13;
	uint32_t x220 = UINT32_MAX;
	int32_t t44 = 96847378;

	t44 = (x217<=((x218-x219)|x220));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x221 = INT64_MIN;
	static uint32_t x222 = UINT32_MAX;
	int8_t x223 = INT8_MIN;
	uint32_t x224 = UINT32_MAX;
	static int32_t t45 = 0;

	t45 = (x221<=((x222-x223)|x224));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x225 = INT32_MIN;
	int64_t x226 = -1LL;
	uint8_t x227 = UINT8_MAX;
	int64_t x228 = -13LL;
	volatile int32_t t46 = -471648348;

	t46 = (x225<=((x226-x227)|x228));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x230 = 60341;
	static int8_t x231 = -9;
	int8_t x232 = INT8_MAX;
	volatile int32_t t47 = -130256170;

	t47 = (x229<=((x230-x231)|x232));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x233 = -142938416;
	static uint64_t x234 = 87LLU;
	uint8_t x236 = 2U;
	static int32_t t48 = -78805224;

	t48 = (x233<=((x234-x235)|x236));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x237 = -1;
	int16_t x239 = -96;
	uint16_t x240 = 52U;

	t49 = (x237<=((x238-x239)|x240));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x241 = 17U;
	static int64_t x242 = INT64_MIN;
	volatile int16_t x243 = -1;
	int32_t t50 = -35;

	t50 = (x241<=((x242-x243)|x244));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x245 = INT16_MIN;
	int8_t x246 = INT8_MIN;
	int32_t x247 = INT32_MIN;
	volatile int32_t t51 = -2613;

	t51 = (x245<=((x246-x247)|x248));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x251 = -1;
	volatile int32_t t52 = 32686691;

	t52 = (x249<=((x250-x251)|x252));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x253 = INT32_MIN;
	uint32_t x254 = 15319U;
	volatile int8_t x256 = INT8_MIN;
	volatile int32_t t53 = -8099;

	t53 = (x253<=((x254-x255)|x256));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x257 = 2876U;
	static int64_t x258 = -7276124888212LL;
	int32_t t54 = 332;

	t54 = (x257<=((x258-x259)|x260));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x265 = 18U;
	volatile uint8_t x266 = 14U;
	uint64_t x267 = UINT64_MAX;
	volatile int8_t x268 = -1;
	int32_t t55 = -104;

	t55 = (x265<=((x266-x267)|x268));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x269 = INT16_MIN;
	volatile int16_t x270 = INT16_MIN;
	int16_t x272 = -1;

	t56 = (x269<=((x270-x271)|x272));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x273 = 0;
	int8_t x274 = 4;
	uint64_t x275 = 8892352619823390LLU;
	int8_t x276 = -1;
	volatile int32_t t57 = 4836059;

	t57 = (x273<=((x274-x275)|x276));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x278 = 939154284635726905LL;
	volatile int8_t x279 = -14;
	volatile int64_t x280 = -1LL;
	static int32_t t58 = -221425155;

	t58 = (x277<=((x278-x279)|x280));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x281 = 11U;
	int32_t x282 = -160451;
	uint8_t x284 = UINT8_MAX;
	int32_t t59 = 355506;

	t59 = (x281<=((x282-x283)|x284));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x285 = 117366588;
	int64_t x286 = -1LL;
	static int8_t x287 = 6;
	uint64_t x288 = UINT64_MAX;

	t60 = (x285<=((x286-x287)|x288));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x289 = -1;
	int8_t x291 = -9;
	volatile int32_t t61 = 5;

	t61 = (x289<=((x290-x291)|x292));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x293 = 61477430;
	int64_t x294 = 19648407LL;
	int16_t x295 = -1;
	int64_t x296 = INT64_MIN;
	int32_t t62 = -1234;

	t62 = (x293<=((x294-x295)|x296));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x298 = INT8_MIN;
	static int8_t x299 = INT8_MIN;
	int16_t x300 = -205;

	t63 = (x297<=((x298-x299)|x300));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x301 = 17;
	uint8_t x302 = 2U;
	int8_t x303 = 3;
	volatile int64_t x304 = -5937615LL;

	t64 = (x301<=((x302-x303)|x304));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x307 = 57949581776361362LLU;
	int32_t t65 = -155230;

	t65 = (x305<=((x306-x307)|x308));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x309 = INT8_MIN;
	uint8_t x311 = 6U;
	uint16_t x312 = UINT16_MAX;
	volatile int32_t t66 = -8696;

	t66 = (x309<=((x310-x311)|x312));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x313 = -1;
	int8_t x315 = INT8_MAX;
	volatile int32_t t67 = 12044;

	t67 = (x313<=((x314-x315)|x316));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x317 = 46330371676612225LLU;
	int8_t x318 = INT8_MAX;
	volatile int16_t x320 = INT16_MAX;
	volatile int32_t t68 = 7497284;

	t68 = (x317<=((x318-x319)|x320));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x321 = 3129U;
	int8_t x323 = INT8_MAX;
	int16_t x324 = -1190;
	static int32_t t69 = 3;

	t69 = (x321<=((x322-x323)|x324));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x325 = INT64_MIN;
	int32_t x326 = INT32_MIN;
	int16_t x328 = -1;
	int32_t t70 = 0;

	t70 = (x325<=((x326-x327)|x328));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x329 = 3645LLU;
	int8_t x330 = INT8_MIN;
	int16_t x331 = INT16_MAX;
	int32_t x332 = -1155103;

	t71 = (x329<=((x330-x331)|x332));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x337 = INT64_MAX;
	uint8_t x339 = 2U;
	volatile int64_t x340 = -1LL;
	static int32_t t72 = 1395390;

	t72 = (x337<=((x338-x339)|x340));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x343 = 465328175U;
	volatile int8_t x344 = -1;
	int32_t t73 = -1194;

	t73 = (x341<=((x342-x343)|x344));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x345 = UINT32_MAX;
	volatile int8_t x346 = INT8_MAX;
	static volatile int16_t x347 = INT16_MAX;
	int64_t x348 = INT64_MAX;
	static int32_t t74 = 5049570;

	t74 = (x345<=((x346-x347)|x348));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x353 = INT32_MAX;
	volatile uint64_t x354 = 31853653LLU;
	static int32_t x355 = -1;
	uint8_t x356 = 13U;
	static volatile int32_t t75 = 376771;

	t75 = (x353<=((x354-x355)|x356));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x357 = INT16_MIN;
	uint32_t x358 = 26579486U;
	int32_t t76 = 22050189;

	t76 = (x357<=((x358-x359)|x360));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x361 = -1;
	static volatile int32_t x362 = -3;
	uint32_t x363 = 446U;
	int64_t x364 = INT64_MAX;
	int32_t t77 = -34779;

	t77 = (x361<=((x362-x363)|x364));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x366 = INT32_MIN;
	int64_t x368 = INT64_MAX;
	int32_t t78 = -1;

	t78 = (x365<=((x366-x367)|x368));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x369 = -120240014280538LL;
	static int64_t x371 = 267413328665711859LL;
	uint16_t x372 = UINT16_MAX;

	t79 = (x369<=((x370-x371)|x372));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x373 = INT32_MAX;
	int64_t x374 = -1LL;
	volatile uint8_t x375 = 4U;
	static volatile int8_t x376 = -52;

	t80 = (x373<=((x374-x375)|x376));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x378 = 1;
	uint32_t x379 = UINT32_MAX;
	static int16_t x380 = -1;

	t81 = (x377<=((x378-x379)|x380));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x389 = 168LLU;
	volatile int64_t x390 = INT64_MIN;
	static volatile int32_t x391 = INT32_MIN;
	volatile int32_t x392 = INT32_MIN;
	int32_t t82 = 13309121;

	t82 = (x389<=((x390-x391)|x392));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x393 = INT32_MIN;
	static uint16_t x394 = UINT16_MAX;
	int32_t x395 = -1;
	static int32_t x396 = -163990806;
	int32_t t83 = -12728;

	t83 = (x393<=((x394-x395)|x396));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x397 = 0;
	int16_t x398 = -1;
	int8_t x399 = INT8_MIN;
	int16_t x400 = 0;

	t84 = (x397<=((x398-x399)|x400));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x401 = INT64_MIN;
	int16_t x402 = 12128;
	int16_t x403 = 2989;
	static int64_t x404 = 3330LL;

	t85 = (x401<=((x402-x403)|x404));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x405 = 17U;
	int16_t x407 = -1;
	volatile uint16_t x408 = UINT16_MAX;
	int32_t t86 = 0;

	t86 = (x405<=((x406-x407)|x408));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint16_t x409 = 3195U;
	volatile int32_t x410 = -201377410;
	int32_t x411 = 5;

	t87 = (x409<=((x410-x411)|x412));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x413 = UINT32_MAX;
	int8_t x414 = -1;
	int8_t x415 = -1;
	int16_t x416 = 814;
	int32_t t88 = -58162420;

	t88 = (x413<=((x414-x415)|x416));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x418 = 955U;
	int32_t x419 = -1315;
	int32_t t89 = 8606;

	t89 = (x417<=((x418-x419)|x420));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x429 = 10839U;
	uint16_t x430 = 6263U;
	volatile uint64_t x431 = 25498011838LLU;
	volatile int8_t x432 = INT8_MIN;
	int32_t t90 = 41;

	t90 = (x429<=((x430-x431)|x432));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x434 = 191U;
	static int16_t x435 = -11739;
	volatile int32_t t91 = -919174;

	t91 = (x433<=((x434-x435)|x436));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x440 = 12318524934LL;
	int32_t t92 = -1;

	t92 = (x437<=((x438-x439)|x440));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x441 = INT16_MIN;
	int32_t x442 = 1102774;
	int32_t x443 = -14821;
	int32_t x444 = -1;
	int32_t t93 = -221;

	t93 = (x441<=((x442-x443)|x444));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x449 = 3;
	int64_t x450 = -250241914696367LL;
	int16_t x451 = -9147;
	int32_t x452 = INT32_MAX;
	static volatile int32_t t94 = -52927;

	t94 = (x449<=((x450-x451)|x452));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x453 = 3419U;
	static int8_t x454 = INT8_MAX;
	uint8_t x455 = 1U;
	uint8_t x456 = 35U;
	int32_t t95 = 7251708;

	t95 = (x453<=((x454-x455)|x456));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x458 = UINT32_MAX;
	int32_t x459 = INT32_MIN;
	int16_t x460 = 1;
	volatile int32_t t96 = 94330374;

	t96 = (x457<=((x458-x459)|x460));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x461 = 1U;
	int16_t x462 = -13336;
	int64_t x463 = INT64_MIN;
	int16_t x464 = 7014;

	t97 = (x461<=((x462-x463)|x464));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x465 = 0;
	int32_t x466 = INT32_MIN;
	int32_t x467 = -1;
	uint16_t x468 = 10U;
	int32_t t98 = 14;

	t98 = (x465<=((x466-x467)|x468));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x469 = -1;
	int32_t x470 = INT32_MIN;
	uint64_t x471 = 3052LLU;
	volatile int32_t t99 = 100;

	t99 = (x469<=((x470-x471)|x472));

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

