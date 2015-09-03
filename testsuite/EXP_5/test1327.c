#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x3 = 149;
uint8_t x22 = 14U;
uint32_t x24 = 28U;
static uint16_t x26 = UINT16_MAX;
uint32_t x33 = 68U;
int8_t x36 = INT8_MIN;
static uint16_t x41 = 31U;
int16_t x43 = INT16_MIN;
int32_t t8 = -13638;
int32_t x47 = INT32_MIN;
int64_t x48 = -287694850009625887LL;
int32_t x49 = -1347028;
static volatile int8_t x51 = INT8_MIN;
volatile uint16_t x53 = UINT16_MAX;
uint8_t x54 = UINT8_MAX;
uint64_t x55 = 1595991LLU;
uint64_t x56 = 3390900203269169LLU;
static int16_t x61 = -4508;
int16_t x62 = INT16_MIN;
static int16_t x65 = INT16_MAX;
uint8_t x66 = UINT8_MAX;
int64_t x69 = -1LL;
int32_t t16 = -11;
uint8_t x81 = 11U;
static volatile uint16_t x85 = UINT16_MAX;
volatile int16_t x86 = INT16_MIN;
static int16_t x89 = 303;
uint32_t x92 = UINT32_MAX;
volatile int64_t x95 = 507569LL;
int8_t x100 = -1;
static int64_t t21 = 955812664LL;
volatile uint8_t x105 = 34U;
int64_t x106 = -189116LL;
int32_t t23 = 12;
volatile int64_t t24 = -5529LL;
uint16_t x113 = UINT16_MAX;
uint32_t x116 = UINT32_MAX;
uint64_t x120 = UINT64_MAX;
volatile uint64_t t26 = 8013139LLU;
static int64_t x121 = -330187194LL;
static volatile uint8_t x124 = 3U;
static volatile int32_t t28 = -11;
int8_t x132 = INT8_MIN;
int32_t x134 = INT32_MAX;
int8_t x135 = 28;
int32_t x137 = -1;
volatile uint64_t x143 = 514441LLU;
static int64_t x157 = INT64_MIN;
static volatile uint32_t x164 = UINT32_MAX;
int8_t x165 = INT8_MAX;
int8_t x174 = INT8_MAX;
int64_t x180 = -1LL;
int8_t x181 = INT8_MIN;
static int64_t t42 = -61580066LL;
int16_t x190 = -1;
int32_t t43 = -3;
uint32_t x194 = 834824032U;
uint32_t x199 = 1010481302U;
uint32_t x200 = 222U;
static volatile int64_t x201 = -814809769LL;
uint64_t x206 = 964678837319594LLU;
int32_t x211 = INT32_MIN;
int16_t x212 = INT16_MIN;
static int32_t x224 = INT32_MIN;
int64_t t52 = -5774261599723LL;
int64_t x229 = 0LL;
uint8_t x237 = 3U;
int8_t x238 = INT8_MIN;
volatile int32_t t55 = -21527;
int16_t x243 = -1;
static int64_t x244 = -1LL;
int8_t x245 = INT8_MIN;
static int32_t x248 = 4425;
int8_t x249 = -1;
int16_t x250 = INT16_MIN;
uint8_t x261 = 83U;
static int32_t x262 = 44607677;
int16_t x269 = INT16_MAX;
static int32_t t61 = 12;
static int16_t x280 = INT16_MIN;
int32_t x287 = INT32_MAX;
uint16_t x291 = UINT16_MAX;
uint64_t x297 = 1018320798LLU;
int64_t x299 = 51372LL;
uint16_t x300 = UINT16_MAX;
int16_t x304 = -1;
uint8_t x307 = 16U;
volatile int32_t x310 = INT32_MIN;
int32_t t70 = 452458749;
uint8_t x323 = 6U;
int8_t x326 = INT8_MIN;
volatile int32_t t72 = 865941242;
volatile uint64_t t73 = 22114811LLU;
volatile uint32_t x342 = 205U;
int64_t x347 = -1LL;
static uint32_t x349 = 10770U;
volatile int32_t x350 = -1;
int64_t x351 = INT64_MAX;
uint32_t t76 = 121381U;
int16_t x354 = INT16_MIN;
uint16_t x355 = 27U;
int64_t x380 = 31LL;
int64_t t81 = 1182LL;
static volatile int16_t x387 = INT16_MAX;
int64_t x395 = -1LL;
int16_t x396 = INT16_MIN;
uint64_t x400 = 4249LLU;
uint16_t x416 = UINT16_MAX;
volatile int32_t t87 = 9344;
volatile uint32_t x423 = 275925U;
int32_t x425 = -1;
int32_t t89 = 203543283;
int16_t x436 = -1;
int32_t t91 = 94;
int32_t x447 = INT32_MIN;
volatile uint32_t x452 = 2749516U;
int32_t x458 = INT32_MAX;
uint32_t x460 = 3U;
volatile uint8_t x469 = 3U;
static int16_t x471 = -1;
uint32_t t98 = 434820U;
uint32_t x473 = 645U;
static int16_t x474 = INT16_MIN;
volatile int32_t x476 = INT32_MAX;


