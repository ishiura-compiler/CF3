#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = 1;
int32_t x12 = INT32_MAX;
static volatile int32_t t2 = 7;
uint16_t x15 = 31U;
int8_t x23 = 0;
volatile int32_t t7 = -11;
static int64_t x33 = INT64_MAX;
static int8_t x35 = -1;
static volatile int32_t t8 = -76552;
volatile int32_t t10 = -8;
static volatile int8_t x46 = 12;
volatile int32_t t11 = -1;
uint8_t x49 = 13U;
int32_t x50 = INT32_MIN;
uint8_t x62 = 19U;
uint64_t x65 = UINT64_MAX;
int64_t x77 = INT64_MAX;
static int16_t x78 = INT16_MIN;
static int8_t x83 = INT8_MIN;
int32_t t21 = 193;
static volatile uint32_t x93 = 51587U;
static int8_t x96 = -1;
int16_t x110 = INT16_MIN;
int16_t x111 = INT16_MIN;
volatile int16_t x117 = INT16_MIN;
int8_t x120 = INT8_MIN;
int64_t x126 = -1LL;
int64_t x127 = -14165562LL;
volatile int32_t t34 = 12;
volatile int32_t t35 = -182987932;
static volatile int32_t t36 = -15723642;
volatile int32_t t37 = 833778271;
static volatile int16_t x153 = -3;
volatile int16_t x163 = INT16_MIN;
int32_t t40 = -15770263;
static uint32_t x167 = 1085U;
volatile int32_t t44 = -46004;
volatile int32_t t46 = 761690;
uint8_t x204 = UINT8_MAX;
uint16_t x213 = UINT16_MAX;
volatile int16_t x223 = INT16_MIN;
int8_t x242 = INT8_MAX;
volatile uint64_t x243 = 740641LLU;
int64_t x253 = INT64_MIN;
static int32_t x254 = INT32_MIN;
volatile int32_t x256 = INT32_MIN;
int32_t t61 = -178;
int32_t t62 = 425;
uint32_t x268 = UINT32_MAX;
int8_t x269 = INT8_MIN;
static volatile int32_t t65 = -30294738;
volatile uint32_t x273 = 43U;
int8_t x279 = -1;
static uint64_t x288 = 5228268299164177LLU;
volatile int32_t t68 = 27884;
volatile uint8_t x292 = 73U;
int32_t x304 = 31998;
int16_t x309 = 42;
int16_t x311 = -1;
volatile int32_t t74 = 0;
static int32_t t76 = -74852165;
int16_t x321 = -1;
int16_t x323 = INT16_MAX;
uint64_t x324 = 16402561892787LLU;
volatile uint16_t x330 = 62U;
volatile int64_t x334 = 4273938424638971848LL;
int16_t x336 = -1;
uint8_t x338 = 9U;
volatile int32_t t81 = 375119;
int32_t t82 = -106;
volatile int32_t t83 = 1;
uint32_t x362 = UINT32_MAX;
static uint64_t x365 = 2971761934740653LLU;
static uint16_t x366 = 884U;
static volatile uint32_t x373 = 867U;
volatile int32_t t89 = 1640163;
int16_t x383 = 7;
static volatile int32_t t90 = 108671;
volatile int64_t x385 = INT64_MIN;
int8_t x388 = INT8_MIN;
uint32_t x403 = UINT32_MAX;
static uint32_t x405 = 411799U;
uint32_t x408 = UINT32_MAX;
int64_t x412 = INT64_MIN;
int32_t x417 = -1;


