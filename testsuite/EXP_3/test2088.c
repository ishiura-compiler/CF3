#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
volatile int16_t x2 = INT16_MIN;
uint64_t x3 = 12461603828650214LLU;
int64_t x6 = INT64_MIN;
int8_t x10 = INT8_MAX;
volatile int16_t x12 = -5258;
static int8_t x17 = INT8_MAX;
static uint8_t x25 = 1U;
int32_t x28 = INT32_MIN;
static int32_t t7 = 10945529;
int8_t x34 = -8;
static volatile int32_t x40 = -1;
uint8_t x42 = UINT8_MAX;
uint64_t x43 = 1210850982837224296LLU;
volatile int32_t t10 = 13414;
volatile int32_t t11 = 13307;
volatile int32_t t12 = 50694561;
volatile int32_t t13 = -105164302;
int32_t t14 = 1;
int16_t x62 = -2;
int32_t x63 = -912675598;
static volatile int64_t x64 = INT64_MIN;
int8_t x65 = INT8_MIN;
int32_t x67 = -1;
static int32_t t16 = 0;
uint32_t x73 = 118456U;
uint32_t x79 = 5U;
uint16_t x81 = UINT16_MAX;
int64_t x85 = -1LL;
int32_t t21 = 18739;
volatile int32_t t24 = 38440929;
static uint64_t x103 = 20855LLU;
int32_t t26 = 385923817;
uint64_t x111 = UINT64_MAX;
static int8_t x118 = 2;
int16_t x119 = 194;
uint64_t x120 = 5474824063LLU;
int32_t t29 = -24908;
uint8_t x121 = 1U;
int8_t x132 = INT8_MIN;
static int8_t x133 = -1;
int8_t x144 = INT8_MIN;
int8_t x146 = -31;
static int8_t x147 = 1;
int8_t x151 = INT8_MIN;
int32_t t37 = 889812832;
int32_t x158 = 548503;
static uint64_t x168 = UINT64_MAX;
static volatile int32_t t41 = -3632;
int32_t x173 = INT32_MAX;
static int8_t x178 = INT8_MAX;
volatile uint32_t x179 = UINT32_MAX;
int8_t x183 = -1;
int16_t x189 = INT16_MIN;
volatile uint32_t x190 = 2U;
int32_t x192 = 65224829;
int32_t x194 = INT32_MIN;
uint32_t x196 = UINT32_MAX;
volatile int32_t t46 = -4023;
volatile int32_t t48 = 457;
int8_t x206 = INT8_MIN;
int64_t x207 = INT64_MIN;
uint8_t x210 = UINT8_MAX;
int32_t x213 = 11911881;
static volatile int32_t t53 = 286;
uint32_t x225 = UINT32_MAX;
int32_t x232 = 33423184;
uint64_t x234 = 52LLU;
static uint64_t x241 = 0LLU;
volatile uint8_t x244 = UINT8_MAX;
int16_t x253 = INT16_MIN;
volatile uint16_t x257 = 13811U;
uint32_t x267 = 30439U;
uint64_t x277 = 2590751437LLU;
int8_t x279 = INT8_MIN;
int64_t x283 = 1858083983721LL;
int32_t t67 = -416452;
int64_t x285 = -1LL;
int32_t t68 = 2;
static int8_t x294 = -1;
uint8_t x295 = 15U;
int16_t x296 = INT16_MIN;
int32_t t70 = -883596483;
uint8_t x299 = 14U;
static int32_t t75 = 644039;
uint64_t x321 = 60053312LLU;
int8_t x329 = INT8_MIN;
volatile int32_t t78 = -1026032254;
int32_t t80 = -895;
int16_t x351 = 73;
int8_t x357 = -1;
uint64_t x360 = 2360183788726LLU;
uint8_t x366 = 1U;
int32_t t86 = 32;
int8_t x373 = -3;
int16_t x374 = -1;
volatile int64_t x380 = INT64_MIN;
int16_t x385 = INT16_MIN;
int32_t t91 = 913804124;
int32_t t92 = -2;
volatile int16_t x394 = -1;
uint32_t x395 = UINT32_MAX;
static uint16_t x397 = UINT16_MAX;
int16_t x404 = 591;
static uint16_t x406 = 127U;
static uint32_t x408 = UINT32_MAX;
int32_t x420 = -1;


