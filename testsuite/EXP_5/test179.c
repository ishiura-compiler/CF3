#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = 103918942;
int32_t x11 = -1;
int16_t x12 = INT16_MAX;
int8_t x15 = INT8_MIN;
uint64_t x26 = 81200195952931451LLU;
int16_t x28 = INT16_MAX;
uint64_t x30 = 917285972LLU;
volatile int32_t t5 = 66;
static int32_t x35 = -184;
uint8_t x42 = 109U;
volatile uint16_t x43 = 1U;
int8_t x49 = 1;
uint8_t x50 = 9U;
int16_t x56 = INT16_MAX;
uint8_t x58 = 53U;
volatile uint16_t x60 = UINT16_MAX;
int32_t t13 = 51;
int8_t x70 = INT8_MIN;
int16_t x75 = INT16_MIN;
uint32_t x90 = UINT32_MAX;
uint32_t x99 = 9065U;
uint16_t x105 = UINT16_MAX;
int32_t x106 = INT32_MAX;
uint16_t x110 = 16U;
volatile int32_t x112 = INT32_MIN;
int8_t x115 = INT8_MAX;
uint64_t x125 = 3904LLU;
static int64_t x126 = INT64_MIN;
static int64_t x131 = 1361512779462LL;
int16_t x132 = -6430;
static uint8_t x135 = UINT8_MAX;
static uint8_t x148 = 1U;
int32_t x152 = -20744;
int8_t x161 = INT8_MAX;
static int32_t x162 = INT32_MAX;
static int32_t t36 = 643701;
volatile uint16_t x167 = 4U;
int16_t x170 = 824;
int64_t x172 = -1LL;
uint16_t x173 = UINT16_MAX;
volatile int16_t x174 = -1;
uint32_t x177 = 1U;
volatile int32_t t40 = -22251;
int8_t x195 = INT8_MAX;
int8_t x198 = INT8_MIN;
int32_t x207 = 1;
volatile int32_t t46 = -34;
static int64_t x226 = INT64_MIN;
static uint8_t x230 = 3U;
int32_t x238 = 3;
uint32_t x239 = 17U;
int16_t x247 = INT16_MIN;
volatile int64_t x258 = INT64_MIN;
int64_t x259 = INT64_MIN;
int32_t x264 = INT32_MIN;
volatile int8_t x273 = 1;
static int64_t x275 = INT64_MIN;
static volatile int64_t x280 = 27533LL;
volatile uint64_t x282 = UINT64_MAX;
int32_t t60 = 10;
int8_t x288 = -27;
volatile int16_t x289 = INT16_MAX;
static int16_t x299 = 1;
int8_t x302 = INT8_MAX;
int8_t x306 = INT8_MAX;
uint32_t x315 = 692U;
static uint64_t x318 = 448251061LLU;
int32_t x324 = INT32_MAX;
int8_t x330 = 1;
volatile int32_t x342 = INT32_MAX;
int32_t x344 = 872;
int32_t t72 = -1143;
uint8_t x345 = UINT8_MAX;
uint64_t x351 = 14982LLU;
static uint8_t x357 = 105U;
volatile int8_t x358 = INT8_MAX;
volatile int32_t t75 = -241686;
int32_t t76 = 885162975;
volatile int32_t t77 = 27999;
uint8_t x381 = 0U;
int16_t x387 = 0;
int64_t x395 = -10381639LL;
int16_t x397 = 356;
int64_t x400 = -1LL;
static int8_t x402 = INT8_MAX;
int32_t x403 = -43012472;
static uint64_t x411 = 3LLU;
int16_t x412 = -1;
volatile int32_t t85 = 31;
volatile int32_t x435 = -1;
int64_t x437 = -1LL;
int64_t x440 = INT64_MAX;
int8_t x447 = -1;
int16_t x448 = 0;
volatile int32_t x450 = INT32_MIN;
uint32_t x452 = 0U;
volatile int32_t t93 = -39389;
static volatile int8_t x455 = INT8_MIN;
volatile int16_t x457 = -1;
int64_t x463 = INT64_MAX;
uint16_t x465 = UINT16_MAX;
static int8_t x468 = INT8_MAX;
static volatile int32_t t97 = 68;
volatile int32_t x476 = INT32_MIN;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint64_t x2 = 252LLU;
	volatile int16_t x4 = INT16_MIN;
	int32_t t0 = 1003;

	t0 = (x1<=((x2-x3)+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x9 = INT64_MAX;
	static int16_t x10 = -26;
	volatile int32_t t1 = -687011;

	t1 = (x9<=((x10-x11)+x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x13 = UINT32_MAX;
	uint64_t x14 = UINT64_MAX;
	int32_t x16 = INT32_MIN;
	int32_t t2 = 8;

	t2 = (x13<=((x14-x15)+x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = 21938U;
	int8_t x22 = INT8_MAX;
	uint64_t x23 = UINT64_MAX;
	int64_t x24 = -2227233069LL;
	volatile int32_t t3 = -7;

	t3 = (x21<=((x22-x23)+x24));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MIN;
	int16_t x27 = 0;
	volatile int32_t t4 = -1962;

	t4 = (x25<=((x26-x27)+x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MIN;
	int16_t x31 = INT16_MIN;
	static uint32_t x32 = UINT32_MAX;

	t5 = (x29<=((x30-x31)+x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = 5788U;
	int8_t x34 = 14;
	volatile int32_t x36 = -49403419;
	int32_t t6 = 8715705;

	t6 = (x33<=((x34-x35)+x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x37 = INT8_MIN;
	int64_t x38 = INT64_MIN;
	static uint64_t x39 = 2525044569LLU;
	static uint8_t x40 = UINT8_MAX;
	static volatile int32_t t7 = 548562107;

	t7 = (x37<=((x38-x39)+x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = -1LL;
	int32_t x44 = 116078;
	volatile int32_t t8 = -10341508;

	t8 = (x41<=((x42-x43)+x44));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x45 = INT64_MAX;
	volatile uint64_t x46 = UINT64_MAX;
	volatile uint64_t x47 = 44547594LLU;
	volatile int32_t x48 = INT32_MAX;
	static volatile int32_t t9 = 0;

	t9 = (x45<=((x46-x47)+x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x51 = 42638328;
	static int8_t x52 = -20;
	int32_t t10 = 444756893;

	t10 = (x49<=((x50-x51)+x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x53 = INT64_MIN;
	uint32_t x54 = 1U;
	static int64_t x55 = -1LL;
	int32_t t11 = -1;

	t11 = (x53<=((x54-x55)+x56));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x57 = UINT64_MAX;
	uint32_t x59 = 61228U;
	int32_t t12 = 0;

	t12 = (x57<=((x58-x59)+x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x61 = INT64_MAX;
	int8_t x62 = INT8_MIN;
	int32_t x63 = INT32_MIN;
	int32_t x64 = INT32_MIN;

	t13 = (x61<=((x62-x63)+x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x69 = 389U;
	uint64_t x71 = 722692757000LLU;
	volatile int32_t x72 = INT32_MAX;
	volatile int32_t t14 = 622;

	t14 = (x69<=((x70-x71)+x72));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x73 = UINT32_MAX;
	volatile uint64_t x74 = UINT64_MAX;
	static int32_t x76 = -1;
	int32_t t15 = 510434;

	t15 = (x73<=((x74-x75)+x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x77 = 1;
	uint16_t x78 = 1938U;
	uint8_t x79 = 90U;
	int16_t x80 = INT16_MAX;
	int32_t t16 = 765226149;

	t16 = (x77<=((x78-x79)+x80));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = UINT64_MAX;
	int64_t x82 = -1LL;
	int64_t x83 = -12390LL;
	uint8_t x84 = UINT8_MAX;
	int32_t t17 = 31;

	t17 = (x81<=((x82-x83)+x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MIN;
	uint64_t x86 = 4186030160009LLU;
	int64_t x87 = 175LL;
	int8_t x88 = 30;
	int32_t t18 = 143123749;

	t18 = (x85<=((x86-x87)+x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = -40381413LL;
	volatile uint16_t x91 = 0U;
	static uint8_t x92 = UINT8_MAX;
	volatile int32_t t19 = 922579782;

	t19 = (x89<=((x90-x91)+x92));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = INT16_MIN;
	static uint64_t x98 = 1693335LLU;
	static uint8_t x100 = UINT8_MAX;
	int32_t t20 = -23;

	t20 = (x97<=((x98-x99)+x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x101 = INT8_MIN;
	uint8_t x102 = UINT8_MAX;
	static int16_t x103 = -3;
	int8_t x104 = INT8_MAX;
	static volatile int32_t t21 = 3412452;

	t21 = (x101<=((x102-x103)+x104));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x107 = INT16_MAX;
	int16_t x108 = 280;
	volatile int32_t t22 = -258577603;

	t22 = (x105<=((x106-x107)+x108));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x109 = 22080U;
	int8_t x111 = INT8_MIN;
	volatile int32_t t23 = -141811035;

	t23 = (x109<=((x110-x111)+x112));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = -1LL;
	volatile uint8_t x114 = 58U;
	int8_t x116 = INT8_MIN;
	int32_t t24 = 63468493;

	t24 = (x113<=((x114-x115)+x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x117 = UINT16_MAX;
	int32_t x118 = INT32_MIN;
	int32_t x119 = INT32_MIN;
	int64_t x120 = -20711464564LL;
	volatile int32_t t25 = 2505514;

	t25 = (x117<=((x118-x119)+x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = INT32_MAX;
	volatile uint16_t x122 = 129U;
	static uint64_t x123 = 24091731258LLU;
	int64_t x124 = 2037701129829917186LL;
	int32_t t26 = 40059832;

	t26 = (x121<=((x122-x123)+x124));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x127 = -3039763332620LL;
	static volatile int32_t x128 = -241896115;
	int32_t t27 = 1;

	t27 = (x125<=((x126-x127)+x128));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = -1;
	static uint16_t x130 = UINT16_MAX;
	volatile int32_t t28 = -16358;

	t28 = (x129<=((x130-x131)+x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = INT32_MIN;
	uint8_t x134 = 7U;
	int16_t x136 = INT16_MIN;
	int32_t t29 = -175;

	t29 = (x133<=((x134-x135)+x136));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x137 = 1U;
	uint32_t x138 = UINT32_MAX;
	volatile uint64_t x139 = UINT64_MAX;
	volatile int64_t x140 = -1LL;
	volatile int32_t t30 = 472797;

	t30 = (x137<=((x138-x139)+x140));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x141 = INT32_MIN;
	int64_t x142 = -744500265843572LL;
	uint8_t x143 = UINT8_MAX;
	uint16_t x144 = UINT16_MAX;
	int32_t t31 = -1379;

	t31 = (x141<=((x142-x143)+x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = -1;
	volatile uint64_t x146 = UINT64_MAX;
	int64_t x147 = -1LL;
	volatile int32_t t32 = -19067;

	t32 = (x145<=((x146-x147)+x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = 2;
	uint16_t x150 = 116U;
	volatile int32_t x151 = -1;
	int32_t t33 = 3186;

	t33 = (x149<=((x150-x151)+x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = INT64_MIN;
	int32_t x154 = -1;
	static int32_t x155 = -3027;
	int16_t x156 = 3;
	volatile int32_t t34 = -3102540;

	t34 = (x153<=((x154-x155)+x156));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x157 = INT64_MIN;
	static uint64_t x158 = UINT64_MAX;
	volatile int32_t x159 = -1;
	int16_t x160 = 1318;
	int32_t t35 = -1051502833;

	t35 = (x157<=((x158-x159)+x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x163 = INT16_MAX;
	int8_t x164 = INT8_MIN;

	t36 = (x161<=((x162-x163)+x164));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x165 = UINT32_MAX;
	volatile int32_t x166 = -1;
	int32_t x168 = -1;
	static volatile int32_t t37 = 4162145;

	t37 = (x165<=((x166-x167)+x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = -1796LL;
	int32_t x171 = -172000778;
	static int32_t t38 = 24764082;

	t38 = (x169<=((x170-x171)+x172));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x175 = UINT8_MAX;
	static volatile int32_t x176 = INT32_MAX;
	static volatile int32_t t39 = 17289677;

	t39 = (x173<=((x174-x175)+x176));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x178 = -1;
	uint64_t x179 = UINT64_MAX;
	int32_t x180 = INT32_MAX;

	t40 = (x177<=((x178-x179)+x180));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = -57;
	int64_t x182 = 5023454283542383LL;
	volatile int64_t x183 = 181710LL;
	int16_t x184 = INT16_MIN;
	volatile int32_t t41 = 65103;

	t41 = (x181<=((x182-x183)+x184));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = INT8_MIN;
	uint16_t x194 = 112U;
	uint32_t x196 = UINT32_MAX;
	int32_t t42 = 74;

	t42 = (x193<=((x194-x195)+x196));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x197 = UINT8_MAX;
	volatile int16_t x199 = INT16_MIN;
	int8_t x200 = -1;
	static int32_t t43 = -26180;

	t43 = (x197<=((x198-x199)+x200));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x201 = 476U;
	int8_t x202 = 0;
	static volatile int8_t x203 = 0;
	int8_t x204 = -1;
	static volatile int32_t t44 = 737622132;

	t44 = (x201<=((x202-x203)+x204));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x205 = -1;
	uint16_t x206 = UINT16_MAX;
	uint32_t x208 = 35607584U;
	static volatile int32_t t45 = 685;

	t45 = (x205<=((x206-x207)+x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x209 = UINT16_MAX;
	int8_t x210 = INT8_MIN;
	int16_t x211 = 205;
	int16_t x212 = -1;

	t46 = (x209<=((x210-x211)+x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x217 = -1;
	int8_t x218 = INT8_MIN;
	int8_t x219 = INT8_MIN;
	int32_t x220 = 0;
	int32_t t47 = 43;

	t47 = (x217<=((x218-x219)+x220));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x221 = 711U;
	int64_t x222 = 1715301LL;
	int64_t x223 = 25LL;
	volatile int64_t x224 = 0LL;
	volatile int32_t t48 = -56;

	t48 = (x221<=((x222-x223)+x224));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x225 = 8158773976957546174LLU;
	static uint64_t x227 = 626266345094346913LLU;
	volatile uint32_t x228 = UINT32_MAX;
	int32_t t49 = -846;

	t49 = (x225<=((x226-x227)+x228));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x229 = -1LL;
	int8_t x231 = INT8_MAX;
	uint16_t x232 = UINT16_MAX;
	int32_t t50 = 59681979;

	t50 = (x229<=((x230-x231)+x232));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x237 = INT64_MAX;
	int32_t x240 = INT32_MIN;
	static int32_t t51 = 2;

	t51 = (x237<=((x238-x239)+x240));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x241 = -1;
	static uint64_t x242 = UINT64_MAX;
	int16_t x243 = INT16_MAX;
	int32_t x244 = -410220;
	int32_t t52 = -3;

	t52 = (x241<=((x242-x243)+x244));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x245 = INT8_MAX;
	uint16_t x246 = 3U;
	int8_t x248 = -3;
	volatile int32_t t53 = 116732787;

	t53 = (x245<=((x246-x247)+x248));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x253 = INT8_MAX;
	volatile int32_t x254 = INT32_MIN;
	volatile int16_t x255 = INT16_MIN;
	volatile uint32_t x256 = 61186224U;
	int32_t t54 = 23234666;

	t54 = (x253<=((x254-x255)+x256));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x257 = 1855838295153028LLU;
	int64_t x260 = -3LL;
	static volatile int32_t t55 = 2;

	t55 = (x257<=((x258-x259)+x260));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x261 = -1;
	volatile uint32_t x262 = UINT32_MAX;
	int16_t x263 = 1;
	int32_t t56 = 1;

	t56 = (x261<=((x262-x263)+x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x269 = INT64_MIN;
	static int16_t x270 = 820;
	static int16_t x271 = 58;
	volatile uint16_t x272 = UINT16_MAX;
	volatile int32_t t57 = 8136867;

	t57 = (x269<=((x270-x271)+x272));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x274 = INT32_MIN;
	uint64_t x276 = 12091709LLU;
	int32_t t58 = -61;

	t58 = (x273<=((x274-x275)+x276));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x277 = 468U;
	static uint8_t x278 = 52U;
	int8_t x279 = INT8_MIN;
	volatile int32_t t59 = -5;

	t59 = (x277<=((x278-x279)+x280));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x281 = INT32_MAX;
	static int16_t x283 = INT16_MAX;
	uint32_t x284 = 140103530U;

	t60 = (x281<=((x282-x283)+x284));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x285 = UINT8_MAX;
	int32_t x286 = 16009;
	int16_t x287 = INT16_MAX;
	volatile int32_t t61 = 1;

	t61 = (x285<=((x286-x287)+x288));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x290 = -6;
	int64_t x291 = -44708604849LL;
	static uint32_t x292 = 5U;
	volatile int32_t t62 = 7;

	t62 = (x289<=((x290-x291)+x292));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x297 = INT32_MIN;
	int64_t x298 = -1LL;
	volatile int16_t x300 = 5;
	static volatile int32_t t63 = -394;

	t63 = (x297<=((x298-x299)+x300));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x301 = INT16_MIN;
	uint64_t x303 = 1630907418546LLU;
	static uint16_t x304 = UINT16_MAX;
	int32_t t64 = 140;

	t64 = (x301<=((x302-x303)+x304));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x305 = INT8_MAX;
	int64_t x307 = INT64_MAX;
	int32_t x308 = -1;
	volatile int32_t t65 = -22024;

	t65 = (x305<=((x306-x307)+x308));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x309 = INT16_MIN;
	uint32_t x310 = 1673U;
	uint8_t x311 = UINT8_MAX;
	static int32_t x312 = INT32_MIN;
	volatile int32_t t66 = 0;

	t66 = (x309<=((x310-x311)+x312));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x313 = INT64_MIN;
	int64_t x314 = 14LL;
	int8_t x316 = INT8_MIN;
	static int32_t t67 = 37216;

	t67 = (x313<=((x314-x315)+x316));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x317 = INT64_MIN;
	int16_t x319 = -1;
	static int64_t x320 = INT64_MAX;
	int32_t t68 = 1085882;

	t68 = (x317<=((x318-x319)+x320));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x321 = -1;
	int16_t x322 = -1;
	volatile uint64_t x323 = 25105233398972023LLU;
	volatile int32_t t69 = -193;

	t69 = (x321<=((x322-x323)+x324));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x329 = -1LL;
	static int64_t x331 = -1LL;
	volatile int32_t x332 = INT32_MAX;
	volatile int32_t t70 = -980289733;

	t70 = (x329<=((x330-x331)+x332));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x333 = -1;
	static uint64_t x334 = 868652809939LLU;
	volatile int32_t x335 = INT32_MAX;
	uint16_t x336 = UINT16_MAX;
	volatile int32_t t71 = -248;

	t71 = (x333<=((x334-x335)+x336));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x341 = -26;
	int64_t x343 = -1LL;

	t72 = (x341<=((x342-x343)+x344));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x346 = -1;
	int64_t x347 = INT64_MIN;
	int64_t x348 = -33LL;
	int32_t t73 = 460;

	t73 = (x345<=((x346-x347)+x348));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x349 = 274972LL;
	uint32_t x350 = 18298U;
	volatile int16_t x352 = INT16_MIN;
	volatile int32_t t74 = -32151;

	t74 = (x349<=((x350-x351)+x352));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x359 = -1;
	uint16_t x360 = 3059U;

	t75 = (x357<=((x358-x359)+x360));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x369 = INT8_MIN;
	volatile uint16_t x370 = 28U;
	uint16_t x371 = 33U;
	uint64_t x372 = 11951LLU;

	t76 = (x369<=((x370-x371)+x372));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x373 = 769311U;
	static uint64_t x374 = UINT64_MAX;
	uint8_t x375 = UINT8_MAX;
	uint8_t x376 = 2U;

	t77 = (x373<=((x374-x375)+x376));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x382 = -1;
	static int8_t x383 = INT8_MIN;
	int8_t x384 = INT8_MIN;
	int32_t t78 = 76293;

	t78 = (x381<=((x382-x383)+x384));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x385 = INT64_MAX;
	uint32_t x386 = UINT32_MAX;
	static int16_t x388 = -1;
	volatile int32_t t79 = 94072;

	t79 = (x385<=((x386-x387)+x388));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x389 = -237795;
	volatile int32_t x390 = INT32_MIN;
	int16_t x391 = INT16_MIN;
	int16_t x392 = INT16_MIN;
	static volatile int32_t t80 = 4596;

	t80 = (x389<=((x390-x391)+x392));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x393 = 68U;
	uint16_t x394 = UINT16_MAX;
	int32_t x396 = 12;
	static volatile int32_t t81 = 0;

	t81 = (x393<=((x394-x395)+x396));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x398 = 3U;
	static volatile uint16_t x399 = 6290U;
	int32_t t82 = -4263398;

	t82 = (x397<=((x398-x399)+x400));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x401 = -1;
	static int32_t x404 = -27231;
	volatile int32_t t83 = -2798;

	t83 = (x401<=((x402-x403)+x404));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x405 = INT16_MAX;
	int32_t x406 = INT32_MIN;
	volatile uint64_t x407 = UINT64_MAX;
	int32_t x408 = INT32_MAX;
	int32_t t84 = 37;

	t84 = (x405<=((x406-x407)+x408));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x409 = INT16_MAX;
	uint8_t x410 = 3U;

	t85 = (x409<=((x410-x411)+x412));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x413 = 1LL;
	static volatile uint16_t x414 = 279U;
	uint8_t x415 = UINT8_MAX;
	int32_t x416 = -1;
	static int32_t t86 = -36849980;

	t86 = (x413<=((x414-x415)+x416));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x421 = INT64_MIN;
	volatile uint16_t x422 = 217U;
	static int64_t x423 = -1LL;
	int8_t x424 = 0;
	static volatile int32_t t87 = 223801;

	t87 = (x421<=((x422-x423)+x424));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x425 = 14U;
	int64_t x426 = INT64_MAX;
	volatile uint64_t x427 = 23477694LLU;
	volatile int32_t x428 = -1;
	volatile int32_t t88 = 760117209;

	t88 = (x425<=((x426-x427)+x428));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x429 = 8222U;
	static volatile int8_t x430 = 1;
	static volatile uint8_t x431 = 5U;
	int32_t x432 = -1;
	volatile int32_t t89 = 5937936;

	t89 = (x429<=((x430-x431)+x432));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x433 = 122U;
	static volatile uint32_t x434 = 21U;
	int16_t x436 = -20;
	volatile int32_t t90 = -23407;

	t90 = (x433<=((x434-x435)+x436));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x438 = 1603048LL;
	int32_t x439 = 131261171;
	volatile int32_t t91 = -37062369;

	t91 = (x437<=((x438-x439)+x440));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint32_t x445 = 6842899U;
	volatile int64_t x446 = -1214621983048LL;
	int32_t t92 = -1052735076;

	t92 = (x445<=((x446-x447)+x448));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x449 = 107U;
	static int32_t x451 = INT32_MIN;

	t93 = (x449<=((x450-x451)+x452));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x453 = INT64_MAX;
	uint64_t x454 = 290156928188990791LLU;
	uint32_t x456 = UINT32_MAX;
	int32_t t94 = -41291;

	t94 = (x453<=((x454-x455)+x456));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x458 = -2900557960148725LL;
	static int16_t x459 = INT16_MIN;
	int8_t x460 = -1;
	static int32_t t95 = 38755927;

	t95 = (x457<=((x458-x459)+x460));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x461 = 981492511U;
	uint32_t x462 = UINT32_MAX;
	int16_t x464 = INT16_MIN;
	int32_t t96 = -147443;

	t96 = (x461<=((x462-x463)+x464));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x466 = UINT8_MAX;
	volatile int16_t x467 = 1;

	t97 = (x465<=((x466-x467)+x468));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x469 = UINT8_MAX;
	int64_t x470 = INT64_MIN;
	volatile int8_t x471 = INT8_MIN;
	int32_t x472 = INT32_MAX;
	volatile int32_t t98 = 21282386;

	t98 = (x469<=((x470-x471)+x472));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x473 = 4076625779LLU;
	uint32_t x474 = UINT32_MAX;
	volatile uint32_t x475 = 3111U;
	volatile int32_t t99 = 104;

	t99 = (x473<=((x474-x475)+x476));

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

