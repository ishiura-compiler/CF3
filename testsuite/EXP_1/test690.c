#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x3 = INT8_MIN;
static int64_t x12 = INT64_MIN;
int8_t x17 = INT8_MIN;
int32_t x20 = INT32_MIN;
int64_t x23 = -1LL;
uint64_t x25 = 72558573966730089LLU;
static int8_t x26 = -1;
int16_t x30 = INT16_MIN;
int64_t x35 = INT64_MIN;
int32_t x36 = -1;
volatile int32_t t9 = -44682;
static int16_t x42 = -1;
volatile int32_t x46 = -32808270;
static uint64_t x47 = 31LLU;
static int16_t x48 = INT16_MIN;
volatile int8_t x57 = -14;
volatile uint64_t x74 = 98690748867LLU;
uint64_t t15 = 506005647LLU;
static volatile int64_t x88 = INT64_MAX;
int64_t x97 = -15LL;
volatile uint64_t t20 = 22323956829349LLU;
static int32_t x105 = INT32_MIN;
static int16_t x110 = INT16_MIN;
volatile uint32_t x116 = 13308606U;
volatile int64_t t24 = -15LL;
int32_t x129 = INT32_MAX;
int32_t x141 = INT32_MIN;
volatile int32_t x149 = -10750451;
static volatile uint16_t x150 = UINT16_MAX;
uint64_t t30 = 1LLU;
static uint32_t x155 = 417294U;
int32_t t33 = 1191746;
uint16_t x167 = 6U;
int64_t x168 = -20777610LL;
uint16_t x169 = UINT16_MAX;
volatile int32_t t35 = -97;
int16_t x177 = -13;
int32_t x181 = INT32_MIN;
static int32_t x182 = -3080662;
static volatile int64_t x187 = -1113483504741LL;
uint64_t x189 = 700923070LLU;
int64_t x192 = INT64_MAX;
int32_t x199 = INT32_MIN;
int64_t x207 = INT64_MIN;
volatile int64_t x210 = -1LL;
static int64_t x213 = INT64_MIN;
static volatile int8_t x221 = INT8_MIN;
int16_t x237 = INT16_MAX;
static volatile int64_t t51 = 1LL;
uint8_t x247 = 4U;
uint32_t x259 = 784U;
static int32_t x270 = INT32_MIN;
int64_t t58 = -16576677645LL;
volatile int8_t x279 = 0;
int8_t x282 = INT8_MAX;
int16_t x284 = 1;
int16_t x290 = -1;
volatile int32_t x293 = INT32_MAX;
uint64_t x296 = UINT64_MAX;
int16_t x307 = INT16_MAX;
static int64_t x312 = -2694268788LL;
volatile uint8_t x316 = 0U;
uint64_t x320 = 136568371674151137LLU;
uint16_t x321 = 49U;
int8_t x324 = INT8_MAX;
volatile uint32_t t72 = 7282U;
volatile uint64_t t73 = 15244337752LLU;
volatile int64_t x342 = INT64_MIN;
uint32_t t75 = 18U;
uint16_t x349 = UINT16_MAX;
int8_t x363 = INT8_MIN;
volatile int32_t t78 = 419459;
uint64_t x370 = 5113925LLU;
static uint64_t t80 = 243397588455893727LLU;
volatile int64_t t81 = -238LL;
int64_t x381 = INT64_MAX;
int8_t x384 = 1;
int32_t x387 = 444;
uint16_t x391 = UINT16_MAX;
int16_t x396 = INT16_MIN;
uint64_t t85 = 640925712507LLU;
static int64_t x404 = INT64_MIN;
int64_t x406 = -1LL;
static int32_t x408 = -81975068;
int32_t t90 = 211037020;
int16_t x423 = INT16_MIN;
uint32_t x425 = UINT32_MAX;
volatile int8_t x428 = INT8_MIN;
volatile int64_t t94 = -30LL;
volatile uint16_t x433 = 12057U;
int32_t x434 = INT32_MIN;
uint64_t t96 = 68222LLU;
uint64_t x451 = UINT64_MAX;
int32_t x452 = INT32_MAX;
volatile int64_t x453 = INT64_MAX;
volatile uint64_t t99 = 19924302380961756LLU;