void f0(void) {
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = 271749825;

	t0 = ((x1%x2)==(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint16_t x7 = 7938U;
	volatile int64_t x8 = -919025878982152LL;
	volatile int32_t t1 = 8100;

	t1 = ((x5%x6)==(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = 29855020LL;
	uint64_t x11 = 907LLU;
	static int32_t t2 = -349616537;

	t2 = ((x9%x10)==(x11^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 5;
	int64_t x14 = 65191228626LL;
	volatile int16_t x15 = INT16_MAX;
	static int64_t x16 = -10326732LL;
	int32_t t3 = -274454154;

	t3 = ((x13%x14)==(x15^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MAX;
	static int64_t x19 = INT64_MIN;
	static volatile int64_t x20 = 13LL;
	static volatile int32_t t4 = -31930694;

	t4 = ((x17%x18)==(x19^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int32_t x22 = -1;
	int32_t x23 = -1;
	int64_t x24 = INT64_MIN;
	volatile int32_t t5 = -17039972;

	t5 = ((x21%x22)==(x23^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MIN;
	static int8_t x27 = INT8_MIN;
	volatile int32_t t6 = 179231168;

	t6 = ((x25%x26)==(x27^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 33U;
	static volatile uint8_t x30 = 2U;
	uint64_t x31 = UINT64_MAX;
	volatile int64_t x32 = -30062289LL;

	t7 = ((x29%x30)==(x31^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	uint32_t x35 = 194U;
	int8_t x36 = INT8_MIN;
	static volatile int32_t t8 = 7756;

	t8 = ((x33%x34)==(x35^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int32_t x38 = -1;
	int32_t x39 = -1;
	volatile int32_t t9 = -277854;

	t9 = ((x37%x38)==(x39^x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 3550;
	volatile uint16_t x44 = 2U;

	t10 = ((x41%x42)==(x43^x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = -1;
	int16_t x46 = INT16_MAX;
	int16_t x47 = -6507;
	int8_t x48 = 1;

	t11 = ((x45%x46)==(x47^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = 221;
	int16_t x50 = INT16_MIN;
	uint16_t x51 = 67U;
	int64_t x52 = INT64_MAX;

	t12 = ((x49%x50)==(x51^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 2073812;
	int8_t x54 = 12;
	int16_t x55 = INT16_MIN;
	static int32_t x56 = 47;

	t13 = ((x53%x54)==(x55^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	static int8_t x58 = -1;
	volatile int8_t x59 = INT8_MIN;
	volatile uint64_t x60 = UINT64_MAX;

	t14 = ((x57%x58)==(x59^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 10U;
	volatile int32_t t15 = -486936;

	t15 = ((x61%x62)==(x63^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x66 = UINT16_MAX;
	int16_t x68 = 14;

	t16 = ((x65%x66)==(x67^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 305451541;
	int32_t x70 = -1;
	int32_t x71 = 250726;
	static int16_t x72 = 195;
	static volatile int32_t t17 = 467801504;

	t17 = ((x69%x70)==(x71^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x74 = INT8_MIN;
	int16_t x75 = -1219;
	int16_t x76 = -1;
	static int32_t t18 = 110;

	t18 = ((x73%x74)==(x75^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 24474U;
	int16_t x78 = -1;
	static int32_t x80 = -660;
	volatile int32_t t19 = -16214391;

	t19 = ((x77%x78)==(x79^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x82 = -1LL;
	int64_t x83 = INT64_MAX;
	uint32_t x84 = 7299439U;
	int32_t t20 = -64;

	t20 = ((x81%x82)==(x83^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = -82LL;
	volatile int32_t x87 = INT32_MAX;
	volatile int16_t x88 = INT16_MIN;

	t21 = ((x85%x86)==(x87^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	uint32_t x90 = UINT32_MAX;
	uint8_t x91 = UINT8_MAX;
	uint8_t x92 = 19U;
	int32_t t22 = 5546016;

	t22 = ((x89%x90)==(x91^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -4LL;
	uint64_t x94 = UINT64_MAX;
	int16_t x95 = -3716;
	int32_t x96 = -380703;
	static volatile int32_t t23 = -53480849;

	t23 = ((x93%x94)==(x95^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x97 = 536562U;
	uint16_t x98 = UINT16_MAX;
	uint8_t x99 = UINT8_MAX;
	int16_t x100 = INT16_MAX;

	t24 = ((x97%x98)==(x99^x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int32_t x102 = -6;
	static uint8_t x104 = 29U;
	int32_t t25 = 3986008;

	t25 = ((x101%x102)==(x103^x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = INT64_MIN;
	uint16_t x106 = UINT16_MAX;
	int16_t x107 = 1;
	uint64_t x108 = 0LLU;

	t26 = ((x105%x106)==(x107^x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x109 = -1LL;
	int8_t x110 = -57;
	int8_t x112 = -1;
	static volatile int32_t t27 = 1000789395;

	t27 = ((x109%x110)==(x111^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = -1;
	volatile uint16_t x114 = 1532U;
	volatile uint64_t x115 = 1656672LLU;
	uint32_t x116 = UINT32_MAX;
	volatile int32_t t28 = -1;

	t28 = ((x113%x114)==(x115^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 8630825690990411LL;

	t29 = ((x117%x118)==(x119^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x122 = UINT16_MAX;
	static uint32_t x123 = UINT32_MAX;
	int32_t x124 = 1185196;
	int32_t t30 = -61;

	t30 = ((x121%x122)==(x123^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -14327735318701403LL;
	static int16_t x126 = INT16_MIN;
	int8_t x127 = -1;
	int8_t x128 = -3;
	volatile int32_t t31 = -4369;

	t31 = ((x125%x126)==(x127^x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = -399811036;
	int64_t x130 = -198737206796LL;
	int8_t x131 = INT8_MIN;
	int32_t t32 = -1076741;

	t32 = ((x129%x130)==(x131^x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x134 = INT64_MAX;
	int8_t x135 = INT8_MAX;
	int32_t x136 = -1;
	volatile int32_t t33 = -15;

	t33 = ((x133%x134)==(x135^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x137 = INT8_MIN;
	static volatile uint32_t x138 = UINT32_MAX;
	static int8_t x139 = INT8_MIN;
	int16_t x140 = INT16_MIN;
	int32_t t34 = -1;

	t34 = ((x137%x138)==(x139^x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = 7928450260LL;
	static int16_t x142 = INT16_MIN;
	uint8_t x143 = UINT8_MAX;
	int32_t t35 = 17;

	t35 = ((x141%x142)==(x143^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x145 = INT8_MIN;
	static uint8_t x148 = 93U;
	int32_t t36 = -63;

	t36 = ((x145%x146)==(x147^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -37;
	int32_t x150 = INT32_MIN;
	volatile int32_t x152 = -1061399410;

	t37 = ((x149%x150)==(x151^x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x153 = 3997U;
	int64_t x154 = 1305551718LL;
	int16_t x155 = INT16_MAX;
	int32_t x156 = INT32_MIN;
	static volatile int32_t t38 = -62297;

	t38 = ((x153%x154)==(x155^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	int16_t x159 = INT16_MIN;
	int16_t x160 = -1;
	volatile int32_t t39 = 1;

	t39 = ((x157%x158)==(x159^x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x165 = 102751560U;
	int16_t x166 = INT16_MIN;
	int8_t x167 = INT8_MAX;
	int32_t t40 = -219;

	t40 = ((x165%x166)==(x167^x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = -1;
	volatile uint32_t x170 = 367978726U;
	static uint32_t x171 = 25972227U;
	int8_t x172 = INT8_MAX;

	t41 = ((x169%x170)==(x171^x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x174 = 10U;
	int64_t x175 = INT64_MIN;
	int32_t x176 = -1;
	int32_t t42 = 719537421;

	t42 = ((x173%x174)==(x175^x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x177 = INT32_MIN;
	int32_t x180 = INT32_MAX;
	static volatile int32_t t43 = 248017796;

	t43 = ((x177%x178)==(x179^x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x181 = 1038140354616764LLU;
	int16_t x182 = INT16_MIN;
	int16_t x184 = -1;
	static int32_t t44 = 258108999;

	t44 = ((x181%x182)==(x183^x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x191 = -1;
	int32_t t45 = 10264;

	t45 = ((x189%x190)==(x191^x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x193 = UINT8_MAX;
	volatile int16_t x195 = -11;

	t46 = ((x193%x194)==(x195^x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x197 = -30;
	int8_t x198 = INT8_MIN;
	volatile int8_t x199 = 7;
	int16_t x200 = INT16_MIN;
	static int32_t t47 = 234260364;

	t47 = ((x197%x198)==(x199^x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x201 = INT32_MAX;
	uint8_t x202 = UINT8_MAX;
	uint64_t x203 = 85376671912200LLU;
	uint16_t x204 = UINT16_MAX;

	t48 = ((x201%x202)==(x203^x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x205 = UINT16_MAX;
	uint64_t x208 = 605524657LLU;
	volatile int32_t t49 = 17150;

	t49 = ((x205%x206)==(x207^x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x209 = INT64_MIN;
	int64_t x211 = INT64_MIN;
	uint16_t x212 = 17709U;
	int32_t t50 = 8075283;

	t50 = ((x209%x210)==(x211^x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x214 = INT8_MIN;
	volatile uint16_t x215 = 419U;
	int8_t x216 = INT8_MIN;
	static volatile int32_t t51 = -13380;

	t51 = ((x213%x214)==(x215^x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x217 = UINT64_MAX;
	int32_t x218 = INT32_MAX;
	int16_t x219 = INT16_MAX;
	static uint64_t x220 = 514092502132831386LLU;
	int32_t t52 = -213229;

	t52 = ((x217%x218)==(x219^x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x221 = 15633U;
	static int32_t x222 = -1;
	int8_t x223 = -24;
	static int8_t x224 = INT8_MIN;

	t53 = ((x221%x222)==(x223^x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x226 = -1;
	int32_t x227 = -1;
	static volatile int32_t x228 = INT32_MAX;
	volatile int32_t t54 = 1088;

	t54 = ((x225%x226)==(x227^x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = 1;
	int32_t x230 = INT32_MIN;
	int64_t x231 = -1LL;
	volatile int32_t t55 = 1072671;

	t55 = ((x229%x230)==(x231^x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = -1;
	uint16_t x235 = 97U;
	static volatile uint64_t x236 = UINT64_MAX;
	static int32_t t56 = -8390411;

	t56 = ((x233%x234)==(x235^x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x237 = UINT32_MAX;
	uint64_t x238 = 230561239165LLU;
	uint16_t x239 = 24U;
	uint64_t x240 = 157812968997LLU;
	int32_t t57 = -157772;

	t57 = ((x237%x238)==(x239^x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x242 = INT64_MAX;
	int32_t x243 = INT32_MAX;
	volatile int32_t t58 = 439;

	t58 = ((x241%x242)==(x243^x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = 4;
	volatile int16_t x250 = INT16_MIN;
	static uint32_t x251 = 5148582U;
	uint32_t x252 = 463U;
	volatile int32_t t59 = -231674037;

	t59 = ((x249%x250)==(x251^x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x254 = -1;
	int8_t x255 = INT8_MIN;
	int16_t x256 = INT16_MAX;
	int32_t t60 = 6901805;

	t60 = ((x253%x254)==(x255^x256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x258 = INT16_MAX;
	int16_t x259 = INT16_MIN;
	uint16_t x260 = UINT16_MAX;
	static volatile int32_t t61 = 61809;

	t61 = ((x257%x258)==(x259^x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = INT16_MAX;
	uint16_t x262 = 27U;
	static int64_t x263 = -1346378229621368621LL;
	uint64_t x264 = UINT64_MAX;
	static volatile int32_t t62 = -454;

	t62 = ((x261%x262)==(x263^x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x265 = -8395315;
	static int8_t x266 = INT8_MAX;
	int32_t x268 = INT32_MIN;
	volatile int32_t t63 = 9065;

	t63 = ((x265%x266)==(x267^x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x269 = -365;
	uint16_t x270 = UINT16_MAX;
	volatile uint32_t x271 = 1U;
	volatile uint64_t x272 = 1054814121LLU;
	volatile int32_t t64 = 0;

	t64 = ((x269%x270)==(x271^x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x273 = 0U;
	static int32_t x274 = 368652;
	int32_t x275 = INT32_MIN;
	uint32_t x276 = UINT32_MAX;
	int32_t t65 = -25;

	t65 = ((x273%x274)==(x275^x276));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x278 = -27;
	uint64_t x280 = UINT64_MAX;
	int32_t t66 = 244213;

	t66 = ((x277%x278)==(x279^x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x281 = -214;
	int16_t x282 = 7920;
	uint16_t x284 = UINT16_MAX;

	t67 = ((x281%x282)==(x283^x284));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x286 = 30U;
	int64_t x287 = INT64_MAX;
	int16_t x288 = INT16_MIN;

	t68 = ((x285%x286)==(x287^x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x289 = UINT32_MAX;
	uint8_t x290 = 5U;
	uint8_t x291 = UINT8_MAX;
	uint8_t x292 = UINT8_MAX;
	static volatile int32_t t69 = 5687;

	t69 = ((x289%x290)==(x291^x292));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x293 = INT8_MIN;

	t70 = ((x293%x294)==(x295^x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x297 = 41912U;
	int32_t x298 = INT32_MAX;
	int64_t x300 = INT64_MIN;
	int32_t t71 = 2289;

	t71 = ((x297%x298)==(x299^x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x305 = 1150587871U;
	static int16_t x306 = 1;
	static int64_t x307 = INT64_MIN;
	int32_t x308 = 11;
	volatile int32_t t72 = 131204;

	t72 = ((x305%x306)==(x307^x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x309 = UINT32_MAX;
	static uint16_t x310 = 33U;
	int16_t x311 = INT16_MIN;
	volatile int32_t x312 = -1;
	int32_t t73 = 5004;

	t73 = ((x309%x310)==(x311^x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x313 = 168124LLU;
	int16_t x314 = INT16_MIN;
	int64_t x315 = -1LL;
	static int64_t x316 = INT64_MIN;
	int32_t t74 = 1092357;

	t74 = ((x313%x314)==(x315^x316));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x317 = -13;
	int16_t x318 = INT16_MIN;
	uint64_t x319 = 628899845837LLU;
	static volatile int32_t x320 = -1;

	t75 = ((x317%x318)==(x319^x320));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x322 = -534;
	volatile int16_t x323 = INT16_MAX;
	int64_t x324 = 41167787196486021LL;
	int32_t t76 = 22201701;

	t76 = ((x321%x322)==(x323^x324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x325 = 45U;
	static int32_t x326 = -1;
	int8_t x327 = INT8_MIN;
	uint8_t x328 = UINT8_MAX;
	static volatile int32_t t77 = -360;

	t77 = ((x325%x326)==(x327^x328));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x330 = UINT8_MAX;
	int16_t x331 = -2;
	int16_t x332 = INT16_MIN;

	t78 = ((x329%x330)==(x331^x332));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = INT32_MIN;
	uint8_t x334 = 2U;
	uint8_t x335 = 12U;
	volatile int32_t x336 = INT32_MIN;
	int32_t t79 = 136;

	t79 = ((x333%x334)==(x335^x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x341 = 254796214834LLU;
	uint64_t x342 = 6370211910126LLU;
	uint32_t x343 = 2U;
	int32_t x344 = 214284;

	t80 = ((x341%x342)==(x343^x344));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x345 = INT64_MIN;
	static uint16_t x346 = 30U;
	volatile int8_t x347 = 23;
	static volatile int8_t x348 = INT8_MIN;
	static int32_t t81 = 5228220;

	t81 = ((x345%x346)==(x347^x348));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x349 = UINT64_MAX;
	static uint32_t x350 = 21U;
	uint8_t x352 = 0U;
	volatile int32_t t82 = 982;

	t82 = ((x349%x350)==(x351^x352));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x353 = INT16_MIN;
	volatile int32_t x354 = -1;
	uint8_t x355 = 12U;
	int32_t x356 = -1;
	static int32_t t83 = 706;

	t83 = ((x353%x354)==(x355^x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x358 = 779U;
	int32_t x359 = 6333;
	volatile int32_t t84 = 173;

	t84 = ((x357%x358)==(x359^x360));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x361 = 10760;
	int64_t x362 = INT64_MIN;
	volatile int32_t x363 = -515376;
	int32_t x364 = 29634993;
	static int32_t t85 = -398;

	t85 = ((x361%x362)==(x363^x364));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x365 = INT32_MAX;
	int64_t x367 = -1LL;
	int8_t x368 = INT8_MAX;

	t86 = ((x365%x366)==(x367^x368));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x369 = 920817713808LL;
	static uint64_t x370 = 493882615LLU;
	volatile uint16_t x371 = 17062U;
	int32_t x372 = INT32_MIN;
	int32_t t87 = -496545218;

	t87 = ((x369%x370)==(x371^x372));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x375 = INT16_MIN;
	uint64_t x376 = 1LLU;
	volatile int32_t t88 = 28;

	t88 = ((x373%x374)==(x375^x376));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x377 = INT32_MIN;
	static volatile int32_t x378 = 11024;
	volatile int16_t x379 = INT16_MAX;
	volatile int32_t t89 = 20670996;

	t89 = ((x377%x378)==(x379^x380));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x381 = -1LL;
	int32_t x382 = INT32_MAX;
	static int32_t x383 = INT32_MIN;
	int16_t x384 = INT16_MIN;
	volatile int32_t t90 = -53672;

	t90 = ((x381%x382)==(x383^x384));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x386 = INT16_MAX;
	uint8_t x387 = 1U;
	int16_t x388 = 8;

	t91 = ((x385%x386)==(x387^x388));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x389 = 0U;
	uint32_t x390 = UINT32_MAX;
	uint32_t x391 = UINT32_MAX;
	int32_t x392 = INT32_MIN;

	t92 = ((x389%x390)==(x391^x392));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x393 = INT16_MIN;
	int16_t x396 = 14426;
	static int32_t t93 = -191549401;

	t93 = ((x393%x394)==(x395^x396));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x398 = 10803U;
	int64_t x399 = -4092567LL;
	uint64_t x400 = 18814955555LLU;
	int32_t t94 = -60118;

	t94 = ((x397%x398)==(x399^x400));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x401 = INT32_MIN;
	int32_t x402 = INT32_MAX;
	static int32_t x403 = INT32_MIN;
	int32_t t95 = -65;

	t95 = ((x401%x402)==(x403^x404));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x405 = 3481LLU;
	int16_t x407 = INT16_MIN;
	static int32_t t96 = 2020;

	t96 = ((x405%x406)==(x407^x408));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x409 = -11;
	int32_t x410 = 127029;
	int32_t x411 = -1;
	uint16_t x412 = 1177U;
	int32_t t97 = -22386;

	t97 = ((x409%x410)==(x411^x412));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x413 = UINT16_MAX;
	int64_t x414 = INT64_MIN;
	uint16_t x415 = UINT16_MAX;
	int32_t x416 = -1903;
	volatile int32_t t98 = 659547810;

	t98 = ((x413%x414)==(x415^x416));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x417 = UINT64_MAX;
	int64_t x418 = 222155485162882LL;
	int32_t x419 = INT32_MIN;
	volatile int32_t t99 = -12113012;

	t99 = ((x417%x418)==(x419^x420));

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

