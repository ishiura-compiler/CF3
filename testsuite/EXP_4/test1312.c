#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
int32_t x7 = 78481;
int32_t x9 = INT32_MIN;
int8_t x18 = INT8_MIN;
int8_t x22 = -1;
volatile int32_t x35 = INT32_MIN;
uint8_t x38 = UINT8_MAX;
volatile int32_t t9 = 226;
static volatile int32_t t10 = -45;
volatile int32_t t11 = -188966;
int8_t x50 = INT8_MIN;
volatile int64_t x57 = INT64_MAX;
volatile uint16_t x62 = 2U;
int32_t x64 = INT32_MAX;
uint64_t t15 = UINT64_MAX;
uint16_t x71 = 970U;
int32_t x81 = 90817;
volatile int32_t t20 = -5021550;
int16_t x86 = 386;
int64_t x91 = INT64_MAX;
uint16_t x93 = UINT16_MAX;
int8_t x100 = INT8_MIN;
int32_t t24 = 7107;
int32_t x102 = -58;
int32_t x114 = INT32_MAX;
int8_t x115 = -5;
int32_t x119 = INT32_MIN;
volatile int32_t t30 = -473209669;
uint32_t t33 = UINT32_MAX;
static uint16_t x139 = UINT16_MAX;
uint16_t x144 = UINT16_MAX;
int64_t x146 = INT64_MAX;
int32_t t38 = 685700290;
static volatile uint32_t t41 = 438290U;
volatile int16_t x170 = -1;
volatile int8_t x178 = -1;
int16_t x180 = 7893;
int32_t t44 = -884348123;
int64_t x188 = INT64_MIN;
uint8_t x199 = 1U;
int16_t x210 = INT16_MAX;
int64_t x220 = INT64_MIN;
volatile int8_t x221 = INT8_MIN;
volatile int32_t t55 = 511;
int16_t x226 = INT16_MAX;
volatile int8_t x227 = INT8_MIN;
uint32_t x231 = UINT32_MAX;
int32_t x235 = 0;
int32_t x238 = INT32_MAX;
uint64_t x246 = UINT64_MAX;
static int64_t x250 = 330417472638188LL;
static int64_t x252 = INT64_MAX;
static int32_t x256 = INT32_MIN;
static volatile int32_t t63 = 1998;
static volatile int8_t x261 = 0;
uint32_t x263 = 6U;
static volatile int32_t t66 = INT32_MIN;
int16_t x269 = -22;
int32_t x275 = 49007;
int16_t x277 = -4765;
int8_t x284 = INT8_MIN;
static volatile int64_t t70 = 12035028471441425LL;
int64_t t71 = 2530382256059224LL;
uint64_t x290 = 1400674148976LLU;
int32_t x292 = INT32_MIN;
volatile uint64_t t72 = 2492LLU;
int32_t t75 = 62;
static int8_t x306 = INT8_MIN;
int32_t x308 = INT32_MIN;
int32_t t76 = -33;
int16_t x310 = 61;
uint16_t x311 = UINT16_MAX;
volatile int32_t t77 = 12;
uint8_t x314 = 0U;
int64_t x318 = INT64_MAX;
uint16_t x321 = 3742U;
int16_t x323 = INT16_MIN;
int32_t t80 = 42349;
uint32_t x326 = 883693U;
static uint8_t x329 = UINT8_MAX;
uint8_t x330 = 23U;
static int8_t x331 = -1;
int32_t x332 = INT32_MAX;
static int8_t x337 = INT8_MIN;
int64_t x345 = 441739206LL;
int16_t x346 = INT16_MAX;
static uint8_t x349 = UINT8_MAX;
static int8_t x350 = -1;
int8_t x356 = 1;
int32_t t88 = -50;
static uint32_t x364 = 16U;
uint16_t x366 = 352U;
uint8_t x378 = UINT8_MAX;
uint64_t x381 = UINT64_MAX;
static uint32_t x382 = 484765U;
static uint8_t x386 = UINT8_MAX;
static int8_t x389 = -7;
uint16_t x391 = 1U;
int64_t x392 = -1910613572167LL;
int64_t t98 = -28081406576LL;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int8_t x3 = INT8_MIN;
	int32_t x4 = INT32_MAX;
	volatile uint32_t t0 = UINT32_MAX;

	t0 = (x1|(x2<=(x3==x4)));

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	int8_t x6 = -1;
	int8_t x8 = INT8_MIN;
	int32_t t1 = -5;

	t1 = (x5|(x6<=(x7==x8)));

	if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = UINT32_MAX;
	static int32_t x11 = INT32_MIN;
	int8_t x12 = -1;
	volatile int32_t t2 = INT32_MIN;

	t2 = (x9|(x10<=(x11==x12)));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int8_t x14 = 1;
	int16_t x15 = -1;
	uint64_t x16 = UINT64_MAX;
	int32_t t3 = -1;

	t3 = (x13|(x14<=(x15==x16)));

	if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	volatile int64_t x19 = -477684817LL;
	uint64_t x20 = UINT64_MAX;
	static volatile int64_t t4 = 62887937703091567LL;

	t4 = (x17|(x18<=(x19==x20)));

	if (t4 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	volatile int8_t x23 = 0;
	uint16_t x24 = UINT16_MAX;
	volatile int32_t t5 = 258733495;

	t5 = (x21|(x22<=(x23==x24)));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int16_t x26 = INT16_MIN;
	static int16_t x27 = INT16_MIN;
	uint16_t x28 = UINT16_MAX;
	volatile int64_t t6 = 3161657758970LL;

	t6 = (x25|(x26<=(x27==x28)));

	if (t6 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint32_t x30 = 4491651U;
	static uint8_t x31 = 0U;
	int64_t x32 = INT64_MIN;
	static volatile int32_t t7 = INT32_MIN;

	t7 = (x29|(x30<=(x31==x32)));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MAX;
	uint32_t x34 = 5579339U;
	uint64_t x36 = 36801281681472654LLU;
	int32_t t8 = 889735;

	t8 = (x33|(x34<=(x35==x36)));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	int8_t x39 = -1;
	int16_t x40 = INT16_MIN;

	t9 = (x37|(x38<=(x39==x40)));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	uint8_t x42 = 2U;
	int16_t x43 = -1;
	int8_t x44 = 1;

	t10 = (x41|(x42<=(x43==x44)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	static uint32_t x46 = UINT32_MAX;
	static volatile int32_t x47 = -30;
	int8_t x48 = -1;

	t11 = (x45|(x46<=(x47==x48)));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 56U;
	int64_t x51 = INT64_MAX;
	volatile uint32_t x52 = 3547972U;
	volatile int32_t t12 = -3;

	t12 = (x49|(x50<=(x51==x52)));

	if (t12 != 57) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -1442488496585316LL;
	int64_t x54 = INT64_MIN;
	volatile int64_t x55 = INT64_MIN;
	static int64_t x56 = INT64_MAX;
	volatile int64_t t13 = 804747797LL;

	t13 = (x53|(x54<=(x55==x56)));

	if (t13 != -1442488496585315LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = INT64_MIN;
	static int8_t x59 = INT8_MIN;
	uint8_t x60 = 32U;
	volatile int64_t t14 = INT64_MAX;

	t14 = (x57|(x58<=(x59==x60)));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	int8_t x63 = INT8_MIN;

	t15 = (x61|(x62<=(x63==x64)));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	uint32_t x66 = UINT32_MAX;
	int64_t x67 = INT64_MIN;
	uint64_t x68 = 14654232954702662LLU;
	static volatile int32_t t16 = 517;

	t16 = (x65|(x66<=(x67==x68)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x69 = 322005871U;
	volatile int64_t x70 = -1LL;
	uint8_t x72 = 1U;
	uint32_t t17 = 1041210U;

	t17 = (x69|(x70<=(x71==x72)));

	if (t17 != 322005871U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	static volatile int8_t x74 = -1;
	uint8_t x75 = 8U;
	uint16_t x76 = 2U;
	int64_t t18 = -41584031386298LL;

	t18 = (x73|(x74<=(x75==x76)));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int64_t x78 = INT64_MAX;
	uint64_t x79 = 3328086LLU;
	int16_t x80 = -1;
	int64_t t19 = INT64_MIN;

	t19 = (x77|(x78<=(x79==x80)));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = -4902476LL;
	uint32_t x83 = 2138541050U;
	volatile int64_t x84 = INT64_MAX;

	t20 = (x81|(x82<=(x83==x84)));

	if (t20 != 90817) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = INT16_MIN;
	int32_t x87 = 42803496;
	int8_t x88 = -1;
	int32_t t21 = 27569244;

	t21 = (x85|(x86<=(x87==x88)));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = -1;
	uint64_t x90 = 5033485785091864LLU;
	uint64_t x92 = 206548439LLU;
	volatile int32_t t22 = 0;

	t22 = (x89|(x90<=(x91==x92)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x94 = 11634734U;
	volatile int8_t x95 = -1;
	volatile uint64_t x96 = 12674978040948LLU;
	int32_t t23 = -27448336;

	t23 = (x93|(x94<=(x95==x96)));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 41U;
	static int64_t x98 = INT64_MAX;
	static int8_t x99 = INT8_MIN;

	t24 = (x97|(x98<=(x99==x100)));

	if (t24 != 41) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 531U;
	uint32_t x103 = 212378U;
	static int8_t x104 = INT8_MIN;
	volatile int32_t t25 = -4770660;

	t25 = (x101|(x102<=(x103==x104)));

	if (t25 != 531) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MIN;
	int8_t x106 = INT8_MAX;
	uint8_t x107 = 1U;
	int16_t x108 = 10447;
	static int64_t t26 = INT64_MIN;

	t26 = (x105|(x106<=(x107==x108)));

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	int32_t x110 = INT32_MIN;
	int16_t x111 = INT16_MAX;
	int8_t x112 = 30;
	int32_t t27 = 820;

	t27 = (x109|(x110<=(x111==x112)));

	if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = INT16_MAX;
	static uint64_t x116 = 1LLU;
	volatile int32_t t28 = -16241;

	t28 = (x113|(x114<=(x115==x116)));

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x117 = 41341LLU;
	static volatile int64_t x118 = -72096461613031LL;
	int16_t x120 = -1;
	uint64_t t29 = 103296329111LLU;

	t29 = (x117|(x118<=(x119==x120)));

	if (t29 != 41341LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	int32_t x122 = -134710;
	int8_t x123 = 15;
	static int32_t x124 = -1;

	t30 = (x121|(x122<=(x123==x124)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = 4341002942115285LL;
	static volatile uint16_t x126 = 30U;
	volatile int64_t x127 = -295293214LL;
	int32_t x128 = 369;
	volatile int64_t t31 = 298181289100597LL;

	t31 = (x125|(x126<=(x127==x128)));

	if (t31 != 4341002942115285LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -498;
	int8_t x130 = INT8_MAX;
	int16_t x131 = -1;
	static int8_t x132 = INT8_MAX;
	int32_t t32 = -1735;

	t32 = (x129|(x130<=(x131==x132)));

	if (t32 != -498) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = UINT32_MAX;
	static int8_t x134 = 12;
	int8_t x135 = INT8_MIN;
	int64_t x136 = INT64_MIN;

	t33 = (x133|(x134<=(x135==x136)));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = 400;
	int64_t x138 = INT64_MAX;
	uint16_t x140 = 4711U;
	static int32_t t34 = -11109440;

	t34 = (x137|(x138<=(x139==x140)));

	if (t34 != 400) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x141 = 215LLU;
	volatile uint32_t x142 = UINT32_MAX;
	int8_t x143 = INT8_MIN;
	uint64_t t35 = 5092323152LLU;

	t35 = (x141|(x142<=(x143==x144)));

	if (t35 != 215LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	static uint16_t x147 = 4755U;
	int8_t x148 = INT8_MAX;
	static volatile int32_t t36 = -86555;

	t36 = (x145|(x146<=(x147==x148)));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 31711LLU;
	uint16_t x150 = 282U;
	int16_t x151 = INT16_MIN;
	static int8_t x152 = 2;
	static uint64_t t37 = 4LLU;

	t37 = (x149|(x150<=(x151==x152)));

	if (t37 != 31711LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = 10869U;
	int16_t x154 = INT16_MIN;
	int64_t x155 = 24328121LL;
	uint16_t x156 = UINT16_MAX;

	t38 = (x153|(x154<=(x155==x156)));

	if (t38 != 10869) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 19U;
	uint16_t x158 = UINT16_MAX;
	int64_t x159 = INT64_MIN;
	int16_t x160 = INT16_MIN;
	volatile int32_t t39 = -34;

	t39 = (x157|(x158<=(x159==x160)));

	if (t39 != 19) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	uint32_t x162 = 64956112U;
	volatile int8_t x163 = 1;
	uint16_t x164 = 183U;
	int32_t t40 = INT32_MIN;

	t40 = (x161|(x162<=(x163==x164)));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 29403U;
	volatile uint8_t x166 = 6U;
	int32_t x167 = -100;
	volatile int16_t x168 = INT16_MIN;

	t41 = (x165|(x166<=(x167==x168)));

	if (t41 != 29403U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	int64_t x171 = -88244LL;
	int8_t x172 = -12;
	int32_t t42 = -18611271;

	t42 = (x169|(x170<=(x171==x172)));

	if (t42 != -32767) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 1U;
	uint32_t x174 = 1891U;
	int16_t x175 = -1;
	int16_t x176 = -117;
	volatile int32_t t43 = -1;

	t43 = (x173|(x174<=(x175==x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	int16_t x179 = INT16_MIN;

	t44 = (x177|(x178<=(x179==x180)));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	volatile int32_t x182 = -1;
	int8_t x183 = -1;
	volatile uint8_t x184 = 45U;
	static volatile uint32_t t45 = UINT32_MAX;

	t45 = (x181|(x182<=(x183==x184)));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x185 = INT64_MIN;
	static int64_t x186 = -1774919328497LL;
	volatile uint16_t x187 = 0U;
	static int64_t t46 = 912689588948334439LL;

	t46 = (x185|(x186<=(x187==x188)));

	if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 372U;
	static int8_t x190 = INT8_MIN;
	uint64_t x191 = 42993761247273LLU;
	uint64_t x192 = 113LLU;
	volatile int32_t t47 = -1;

	t47 = (x189|(x190<=(x191==x192)));

	if (t47 != 373) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x193 = INT8_MIN;
	volatile int16_t x194 = -1;
	uint32_t x195 = UINT32_MAX;
	volatile int8_t x196 = -35;
	volatile int32_t t48 = -4;

	t48 = (x193|(x194<=(x195==x196)));

	if (t48 != -127) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = INT16_MIN;
	uint8_t x198 = UINT8_MAX;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t49 = -1;

	t49 = (x197|(x198<=(x199==x200)));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -1LL;
	static int64_t x202 = -1LL;
	int16_t x203 = 10359;
	int16_t x204 = 6746;
	static int64_t t50 = -24LL;

	t50 = (x201|(x202<=(x203==x204)));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	int64_t x206 = INT64_MIN;
	int32_t x207 = -30837;
	static int8_t x208 = 25;
	int64_t t51 = 195588LL;

	t51 = (x205|(x206<=(x207==x208)));

	if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	int32_t x211 = -1;
	uint32_t x212 = UINT32_MAX;
	volatile int32_t t52 = -741040;

	t52 = (x209|(x210<=(x211==x212)));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	volatile int64_t x214 = INT64_MIN;
	int8_t x215 = 50;
	volatile int8_t x216 = INT8_MIN;
	static volatile int64_t t53 = -55791124626386690LL;

	t53 = (x213|(x214<=(x215==x216)));

	if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = 1;
	static int64_t x218 = -7937LL;
	int32_t x219 = INT32_MIN;
	static int32_t t54 = 2506;

	t54 = (x217|(x218<=(x219==x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x222 = 379U;
	int64_t x223 = -1LL;
	int8_t x224 = INT8_MAX;

	t55 = (x221|(x222<=(x223==x224)));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 27117136815LL;
	static volatile uint8_t x228 = 6U;
	volatile int64_t t56 = 863442906748LL;

	t56 = (x225|(x226<=(x227==x228)));

	if (t56 != 27117136815LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	int64_t x230 = INT64_MAX;
	static int32_t x232 = INT32_MAX;
	uint32_t t57 = UINT32_MAX;

	t57 = (x229|(x230<=(x231==x232)));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MAX;
	int8_t x234 = INT8_MIN;
	static uint16_t x236 = UINT16_MAX;
	int64_t t58 = INT64_MAX;

	t58 = (x233|(x234<=(x235==x236)));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 7U;
	int64_t x239 = -133665777464496LL;
	int16_t x240 = -1;
	volatile int32_t t59 = 8498528;

	t59 = (x237|(x238<=(x239==x240)));

	if (t59 != 7) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	static int16_t x242 = INT16_MAX;
	uint32_t x243 = 32U;
	static int32_t x244 = 193;
	volatile int32_t t60 = -1;

	t60 = (x241|(x242<=(x243==x244)));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	int64_t x247 = INT64_MAX;
	uint16_t x248 = 95U;
	volatile int64_t t61 = INT64_MIN;

	t61 = (x245|(x246<=(x247==x248)));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	int32_t x251 = INT32_MIN;
	volatile int32_t t62 = 4498111;

	t62 = (x249|(x250<=(x251==x252)));

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x253 = 6U;
	int64_t x254 = INT64_MIN;
	uint64_t x255 = 113LLU;

	t63 = (x253|(x254<=(x255==x256)));

	if (t63 != 7) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x257 = 30482U;
	int16_t x258 = -335;
	uint16_t x259 = UINT16_MAX;
	static uint32_t x260 = 1891143792U;
	volatile uint32_t t64 = 974250U;

	t64 = (x257|(x258<=(x259==x260)));

	if (t64 != 30483U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x262 = 7U;
	uint8_t x264 = 27U;
	static volatile int32_t t65 = -251;

	t65 = (x261|(x262<=(x263==x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	int64_t x266 = INT64_MAX;
	int8_t x267 = -15;
	static uint32_t x268 = 13936U;

	t66 = (x265|(x266<=(x267==x268)));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = INT64_MIN;
	volatile uint16_t x271 = 2524U;
	static uint16_t x272 = UINT16_MAX;
	volatile int32_t t67 = 1;

	t67 = (x269|(x270<=(x271==x272)));

	if (t67 != -21) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = UINT16_MAX;
	int8_t x274 = 5;
	int64_t x276 = -12962121554779LL;
	int32_t t68 = 3533;

	t68 = (x273|(x274<=(x275==x276)));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x278 = INT8_MAX;
	static int64_t x279 = -425LL;
	int16_t x280 = -1;
	volatile int32_t t69 = 111667211;

	t69 = (x277|(x278<=(x279==x280)));

	if (t69 != -4765) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = 2095105520013422661LL;
	int16_t x282 = INT16_MIN;
	static int32_t x283 = INT32_MIN;

	t70 = (x281|(x282<=(x283==x284)));

	if (t70 != 2095105520013422661LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	int8_t x286 = -2;
	uint16_t x287 = UINT16_MAX;
	uint32_t x288 = 94U;

	t71 = (x285|(x286<=(x287==x288)));

	if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x289 = 31227579LLU;
	int32_t x291 = INT32_MAX;

	t72 = (x289|(x290<=(x291==x292)));

	if (t72 != 31227579LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = -31;
	volatile int16_t x294 = -1;
	int8_t x295 = -1;
	static int8_t x296 = -1;
	static int32_t t73 = -3;

	t73 = (x293|(x294<=(x295==x296)));

	if (t73 != -31) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = -1;
	volatile uint8_t x298 = 5U;
	static uint8_t x299 = 15U;
	static int32_t x300 = INT32_MIN;
	volatile int32_t t74 = -285;

	t74 = (x297|(x298<=(x299==x300)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -1;
	volatile int64_t x302 = INT64_MIN;
	uint8_t x303 = 6U;
	int16_t x304 = INT16_MIN;

	t75 = (x301|(x302<=(x303==x304)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = UINT8_MAX;
	static uint8_t x307 = 2U;

	t76 = (x305|(x306<=(x307==x308)));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = 5;
	uint64_t x312 = 5148018LLU;

	t77 = (x309|(x310<=(x311==x312)));

	if (t77 != 5) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x313 = 1LLU;
	static uint16_t x315 = 0U;
	int16_t x316 = -1;
	volatile uint64_t t78 = 7730088029652170LLU;

	t78 = (x313|(x314<=(x315==x316)));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 135LLU;
	int32_t x319 = INT32_MIN;
	volatile uint8_t x320 = 7U;
	static volatile uint64_t t79 = 226799LLU;

	t79 = (x317|(x318<=(x319==x320)));

	if (t79 != 135LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x322 = 1;
	int16_t x324 = 18;

	t80 = (x321|(x322<=(x323==x324)));

	if (t80 != 3742) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x325 = UINT8_MAX;
	int64_t x327 = -1LL;
	static int16_t x328 = INT16_MIN;
	volatile int32_t t81 = -98;

	t81 = (x325|(x326<=(x327==x328)));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t t82 = 43;

	t82 = (x329|(x330<=(x331==x332)));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x333 = INT8_MAX;
	int64_t x334 = -5818963065236748LL;
	int32_t x335 = INT32_MIN;
	volatile uint32_t x336 = 774736361U;
	int32_t t83 = -306576870;

	t83 = (x333|(x334<=(x335==x336)));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = 5059758;
	int8_t x339 = INT8_MIN;
	static int32_t x340 = INT32_MIN;
	int32_t t84 = 26353;

	t84 = (x337|(x338<=(x339==x340)));

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = UINT16_MAX;
	int8_t x342 = 20;
	volatile int32_t x343 = INT32_MIN;
	uint16_t x344 = 6U;
	static volatile int32_t t85 = -108484;

	t85 = (x341|(x342<=(x343==x344)));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x347 = 30U;
	volatile int64_t x348 = -1548765367LL;
	volatile int64_t t86 = -3023070682305200LL;

	t86 = (x345|(x346<=(x347==x348)));

	if (t86 != 441739206LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x351 = 18U;
	int16_t x352 = INT16_MIN;
	volatile int32_t t87 = 3;

	t87 = (x349|(x350<=(x351==x352)));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -10994708;
	int8_t x354 = INT8_MIN;
	int32_t x355 = -1;

	t88 = (x353|(x354<=(x355==x356)));

	if (t88 != -10994707) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	volatile int32_t x358 = INT32_MAX;
	uint16_t x359 = UINT16_MAX;
	int64_t x360 = 1LL;
	volatile int64_t t89 = INT64_MIN;

	t89 = (x357|(x358<=(x359==x360)));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x361 = UINT16_MAX;
	uint32_t x362 = 36857857U;
	int8_t x363 = INT8_MIN;
	volatile int32_t t90 = -16;

	t90 = (x361|(x362<=(x363==x364)));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 152597U;
	static int64_t x367 = -100184LL;
	int32_t x368 = INT32_MIN;
	uint32_t t91 = 4186U;

	t91 = (x365|(x366<=(x367==x368)));

	if (t91 != 152597U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 2733397LLU;
	volatile int16_t x370 = INT16_MIN;
	int64_t x371 = INT64_MAX;
	static int8_t x372 = -37;
	volatile uint64_t t92 = 763664694226176LLU;

	t92 = (x369|(x370<=(x371==x372)));

	if (t92 != 2733397LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = 1;
	volatile int16_t x374 = INT16_MIN;
	int16_t x375 = INT16_MAX;
	int16_t x376 = INT16_MIN;
	int32_t t93 = 2103;

	t93 = (x373|(x374<=(x375==x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	int8_t x379 = -2;
	int8_t x380 = 13;
	volatile int32_t t94 = -1030832446;

	t94 = (x377|(x378<=(x379==x380)));

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x383 = 923536692LLU;
	int64_t x384 = -1LL;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = (x381|(x382<=(x383==x384)));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = INT32_MIN;
	uint8_t x387 = 42U;
	uint64_t x388 = 31LLU;
	int32_t t96 = INT32_MIN;

	t96 = (x385|(x386<=(x387==x388)));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x390 = 33145433533611798LLU;
	static int32_t t97 = -475;

	t97 = (x389|(x390<=(x391==x392)));

	if (t97 != -7) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = 6411LL;
	uint32_t x394 = 2U;
	static int32_t x395 = -1;
	int16_t x396 = -7057;

	t98 = (x393|(x394<=(x395==x396)));

	if (t98 != 6411LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = 2734540LL;
	int8_t x398 = -1;
	uint32_t x399 = 59456048U;
	int16_t x400 = INT16_MIN;
	volatile int64_t t99 = -170341500285LL;

	t99 = (x397|(x398<=(x399==x400)));

	if (t99 != 2734541LL) { NG(); } else { ; }
	
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

