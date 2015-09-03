#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 1426258006LLU;
static int8_t x20 = INT8_MIN;
int8_t x21 = 27;
uint16_t x29 = UINT16_MAX;
volatile int8_t x30 = INT8_MIN;
uint8_t x35 = UINT8_MAX;
int32_t x43 = 56;
volatile int32_t t10 = 9497;
volatile uint32_t x48 = UINT32_MAX;
volatile int32_t t13 = -235;
int16_t x59 = -5530;
int8_t x62 = INT8_MAX;
int16_t x69 = 75;
int64_t x72 = -2058557620601LL;
uint8_t x76 = 5U;
int32_t t18 = -370;
volatile int32_t t19 = 6;
volatile uint16_t x84 = 13179U;
uint64_t x90 = 387577321652LLU;
uint8_t x93 = 6U;
int16_t x96 = INT16_MIN;
volatile int8_t x105 = INT8_MIN;
int8_t x106 = 6;
static int16_t x107 = -1;
int16_t x108 = INT16_MIN;
int8_t x110 = INT8_MIN;
int32_t t27 = -165987979;
volatile int32_t t28 = -4708;
static uint16_t x130 = 13U;
uint64_t x131 = UINT64_MAX;
int32_t x139 = INT32_MIN;
static int8_t x148 = -28;
int32_t t36 = -25;
volatile int16_t x152 = -1;
volatile int32_t t37 = -101113026;
int16_t x153 = -1;
volatile int32_t t38 = -3309101;
static volatile int8_t x160 = INT8_MIN;
uint64_t x163 = UINT64_MAX;
int32_t x174 = INT32_MAX;
int32_t x184 = -171075;
static int16_t x187 = -1;
int64_t x192 = -32118LL;
static volatile int32_t t47 = -1;
uint64_t x200 = 2756605993284LLU;
uint64_t x203 = 4769124381541986LLU;
static int32_t x204 = INT32_MIN;
int64_t x216 = INT64_MIN;
volatile int32_t t54 = 8055;
int32_t t55 = -561;
int64_t x229 = -300067850420936056LL;
volatile int8_t x231 = -7;
static uint8_t x239 = 19U;
int16_t x242 = INT16_MIN;
int64_t x249 = INT64_MIN;
static int32_t t62 = 5178;
uint64_t x254 = 4217LLU;
int32_t x256 = -1;
int32_t x258 = -104;
static uint16_t x273 = 171U;
uint32_t x274 = 1442U;
uint64_t x276 = UINT64_MAX;
static volatile int32_t t68 = -221267372;
static int32_t x279 = 111558;
int16_t x290 = INT16_MIN;
int8_t x293 = INT8_MIN;
volatile int16_t x294 = INT16_MIN;
static volatile int32_t x298 = INT32_MIN;
int32_t t74 = 11111;
volatile int8_t x304 = -24;
int8_t x306 = -1;
int64_t x310 = -1LL;
static int64_t x313 = 54092474138042LL;
int16_t x315 = INT16_MIN;
volatile int32_t t78 = -1;
volatile int64_t x317 = INT64_MAX;
int64_t x318 = INT64_MIN;
int64_t x326 = -943754366505LL;
static int32_t t81 = -6723;
volatile uint16_t x331 = 464U;
static int32_t t82 = -66;
int16_t x333 = INT16_MIN;
static int8_t x334 = INT8_MIN;
static int64_t x340 = INT64_MIN;
int32_t t84 = 96041;
int32_t x346 = 245788;
uint16_t x353 = 71U;
uint16_t x355 = 11028U;
int32_t x357 = -1;
int8_t x362 = INT8_MIN;
int32_t x365 = -1;
int32_t x368 = INT32_MIN;
uint32_t x370 = 4337U;
int8_t x375 = -1;
uint64_t x381 = 35LLU;
volatile int32_t x387 = INT32_MIN;
volatile uint32_t x391 = 241085U;
volatile int32_t t97 = -79991927;
static int32_t x395 = 438381;


