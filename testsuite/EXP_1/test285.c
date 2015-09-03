#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x4 = 681;
uint8_t x11 = 10U;
int32_t t3 = -499606875;
int16_t x23 = -209;
volatile int64_t t5 = 0LL;
static uint16_t x30 = UINT16_MAX;
int32_t t6 = -289510702;
int32_t t9 = -4892;
volatile int32_t t10 = -7;
int8_t x50 = 1;
int8_t x54 = INT8_MAX;
volatile uint64_t x65 = 228590536606290949LLU;
static uint16_t x68 = 487U;
uint32_t t16 = UINT32_MAX;
static volatile int32_t t17 = -11;
static uint8_t x79 = UINT8_MAX;
int8_t x97 = 0;
uint64_t x100 = UINT64_MAX;
volatile int64_t x105 = 6505028353207786LL;
static uint64_t x109 = 70546723LLU;
uint64_t x114 = 5LLU;
int16_t x124 = INT16_MIN;
volatile int32_t t27 = 61436;
int32_t x130 = INT32_MIN;
volatile uint64_t x132 = 6797017761905627284LLU;
uint64_t t28 = 351376LLU;
int64_t x138 = INT64_MAX;
volatile uint32_t x139 = UINT32_MAX;
uint64_t x148 = 2917704514LLU;
uint64_t t32 = 133085362097LLU;
int32_t x150 = -1;
int64_t x153 = 4274597452442LL;
uint64_t x161 = 3633758LLU;
static int16_t x162 = INT16_MIN;
static int16_t x163 = INT16_MIN;
uint32_t t36 = 288410638U;
static int64_t x166 = -29LL;
static volatile int16_t x168 = 15;
int32_t x170 = -811414240;
volatile uint64_t t38 = UINT64_MAX;
volatile int64_t x178 = 3467482042225673LL;
static int64_t t40 = 52687401884173850LL;
volatile int8_t x181 = INT8_MIN;
uint16_t x184 = 2532U;
volatile int64_t x188 = -1LL;
int32_t x192 = INT32_MAX;
uint8_t x194 = 60U;
volatile int64_t x199 = INT64_MIN;
uint32_t t45 = 7840937U;
int32_t t46 = -44;
static int8_t x208 = -1;
int32_t t47 = 82;
uint64_t x210 = 1LLU;
uint32_t x215 = 1263U;
int64_t t49 = 492LL;
int8_t x220 = -1;
int8_t x232 = 0;
uint64_t x235 = 857LLU;
int64_t x244 = -1LL;
static int32_t x246 = -5;
static int8_t x247 = INT8_MIN;
int32_t t56 = -101439949;
volatile uint8_t x252 = 1U;
volatile int32_t t59 = 31388;
uint8_t x262 = UINT8_MAX;
volatile int32_t x268 = INT32_MAX;
uint32_t x277 = 72187293U;
int32_t x279 = -1;
uint16_t x286 = UINT16_MAX;
volatile int32_t t66 = -16;
int8_t x296 = 16;
static uint32_t x297 = 147U;
static volatile uint64_t t68 = UINT64_MAX;
uint64_t x305 = 67LLU;
int8_t x306 = -2;
volatile uint8_t x308 = UINT8_MAX;
uint32_t x312 = 15U;
uint64_t x320 = UINT64_MAX;
uint16_t x321 = UINT16_MAX;
uint16_t x326 = 1951U;
int32_t t76 = -67376;
volatile uint8_t x340 = 1U;
int8_t x341 = INT8_MIN;
int16_t x343 = INT16_MAX;
int64_t x344 = INT64_MIN;
int16_t x350 = 11626;
volatile uint16_t x361 = 29974U;
int8_t x363 = -1;
volatile int64_t x369 = INT64_MIN;
volatile int32_t x377 = INT32_MAX;
volatile uint64_t x378 = UINT64_MAX;
static volatile int64_t t87 = -5055LL;
volatile int16_t x381 = INT16_MAX;
static int32_t t88 = -94660;
volatile int32_t x393 = -41092785;
int32_t x395 = INT32_MIN;
int16_t x403 = INT16_MIN;
static volatile uint64_t t93 = 3245301451LLU;
uint64_t x407 = UINT64_MAX;
uint32_t x408 = 76058495U;
int8_t x412 = INT8_MIN;
int32_t x419 = -1327671;