void f0(void) {
	int32_t x1 = -1;
	static uint64_t x2 = 13295LLU;
	int8_t x4 = INT8_MIN;
	volatile uint64_t t0 = 1659557LLU;

	t0 = (((x1%x2)-x3)+x4);

	if (t0 != 3095LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MAX;
	int64_t x6 = INT64_MAX;
	int16_t x7 = INT16_MIN;
	static int32_t x8 = INT32_MIN;
	volatile int64_t t1 = 1121717LL;

	t1 = (((x5%x6)-x7)+x8);

	if (t1 != -2147418113LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 120U;
	uint32_t x10 = 13102306U;
	uint64_t x11 = 120LLU;
	uint64_t t2 = 3007LLU;

	t2 = (((x9%x10)-x11)+x12);

	if (t2 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -1;
	uint64_t x14 = 129586843LLU;
	volatile uint16_t x15 = 6U;
	uint64_t x16 = 100457LLU;
	uint64_t t3 = 659094500LLU;

	t3 = (((x13%x14)-x15)+x16);

	if (t3 != 63300802LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = UINT32_MAX;
	uint16_t x19 = 1U;
	volatile uint32_t t4 = 3374544U;

	t4 = (((x17%x18)-x19)+x20);

	if (t4 != 2147483519U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int16_t x22 = INT16_MIN;
	static int8_t x24 = -1;
	static int64_t t5 = 17LL;

	t5 = (((x21%x22)-x23)+x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x27 = INT16_MIN;
	int16_t x28 = INT16_MAX;
	uint64_t t6 = 0LLU;

	t6 = (((x25%x26)-x27)+x28);

	if (t6 != 72558573966795624LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	static uint32_t x31 = UINT32_MAX;
	int16_t x32 = INT16_MIN;
	volatile uint32_t t7 = 1159374U;

	t7 = (((x29%x30)-x31)+x32);

	if (t7 != 4294934529U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -3074;
	volatile uint8_t x34 = 6U;
	volatile int64_t t8 = -59842755LL;

	t8 = (((x33%x34)-x35)+x36);

	if (t8 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 9;
	int16_t x38 = INT16_MIN;
	int8_t x39 = INT8_MIN;
	int8_t x40 = -6;

	t9 = (((x37%x38)-x39)+x40);

	if (t9 != 131) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	volatile int32_t x43 = -31;
	int16_t x44 = -1;
	static volatile int32_t t10 = -275781369;

	t10 = (((x41%x42)-x43)+x44);

	if (t10 != 30) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	volatile uint64_t t11 = 4LLU;

	t11 = (((x45%x46)-x47)+x48);

	if (t11 != 18446744073709518816LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	int16_t x50 = 6332;
	uint64_t x51 = 10649LLU;
	static int8_t x52 = INT8_MAX;
	uint64_t t12 = 538394642953LLU;

	t12 = (((x49%x50)-x51)+x52);

	if (t12 != 18446744073709541093LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x58 = 3U;
	int16_t x59 = INT16_MIN;
	uint8_t x60 = UINT8_MAX;
	volatile int32_t t13 = 596907;

	t13 = (((x57%x58)-x59)+x60);

	if (t13 != 33021) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = UINT32_MAX;
	int8_t x66 = INT8_MAX;
	volatile int16_t x67 = INT16_MAX;
	static int16_t x68 = INT16_MIN;
	static volatile uint32_t t14 = 3753U;

	t14 = (((x65%x66)-x67)+x68);

	if (t14 != 4294901776U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x73 = -1;
	static int8_t x75 = 2;
	int8_t x76 = -1;

	t15 = (((x73%x74)-x75)+x76);

	if (t15 != 54337318338LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = 8899;
	int16_t x82 = INT16_MIN;
	int8_t x83 = INT8_MIN;
	int8_t x84 = -1;
	int32_t t16 = 742725146;

	t16 = (((x81%x82)-x83)+x84);

	if (t16 != 9026) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x85 = INT16_MIN;
	uint16_t x86 = 5U;
	uint16_t x87 = 1U;
	volatile int64_t t17 = 285807748693LL;

	t17 = (((x85%x86)-x87)+x88);

	if (t17 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x89 = 6607U;
	uint32_t x90 = 43230335U;
	uint64_t x91 = 1LLU;
	int64_t x92 = -1LL;
	uint64_t t18 = 249144008263128305LLU;

	t18 = (((x89%x90)-x91)+x92);

	if (t18 != 6605LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x93 = 9U;
	int32_t x94 = -27757254;
	int8_t x95 = INT8_MIN;
	uint32_t x96 = 97U;
	uint32_t t19 = 46U;

	t19 = (((x93%x94)-x95)+x96);

	if (t19 != 234U) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x98 = -45;
	static uint64_t x99 = 24666787115LLU;
	int32_t x100 = INT32_MIN;

	t20 = (((x97%x98)-x99)+x100);

	if (t20 != 18446744046895280838LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x106 = INT32_MIN;
	static int32_t x107 = 4500981;
	uint32_t x108 = UINT32_MAX;
	volatile uint32_t t21 = 7756538U;

	t21 = (((x105%x106)-x107)+x108);

	if (t21 != 4290466314U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = -1;
	int32_t x111 = -1;
	int16_t x112 = INT16_MAX;
	volatile int32_t t22 = 55;

	t22 = (((x109%x110)-x111)+x112);

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x113 = UINT64_MAX;
	volatile uint16_t x114 = UINT16_MAX;
	int16_t x115 = -1;
	volatile uint64_t t23 = 2977364939155LLU;

	t23 = (((x113%x114)-x115)+x116);

	if (t23 != 13308607LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = -1;
	volatile int8_t x118 = INT8_MIN;
	int32_t x119 = INT32_MIN;
	int64_t x120 = INT64_MIN;

	t24 = (((x117%x118)-x119)+x120);

	if (t24 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x125 = 12721998823LL;
	static uint64_t x126 = 2049994LLU;
	int16_t x127 = INT16_MIN;
	int32_t x128 = INT32_MAX;
	volatile uint64_t t25 = 2602394574LLU;

	t25 = (((x125%x126)-x127)+x128);

	if (t25 != 2149302468LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x130 = 55462;
	int8_t x131 = -14;
	uint8_t x132 = 29U;
	int32_t t26 = 7118;

	t26 = (((x129%x130)-x131)+x132);

	if (t26 != 50512) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x133 = 6;
	static int32_t x134 = -45339208;
	uint8_t x135 = 10U;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t27 = 102472430;

	t27 = (((x133%x134)-x135)+x136);

	if (t27 != 251) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x142 = INT32_MAX;
	int64_t x143 = INT64_MIN;
	int8_t x144 = INT8_MIN;
	int64_t t28 = 16254656038466966LL;

	t28 = (((x141%x142)-x143)+x144);

	if (t28 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x145 = 35617;
	volatile uint16_t x146 = UINT16_MAX;
	static int16_t x147 = INT16_MAX;
	uint32_t x148 = 31911749U;
	volatile uint32_t t29 = 126390U;

	t29 = (((x145%x146)-x147)+x148);

	if (t29 != 31914599U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x151 = UINT64_MAX;
	volatile uint16_t x152 = 13472U;

	t30 = (((x149%x150)-x151)+x152);

	if (t30 != 10762LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x153 = INT8_MAX;
	int8_t x154 = INT8_MIN;
	int8_t x156 = INT8_MAX;
	static uint32_t t31 = 30519U;

	t31 = (((x153%x154)-x155)+x156);

	if (t31 != 4294550256U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = -1;
	volatile uint16_t x158 = 12U;
	int8_t x159 = -1;
	uint32_t x160 = UINT32_MAX;
	uint32_t t32 = UINT32_MAX;

	t32 = (((x157%x158)-x159)+x160);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x161 = -2;
	uint16_t x162 = 31U;
	int16_t x163 = INT16_MAX;
	int32_t x164 = -1;

	t33 = (((x161%x162)-x163)+x164);

	if (t33 != -32770) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x165 = -1;
	uint64_t x166 = 15190878849486497LLU;
	volatile uint64_t t34 = 94121LLU;

	t34 = (((x165%x166)-x167)+x168);

	if (t34 != 5017150412166641LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x170 = -104294;
	volatile int16_t x171 = INT16_MIN;
	static int8_t x172 = INT8_MIN;

	t35 = (((x169%x170)-x171)+x172);

	if (t35 != 98175) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x173 = UINT32_MAX;
	static volatile uint64_t x174 = 750434747016856LLU;
	static uint32_t x175 = UINT32_MAX;
	static int64_t x176 = 274068495814744392LL;
	volatile uint64_t t36 = 83191954LLU;

	t36 = (((x173%x174)-x175)+x176);

	if (t36 != 274068495814744392LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x178 = 13763347LLU;
	volatile uint32_t x179 = 7940529U;
	uint16_t x180 = UINT16_MAX;
	static volatile uint64_t t37 = 29031533155275LLU;

	t37 = (((x177%x178)-x179)+x180);

	if (t37 != 18446744073707972642LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x183 = -1;
	uint32_t x184 = 495586U;
	uint32_t t38 = 1567U;

	t38 = (((x181%x182)-x183)+x184);

	if (t38 != 233353U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x185 = 14468U;
	static uint32_t x186 = 1467563U;
	static int16_t x188 = INT16_MAX;
	int64_t t39 = 452649248029LL;

	t39 = (((x185%x186)-x187)+x188);

	if (t39 != 1113483551976LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x190 = INT16_MIN;
	uint32_t x191 = 1940015374U;
	volatile uint64_t t40 = 12168625452404097LLU;

	t40 = (((x189%x190)-x191)+x192);

	if (t40 != 9223372035615683503LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x193 = -1;
	int8_t x194 = 2;
	static int16_t x195 = -940;
	int64_t x196 = INT64_MIN;
	volatile int64_t t41 = 15547074102101693LL;

	t41 = (((x193%x194)-x195)+x196);

	if (t41 != -9223372036854774869LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x197 = INT32_MAX;
	int64_t x198 = 530868191025715LL;
	volatile int8_t x200 = INT8_MAX;
	volatile int64_t t42 = 662067967LL;

	t42 = (((x197%x198)-x199)+x200);

	if (t42 != 4294967422LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x205 = 608458348919LLU;
	uint8_t x206 = UINT8_MAX;
	static volatile int64_t x208 = -1LL;
	volatile uint64_t t43 = 14874LLU;

	t43 = (((x205%x206)-x207)+x208);

	if (t43 != 9223372036854775866LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x209 = 170U;
	uint16_t x211 = 1U;
	int8_t x212 = -44;
	volatile int64_t t44 = 443371796146LL;

	t44 = (((x209%x210)-x211)+x212);

	if (t44 != -45LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x214 = UINT8_MAX;
	uint16_t x215 = UINT16_MAX;
	uint16_t x216 = UINT16_MAX;
	volatile int64_t t45 = 15507151849626LL;

	t45 = (((x213%x214)-x215)+x216);

	if (t45 != -128LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x217 = -1;
	int32_t x218 = 109438799;
	int8_t x219 = INT8_MIN;
	int64_t x220 = INT64_MIN;
	volatile int64_t t46 = -49163247350LL;

	t46 = (((x217%x218)-x219)+x220);

	if (t46 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x222 = 2939;
	int32_t x223 = -1;
	int64_t x224 = INT64_MAX;
	static volatile int64_t t47 = 45LL;

	t47 = (((x221%x222)-x223)+x224);

	if (t47 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x229 = 6;
	uint16_t x230 = UINT16_MAX;
	volatile uint8_t x231 = UINT8_MAX;
	uint32_t x232 = UINT32_MAX;
	volatile uint32_t t48 = 1229399U;

	t48 = (((x229%x230)-x231)+x232);

	if (t48 != 4294967046U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x233 = 51U;
	int8_t x234 = INT8_MIN;
	uint16_t x235 = 1U;
	int8_t x236 = 0;
	volatile int32_t t49 = 25;

	t49 = (((x233%x234)-x235)+x236);

	if (t49 != 50) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x238 = -1;
	int64_t x239 = -1LL;
	uint32_t x240 = UINT32_MAX;
	int64_t t50 = 1582859939842464689LL;

	t50 = (((x237%x238)-x239)+x240);

	if (t50 != 4294967296LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x241 = INT64_MAX;
	uint16_t x242 = 13U;
	int32_t x243 = INT32_MAX;
	static int64_t x244 = -129238183221927LL;

	t51 = (((x241%x242)-x243)+x244);

	if (t51 != -129240330705567LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x245 = UINT32_MAX;
	static int64_t x246 = INT64_MAX;
	uint64_t x248 = 8226243144LLU;
	uint64_t t52 = 390LLU;

	t52 = (((x245%x246)-x247)+x248);

	if (t52 != 12521210435LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x253 = UINT8_MAX;
	static int16_t x254 = INT16_MIN;
	int8_t x255 = INT8_MAX;
	volatile uint8_t x256 = 0U;
	int32_t t53 = 6;

	t53 = (((x253%x254)-x255)+x256);

	if (t53 != 128) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x257 = -6194;
	uint8_t x258 = 1U;
	int32_t x260 = -1;
	uint32_t t54 = 28577807U;

	t54 = (((x257%x258)-x259)+x260);

	if (t54 != 4294966511U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x261 = INT64_MAX;
	int64_t x262 = INT64_MAX;
	int32_t x263 = 0;
	int16_t x264 = -1;
	int64_t t55 = 22LL;

	t55 = (((x261%x262)-x263)+x264);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x265 = INT32_MIN;
	int64_t x266 = 170545580686LL;
	uint64_t x267 = 152LLU;
	volatile int64_t x268 = 2591902LL;
	volatile uint64_t t56 = 31LLU;

	t56 = (((x265%x266)-x267)+x268);

	if (t56 != 18446744071564659718LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x269 = UINT32_MAX;
	int16_t x271 = INT16_MAX;
	uint32_t x272 = UINT32_MAX;
	static uint32_t t57 = 42860U;

	t57 = (((x269%x270)-x271)+x272);

	if (t57 != 2147450879U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x273 = -1LL;
	uint16_t x274 = 402U;
	uint32_t x275 = 945U;
	volatile uint8_t x276 = 13U;

	t58 = (((x273%x274)-x275)+x276);

	if (t58 != -933LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x277 = 2291720947205374348LL;
	volatile int8_t x278 = INT8_MIN;
	static volatile uint16_t x280 = 82U;
	int64_t t59 = 2201250246822801606LL;

	t59 = (((x277%x278)-x279)+x280);

	if (t59 != 94LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x281 = INT32_MIN;
	int64_t x283 = -1346743845610064641LL;
	int64_t t60 = 12074727591181687LL;

	t60 = (((x281%x282)-x283)+x284);

	if (t60 != 1346743845610064634LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x289 = -1;
	uint8_t x291 = UINT8_MAX;
	uint8_t x292 = UINT8_MAX;
	int32_t t61 = -1;

	t61 = (((x289%x290)-x291)+x292);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x294 = 3720097489LLU;
	volatile int64_t x295 = INT64_MAX;
	volatile uint64_t t62 = 31193LLU;

	t62 = (((x293%x294)-x295)+x296);

	if (t62 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x297 = 314049U;
	volatile uint64_t x298 = 5192398195346780424LLU;
	static volatile uint8_t x299 = 2U;
	int8_t x300 = -1;
	volatile uint64_t t63 = 459413LLU;

	t63 = (((x297%x298)-x299)+x300);

	if (t63 != 314046LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x301 = UINT32_MAX;
	static uint64_t x302 = 156LLU;
	uint16_t x303 = UINT16_MAX;
	int8_t x304 = INT8_MIN;
	static uint64_t t64 = 30LLU;

	t64 = (((x301%x302)-x303)+x304);

	if (t64 != 18446744073709486052LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x305 = 0;
	static int64_t x306 = INT64_MAX;
	int16_t x308 = -396;
	static int64_t t65 = -44057673261938152LL;

	t65 = (((x305%x306)-x307)+x308);

	if (t65 != -33163LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x309 = INT32_MIN;
	volatile int8_t x310 = INT8_MIN;
	uint64_t x311 = 531049742LLU;
	volatile uint64_t t66 = 110413LLU;

	t66 = (((x309%x310)-x311)+x312);

	if (t66 != 18446744070484233086LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x313 = INT64_MIN;
	static uint16_t x314 = UINT16_MAX;
	int16_t x315 = 0;
	volatile int64_t t67 = -10049571LL;

	t67 = (((x313%x314)-x315)+x316);

	if (t67 != -32768LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x317 = INT64_MAX;
	uint64_t x318 = UINT64_MAX;
	volatile int16_t x319 = INT16_MIN;
	uint64_t t68 = 4LLU;

	t68 = (((x317%x318)-x319)+x320);

	if (t68 != 9359940408528959712LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x322 = INT16_MIN;
	volatile int32_t x323 = INT32_MAX;
	static volatile int32_t t69 = -181419;

	t69 = (((x321%x322)-x323)+x324);

	if (t69 != -2147483471) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x325 = INT32_MIN;
	int64_t x326 = INT64_MIN;
	volatile uint16_t x327 = 985U;
	static uint32_t x328 = UINT32_MAX;
	int64_t t70 = -4740LL;

	t70 = (((x325%x326)-x327)+x328);

	if (t70 != 2147482662LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x329 = -1;
	static int16_t x330 = 25;
	int8_t x331 = -1;
	int64_t x332 = 113LL;
	static int64_t t71 = 397496029017814LL;

	t71 = (((x329%x330)-x331)+x332);

	if (t71 != 113LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x333 = INT16_MIN;
	volatile uint32_t x334 = UINT32_MAX;
	uint32_t x335 = 164359847U;
	int8_t x336 = INT8_MAX;

	t72 = (((x333%x334)-x335)+x336);

	if (t72 != 4130574808U) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x337 = INT16_MAX;
	uint64_t x338 = 4626524LLU;
	static volatile int32_t x339 = -397428;
	int8_t x340 = -1;

	t73 = (((x337%x338)-x339)+x340);

	if (t73 != 430194LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x341 = UINT32_MAX;
	int16_t x343 = INT16_MAX;
	int32_t x344 = -1037121113;
	volatile int64_t t74 = -22443LL;

	t74 = (((x341%x342)-x343)+x344);

	if (t74 != 3257813415LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x345 = UINT32_MAX;
	uint8_t x346 = UINT8_MAX;
	int16_t x347 = INT16_MIN;
	int16_t x348 = INT16_MIN;

	t75 = (((x345%x346)-x347)+x348);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x350 = 4;
	volatile int16_t x351 = 863;
	static volatile uint16_t x352 = 242U;
	int32_t t76 = -48;

	t76 = (((x349%x350)-x351)+x352);

	if (t76 != -618) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x357 = INT16_MIN;
	int16_t x358 = 10283;
	uint8_t x359 = 117U;
	static uint64_t x360 = 2425270420LLU;
	uint64_t t77 = 14445LLU;

	t77 = (((x357%x358)-x359)+x360);

	if (t77 != 2425268384LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x361 = 1;
	static uint8_t x362 = UINT8_MAX;
	int8_t x364 = -1;

	t78 = (((x361%x362)-x363)+x364);

	if (t78 != 128) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x365 = INT8_MIN;
	volatile int8_t x366 = 1;
	int64_t x367 = -3525106LL;
	int64_t x368 = -37870790LL;
	volatile int64_t t79 = 9516626LL;

	t79 = (((x365%x366)-x367)+x368);

	if (t79 != -34345684LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x369 = 5582;
	static volatile uint64_t x371 = UINT64_MAX;
	uint8_t x372 = 3U;

	t80 = (((x369%x370)-x371)+x372);

	if (t80 != 5586LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x377 = -1;
	uint32_t x378 = UINT32_MAX;
	int32_t x379 = 2878;
	int64_t x380 = -1LL;

	t81 = (((x377%x378)-x379)+x380);

	if (t81 != 4294964417LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x382 = -23;
	int8_t x383 = -1;
	int64_t t82 = 11051LL;

	t82 = (((x381%x382)-x383)+x384);

	if (t82 != 4LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x385 = 51;
	static uint8_t x386 = 1U;
	int8_t x388 = INT8_MAX;
	int32_t t83 = -168;

	t83 = (((x385%x386)-x387)+x388);

	if (t83 != -317) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x389 = -1LL;
	static int16_t x390 = 1;
	int64_t x392 = 4107917LL;
	int64_t t84 = 511LL;

	t84 = (((x389%x390)-x391)+x392);

	if (t84 != 4042382LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x393 = INT32_MAX;
	uint64_t x394 = 9389668LLU;
	int32_t x395 = -1;

	t85 = (((x393%x394)-x395)+x396);

	if (t85 != 6606576LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x397 = INT8_MIN;
	volatile int32_t x398 = INT32_MAX;
	volatile int8_t x399 = 0;
	int32_t x400 = -1;
	volatile int32_t t86 = 25377625;

	t86 = (((x397%x398)-x399)+x400);

	if (t86 != -129) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x401 = INT64_MIN;
	int8_t x402 = INT8_MIN;
	int64_t x403 = -1LL;
	volatile int64_t t87 = -53350965LL;

	t87 = (((x401%x402)-x403)+x404);

	if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x405 = INT8_MAX;
	volatile int16_t x407 = INT16_MIN;
	volatile int64_t t88 = 11516723LL;

	t88 = (((x405%x406)-x407)+x408);

	if (t88 != -81942300LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x409 = -1;
	uint32_t x410 = 119U;
	int32_t x411 = 386411364;
	static int16_t x412 = INT16_MIN;
	volatile uint32_t t89 = 13157590U;

	t89 = (((x409%x410)-x411)+x412);

	if (t89 != 3908523181U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x413 = 11U;
	static int16_t x414 = 6;
	uint16_t x415 = UINT16_MAX;
	static volatile uint8_t x416 = UINT8_MAX;

	t90 = (((x413%x414)-x415)+x416);

	if (t90 != -65275) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x417 = INT32_MAX;
	int32_t x418 = -1;
	int64_t x419 = 419274340046503LL;
	int8_t x420 = INT8_MAX;
	int64_t t91 = 1LL;

	t91 = (((x417%x418)-x419)+x420);

	if (t91 != -419274340046376LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x421 = INT8_MAX;
	int16_t x422 = -1;
	static uint16_t x424 = 45U;
	volatile int32_t t92 = 15;

	t92 = (((x421%x422)-x423)+x424);

	if (t92 != 32813) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x426 = INT16_MIN;
	volatile int64_t x427 = -2078215LL;
	static volatile int64_t t93 = 3424340947086933887LL;

	t93 = (((x425%x426)-x427)+x428);

	if (t93 != 2110854LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x429 = 73311U;
	int64_t x430 = INT64_MAX;
	volatile int8_t x431 = INT8_MIN;
	int8_t x432 = -28;

	t94 = (((x429%x430)-x431)+x432);

	if (t94 != 73411LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x435 = UINT32_MAX;
	int32_t x436 = INT32_MAX;
	uint32_t t95 = 61U;

	t95 = (((x433%x434)-x435)+x436);

	if (t95 != 2147495705U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x445 = -1LL;
	int16_t x446 = INT16_MAX;
	static volatile int64_t x447 = -1LL;
	uint64_t x448 = 12222610LLU;

	t96 = (((x445%x446)-x447)+x448);

	if (t96 != 12222610LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x449 = UINT16_MAX;
	int64_t x450 = INT64_MIN;
	uint64_t t97 = 1685LLU;

	t97 = (((x449%x450)-x451)+x452);

	if (t97 != 2147549183LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x454 = 3823475261LL;
	static int16_t x455 = INT16_MIN;
	uint32_t x456 = 27769U;
	volatile int64_t t98 = 671LL;

	t98 = (((x453%x454)-x455)+x456);

	if (t98 != 3605754688LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x457 = 821333791879719718LLU;
	static int64_t x458 = -1LL;
	static int64_t x459 = -1LL;
	uint64_t x460 = 41102731LLU;

	t99 = (((x457%x458)-x459)+x460);

	if (t99 != 821333791920822450LLU) { NG(); } else { ; }
	
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