void f0(void) {
	static uint16_t x2 = 1625U;
	volatile int8_t x3 = INT8_MIN;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -6;

	t0 = ((x1<=x2)-(x3<=x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 692700756681939LLU;
	uint16_t x6 = 527U;
	int32_t x7 = INT32_MIN;
	uint16_t x8 = 184U;
	int32_t t1 = -14374;

	t1 = ((x5<=x6)-(x7<=x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int64_t x10 = 679148LL;
	uint64_t x11 = 42207076074141450LLU;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = 0;

	t2 = ((x9<=x10)-(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	int8_t x14 = -1;
	int64_t x15 = -1LL;
	int8_t x16 = 9;
	int32_t t3 = 6;

	t3 = ((x13<=x14)-(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 14736LLU;
	static int16_t x18 = 122;
	static int8_t x19 = -1;
	volatile int32_t t4 = 6716;

	t4 = ((x17<=x18)-(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 19U;
	volatile int16_t x23 = -407;
	uint32_t x24 = 1U;
	volatile int32_t t5 = -1;

	t5 = ((x21<=x22)-(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	int8_t x26 = INT8_MIN;
	static int8_t x27 = -1;
	volatile uint32_t x28 = 12U;
	static int32_t t6 = -1;

	t6 = ((x25<=x26)-(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x31 = -1;
	volatile int64_t x32 = INT64_MIN;
	int32_t t7 = 6700075;

	t7 = ((x29<=x30)-(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	int64_t x34 = -248517LL;
	static int8_t x36 = INT8_MIN;
	int32_t t8 = -252979;

	t8 = ((x33<=x34)-(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 12U;
	volatile int8_t x38 = 1;
	uint32_t x39 = 19610266U;
	static uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = 4;

	t9 = ((x37<=x38)-(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	static int64_t x42 = INT64_MIN;
	uint16_t x44 = 1U;

	t10 = ((x41<=x42)-(x43<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	static int32_t x46 = INT32_MIN;
	int32_t x47 = 248459495;
	volatile int32_t t11 = 56550463;

	t11 = ((x45<=x46)-(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x49 = UINT16_MAX;
	volatile int8_t x50 = -1;
	int16_t x51 = INT16_MAX;
	uint64_t x52 = UINT64_MAX;
	int32_t t12 = 2096194;

	t12 = ((x49<=x50)-(x51<=x52));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	uint8_t x54 = 27U;
	uint64_t x55 = 227610830226LLU;
	int16_t x56 = INT16_MIN;

	t13 = ((x53<=x54)-(x55<=x56));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 18129LLU;
	volatile int8_t x58 = INT8_MIN;
	static int64_t x60 = INT64_MIN;
	volatile int32_t t14 = -1121323;

	t14 = ((x57<=x58)-(x59<=x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = -18557;
	volatile uint16_t x63 = 24U;
	int16_t x64 = 0;
	volatile int32_t t15 = -3971;

	t15 = ((x61<=x62)-(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 44;
	static uint32_t x66 = 6073218U;
	uint32_t x67 = UINT32_MAX;
	uint64_t x68 = 272LLU;
	volatile int32_t t16 = -63;

	t16 = ((x65<=x66)-(x67<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = -1;
	static uint64_t x71 = 2834427299378221LLU;
	volatile int32_t t17 = 66398362;

	t17 = ((x69<=x70)-(x71<=x72));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = -90;
	int16_t x74 = INT16_MIN;
	static int8_t x75 = -29;

	t18 = ((x73<=x74)-(x75<=x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = 37LL;
	volatile uint16_t x78 = UINT16_MAX;
	int8_t x79 = INT8_MAX;
	volatile int8_t x80 = INT8_MIN;

	t19 = ((x77<=x78)-(x79<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x81 = INT32_MIN;
	uint32_t x82 = UINT32_MAX;
	int64_t x83 = -1LL;
	volatile int32_t t20 = 5;

	t20 = ((x81<=x82)-(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = INT32_MIN;
	static uint8_t x86 = UINT8_MAX;
	volatile int32_t x87 = INT32_MIN;
	int64_t x88 = -1LL;
	volatile int32_t t21 = -126895;

	t21 = ((x85<=x86)-(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x89 = UINT64_MAX;
	volatile int8_t x91 = INT8_MIN;
	int16_t x92 = 51;
	int32_t t22 = 24;

	t22 = ((x89<=x90)-(x91<=x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x94 = INT32_MAX;
	volatile uint64_t x95 = UINT64_MAX;
	static volatile int32_t t23 = 2;

	t23 = ((x93<=x94)-(x95<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 184U;
	int64_t x98 = -290LL;
	uint64_t x99 = 2122948LLU;
	int64_t x100 = -28411496725829897LL;
	int32_t t24 = -155723097;

	t24 = ((x97<=x98)-(x99<=x100));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = -1LL;
	volatile int32_t x102 = -16757;
	int8_t x103 = INT8_MIN;
	uint8_t x104 = UINT8_MAX;
	int32_t t25 = 3;

	t25 = ((x101<=x102)-(x103<=x104));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t t26 = -4437491;

	t26 = ((x105<=x106)-(x107<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = 460LL;
	static int16_t x111 = -1;
	int16_t x112 = 0;

	t27 = ((x109<=x110)-(x111<=x112));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = INT16_MIN;
	int8_t x114 = -3;
	uint32_t x115 = UINT32_MAX;
	int16_t x116 = 772;

	t28 = ((x113<=x114)-(x115<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	int8_t x118 = INT8_MAX;
	int8_t x119 = -1;
	int16_t x120 = INT16_MIN;
	int32_t t29 = 4;

	t29 = ((x117<=x118)-(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 124511;
	volatile int32_t x122 = -1;
	volatile uint16_t x123 = 1516U;
	uint64_t x124 = 9LLU;
	volatile int32_t t30 = 23;

	t30 = ((x121<=x122)-(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = 33330567761LL;
	int64_t x126 = 2152152563191LL;
	uint32_t x127 = UINT32_MAX;
	int64_t x128 = 5248779013216LL;
	static volatile int32_t t31 = -47989170;

	t31 = ((x125<=x126)-(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	int32_t x132 = INT32_MAX;
	volatile int32_t t32 = 491494988;

	t32 = ((x129<=x130)-(x131<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 5196U;
	uint64_t x134 = 85586949568267LLU;
	int32_t x135 = INT32_MIN;
	uint16_t x136 = 24637U;
	volatile int32_t t33 = 32321181;

	t33 = ((x133<=x134)-(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int32_t x138 = INT32_MIN;
	static volatile int64_t x140 = INT64_MIN;
	int32_t t34 = -439;

	t34 = ((x137<=x138)-(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	uint64_t x142 = 104700LLU;
	volatile uint8_t x143 = 30U;
	volatile int16_t x144 = -19;
	int32_t t35 = -34;

	t35 = ((x141<=x142)-(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	uint8_t x146 = 1U;
	int8_t x147 = 1;

	t36 = ((x145<=x146)-(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = INT64_MIN;
	int64_t x150 = -1LL;
	int8_t x151 = INT8_MAX;

	t37 = ((x149<=x150)-(x151<=x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = 0;
	int32_t x155 = INT32_MAX;
	int64_t x156 = INT64_MAX;

	t38 = ((x153<=x154)-(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = UINT64_MAX;
	uint16_t x158 = 120U;
	int8_t x159 = -56;
	static volatile int32_t t39 = 30;

	t39 = ((x157<=x158)-(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x161 = 2122317665U;
	int16_t x162 = INT16_MIN;
	static int16_t x164 = 0;
	volatile int32_t t40 = 1866;

	t40 = ((x161<=x162)-(x163<=x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	int16_t x166 = INT16_MIN;
	int32_t x167 = INT32_MIN;
	uint64_t x168 = 2794304572686470LLU;
	int32_t t41 = 27668;

	t41 = ((x165<=x166)-(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -49047456994LL;
	int64_t x170 = 21471501LL;
	uint64_t x171 = 3782538199670537279LLU;
	uint8_t x172 = UINT8_MAX;
	static int32_t t42 = -119446358;

	t42 = ((x169<=x170)-(x171<=x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x173 = UINT32_MAX;
	int8_t x175 = 57;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t43 = 8607491;

	t43 = ((x173<=x174)-(x175<=x176));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = -1LL;
	int16_t x178 = INT16_MIN;
	int32_t x179 = -1;
	static uint16_t x180 = UINT16_MAX;
	int32_t t44 = -14509556;

	t44 = ((x177<=x178)-(x179<=x180));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x181 = -1;
	uint32_t x182 = 419165773U;
	volatile uint16_t x183 = 2131U;
	int32_t t45 = -24814795;

	t45 = ((x181<=x182)-(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x185 = 179093764595255LLU;
	uint16_t x186 = 20210U;
	int64_t x188 = -798401LL;
	static volatile int32_t t46 = -72;

	t46 = ((x185<=x186)-(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	int64_t x190 = INT64_MIN;
	volatile uint64_t x191 = 32292LLU;

	t47 = ((x189<=x190)-(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 7U;
	int16_t x194 = INT16_MAX;
	uint32_t x195 = UINT32_MAX;
	static uint8_t x196 = UINT8_MAX;
	int32_t t48 = -16459662;

	t48 = ((x193<=x194)-(x195<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	volatile int8_t x198 = -1;
	int16_t x199 = INT16_MIN;
	volatile int32_t t49 = 756;

	t49 = ((x197<=x198)-(x199<=x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x201 = 46U;
	uint16_t x202 = 3707U;
	int32_t t50 = 1000293;

	t50 = ((x201<=x202)-(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = INT8_MIN;
	volatile uint8_t x206 = UINT8_MAX;
	int8_t x207 = INT8_MIN;
	int64_t x208 = INT64_MAX;
	volatile int32_t t51 = -5806;

	t51 = ((x205<=x206)-(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 897887271U;
	int8_t x210 = -4;
	int32_t x211 = INT32_MAX;
	volatile int8_t x212 = INT8_MAX;
	volatile int32_t t52 = 7510;

	t52 = ((x209<=x210)-(x211<=x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 53056U;
	volatile int32_t x214 = INT32_MIN;
	int32_t x215 = INT32_MIN;
	int32_t t53 = 22689;

	t53 = ((x213<=x214)-(x215<=x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 26172696;
	uint32_t x218 = UINT32_MAX;
	uint64_t x219 = 717264LLU;
	int16_t x220 = INT16_MIN;

	t54 = ((x217<=x218)-(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = 162255792985660582LL;
	int8_t x222 = INT8_MAX;
	uint64_t x223 = 1LLU;
	int8_t x224 = -1;

	t55 = ((x221<=x222)-(x223<=x224));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x225 = 87U;
	volatile uint64_t x226 = 5969498825525LLU;
	int8_t x227 = -7;
	static int16_t x228 = INT16_MIN;
	int32_t t56 = -478;

	t56 = ((x225<=x226)-(x227<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = INT16_MIN;
	uint32_t x232 = UINT32_MAX;
	int32_t t57 = 3293387;

	t57 = ((x229<=x230)-(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x233 = UINT32_MAX;
	int16_t x234 = -1;
	int8_t x235 = 7;
	volatile int32_t x236 = INT32_MIN;
	int32_t t58 = 6660;

	t58 = ((x233<=x234)-(x235<=x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 5U;
	static volatile int8_t x238 = -1;
	int64_t x240 = -3715448192LL;
	volatile int32_t t59 = 1;

	t59 = ((x237<=x238)-(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = INT32_MIN;
	static uint16_t x243 = 434U;
	uint64_t x244 = UINT64_MAX;
	int32_t t60 = 1;

	t60 = ((x241<=x242)-(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x245 = 4500560234LLU;
	uint16_t x246 = UINT16_MAX;
	uint64_t x247 = 55789721LLU;
	int64_t x248 = INT64_MIN;
	int32_t t61 = -3;

	t61 = ((x245<=x246)-(x247<=x248));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = -851;
	int64_t x251 = INT64_MAX;
	static volatile uint64_t x252 = 119LLU;

	t62 = ((x249<=x250)-(x251<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 2;
	volatile int8_t x255 = INT8_MIN;
	volatile int32_t t63 = 16180400;

	t63 = ((x253<=x254)-(x255<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 1;
	int64_t x259 = -867117999LL;
	volatile int32_t x260 = INT32_MIN;
	static volatile int32_t t64 = -58;

	t64 = ((x257<=x258)-(x259<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	int32_t x262 = INT32_MIN;
	int64_t x263 = INT64_MIN;
	static int64_t x264 = INT64_MAX;
	volatile int32_t t65 = 141952;

	t65 = ((x261<=x262)-(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = INT64_MAX;
	static int32_t x266 = 80544948;
	static uint64_t x267 = 183073LLU;
	int8_t x268 = 1;
	volatile int32_t t66 = -4;

	t66 = ((x265<=x266)-(x267<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 0U;
	uint16_t x270 = 68U;
	uint32_t x271 = 2357U;
	int8_t x272 = INT8_MIN;
	int32_t t67 = 0;

	t67 = ((x269<=x270)-(x271<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x275 = INT8_MIN;

	t68 = ((x273<=x274)-(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1349;
	static volatile uint64_t x278 = UINT64_MAX;
	uint8_t x280 = 3U;
	int32_t t69 = 1521;

	t69 = ((x277<=x278)-(x279<=x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = 12275;
	int32_t x282 = -1;
	uint32_t x283 = 88662699U;
	int32_t x284 = -12648;
	int32_t t70 = -3851;

	t70 = ((x281<=x282)-(x283<=x284));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	static uint8_t x286 = UINT8_MAX;
	int8_t x287 = INT8_MAX;
	uint16_t x288 = UINT16_MAX;
	static volatile int32_t t71 = -59373382;

	t71 = ((x285<=x286)-(x287<=x288));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = UINT32_MAX;
	int16_t x291 = 247;
	static int8_t x292 = -7;
	volatile int32_t t72 = -1755;

	t72 = ((x289<=x290)-(x291<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x295 = INT8_MIN;
	int16_t x296 = INT16_MIN;
	int32_t t73 = -46530;

	t73 = ((x293<=x294)-(x295<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 7564758431202103LLU;
	uint64_t x299 = 1047659462058573513LLU;
	uint32_t x300 = 395294511U;

	t74 = ((x297<=x298)-(x299<=x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x301 = UINT64_MAX;
	int16_t x302 = INT16_MIN;
	int8_t x303 = INT8_MIN;
	volatile int32_t t75 = 107;

	t75 = ((x301<=x302)-(x303<=x304));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = INT8_MIN;
	uint64_t x307 = UINT64_MAX;
	int8_t x308 = INT8_MIN;
	volatile int32_t t76 = -9364169;

	t76 = ((x305<=x306)-(x307<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = -1;
	static uint32_t x311 = 175257U;
	uint64_t x312 = 6996052482064033LLU;
	volatile int32_t t77 = 7;

	t77 = ((x309<=x310)-(x311<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x314 = INT32_MAX;
	uint16_t x316 = 1U;

	t78 = ((x313<=x314)-(x315<=x316));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x319 = INT32_MIN;
	uint64_t x320 = UINT64_MAX;
	volatile int32_t t79 = -169836;

	t79 = ((x317<=x318)-(x319<=x320));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	static int8_t x322 = INT8_MIN;
	uint8_t x323 = 16U;
	uint8_t x324 = 9U;
	int32_t t80 = 33391008;

	t80 = ((x321<=x322)-(x323<=x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	int8_t x327 = -1;
	int32_t x328 = -1;

	t81 = ((x325<=x326)-(x327<=x328));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x329 = 2U;
	volatile int32_t x330 = -1;
	int32_t x332 = -1;

	t82 = ((x329<=x330)-(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x335 = INT64_MAX;
	int8_t x336 = -1;
	int32_t t83 = -2;

	t83 = ((x333<=x334)-(x335<=x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MAX;
	volatile int64_t x338 = 147883410LL;
	static uint8_t x339 = 24U;

	t84 = ((x337<=x338)-(x339<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = INT64_MIN;
	static volatile int16_t x342 = -104;
	uint16_t x343 = 2U;
	uint16_t x344 = UINT16_MAX;
	volatile int32_t t85 = -1861453;

	t85 = ((x341<=x342)-(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x345 = INT64_MIN;
	int8_t x347 = INT8_MIN;
	volatile int8_t x348 = -1;
	int32_t t86 = 2362720;

	t86 = ((x345<=x346)-(x347<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 19387556185LLU;
	int16_t x350 = -134;
	uint32_t x351 = 2U;
	volatile uint8_t x352 = UINT8_MAX;
	static int32_t t87 = 1;

	t87 = ((x349<=x350)-(x351<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x354 = 3516678248065571910LLU;
	int8_t x356 = -1;
	int32_t t88 = 4;

	t88 = ((x353<=x354)-(x355<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = -2;
	uint32_t x359 = UINT32_MAX;
	volatile uint16_t x360 = UINT16_MAX;
	volatile int32_t t89 = -1;

	t89 = ((x357<=x358)-(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = INT32_MIN;
	uint8_t x363 = 23U;
	int8_t x364 = INT8_MIN;
	int32_t t90 = 382;

	t90 = ((x361<=x362)-(x363<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = -4828161617179LL;
	volatile int32_t x367 = INT32_MAX;
	static volatile int32_t t91 = 32;

	t91 = ((x365<=x366)-(x367<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = UINT16_MAX;
	volatile uint32_t x371 = UINT32_MAX;
	int16_t x372 = INT16_MAX;
	volatile int32_t t92 = 48811370;

	t92 = ((x369<=x370)-(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = INT8_MIN;
	int32_t x374 = INT32_MAX;
	static int32_t x376 = INT32_MAX;
	volatile int32_t t93 = 5;

	t93 = ((x373<=x374)-(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 1078523560207859474LLU;
	int16_t x378 = INT16_MIN;
	int16_t x379 = -19;
	int8_t x380 = -1;
	int32_t t94 = -4039312;

	t94 = ((x377<=x378)-(x379<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x382 = -87865929;
	volatile int64_t x383 = 95728462554938766LL;
	int32_t x384 = INT32_MIN;
	static int32_t t95 = 1139827;

	t95 = ((x381<=x382)-(x383<=x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = -1;
	int16_t x386 = -1;
	int32_t x388 = INT32_MAX;
	int32_t t96 = -125463;

	t96 = ((x385<=x386)-(x387<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -3;
	int64_t x390 = INT64_MIN;
	volatile int8_t x392 = -29;

	t97 = ((x389<=x390)-(x391<=x392));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = UINT64_MAX;
	volatile int32_t x394 = -1;
	int8_t x396 = -11;
	volatile int32_t t98 = -170619;

	t98 = ((x393<=x394)-(x395<=x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = 10154;
	volatile uint16_t x398 = UINT16_MAX;
	int32_t x399 = INT32_MAX;
	static int32_t x400 = 1395;
	static volatile int32_t t99 = -82931352;

	t99 = ((x397<=x398)-(x399<=x400));

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