void f0(void) {
	int8_t x1 = -1;
	int64_t x2 = 2560609728LL;
	volatile int8_t x3 = INT8_MAX;
	int32_t t0 = 1178;

	t0 = (((x1-x2)<x3)|x4);

	if (t0 != 681) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x9 = UINT64_MAX;
	int64_t x10 = -1LL;
	int8_t x12 = 57;
	volatile int32_t t1 = -54091664;

	t1 = (((x9-x10)<x11)|x12);

	if (t1 != 57) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x13 = 3U;
	static uint64_t x14 = 8216LLU;
	int8_t x15 = -1;
	int32_t x16 = INT32_MAX;
	int32_t t2 = INT32_MAX;

	t2 = (((x13-x14)<x15)|x16);

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x17 = UINT64_MAX;
	static volatile int32_t x18 = 32882124;
	int8_t x19 = 1;
	int8_t x20 = 0;

	t3 = (((x17-x18)<x19)|x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -2;
	volatile int16_t x22 = INT16_MIN;
	int16_t x24 = 1;
	int32_t t4 = 843984060;

	t4 = (((x21-x22)<x23)|x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	uint8_t x26 = 10U;
	static int64_t x27 = -734726146491LL;
	int64_t x28 = -1LL;

	t5 = (((x25-x26)<x27)|x28);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	static int8_t x31 = 1;
	uint8_t x32 = 36U;

	t6 = (((x29-x30)<x31)|x32);

	if (t6 != 37) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x33 = UINT64_MAX;
	static int16_t x34 = INT16_MIN;
	uint64_t x35 = UINT64_MAX;
	int16_t x36 = -1;
	volatile int32_t t7 = -28663671;

	t7 = (((x33-x34)<x35)|x36);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = -1;
	int16_t x38 = INT16_MAX;
	volatile int32_t x39 = INT32_MIN;
	static int16_t x40 = -1;
	int32_t t8 = -45;

	t8 = (((x37-x38)<x39)|x40);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = UINT8_MAX;
	uint32_t x42 = 11096U;
	uint32_t x43 = 19U;
	int32_t x44 = -1;

	t9 = (((x41-x42)<x43)|x44);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = INT32_MAX;
	uint8_t x46 = UINT8_MAX;
	uint16_t x47 = 485U;
	int16_t x48 = -1;

	t10 = (((x45-x46)<x47)|x48);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = 9LLU;
	volatile int64_t x51 = INT64_MIN;
	int8_t x52 = -38;
	static volatile int32_t t11 = -4187;

	t11 = (((x49-x50)<x51)|x52);

	if (t11 != -37) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -1;
	int16_t x55 = 1730;
	int16_t x56 = -1;
	static volatile int32_t t12 = -266888684;

	t12 = (((x53-x54)<x55)|x56);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = UINT8_MAX;
	uint16_t x58 = 15U;
	int32_t x59 = 83320;
	int32_t x60 = 92943485;
	int32_t t13 = 2764;

	t13 = (((x57-x58)<x59)|x60);

	if (t13 != 92943485) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x61 = 1;
	uint16_t x62 = 5177U;
	uint16_t x63 = UINT16_MAX;
	int32_t x64 = INT32_MIN;
	int32_t t14 = 1;

	t14 = (((x61-x62)<x63)|x64);

	if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x66 = 701039555LLU;
	static int32_t x67 = INT32_MIN;
	static int32_t t15 = -1;

	t15 = (((x65-x66)<x67)|x68);

	if (t15 != 487) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x69 = 0U;
	uint32_t x70 = UINT32_MAX;
	int64_t x71 = 133LL;
	uint32_t x72 = UINT32_MAX;

	t16 = (((x69-x70)<x71)|x72);

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x73 = 348;
	static uint8_t x74 = 84U;
	int32_t x75 = -1;
	static volatile uint16_t x76 = 0U;

	t17 = (((x73-x74)<x75)|x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = -1;
	int8_t x78 = -1;
	uint32_t x80 = 156U;
	uint32_t t18 = 356U;

	t18 = (((x77-x78)<x79)|x80);

	if (t18 != 157U) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x93 = -1;
	int32_t x94 = INT32_MIN;
	int8_t x95 = 32;
	volatile int32_t x96 = 52800;
	volatile int32_t t19 = 210716086;

	t19 = (((x93-x94)<x95)|x96);

	if (t19 != 52800) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x98 = 3996793LL;
	static int32_t x99 = -387543;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = (((x97-x98)<x99)|x100);

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = 0;
	volatile uint8_t x102 = 13U;
	uint16_t x103 = 9U;
	int8_t x104 = INT8_MIN;
	static volatile int32_t t21 = 402629;

	t21 = (((x101-x102)<x103)|x104);

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x106 = UINT64_MAX;
	int32_t x107 = INT32_MIN;
	uint32_t x108 = 13671U;
	uint32_t t22 = 1473201140U;

	t22 = (((x105-x106)<x107)|x108);

	if (t22 != 13671U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x110 = 106955315U;
	int16_t x111 = 63;
	static int8_t x112 = INT8_MAX;
	static int32_t t23 = 93;

	t23 = (((x109-x110)<x111)|x112);

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x113 = -1;
	volatile int32_t x115 = INT32_MIN;
	int8_t x116 = INT8_MIN;
	int32_t t24 = -638206;

	t24 = (((x113-x114)<x115)|x116);

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x117 = 29;
	volatile int8_t x118 = -1;
	static volatile uint32_t x119 = 1633910U;
	int32_t x120 = INT32_MIN;
	static volatile int32_t t25 = -40983;

	t25 = (((x117-x118)<x119)|x120);

	if (t25 != -2147483647) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x121 = INT8_MAX;
	volatile int8_t x122 = 53;
	static int32_t x123 = INT32_MIN;
	volatile int32_t t26 = -77464;

	t26 = (((x121-x122)<x123)|x124);

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = -1;
	static int8_t x126 = 46;
	volatile int8_t x127 = -17;
	static int16_t x128 = INT16_MIN;

	t27 = (((x125-x126)<x127)|x128);

	if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = INT32_MIN;
	volatile int32_t x131 = INT32_MIN;

	t28 = (((x129-x130)<x131)|x132);

	if (t28 != 6797017761905627284LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x133 = UINT16_MAX;
	int64_t x134 = -1LL;
	int16_t x135 = 186;
	volatile int16_t x136 = INT16_MAX;
	volatile int32_t t29 = -118;

	t29 = (((x133-x134)<x135)|x136);

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = INT64_MAX;
	volatile uint16_t x140 = 12336U;
	volatile int32_t t30 = 7662707;

	t30 = (((x137-x138)<x139)|x140);

	if (t30 != 12337) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x141 = 3814U;
	static int32_t x142 = 7962;
	int64_t x143 = INT64_MIN;
	int32_t x144 = INT32_MAX;
	int32_t t31 = INT32_MAX;

	t31 = (((x141-x142)<x143)|x144);

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = INT16_MIN;
	int8_t x146 = INT8_MIN;
	volatile int8_t x147 = 45;

	t32 = (((x145-x146)<x147)|x148);

	if (t32 != 2917704515LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x149 = INT64_MIN;
	static uint64_t x151 = UINT64_MAX;
	int16_t x152 = -1;
	volatile int32_t t33 = -6175;

	t33 = (((x149-x150)<x151)|x152);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x154 = INT8_MAX;
	uint16_t x155 = 1U;
	int16_t x156 = INT16_MAX;
	int32_t t34 = 5;

	t34 = (((x153-x154)<x155)|x156);

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = 0U;
	int64_t x158 = -2840LL;
	uint32_t x159 = 41U;
	static uint64_t x160 = UINT64_MAX;
	uint64_t t35 = UINT64_MAX;

	t35 = (((x157-x158)<x159)|x160);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x164 = 445U;

	t36 = (((x161-x162)<x163)|x164);

	if (t36 != 445U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = -1989430;
	static uint64_t x167 = UINT64_MAX;
	volatile int32_t t37 = 138883889;

	t37 = (((x165-x166)<x167)|x168);

	if (t37 != 15) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = -1LL;
	int8_t x171 = INT8_MIN;
	uint64_t x172 = UINT64_MAX;

	t38 = (((x169-x170)<x171)|x172);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = 877746041LL;
	int32_t x174 = INT32_MAX;
	int32_t x175 = 27394;
	int16_t x176 = 565;
	int32_t t39 = 250028;

	t39 = (((x173-x174)<x175)|x176);

	if (t39 != 565) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = 3829LL;
	int8_t x179 = -59;
	static volatile int64_t x180 = INT64_MIN;

	t40 = (((x177-x178)<x179)|x180);

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x182 = 3U;
	int8_t x183 = INT8_MIN;
	volatile int32_t t41 = -2986;

	t41 = (((x181-x182)<x183)|x184);

	if (t41 != 2533) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = INT8_MIN;
	uint64_t x186 = 122961788113588762LLU;
	static int16_t x187 = 0;
	static int64_t t42 = -62652888806LL;

	t42 = (((x185-x186)<x187)|x188);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = INT16_MIN;
	static volatile int64_t x190 = 60352223521439078LL;
	volatile int64_t x191 = 1992802758LL;
	static volatile int32_t t43 = INT32_MAX;

	t43 = (((x189-x190)<x191)|x192);

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x193 = 1U;
	uint16_t x195 = 9038U;
	uint16_t x196 = 18U;
	int32_t t44 = -1;

	t44 = (((x193-x194)<x195)|x196);

	if (t44 != 19) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x197 = UINT32_MAX;
	uint32_t x198 = 93U;
	volatile uint32_t x200 = 1756233119U;

	t45 = (((x197-x198)<x199)|x200);

	if (t45 != 1756233119U) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x201 = -1LL;
	uint64_t x202 = 680LLU;
	uint8_t x203 = UINT8_MAX;
	volatile uint8_t x204 = 28U;

	t46 = (((x201-x202)<x203)|x204);

	if (t46 != 28) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x205 = INT64_MIN;
	int32_t x206 = -64434124;
	int16_t x207 = -1;

	t47 = (((x205-x206)<x207)|x208);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x209 = 250U;
	uint32_t x211 = UINT32_MAX;
	uint64_t x212 = UINT64_MAX;
	static uint64_t t48 = UINT64_MAX;

	t48 = (((x209-x210)<x211)|x212);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x213 = INT8_MIN;
	static int64_t x214 = 26118LL;
	volatile int64_t x216 = 85947556LL;

	t49 = (((x213-x214)<x215)|x216);

	if (t49 != 85947557LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x217 = 2U;
	static uint8_t x218 = 69U;
	int16_t x219 = INT16_MIN;
	volatile int32_t t50 = -4;

	t50 = (((x217-x218)<x219)|x220);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x225 = INT32_MAX;
	uint64_t x226 = UINT64_MAX;
	static volatile int64_t x227 = -1145LL;
	int32_t x228 = 670;
	int32_t t51 = -1359798;

	t51 = (((x225-x226)<x227)|x228);

	if (t51 != 671) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x229 = 1U;
	uint64_t x230 = UINT64_MAX;
	int64_t x231 = INT64_MAX;
	static volatile int32_t t52 = 429;

	t52 = (((x229-x230)<x231)|x232);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x233 = 0U;
	volatile uint64_t x234 = 6751997856883LLU;
	int16_t x236 = INT16_MIN;
	int32_t t53 = -2245;

	t53 = (((x233-x234)<x235)|x236);

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = -617681;
	static volatile int16_t x238 = -1;
	uint64_t x239 = UINT64_MAX;
	int32_t x240 = INT32_MIN;
	static volatile int32_t t54 = -1624712;

	t54 = (((x237-x238)<x239)|x240);

	if (t54 != -2147483647) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x241 = UINT32_MAX;
	int64_t x242 = -1LL;
	int16_t x243 = -57;
	volatile int64_t t55 = 456670LL;

	t55 = (((x241-x242)<x243)|x244);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = INT16_MAX;
	static volatile int16_t x248 = INT16_MAX;

	t56 = (((x245-x246)<x247)|x248);

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x249 = -20273431LL;
	volatile uint8_t x250 = 7U;
	uint32_t x251 = 933675270U;
	volatile int32_t t57 = 68509408;

	t57 = (((x249-x250)<x251)|x252);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x253 = UINT8_MAX;
	uint16_t x254 = 122U;
	static uint16_t x255 = UINT16_MAX;
	int32_t x256 = -81;
	static volatile int32_t t58 = -3;

	t58 = (((x253-x254)<x255)|x256);

	if (t58 != -81) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x257 = 56;
	static uint8_t x258 = UINT8_MAX;
	volatile int64_t x259 = INT64_MIN;
	static uint16_t x260 = 30534U;

	t59 = (((x257-x258)<x259)|x260);

	if (t59 != 30534) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x261 = UINT32_MAX;
	int64_t x263 = -1LL;
	volatile int64_t x264 = 455802LL;
	volatile int64_t t60 = -229LL;

	t60 = (((x261-x262)<x263)|x264);

	if (t60 != 455802LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x265 = 1618;
	volatile int16_t x266 = INT16_MAX;
	static int8_t x267 = INT8_MAX;
	static volatile int32_t t61 = INT32_MAX;

	t61 = (((x265-x266)<x267)|x268);

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x273 = -8975;
	volatile uint16_t x274 = 1528U;
	int64_t x275 = INT64_MIN;
	uint64_t x276 = 98LLU;
	uint64_t t62 = 5409LLU;

	t62 = (((x273-x274)<x275)|x276);

	if (t62 != 98LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x278 = 2293063278LLU;
	int64_t x280 = 944866891LL;
	static volatile int64_t t63 = -160476648949350LL;

	t63 = (((x277-x278)<x279)|x280);

	if (t63 != 944866891LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x281 = 146521440859712LLU;
	int16_t x282 = 11;
	volatile int16_t x283 = INT16_MIN;
	static int64_t x284 = -1LL;
	int64_t t64 = -12558LL;

	t64 = (((x281-x282)<x283)|x284);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x285 = UINT16_MAX;
	uint8_t x287 = 2U;
	int16_t x288 = 10;
	static volatile int32_t t65 = -53806;

	t65 = (((x285-x286)<x287)|x288);

	if (t65 != 11) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x289 = INT64_MAX;
	uint16_t x290 = UINT16_MAX;
	int64_t x291 = 887101663101450LL;
	int32_t x292 = -1;

	t66 = (((x289-x290)<x291)|x292);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x293 = -3;
	int64_t x294 = 190965LL;
	static int16_t x295 = INT16_MAX;
	volatile int32_t t67 = -99787;

	t67 = (((x293-x294)<x295)|x296);

	if (t67 != 17) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x298 = 10648;
	static int64_t x299 = -12033254LL;
	volatile uint64_t x300 = UINT64_MAX;

	t68 = (((x297-x298)<x299)|x300);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x301 = 4563114579508417LL;
	volatile int32_t x302 = INT32_MIN;
	static uint64_t x303 = 1006636LLU;
	int32_t x304 = INT32_MIN;
	int32_t t69 = INT32_MIN;

	t69 = (((x301-x302)<x303)|x304);

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x307 = UINT8_MAX;
	volatile int32_t t70 = -66910;

	t70 = (((x305-x306)<x307)|x308);

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x309 = UINT32_MAX;
	static int16_t x310 = INT16_MIN;
	int16_t x311 = INT16_MIN;
	uint32_t t71 = 964308U;

	t71 = (((x309-x310)<x311)|x312);

	if (t71 != 15U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x313 = INT8_MAX;
	uint64_t x314 = UINT64_MAX;
	uint32_t x315 = UINT32_MAX;
	int64_t x316 = -1LL;
	volatile int64_t t72 = 1382730822262LL;

	t72 = (((x313-x314)<x315)|x316);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x317 = 321663U;
	int16_t x318 = -1794;
	int16_t x319 = 9;
	uint64_t t73 = UINT64_MAX;

	t73 = (((x317-x318)<x319)|x320);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x322 = INT16_MIN;
	uint32_t x323 = UINT32_MAX;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (((x321-x322)<x323)|x324);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x325 = -4;
	volatile uint32_t x327 = 27994U;
	int8_t x328 = -1;
	int32_t t75 = 3805537;

	t75 = (((x325-x326)<x327)|x328);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x329 = -1;
	uint16_t x330 = 1322U;
	int8_t x331 = -1;
	int32_t x332 = 4;

	t76 = (((x329-x330)<x331)|x332);

	if (t76 != 5) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x337 = -1;
	volatile int32_t x338 = -1;
	uint64_t x339 = 11251182063951885LLU;
	volatile int32_t t77 = -19727824;

	t77 = (((x337-x338)<x339)|x340);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x342 = UINT32_MAX;
	volatile int64_t t78 = INT64_MIN;

	t78 = (((x341-x342)<x343)|x344);

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x345 = 1U;
	uint32_t x346 = 1241021U;
	volatile uint16_t x347 = 11U;
	int8_t x348 = INT8_MAX;
	int32_t t79 = -27595239;

	t79 = (((x345-x346)<x347)|x348);

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x349 = INT16_MIN;
	static uint8_t x351 = UINT8_MAX;
	int32_t x352 = 4023689;
	int32_t t80 = 8216824;

	t80 = (((x349-x350)<x351)|x352);

	if (t80 != 4023689) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x353 = 2U;
	static int16_t x354 = 5313;
	volatile uint32_t x355 = 5734U;
	int16_t x356 = INT16_MIN;
	volatile int32_t t81 = -232;

	t81 = (((x353-x354)<x355)|x356);

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x357 = UINT16_MAX;
	int64_t x358 = -1LL;
	volatile int64_t x359 = 348485866097LL;
	uint8_t x360 = UINT8_MAX;
	static volatile int32_t t82 = 1;

	t82 = (((x357-x358)<x359)|x360);

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x362 = INT16_MIN;
	int16_t x364 = -1;
	int32_t t83 = 2;

	t83 = (((x361-x362)<x363)|x364);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x365 = INT8_MAX;
	int16_t x366 = 9730;
	int32_t x367 = -221;
	int8_t x368 = -1;
	volatile int32_t t84 = -300;

	t84 = (((x365-x366)<x367)|x368);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x370 = -1;
	int32_t x371 = 188390593;
	volatile uint16_t x372 = 15U;
	int32_t t85 = -622968080;

	t85 = (((x369-x370)<x371)|x372);

	if (t85 != 15) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x373 = -3;
	int32_t x374 = -6;
	int8_t x375 = INT8_MAX;
	int64_t x376 = -1LL;
	volatile int64_t t86 = -37161129659LL;

	t86 = (((x373-x374)<x375)|x376);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x379 = INT32_MIN;
	int64_t x380 = -1LL;

	t87 = (((x377-x378)<x379)|x380);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x382 = -3;
	volatile int64_t x383 = INT64_MAX;
	int8_t x384 = -1;

	t88 = (((x381-x382)<x383)|x384);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x385 = 5U;
	uint32_t x386 = UINT32_MAX;
	uint64_t x387 = UINT64_MAX;
	volatile uint8_t x388 = 48U;
	volatile int32_t t89 = -17;

	t89 = (((x385-x386)<x387)|x388);

	if (t89 != 49) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x389 = 58U;
	int16_t x390 = -1;
	int8_t x391 = 0;
	volatile int64_t x392 = INT64_MAX;
	static volatile int64_t t90 = INT64_MAX;

	t90 = (((x389-x390)<x391)|x392);

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x394 = -218LL;
	uint32_t x396 = 200U;
	volatile uint32_t t91 = 996809U;

	t91 = (((x393-x394)<x395)|x396);

	if (t91 != 200U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x397 = 3U;
	uint16_t x398 = 1374U;
	static volatile int64_t x399 = -1LL;
	volatile int8_t x400 = INT8_MIN;
	int32_t t92 = 474;

	t92 = (((x397-x398)<x399)|x400);

	if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x401 = INT64_MAX;
	int64_t x402 = INT64_MAX;
	uint64_t x404 = 2422687341970668316LLU;

	t93 = (((x401-x402)<x403)|x404);

	if (t93 != 2422687341970668316LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x405 = 3LLU;
	uint16_t x406 = UINT16_MAX;
	static volatile uint32_t t94 = 8U;

	t94 = (((x405-x406)<x407)|x408);

	if (t94 != 76058495U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x409 = INT16_MIN;
	int32_t x410 = INT32_MIN;
	int8_t x411 = 10;
	volatile int32_t t95 = 3065;

	t95 = (((x409-x410)<x411)|x412);

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x413 = 69936124633225982LLU;
	uint8_t x414 = UINT8_MAX;
	volatile int8_t x415 = -1;
	static int16_t x416 = INT16_MIN;
	int32_t t96 = 342221340;

	t96 = (((x413-x414)<x415)|x416);

	if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x417 = INT8_MIN;
	volatile int8_t x418 = -1;
	int64_t x420 = -81297797594044LL;
	int64_t t97 = -8500120808429054LL;

	t97 = (((x417-x418)<x419)|x420);

	if (t97 != -81297797594044LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x425 = -1;
	static int32_t x426 = -1;
	uint32_t x427 = 59706U;
	int32_t x428 = INT32_MIN;
	static volatile int32_t t98 = -5278911;

	t98 = (((x425-x426)<x427)|x428);

	if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x429 = UINT16_MAX;
	uint16_t x430 = 181U;
	volatile uint64_t x431 = UINT64_MAX;
	int64_t x432 = INT64_MIN;
	int64_t t99 = 79010LL;

	t99 = (((x429-x430)<x431)|x432);

	if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
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