void f0(void) {
	int32_t x1 = -1;
	static int8_t x2 = 32;
	volatile int16_t x3 = INT16_MIN;
	int16_t x4 = -13657;
	static volatile int32_t t0 = -148609454;

	t0 = (((x1%x2)-x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x6 = UINT32_MAX;
	volatile uint16_t x7 = UINT16_MAX;
	uint32_t x8 = UINT32_MAX;
	static int32_t t1 = 953;

	t1 = (((x5%x6)-x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x9 = UINT16_MAX;
	volatile uint64_t x10 = UINT64_MAX;
	static int8_t x11 = 9;

	t2 = (((x9%x10)-x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 71354029U;
	uint32_t x14 = 2202U;
	static int32_t x16 = INT32_MAX;
	int32_t t3 = 276;

	t3 = (((x13%x14)-x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int32_t x18 = INT32_MAX;
	int8_t x19 = INT8_MAX;
	int64_t x20 = INT64_MIN;
	static int32_t t4 = 128596;

	t4 = (((x17%x18)-x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -5;
	int8_t x22 = INT8_MIN;
	uint32_t x24 = 1330U;
	int32_t t5 = 31;

	t5 = (((x21%x22)-x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	volatile int16_t x26 = 4671;
	volatile uint64_t x27 = 1575025398564LLU;
	static int8_t x28 = 15;
	volatile int32_t t6 = 1;

	t6 = (((x25%x26)-x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 3738U;
	static uint16_t x30 = UINT16_MAX;
	static int8_t x31 = -1;
	static int16_t x32 = -446;

	t7 = (((x29%x30)-x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = 10160670LL;
	uint16_t x36 = UINT16_MAX;

	t8 = (((x33%x34)-x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 711U;
	uint32_t x38 = UINT32_MAX;
	static int16_t x39 = INT16_MIN;
	int32_t x40 = 1;
	int32_t t9 = 1;

	t9 = (((x37%x38)-x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 276419858594LLU;
	static volatile uint8_t x42 = 1U;
	volatile uint64_t x43 = 261456025201882LLU;
	volatile int16_t x44 = 11053;

	t10 = (((x41%x42)-x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 4U;
	uint32_t x47 = 22922872U;
	int64_t x48 = INT64_MAX;

	t11 = (((x45%x46)-x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x51 = 6;
	volatile int32_t x52 = -1;
	volatile int32_t t12 = -16343;

	t12 = (((x49%x50)-x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	int16_t x54 = -1;
	uint8_t x55 = 11U;
	int16_t x56 = 3997;
	int32_t t13 = 90473710;

	t13 = (((x53%x54)-x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	int32_t x58 = INT32_MAX;
	int8_t x59 = INT8_MIN;
	volatile int8_t x60 = INT8_MIN;
	int32_t t14 = -13159716;

	t14 = (((x57%x58)-x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	int64_t x63 = -685246048LL;
	volatile int16_t x64 = INT16_MAX;
	int32_t t15 = -1213414;

	t15 = (((x61%x62)-x63)<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = INT16_MIN;
	static int64_t x67 = INT64_MIN;
	int8_t x68 = -1;
	volatile int32_t t16 = -5;

	t16 = (((x65%x66)-x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	static uint8_t x70 = 30U;
	int32_t x71 = -15;
	int32_t x72 = -1;
	volatile int32_t t17 = 1;

	t17 = (((x69%x70)-x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 129637411U;
	int8_t x74 = 1;
	int32_t x75 = -1;
	uint16_t x76 = 1U;
	int32_t t18 = 22046;

	t18 = (((x73%x74)-x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x79 = -1LL;
	volatile uint32_t x80 = 419514230U;
	int32_t t19 = -1655;

	t19 = (((x77%x78)-x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	volatile int8_t x82 = INT8_MIN;
	static volatile uint64_t x84 = 46723984720027243LLU;
	volatile int32_t t20 = -2;

	t20 = (((x81%x82)-x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	uint16_t x86 = 55U;
	uint32_t x87 = 100515191U;
	uint16_t x88 = 11794U;

	t21 = (((x85%x86)-x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = INT32_MIN;
	volatile int8_t x90 = INT8_MAX;
	static int16_t x91 = -1;
	uint32_t x92 = 1516U;
	volatile int32_t t22 = -429;

	t22 = (((x89%x90)-x91)<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = INT32_MIN;
	volatile uint16_t x95 = 4U;
	int32_t t23 = 990872;

	t23 = (((x93%x94)-x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	int8_t x98 = INT8_MAX;
	volatile uint32_t x99 = 1498579U;
	uint32_t x100 = UINT32_MAX;
	int32_t t24 = 31;

	t24 = (((x97%x98)-x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x101 = UINT64_MAX;
	uint8_t x102 = UINT8_MAX;
	uint32_t x103 = 500532978U;
	uint16_t x104 = 12U;
	static int32_t t25 = -11942;

	t25 = (((x101%x102)-x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1674231513033LL;
	int16_t x106 = -1;
	int8_t x107 = INT8_MAX;
	int32_t x108 = -1;
	int32_t t26 = -822522;

	t26 = (((x105%x106)-x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = INT64_MIN;
	uint16_t x112 = 0U;
	static volatile int32_t t27 = -26;

	t27 = (((x109%x110)-x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x113 = 4260624959822439LL;
	volatile int8_t x114 = -9;
	uint32_t x115 = UINT32_MAX;
	uint32_t x116 = UINT32_MAX;
	static int32_t t28 = -687586135;

	t28 = (((x113%x114)-x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = -1;
	int64_t x119 = 175LL;
	volatile int32_t t29 = 126731;

	t29 = (((x117%x118)-x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	int8_t x122 = 3;
	uint8_t x123 = 1U;
	int8_t x124 = INT8_MAX;
	int32_t t30 = -18023609;

	t30 = (((x121%x122)-x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = -6;
	uint16_t x128 = UINT16_MAX;
	int32_t t31 = -2;

	t31 = (((x125%x126)-x127)<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x129 = 3U;
	int64_t x130 = 5171225LL;
	volatile uint16_t x131 = UINT16_MAX;
	int16_t x132 = 13;
	int32_t t32 = 1;

	t32 = (((x129%x130)-x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = -23;
	int32_t x134 = INT32_MIN;
	volatile int32_t x135 = -1;
	int16_t x136 = -9764;
	volatile int32_t t33 = -1;

	t33 = (((x133%x134)-x135)<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = UINT64_MAX;
	uint64_t x138 = 11LLU;
	volatile uint32_t x139 = UINT32_MAX;
	int32_t x140 = INT32_MIN;

	t34 = (((x137%x138)-x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = INT32_MIN;
	static int16_t x142 = INT16_MIN;
	int64_t x143 = -1LL;
	int64_t x144 = INT64_MIN;

	t35 = (((x141%x142)-x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	uint8_t x146 = 25U;
	int8_t x147 = INT8_MIN;
	int64_t x148 = -235913232082621075LL;

	t36 = (((x145%x146)-x147)<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	int32_t x150 = INT32_MAX;
	static volatile int8_t x151 = INT8_MIN;
	int8_t x152 = -1;

	t37 = (((x149%x150)-x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x154 = INT32_MIN;
	int64_t x155 = -40LL;
	int64_t x156 = -35300733LL;
	int32_t t38 = -3855;

	t38 = (((x153%x154)-x155)<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = INT16_MIN;
	volatile uint64_t x158 = UINT64_MAX;
	volatile int8_t x159 = -1;
	volatile uint64_t x160 = UINT64_MAX;
	volatile int32_t t39 = -947;

	t39 = (((x157%x158)-x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = INT64_MIN;
	uint16_t x162 = 25063U;
	uint64_t x164 = UINT64_MAX;

	t40 = (((x161%x162)-x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	static volatile int8_t x166 = INT8_MIN;
	int64_t x168 = -409782LL;
	volatile int32_t t41 = 5;

	t41 = (((x165%x166)-x167)<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	int8_t x170 = INT8_MIN;
	int32_t x171 = -271;
	int64_t x172 = 2438720960810LL;
	volatile int32_t t42 = 103374382;

	t42 = (((x169%x170)-x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = -1;
	int32_t x174 = INT32_MIN;
	int16_t x175 = INT16_MIN;
	int8_t x176 = INT8_MIN;
	volatile int32_t t43 = 58549;

	t43 = (((x173%x174)-x175)<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -4467448948751LL;
	int16_t x178 = -1;
	int16_t x179 = -1;
	static int64_t x180 = 74LL;

	t44 = (((x177%x178)-x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = INT32_MIN;
	int32_t x182 = INT32_MAX;
	uint32_t x183 = 646152U;
	int16_t x184 = INT16_MIN;
	volatile int32_t t45 = 874;

	t45 = (((x181%x182)-x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	volatile uint64_t x186 = UINT64_MAX;
	static uint32_t x187 = UINT32_MAX;
	int8_t x188 = INT8_MAX;

	t46 = (((x185%x186)-x187)<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = INT16_MIN;
	int8_t x190 = 1;
	int16_t x191 = INT16_MAX;
	int32_t x192 = INT32_MIN;
	static int32_t t47 = -30;

	t47 = (((x189%x190)-x191)<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1840;
	static uint64_t x194 = 20342291499LLU;
	volatile int16_t x195 = INT16_MIN;
	int32_t x196 = INT32_MAX;
	static volatile int32_t t48 = 878716552;

	t48 = (((x193%x194)-x195)<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = INT32_MIN;
	uint8_t x198 = 1U;
	int64_t x199 = INT64_MAX;
	uint32_t x200 = 268U;
	volatile int32_t t49 = -94822962;

	t49 = (((x197%x198)-x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 0;
	int32_t x202 = -1;
	volatile int8_t x203 = INT8_MIN;
	static volatile int32_t t50 = -24528929;

	t50 = (((x201%x202)-x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x214 = INT8_MAX;
	static int64_t x215 = -1LL;
	static uint8_t x216 = 20U;
	int32_t t51 = 152;

	t51 = (((x213%x214)-x215)<=x216);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = -3;
	uint32_t x218 = 308258U;
	int64_t x219 = INT64_MAX;
	int8_t x220 = 29;
	int32_t t52 = -659499;

	t52 = (((x217%x218)-x219)<=x220);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x221 = 118U;
	int64_t x222 = 209LL;
	int64_t x224 = INT64_MIN;
	int32_t t53 = 141726;

	t53 = (((x221%x222)-x223)<=x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x225 = 0U;
	volatile uint64_t x226 = UINT64_MAX;
	volatile uint32_t x227 = 677527797U;
	uint8_t x228 = 41U;
	static int32_t t54 = -492172120;

	t54 = (((x225%x226)-x227)<=x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = INT16_MAX;
	volatile uint32_t x230 = 429586209U;
	uint64_t x231 = UINT64_MAX;
	volatile int64_t x232 = -1522340678LL;
	volatile int32_t t55 = -63;

	t55 = (((x229%x230)-x231)<=x232);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x233 = -1LL;
	int16_t x234 = 61;
	int8_t x235 = -1;
	int8_t x236 = -48;
	int32_t t56 = -368;

	t56 = (((x233%x234)-x235)<=x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = 32549U;
	uint32_t x238 = 81882U;
	int64_t x239 = INT64_MAX;
	volatile int32_t x240 = 404102349;
	int32_t t57 = 295;

	t57 = (((x237%x238)-x239)<=x240);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = -2016068777147LL;
	static uint64_t x244 = 10470758287LLU;
	volatile int32_t t58 = 1401;

	t58 = (((x241%x242)-x243)<=x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = INT32_MIN;
	int8_t x246 = 1;
	int16_t x247 = -1;
	int8_t x248 = -7;
	static volatile int32_t t59 = -114750941;

	t59 = (((x245%x246)-x247)<=x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x249 = UINT32_MAX;
	int16_t x250 = INT16_MIN;
	uint64_t x251 = 389700LLU;
	uint32_t x252 = UINT32_MAX;
	static volatile int32_t t60 = 2019178;

	t60 = (((x249%x250)-x251)<=x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x255 = 3122;

	t61 = (((x253%x254)-x255)<=x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x257 = 110LLU;
	volatile int8_t x258 = INT8_MIN;
	int16_t x259 = -1;
	static int16_t x260 = INT16_MAX;

	t62 = (((x257%x258)-x259)<=x260);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x261 = INT32_MIN;
	uint16_t x262 = UINT16_MAX;
	static int32_t x263 = -1;
	int32_t x264 = INT32_MIN;
	int32_t t63 = 111;

	t63 = (((x261%x262)-x263)<=x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = INT16_MAX;
	int8_t x266 = INT8_MIN;
	volatile int16_t x267 = -1;
	int32_t t64 = 1;

	t64 = (((x265%x266)-x267)<=x268);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x270 = INT8_MIN;
	int32_t x271 = 264100763;
	uint64_t x272 = 65323LLU;

	t65 = (((x269%x270)-x271)<=x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x274 = -4;
	static int64_t x275 = -1946LL;
	static int64_t x276 = -1LL;
	int32_t t66 = -129;

	t66 = (((x273%x274)-x275)<=x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x277 = INT8_MAX;
	int64_t x278 = INT64_MIN;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t67 = 790715847;

	t67 = (((x277%x278)-x279)<=x280);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = 3604843;
	uint16_t x286 = 23825U;
	uint16_t x287 = 4U;

	t68 = (((x285%x286)-x287)<=x288);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x289 = -1;
	static uint8_t x290 = UINT8_MAX;
	int16_t x291 = INT16_MIN;
	static int32_t t69 = -65953;

	t69 = (((x289%x290)-x291)<=x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x293 = 75447U;
	int64_t x294 = INT64_MIN;
	static volatile int16_t x295 = -17;
	int16_t x296 = -1;
	volatile int32_t t70 = -18440768;

	t70 = (((x293%x294)-x295)<=x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x297 = 196787524039475943LLU;
	int64_t x298 = -1712390101LL;
	int32_t x299 = -354929554;
	static volatile int32_t x300 = 1;
	volatile int32_t t71 = -5402549;

	t71 = (((x297%x298)-x299)<=x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = INT32_MIN;
	static uint8_t x302 = 2U;
	volatile uint16_t x303 = 1U;
	int32_t t72 = 6;

	t72 = (((x301%x302)-x303)<=x304);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x305 = -1;
	int32_t x306 = INT32_MIN;
	uint64_t x307 = 67258893056453784LLU;
	uint64_t x308 = 3901543742568LLU;
	volatile int32_t t73 = -15614112;

	t73 = (((x305%x306)-x307)<=x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x310 = INT8_MAX;
	int8_t x312 = -1;

	t74 = (((x309%x310)-x311)<=x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = INT32_MIN;
	int8_t x314 = INT8_MAX;
	volatile int32_t x315 = INT32_MIN;
	int16_t x316 = -6;
	volatile int32_t t75 = 7;

	t75 = (((x313%x314)-x315)<=x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x317 = INT8_MIN;
	uint16_t x318 = 2216U;
	int64_t x319 = 148002LL;
	static int32_t x320 = INT32_MIN;

	t76 = (((x317%x318)-x319)<=x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x322 = 7U;
	static int32_t t77 = -244880;

	t77 = (((x321%x322)-x323)<=x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x329 = UINT16_MAX;
	volatile int32_t x331 = INT32_MAX;
	uint32_t x332 = 3678304U;
	int32_t t78 = -24762;

	t78 = (((x329%x330)-x331)<=x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x333 = 127;
	uint16_t x335 = 117U;
	int32_t t79 = 0;

	t79 = (((x333%x334)-x335)<=x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = -1;
	int64_t x339 = 16686585761585LL;
	static uint32_t x340 = UINT32_MAX;
	int32_t t80 = 31634892;

	t80 = (((x337%x338)-x339)<=x340);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x341 = UINT8_MAX;
	int16_t x342 = INT16_MAX;
	uint16_t x343 = 0U;
	volatile int32_t x344 = -1;

	t81 = (((x341%x342)-x343)<=x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x345 = 1U;
	int16_t x346 = INT16_MIN;
	volatile int8_t x347 = INT8_MAX;
	static int8_t x348 = -1;

	t82 = (((x345%x346)-x347)<=x348);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = 69865164447858LL;
	int32_t x350 = INT32_MIN;
	int64_t x351 = -957LL;
	uint8_t x352 = 123U;

	t83 = (((x349%x350)-x351)<=x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x357 = 749;
	int64_t x358 = -1LL;
	int8_t x359 = INT8_MIN;
	int16_t x360 = INT16_MIN;
	static int32_t t84 = -427;

	t84 = (((x357%x358)-x359)<=x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x361 = 489344LLU;
	int8_t x363 = -1;
	uint8_t x364 = 18U;
	static volatile int32_t t85 = 231;

	t85 = (((x361%x362)-x363)<=x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x367 = UINT8_MAX;
	uint16_t x368 = 26U;
	volatile int32_t t86 = -9;

	t86 = (((x365%x366)-x367)<=x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x369 = 229752LL;
	int16_t x370 = -1;
	volatile uint8_t x371 = 55U;
	static int8_t x372 = 40;
	static volatile int32_t t87 = 50;

	t87 = (((x369%x370)-x371)<=x372);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x374 = INT16_MIN;
	static int8_t x375 = INT8_MIN;
	volatile int16_t x376 = INT16_MAX;
	volatile int32_t t88 = 786;

	t88 = (((x373%x374)-x375)<=x376);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x377 = -1;
	static uint64_t x378 = 917600501LLU;
	volatile uint32_t x379 = 7U;
	int32_t x380 = INT32_MIN;

	t89 = (((x377%x378)-x379)<=x380);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x381 = 22542404U;
	int8_t x382 = -1;
	uint16_t x384 = 2U;

	t90 = (((x381%x382)-x383)<=x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x386 = 1U;
	int8_t x387 = -7;
	int32_t t91 = 3;

	t91 = (((x385%x386)-x387)<=x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x389 = INT16_MIN;
	volatile int64_t x390 = 339827410650LL;
	int32_t x391 = INT32_MIN;
	uint64_t x392 = 6793LLU;
	int32_t t92 = 6068849;

	t92 = (((x389%x390)-x391)<=x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = INT64_MIN;
	volatile uint8_t x394 = 37U;
	volatile int32_t x395 = 386;
	uint32_t x396 = 86627U;
	int32_t t93 = 6709425;

	t93 = (((x393%x394)-x395)<=x396);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x397 = INT8_MAX;
	volatile int8_t x398 = INT8_MIN;
	int8_t x399 = INT8_MIN;
	int8_t x400 = 0;
	static int32_t t94 = 66;

	t94 = (((x397%x398)-x399)<=x400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x401 = INT16_MIN;
	static int8_t x402 = -3;
	int8_t x404 = -1;
	int32_t t95 = -2;

	t95 = (((x401%x402)-x403)<=x404);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x406 = -1603;
	static uint8_t x407 = 3U;
	volatile int32_t t96 = -4999;

	t96 = (((x405%x406)-x407)<=x408);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x409 = 1;
	int8_t x410 = -1;
	int32_t x411 = -720434;
	int32_t t97 = 78919;

	t97 = (((x409%x410)-x411)<=x412);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x413 = 716426;
	static volatile uint16_t x414 = 4U;
	int16_t x415 = INT16_MIN;
	static int8_t x416 = INT8_MIN;
	volatile int32_t t98 = 2;

	t98 = (((x413%x414)-x415)<=x416);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x418 = 978U;
	int16_t x419 = 1;
	static int16_t x420 = -1;
	static int32_t t99 = 1;

	t99 = (((x417%x418)-x419)<=x420);

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