void f0(void) {
	volatile uint64_t x1 = 16773626315LLU;
	static volatile uint32_t x2 = UINT32_MAX;
	int16_t x4 = -208;
	uint64_t t0 = 1LLU;

	t0 = (x1+((x2==x3)|x4));

	if (t0 != 16773626107LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 753753171U;
	int32_t x6 = INT32_MIN;
	uint32_t x7 = UINT32_MAX;
	uint8_t x8 = 0U;
	uint32_t t1 = 37U;

	t1 = (x5+((x6==x7)|x8));

	if (t1 != 753753171U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int64_t x10 = INT64_MIN;
	int8_t x11 = -1;
	int8_t x12 = -1;
	volatile int32_t t2 = 253;

	t2 = (x9+((x10==x11)|x12));

	if (t2 != -32769) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int64_t x14 = INT64_MIN;
	uint8_t x15 = 0U;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = 30590;

	t3 = (x13+((x14==x15)|x16));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	static int8_t x23 = INT8_MAX;
	volatile uint32_t t4 = 157288970U;

	t4 = (x21+((x22==x23)|x24));

	if (t4 != 4294934556U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x25 = 0LLU;
	uint8_t x27 = UINT8_MAX;
	int8_t x28 = INT8_MIN;
	static volatile uint64_t t5 = 580333135LLU;

	t5 = (x25+((x26==x27)|x28));

	if (t5 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x34 = INT8_MIN;
	int32_t x35 = INT32_MAX;
	volatile uint32_t t6 = 176308095U;

	t6 = (x33+((x34==x35)|x36));

	if (t6 != 4294967236U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MAX;
	volatile int8_t x38 = INT8_MIN;
	int32_t x39 = INT32_MIN;
	uint32_t x40 = UINT32_MAX;
	volatile uint32_t t7 = 952U;

	t7 = (x37+((x38==x39)|x40));

	if (t7 != 32766U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x42 = -1;
	volatile int8_t x44 = INT8_MAX;

	t8 = (x41+((x42==x43)|x44));

	if (t8 != 158) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = UINT16_MAX;
	int32_t x46 = -639;
	static volatile int64_t t9 = 3561566490749188LL;

	t9 = (x45+((x46==x47)|x48));

	if (t9 != -287694850009560352LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x50 = -1;
	uint64_t x52 = 3526034505602708809LLU;
	volatile uint64_t t10 = 1536046LLU;

	t10 = (x49+((x50==x51)|x52));

	if (t10 != 3526034505601361781LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t t11 = 3LLU;

	t11 = (x53+((x54==x55)|x56));

	if (t11 != 3390900203334704LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x63 = 9799U;
	int16_t x64 = 0;
	volatile int32_t t12 = 18806;

	t12 = (x61+((x62==x63)|x64));

	if (t12 != -4508) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x67 = -1;
	uint8_t x68 = 0U;
	int32_t t13 = -1901842;

	t13 = (x65+((x66==x67)|x68));

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x70 = -1;
	volatile int16_t x71 = -202;
	uint64_t x72 = 31870227404LLU;
	volatile uint64_t t14 = 4429LLU;

	t14 = (x69+((x70==x71)|x72));

	if (t14 != 31870227403LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = -1;
	volatile uint16_t x74 = 28U;
	static uint32_t x75 = UINT32_MAX;
	uint64_t x76 = 4809025744720678011LLU;
	static uint64_t t15 = 678LLU;

	t15 = (x73+((x74==x75)|x76));

	if (t15 != 4809025744720678010LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x77 = 1U;
	int64_t x78 = INT64_MAX;
	int16_t x79 = -3;
	static uint16_t x80 = UINT16_MAX;

	t16 = (x77+((x78==x79)|x80));

	if (t16 != 65536) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x82 = INT64_MIN;
	int64_t x83 = INT64_MIN;
	volatile uint8_t x84 = 8U;
	int32_t t17 = -1293;

	t17 = (x81+((x82==x83)|x84));

	if (t17 != 20) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x87 = INT64_MAX;
	int32_t x88 = 7116864;
	static int32_t t18 = -2977;

	t18 = (x85+((x86==x87)|x88));

	if (t18 != 7182399) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x90 = INT64_MIN;
	uint32_t x91 = 310U;
	volatile uint32_t t19 = 2678775U;

	t19 = (x89+((x90==x91)|x92));

	if (t19 != 302U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = INT32_MAX;
	int16_t x96 = INT16_MIN;
	volatile int32_t t20 = 14660;

	t20 = (x93+((x94==x95)|x96));

	if (t20 != -65536) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x97 = INT64_MAX;
	uint16_t x98 = 12U;
	volatile uint8_t x99 = 0U;

	t21 = (x97+((x98==x99)|x100));

	if (t21 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = INT8_MIN;
	static int16_t x102 = INT16_MIN;
	int16_t x103 = 1;
	uint8_t x104 = 2U;
	static int32_t t22 = -85560065;

	t22 = (x101+((x102==x103)|x104));

	if (t22 != -126) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x107 = INT32_MIN;
	int16_t x108 = INT16_MAX;

	t23 = (x105+((x106==x107)|x108));

	if (t23 != 32801) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = -1LL;
	static volatile int64_t x110 = -462446326904762252LL;
	int32_t x111 = INT32_MIN;
	static int8_t x112 = -1;

	t24 = (x109+((x110==x111)|x112));

	if (t24 != -2LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x114 = INT32_MIN;
	static volatile int16_t x115 = -1;
	static volatile uint32_t t25 = 130141U;

	t25 = (x113+((x114==x115)|x116));

	if (t25 != 65534U) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x117 = 17326520688LL;
	volatile uint64_t x118 = 441735065918LLU;
	volatile int64_t x119 = INT64_MIN;

	t26 = (x117+((x118==x119)|x120));

	if (t26 != 17326520687LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x122 = INT8_MIN;
	int8_t x123 = -1;
	int64_t t27 = -36091541718060194LL;

	t27 = (x121+((x122==x123)|x124));

	if (t27 != -330187191LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x125 = 1;
	int8_t x126 = INT8_MIN;
	int64_t x127 = INT64_MIN;
	static uint16_t x128 = 13U;

	t28 = (x125+((x126==x127)|x128));

	if (t28 != 14) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x129 = -1LL;
	volatile uint16_t x130 = 4781U;
	volatile int32_t x131 = INT32_MIN;
	static int64_t t29 = 159806300968271440LL;

	t29 = (x129+((x130==x131)|x132));

	if (t29 != -129LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x133 = 1297U;
	static uint32_t x136 = UINT32_MAX;
	volatile uint32_t t30 = 22084611U;

	t30 = (x133+((x134==x135)|x136));

	if (t30 != 1296U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x138 = 47152676209LLU;
	int8_t x139 = INT8_MIN;
	int32_t x140 = -1;
	static volatile int32_t t31 = 153098537;

	t31 = (x137+((x138==x139)|x140));

	if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = -1;
	int8_t x142 = 31;
	volatile uint8_t x144 = UINT8_MAX;
	int32_t t32 = -194;

	t32 = (x141+((x142==x143)|x144));

	if (t32 != 254) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x149 = 11U;
	volatile int64_t x150 = INT64_MIN;
	static int8_t x151 = INT8_MIN;
	int8_t x152 = INT8_MAX;
	static int32_t t33 = 66285;

	t33 = (x149+((x150==x151)|x152));

	if (t33 != 138) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = 41870376U;
	int8_t x154 = -19;
	int32_t x155 = INT32_MAX;
	volatile int16_t x156 = 8575;
	volatile uint32_t t34 = 51117372U;

	t34 = (x153+((x154==x155)|x156));

	if (t34 != 41878951U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x158 = INT32_MIN;
	uint16_t x159 = 302U;
	int8_t x160 = INT8_MAX;
	static volatile int64_t t35 = 3LL;

	t35 = (x157+((x158==x159)|x160));

	if (t35 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x161 = 1857066LLU;
	static int32_t x162 = INT32_MAX;
	uint16_t x163 = 5600U;
	uint64_t t36 = 783LLU;

	t36 = (x161+((x162==x163)|x164));

	if (t36 != 4296824361LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x166 = 28;
	uint32_t x167 = 97218U;
	int16_t x168 = INT16_MIN;
	int32_t t37 = 6835;

	t37 = (x165+((x166==x167)|x168));

	if (t37 != -32641) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x169 = 1564395578845387LLU;
	int8_t x170 = 1;
	int32_t x171 = -1;
	static volatile uint64_t x172 = 1038864572910LLU;
	uint64_t t38 = 101860581129030LLU;

	t38 = (x169+((x170==x171)|x172));

	if (t38 != 1565434443418297LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x173 = INT8_MIN;
	int32_t x175 = -1;
	static int32_t x176 = -843361;
	int32_t t39 = -17998;

	t39 = (x173+((x174==x175)|x176));

	if (t39 != -843489) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = INT32_MAX;
	volatile int16_t x178 = -1;
	volatile int8_t x179 = INT8_MAX;
	volatile int64_t t40 = 8704744365LL;

	t40 = (x177+((x178==x179)|x180));

	if (t40 != 2147483646LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x182 = INT16_MIN;
	static uint64_t x183 = UINT64_MAX;
	int16_t x184 = INT16_MIN;
	int32_t t41 = 240231411;

	t41 = (x181+((x182==x183)|x184));

	if (t41 != -32896) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = 8;
	uint16_t x186 = 0U;
	int8_t x187 = 2;
	int64_t x188 = INT64_MIN;

	t42 = (x185+((x186==x187)|x188));

	if (t42 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x189 = -1;
	volatile uint32_t x191 = 101173614U;
	int32_t x192 = INT32_MAX;

	t43 = (x189+((x190==x191)|x192));

	if (t43 != 2147483646) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = 14;
	int8_t x195 = 1;
	int64_t x196 = 1816856142011361963LL;
	volatile int64_t t44 = -498780854524212990LL;

	t44 = (x193+((x194==x195)|x196));

	if (t44 != 1816856142011361977LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x197 = 135301LL;
	volatile uint8_t x198 = UINT8_MAX;
	int64_t t45 = -23815070806378LL;

	t45 = (x197+((x198==x199)|x200));

	if (t45 != 135523LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x202 = 11416277515050635LLU;
	int16_t x203 = -1;
	uint8_t x204 = UINT8_MAX;
	volatile int64_t t46 = 0LL;

	t46 = (x201+((x202==x203)|x204));

	if (t46 != -814809514LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = INT8_MIN;
	uint8_t x207 = UINT8_MAX;
	int16_t x208 = INT16_MAX;
	int32_t t47 = 0;

	t47 = (x205+((x206==x207)|x208));

	if (t47 != 32639) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x209 = 43U;
	int16_t x210 = -1;
	static volatile int32_t t48 = -9046;

	t48 = (x209+((x210==x211)|x212));

	if (t48 != -32725) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x213 = INT32_MIN;
	int16_t x214 = -15092;
	static uint8_t x215 = 18U;
	volatile uint64_t x216 = UINT64_MAX;
	volatile uint64_t t49 = 1133455489LLU;

	t49 = (x213+((x214==x215)|x216));

	if (t49 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x217 = INT32_MIN;
	static int8_t x218 = -4;
	int64_t x219 = -68518744051LL;
	uint64_t x220 = 264164554250337929LLU;
	volatile uint64_t t50 = 481728397469LLU;

	t50 = (x217+((x218==x219)|x220));

	if (t50 != 264164552102854281LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = -6259060LL;
	static int64_t x222 = -1LL;
	uint64_t x223 = UINT64_MAX;
	int64_t t51 = 336430359LL;

	t51 = (x221+((x222==x223)|x224));

	if (t51 != -2153742707LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = INT8_MIN;
	int64_t x226 = INT64_MAX;
	static volatile uint16_t x227 = 3U;
	volatile int64_t x228 = -1LL;

	t52 = (x225+((x226==x227)|x228));

	if (t52 != -129LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x230 = 124276610;
	volatile uint8_t x231 = 4U;
	uint8_t x232 = UINT8_MAX;
	volatile int64_t t53 = 1970254065255LL;

	t53 = (x229+((x230==x231)|x232));

	if (t53 != 255LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x233 = UINT64_MAX;
	uint64_t x234 = 16288280278914LLU;
	uint32_t x235 = 1725015U;
	int32_t x236 = INT32_MAX;
	static volatile uint64_t t54 = 825328LLU;

	t54 = (x233+((x234==x235)|x236));

	if (t54 != 2147483646LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x239 = 16476298261693LL;
	int8_t x240 = -1;

	t55 = (x237+((x238==x239)|x240));

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = INT64_MAX;
	static int16_t x242 = -1;
	volatile int64_t t56 = -85455939340025776LL;

	t56 = (x241+((x242==x243)|x244));

	if (t56 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x246 = 1;
	static volatile int16_t x247 = INT16_MIN;
	int32_t t57 = -63;

	t57 = (x245+((x246==x247)|x248));

	if (t57 != 4297) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x251 = INT64_MIN;
	static int8_t x252 = -13;
	int32_t t58 = -824011;

	t58 = (x249+((x250==x251)|x252));

	if (t58 != -14) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = 0;
	uint64_t x258 = 140329784492LLU;
	int16_t x259 = 1;
	int8_t x260 = INT8_MIN;
	int32_t t59 = -3402;

	t59 = (x257+((x258==x259)|x260));

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x263 = 28688297938218LLU;
	uint32_t x264 = UINT32_MAX;
	volatile uint32_t t60 = 432805U;

	t60 = (x261+((x262==x263)|x264));

	if (t60 != 82U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x270 = INT16_MAX;
	int8_t x271 = -1;
	int16_t x272 = INT16_MIN;

	t61 = (x269+((x270==x271)|x272));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x277 = -67LL;
	int16_t x278 = INT16_MIN;
	uint16_t x279 = 5U;
	static int64_t t62 = -26788987LL;

	t62 = (x277+((x278==x279)|x280));

	if (t62 != -32835LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x281 = 5U;
	volatile int16_t x282 = -46;
	int8_t x283 = INT8_MIN;
	volatile uint64_t x284 = 118606774617882LLU;
	volatile uint64_t t63 = 1619LLU;

	t63 = (x281+((x282==x283)|x284));

	if (t63 != 118606774617887LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x285 = -1;
	uint16_t x286 = 7U;
	int8_t x288 = -1;
	int32_t t64 = -1179;

	t64 = (x285+((x286==x287)|x288));

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x289 = -1;
	volatile uint8_t x290 = UINT8_MAX;
	static uint64_t x292 = UINT64_MAX;
	volatile uint64_t t65 = 106654141LLU;

	t65 = (x289+((x290==x291)|x292));

	if (t65 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x298 = -1;
	uint64_t t66 = 617351200093LLU;

	t66 = (x297+((x298==x299)|x300));

	if (t66 != 1018386333LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x301 = 16499250;
	int32_t x302 = INT32_MIN;
	uint32_t x303 = 46890878U;
	int32_t t67 = 1;

	t67 = (x301+((x302==x303)|x304));

	if (t67 != 16499249) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x305 = 2;
	uint64_t x306 = 96400417275LLU;
	volatile int32_t x308 = -9;
	volatile int32_t t68 = -127072;

	t68 = (x305+((x306==x307)|x308));

	if (t68 != -7) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x309 = -2858531LL;
	uint8_t x311 = 12U;
	uint8_t x312 = 59U;
	int64_t t69 = -998257963562611LL;

	t69 = (x309+((x310==x311)|x312));

	if (t69 != -2858472LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x313 = -1;
	int8_t x314 = INT8_MAX;
	static int16_t x315 = INT16_MIN;
	uint16_t x316 = UINT16_MAX;

	t70 = (x313+((x314==x315)|x316));

	if (t70 != 65534) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x321 = 1LLU;
	volatile int64_t x322 = INT64_MIN;
	int16_t x324 = INT16_MIN;
	uint64_t t71 = 513458210100181LLU;

	t71 = (x321+((x322==x323)|x324));

	if (t71 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x325 = -1;
	uint64_t x327 = 8407LLU;
	int16_t x328 = 3;

	t72 = (x325+((x326==x327)|x328));

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x333 = 28468821U;
	uint32_t x334 = UINT32_MAX;
	int32_t x335 = INT32_MIN;
	uint64_t x336 = UINT64_MAX;

	t73 = (x333+((x334==x335)|x336));

	if (t73 != 28468820LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x341 = INT16_MIN;
	int16_t x343 = INT16_MIN;
	volatile uint32_t x344 = 33U;
	volatile uint32_t t74 = 10336936U;

	t74 = (x341+((x342==x343)|x344));

	if (t74 != 4294934561U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x345 = 3756434451077610552LLU;
	volatile int16_t x346 = INT16_MAX;
	volatile int8_t x348 = INT8_MIN;
	static uint64_t t75 = 25751514130113LLU;

	t75 = (x345+((x346==x347)|x348));

	if (t75 != 3756434451077610424LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x352 = INT16_MIN;

	t76 = (x349+((x350==x351)|x352));

	if (t76 != 4294945298U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x353 = INT8_MIN;
	uint32_t x356 = 30091U;
	static volatile uint32_t t77 = 127U;

	t77 = (x353+((x354==x355)|x356));

	if (t77 != 29963U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x361 = 5314;
	uint8_t x362 = UINT8_MAX;
	static uint8_t x363 = UINT8_MAX;
	int16_t x364 = -1;
	int32_t t78 = 0;

	t78 = (x361+((x362==x363)|x364));

	if (t78 != 5313) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x365 = UINT32_MAX;
	static int8_t x366 = -1;
	volatile int16_t x367 = -1;
	int32_t x368 = -1;
	uint32_t t79 = 109667U;

	t79 = (x365+((x366==x367)|x368));

	if (t79 != 4294967294U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x369 = INT16_MIN;
	int64_t x370 = INT64_MIN;
	static int8_t x371 = 62;
	static int64_t x372 = -53418859206LL;
	int64_t t80 = 2458LL;

	t80 = (x369+((x370==x371)|x372));

	if (t80 != -53418891974LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x377 = -1;
	int8_t x378 = INT8_MAX;
	int8_t x379 = -1;

	t81 = (x377+((x378==x379)|x380));

	if (t81 != 30LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x385 = -14468955185682697LL;
	static int16_t x386 = INT16_MIN;
	int32_t x388 = INT32_MIN;
	int64_t t82 = -2282777898820183474LL;

	t82 = (x385+((x386==x387)|x388));

	if (t82 != -14468957333166345LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x389 = 1LL;
	int8_t x390 = -5;
	volatile int64_t x391 = -2878205668396047883LL;
	int64_t x392 = INT64_MIN;
	volatile int64_t t83 = -25691406LL;

	t83 = (x389+((x390==x391)|x392));

	if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x393 = -1LL;
	volatile uint8_t x394 = 60U;
	int64_t t84 = 0LL;

	t84 = (x393+((x394==x395)|x396));

	if (t84 != -32769LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x397 = INT16_MAX;
	int32_t x398 = -17;
	int64_t x399 = INT64_MIN;
	uint64_t t85 = 5142101002022LLU;

	t85 = (x397+((x398==x399)|x400));

	if (t85 != 37016LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x401 = 391;
	uint16_t x402 = 344U;
	int64_t x403 = INT64_MAX;
	uint8_t x404 = UINT8_MAX;
	int32_t t86 = -4977;

	t86 = (x401+((x402==x403)|x404));

	if (t86 != 646) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x413 = 1;
	static volatile int64_t x414 = -1LL;
	int8_t x415 = 1;

	t87 = (x413+((x414==x415)|x416));

	if (t87 != 65536) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x421 = -1;
	static uint16_t x422 = 15U;
	uint16_t x424 = 1904U;
	static int32_t t88 = 13356;

	t88 = (x421+((x422==x423)|x424));

	if (t88 != 1903) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x426 = 4U;
	int32_t x427 = -2579284;
	uint16_t x428 = 22287U;

	t89 = (x425+((x426==x427)|x428));

	if (t89 != 22286) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x433 = INT8_MIN;
	int8_t x434 = INT8_MIN;
	int16_t x435 = INT16_MIN;
	static volatile int32_t t90 = 19;

	t90 = (x433+((x434==x435)|x436));

	if (t90 != -129) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x437 = -1;
	int16_t x438 = 253;
	volatile uint64_t x439 = UINT64_MAX;
	int16_t x440 = INT16_MIN;

	t91 = (x437+((x438==x439)|x440));

	if (t91 != -32769) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x441 = 5361686;
	int16_t x442 = 1;
	int32_t x443 = -6297;
	uint64_t x444 = 522367931912380855LLU;
	volatile uint64_t t92 = 0LLU;

	t92 = (x441+((x442==x443)|x444));

	if (t92 != 522367931917742541LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x445 = 47LLU;
	static int8_t x446 = INT8_MIN;
	int16_t x448 = 3;
	static volatile uint64_t t93 = 0LLU;

	t93 = (x445+((x446==x447)|x448));

	if (t93 != 50LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x449 = 8;
	int8_t x450 = -6;
	static uint64_t x451 = UINT64_MAX;
	volatile uint32_t t94 = 275U;

	t94 = (x449+((x450==x451)|x452));

	if (t94 != 2749524U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x453 = 7075252LLU;
	int64_t x454 = -1LL;
	static volatile int32_t x455 = -1;
	volatile int16_t x456 = -7;
	volatile uint64_t t95 = 3LLU;

	t95 = (x453+((x454==x455)|x456));

	if (t95 != 7075245LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x457 = 923959856U;
	int32_t x459 = -1;
	uint32_t t96 = 7537680U;

	t96 = (x457+((x458==x459)|x460));

	if (t96 != 923959859U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x461 = -1;
	static int16_t x462 = INT16_MIN;
	static int32_t x463 = 818758;
	uint64_t x464 = UINT64_MAX;
	volatile uint64_t t97 = 516953748LLU;

	t97 = (x461+((x462==x463)|x464));

	if (t97 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x470 = INT16_MIN;
	uint32_t x472 = UINT32_MAX;

	t98 = (x469+((x470==x471)|x472));

	if (t98 != 2U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x475 = INT64_MIN;
	volatile uint32_t t99 = 2765U;

	t99 = (x473+((x474==x475)|x476));

	if (t99 != 2147484292U) { NG(); } else { ; }
	
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

