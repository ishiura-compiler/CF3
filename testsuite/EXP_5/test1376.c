#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = -2670948364LL;
uint16_t x6 = UINT16_MAX;
int32_t x7 = INT32_MIN;
int64_t t2 = 171993321887105676LL;
int64_t x13 = -4LL;
int32_t x14 = 4308;
int64_t x17 = INT64_MIN;
uint32_t x20 = UINT32_MAX;
int16_t x22 = INT16_MAX;
int32_t x27 = -11683;
static uint32_t x29 = UINT32_MAX;
volatile uint16_t x31 = UINT16_MAX;
uint64_t t7 = 4944753140LLU;
volatile uint16_t x54 = 501U;
int8_t x58 = INT8_MIN;
volatile int64_t x61 = INT64_MIN;
int8_t x62 = INT8_MIN;
uint64_t x73 = 604360LLU;
uint16_t x78 = 1274U;
int8_t x79 = INT8_MAX;
int16_t x83 = -37;
int16_t x84 = INT16_MIN;
static volatile int64_t t19 = -241679388872594LL;
int16_t x94 = INT16_MAX;
uint64_t x95 = 249467830LLU;
int32_t x99 = 1;
static int16_t x100 = -1;
static int32_t t22 = 281;
int32_t x113 = INT32_MIN;
static int8_t x119 = 21;
uint64_t x122 = UINT64_MAX;
int32_t x126 = INT32_MIN;
static int64_t x127 = INT64_MIN;
int64_t x128 = 42676974494901LL;
int16_t x132 = INT16_MIN;
volatile int32_t x135 = INT32_MIN;
int16_t x136 = INT16_MIN;
volatile uint64_t x140 = 47673591326703LLU;
int64_t x143 = -152097181754607552LL;
volatile int8_t x145 = INT8_MIN;
int32_t x146 = 8;
static volatile int64_t x147 = -40235LL;
static volatile int32_t t34 = -3943;
uint32_t t35 = 8478256U;
uint8_t x166 = 0U;
static int16_t x172 = INT16_MIN;
int8_t x184 = -1;
int8_t x187 = -1;
int64_t x189 = INT64_MIN;
volatile uint64_t t43 = 255497548508110802LLU;
uint64_t t44 = 1461780275831526LLU;
static int32_t t47 = 73681;
int64_t x215 = -1LL;
int64_t t49 = -427499051073207LL;
uint8_t x219 = 16U;
int16_t x222 = -1;
static volatile int32_t t51 = -800756;
int32_t x226 = INT32_MAX;
static int16_t x233 = INT16_MAX;
static int64_t x241 = INT64_MIN;
uint32_t x250 = 11876812U;
int16_t x252 = -1;
uint64_t x253 = 1458512056113600LLU;
volatile int64_t x261 = -1LL;
uint8_t x264 = 28U;
static volatile int64_t t60 = 4331447132LL;
int16_t x269 = INT16_MAX;
int8_t x275 = -1;
volatile uint32_t x278 = UINT32_MAX;
volatile int64_t t64 = -49905687916777LL;
uint16_t x286 = 19205U;
volatile uint8_t x294 = 19U;
int64_t x295 = -1LL;
static int32_t x303 = INT32_MIN;
uint8_t x305 = 0U;
int32_t t70 = 4566353;
int32_t x313 = INT32_MIN;
int64_t x318 = INT64_MAX;
uint32_t x320 = 32861U;
uint32_t t73 = 2152024U;
static int16_t x321 = INT16_MIN;
static volatile uint8_t x326 = UINT8_MAX;
uint32_t x328 = UINT32_MAX;
uint8_t x335 = UINT8_MAX;
int8_t x336 = -3;
volatile int32_t t76 = 15;
volatile uint64_t x345 = UINT64_MAX;
uint16_t x346 = UINT16_MAX;
int16_t x347 = -1;
int8_t x348 = 1;
int8_t x350 = INT8_MIN;
int32_t x351 = INT32_MIN;
volatile uint64_t t80 = 35152LLU;
static uint16_t x359 = UINT16_MAX;
uint16_t x367 = UINT16_MAX;
int32_t x384 = -1;
int8_t x390 = INT8_MAX;
static uint64_t x400 = 17101LLU;
int32_t x403 = INT32_MAX;
static uint64_t x407 = 55477LLU;
int32_t t93 = -217;
int64_t x411 = 508764LL;
int64_t x413 = INT64_MIN;
int16_t x416 = INT16_MIN;
int8_t x425 = 1;
int16_t x430 = 4334;


void f0(void) {
	volatile uint8_t x1 = 10U;
	int32_t x2 = 1;
	int8_t x3 = -1;
	int64_t x4 = -1LL;

	t0 = (x1&((x2<x3)-x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	int16_t x8 = INT16_MAX;
	volatile int32_t t1 = 5;

	t1 = (x5&((x6<x7)-x8));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static int16_t x10 = -1;
	int32_t x11 = INT32_MAX;
	static int32_t x12 = -44975;

	t2 = (x9&((x10<x11)-x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x15 = UINT8_MAX;
	int8_t x16 = INT8_MAX;
	volatile int64_t t3 = -408468400666LL;

	t3 = (x13&((x14<x15)-x16));

	if (t3 != -128LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 16829U;
	int64_t x19 = INT64_MIN;
	int64_t t4 = 6250094226979152LL;

	t4 = (x17&((x18<x19)-x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int64_t x23 = INT64_MAX;
	volatile uint16_t x24 = UINT16_MAX;
	int32_t t5 = 403934;

	t5 = (x21&((x22<x23)-x24));

	if (t5 != -65536) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MAX;
	int8_t x26 = INT8_MIN;
	uint32_t x28 = 36980902U;
	volatile uint32_t t6 = 465902868U;

	t6 = (x25&((x26<x27)-x28));

	if (t6 != 90U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x30 = -570999329LL;
	uint64_t x32 = UINT64_MAX;

	t7 = (x29&((x30<x31)-x32));

	if (t7 != 2LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 56U;
	int32_t x34 = INT32_MIN;
	volatile int64_t x35 = INT64_MIN;
	uint16_t x36 = 54U;
	static int32_t t8 = 95775;

	t8 = (x33&((x34<x35)-x36));

	if (t8 != 8) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	volatile int16_t x38 = INT16_MIN;
	uint64_t x39 = UINT64_MAX;
	static int8_t x40 = INT8_MAX;
	volatile int32_t t9 = 272;

	t9 = (x37&((x38<x39)-x40));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	uint16_t x42 = UINT16_MAX;
	volatile uint16_t x43 = UINT16_MAX;
	int8_t x44 = INT8_MIN;
	int64_t t10 = -1518903931970LL;

	t10 = (x41&((x42<x43)-x44));

	if (t10 != 128LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	int8_t x46 = INT8_MAX;
	static int16_t x47 = 27;
	uint64_t x48 = UINT64_MAX;
	volatile uint64_t t11 = 62344887797LLU;

	t11 = (x45&((x46<x47)-x48));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 3881451LLU;
	volatile uint16_t x50 = 160U;
	uint32_t x51 = 401U;
	int8_t x52 = INT8_MIN;
	volatile uint64_t t12 = 9830LLU;

	t12 = (x49&((x50<x51)-x52));

	if (t12 != 129LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = -1;
	static uint32_t x55 = 677706968U;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = 963;

	t13 = (x53&((x54<x55)-x56));

	if (t13 != 32769) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = INT8_MIN;
	int32_t x59 = -1;
	volatile int8_t x60 = INT8_MIN;
	int32_t t14 = 43388;

	t14 = (x57&((x58<x59)-x60));

	if (t14 != 128) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x63 = 1671U;
	static int64_t x64 = -1LL;
	static volatile int64_t t15 = 0LL;

	t15 = (x61&((x62<x63)-x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MAX;
	static uint64_t x66 = 1251LLU;
	volatile int16_t x67 = INT16_MIN;
	volatile int16_t x68 = INT16_MAX;
	int32_t t16 = -1;

	t16 = (x65&((x66<x67)-x68));

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x74 = INT8_MIN;
	static int16_t x75 = INT16_MIN;
	int64_t x76 = -1LL;
	uint64_t t17 = 2536LLU;

	t17 = (x73&((x74<x75)-x76));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MIN;
	static int16_t x80 = INT16_MAX;
	volatile int64_t t18 = INT64_MIN;

	t18 = (x77&((x78<x79)-x80));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MAX;
	int32_t x82 = -491;

	t19 = (x81&((x82<x83)-x84));

	if (t19 != 32769LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = -8971902336206447LL;
	int32_t x86 = INT32_MIN;
	int8_t x87 = INT8_MAX;
	uint32_t x88 = 518162U;
	int64_t t20 = -144645060LL;

	t20 = (x85&((x86<x87)-x88));

	if (t20 != 877138305LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = -1;
	int8_t x96 = INT8_MIN;
	volatile int32_t t21 = -6677;

	t21 = (x93&((x94<x95)-x96));

	if (t21 != 129) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = -1;
	int16_t x98 = 521;

	t22 = (x97&((x98<x99)-x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x101 = 56U;
	uint16_t x102 = 3U;
	uint64_t x103 = 5087580178150LLU;
	static int32_t x104 = -1;
	int32_t t23 = 377308557;

	t23 = (x101&((x102<x103)-x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = 2064428872U;
	int64_t x106 = -1LL;
	volatile int64_t x107 = INT64_MAX;
	uint16_t x108 = UINT16_MAX;
	static uint32_t t24 = 167969U;

	t24 = (x105&((x106<x107)-x108));

	if (t24 != 2064384000U) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x109 = -20940;
	volatile int64_t x110 = INT64_MIN;
	uint32_t x111 = UINT32_MAX;
	static volatile int16_t x112 = INT16_MIN;
	volatile int32_t t25 = 152985082;

	t25 = (x109&((x110<x111)-x112));

	if (t25 != 32768) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x114 = 57U;
	int32_t x115 = -236932;
	int8_t x116 = INT8_MIN;
	volatile int32_t t26 = -1;

	t26 = (x113&((x114<x115)-x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = -12;
	uint16_t x118 = UINT16_MAX;
	static volatile int64_t x120 = INT64_MAX;
	volatile int64_t t27 = INT64_MIN;

	t27 = (x117&((x118<x119)-x120));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = -2240;
	int64_t x123 = -1LL;
	volatile int32_t x124 = 127502;
	int32_t t28 = -235;

	t28 = (x121&((x122<x123)-x124));

	if (t28 != -129728) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x125 = -1;
	int64_t t29 = 534669805322LL;

	t29 = (x125&((x126<x127)-x128));

	if (t29 != -42676974494901LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = INT16_MAX;
	static int16_t x130 = INT16_MAX;
	static volatile uint8_t x131 = 13U;
	volatile int32_t t30 = 3;

	t30 = (x129&((x130<x131)-x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = -1;
	int8_t x134 = INT8_MIN;
	static volatile int32_t t31 = 286832;

	t31 = (x133&((x134<x135)-x136));

	if (t31 != 32768) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x137 = UINT16_MAX;
	int16_t x138 = -293;
	int16_t x139 = 1;
	uint64_t t32 = 6517491590945672LLU;

	t32 = (x137&((x138<x139)-x140));

	if (t32 != 6162LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x141 = 5180347U;
	int8_t x142 = INT8_MAX;
	int8_t x144 = INT8_MIN;
	static uint32_t t33 = 802U;

	t33 = (x141&((x142<x143)-x144));

	if (t33 != 128U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x148 = -1;

	t34 = (x145&((x146<x147)-x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x149 = INT16_MAX;
	int16_t x150 = INT16_MIN;
	volatile int16_t x151 = -798;
	uint32_t x152 = 505916U;

	t35 = (x149&((x150<x151)-x152));

	if (t35 != 18373U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = INT16_MAX;
	uint8_t x158 = 1U;
	volatile int16_t x159 = -148;
	volatile int16_t x160 = 874;
	int32_t t36 = 3348;

	t36 = (x157&((x158<x159)-x160));

	if (t36 != 31894) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = -1;
	int32_t x167 = INT32_MIN;
	static int32_t x168 = 13334902;
	volatile int32_t t37 = -97;

	t37 = (x165&((x166<x167)-x168));

	if (t37 != -13334902) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x169 = 1684U;
	static volatile int8_t x170 = -1;
	volatile int64_t x171 = INT64_MAX;
	volatile int32_t t38 = 727;

	t38 = (x169&((x170<x171)-x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x173 = 6481U;
	int16_t x174 = INT16_MIN;
	volatile int8_t x175 = INT8_MIN;
	static int64_t x176 = 194778460159LL;
	volatile int64_t t39 = -82LL;

	t39 = (x173&((x174<x175)-x176));

	if (t39 != 4096LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = 3;
	volatile int8_t x178 = INT8_MAX;
	int16_t x179 = 5;
	static uint8_t x180 = 108U;
	volatile int32_t t40 = -50344;

	t40 = (x177&((x178<x179)-x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x181 = -66836835487LL;
	static uint64_t x182 = 257508183LLU;
	int32_t x183 = 0;
	volatile int64_t t41 = 4091561032798LL;

	t41 = (x181&((x182<x183)-x184));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x185 = 6624U;
	uint16_t x186 = 2U;
	int32_t x188 = -1;
	static int32_t t42 = 257883;

	t42 = (x185&((x186<x187)-x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x190 = UINT32_MAX;
	static uint8_t x191 = UINT8_MAX;
	uint64_t x192 = UINT64_MAX;

	t43 = (x189&((x190<x191)-x192));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x193 = 2921LLU;
	int16_t x194 = INT16_MIN;
	int32_t x195 = INT32_MIN;
	int16_t x196 = INT16_MIN;

	t44 = (x193&((x194<x195)-x196));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x197 = INT32_MIN;
	volatile int64_t x198 = -1505327992LL;
	int16_t x199 = INT16_MAX;
	uint64_t x200 = 3LLU;
	uint64_t t45 = 5290962204LLU;

	t45 = (x197&((x198<x199)-x200));

	if (t45 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = -6;
	static int16_t x202 = INT16_MAX;
	int32_t x203 = 217867363;
	uint16_t x204 = UINT16_MAX;
	static volatile int32_t t46 = -178;

	t46 = (x201&((x202<x203)-x204));

	if (t46 != -65534) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = -5;
	int64_t x206 = 255391411LL;
	int32_t x207 = -22;
	uint8_t x208 = 59U;

	t47 = (x205&((x206<x207)-x208));

	if (t47 != -63) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = -1;
	int64_t x210 = INT64_MAX;
	volatile uint64_t x211 = 290898969LLU;
	static int8_t x212 = -1;
	volatile int32_t t48 = -11;

	t48 = (x209&((x210<x211)-x212));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = INT64_MIN;
	uint16_t x214 = 111U;
	static volatile int16_t x216 = INT16_MIN;

	t49 = (x213&((x214<x215)-x216));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = -1;
	static int64_t x218 = -1389234997066LL;
	int64_t x220 = -1LL;
	static int64_t t50 = -1874910869903211398LL;

	t50 = (x217&((x218<x219)-x220));

	if (t50 != 2LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = INT8_MAX;
	static int32_t x223 = -1;
	int16_t x224 = INT16_MIN;

	t51 = (x221&((x222<x223)-x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x225 = 2U;
	int64_t x227 = -1LL;
	int32_t x228 = 3;
	int32_t t52 = -12;

	t52 = (x225&((x226<x227)-x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x229 = -1;
	uint32_t x230 = 35475U;
	volatile int32_t x231 = INT32_MAX;
	uint8_t x232 = 0U;
	volatile int32_t t53 = -11988867;

	t53 = (x229&((x230<x231)-x232));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x234 = INT16_MIN;
	int8_t x235 = -1;
	static int32_t x236 = 100;
	int32_t t54 = 7427379;

	t54 = (x233&((x234<x235)-x236));

	if (t54 != 32669) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x237 = 23U;
	uint8_t x238 = 1U;
	static int16_t x239 = INT16_MAX;
	int8_t x240 = INT8_MAX;
	volatile int32_t t55 = 328857;

	t55 = (x237&((x238<x239)-x240));

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x242 = INT32_MIN;
	int64_t x243 = INT64_MAX;
	int8_t x244 = INT8_MAX;
	static volatile int64_t t56 = INT64_MIN;

	t56 = (x241&((x242<x243)-x244));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x245 = INT64_MIN;
	volatile uint64_t x246 = 458290LLU;
	static int32_t x247 = INT32_MIN;
	static uint32_t x248 = UINT32_MAX;
	static volatile int64_t t57 = -326780LL;

	t57 = (x245&((x246<x247)-x248));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x249 = 39U;
	uint32_t x251 = 21849U;
	static volatile int32_t t58 = 61332042;

	t58 = (x249&((x250<x251)-x252));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x254 = -932052;
	uint8_t x255 = 0U;
	int8_t x256 = INT8_MIN;
	volatile uint64_t t59 = 2LLU;

	t59 = (x253&((x254<x255)-x256));

	if (t59 != 128LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x262 = UINT16_MAX;
	int8_t x263 = 2;

	t60 = (x261&((x262<x263)-x264));

	if (t60 != -28LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x270 = INT32_MAX;
	static uint16_t x271 = UINT16_MAX;
	static int16_t x272 = -1;
	volatile int32_t t61 = 8;

	t61 = (x269&((x270<x271)-x272));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x273 = 7;
	int8_t x274 = INT8_MIN;
	int16_t x276 = 56;
	volatile int32_t t62 = -3;

	t62 = (x273&((x274<x275)-x276));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x277 = INT64_MIN;
	uint64_t x279 = 95439121892LLU;
	uint16_t x280 = 3764U;
	volatile int64_t t63 = INT64_MIN;

	t63 = (x277&((x278<x279)-x280));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x281 = -200121LL;
	uint32_t x282 = 509U;
	int8_t x283 = INT8_MIN;
	int16_t x284 = INT16_MIN;

	t64 = (x281&((x282<x283)-x284));

	if (t64 != 32769LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x285 = UINT8_MAX;
	int64_t x287 = INT64_MAX;
	int32_t x288 = -5;
	static volatile int32_t t65 = 6635;

	t65 = (x285&((x286<x287)-x288));

	if (t65 != 6) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x289 = UINT64_MAX;
	int32_t x290 = -109502747;
	int64_t x291 = -3975762LL;
	static uint8_t x292 = 1U;
	volatile uint64_t t66 = 3270316LLU;

	t66 = (x289&((x290<x291)-x292));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x293 = 372637;
	volatile int8_t x296 = 0;
	int32_t t67 = -5379;

	t67 = (x293&((x294<x295)-x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x297 = 27U;
	uint64_t x298 = 801730011499117811LLU;
	int32_t x299 = INT32_MIN;
	int16_t x300 = -1;
	int32_t t68 = -25;

	t68 = (x297&((x298<x299)-x300));

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x301 = INT8_MIN;
	int64_t x302 = INT64_MIN;
	uint8_t x304 = UINT8_MAX;
	int32_t t69 = -8;

	t69 = (x301&((x302<x303)-x304));

	if (t69 != -256) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x306 = 874LLU;
	volatile uint32_t x307 = 10U;
	volatile int32_t x308 = -1;

	t70 = (x305&((x306<x307)-x308));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x309 = 1632566147054834LLU;
	int64_t x310 = INT64_MIN;
	int64_t x311 = INT64_MIN;
	uint64_t x312 = 3LLU;
	volatile uint64_t t71 = 383218363736499LLU;

	t71 = (x309&((x310<x311)-x312));

	if (t71 != 1632566147054832LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x314 = 7;
	volatile uint16_t x315 = UINT16_MAX;
	volatile uint64_t x316 = 27LLU;
	uint64_t t72 = 850LLU;

	t72 = (x313&((x314<x315)-x316));

	if (t72 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x317 = 3140U;
	static int64_t x319 = -1LL;

	t73 = (x317&((x318<x319)-x320));

	if (t73 != 3072U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x322 = INT16_MIN;
	int8_t x323 = 0;
	volatile uint64_t x324 = UINT64_MAX;
	volatile uint64_t t74 = 7LLU;

	t74 = (x321&((x322<x323)-x324));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x325 = 3579;
	volatile int8_t x327 = -1;
	static volatile uint32_t t75 = 26501U;

	t75 = (x325&((x326<x327)-x328));

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x333 = -1;
	uint64_t x334 = 30467874LLU;

	t76 = (x333&((x334<x335)-x336));

	if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x337 = UINT32_MAX;
	static int16_t x338 = -1;
	uint32_t x339 = 1U;
	int16_t x340 = INT16_MAX;
	volatile uint32_t t77 = 175026663U;

	t77 = (x337&((x338<x339)-x340));

	if (t77 != 4294934529U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t t78 = UINT64_MAX;

	t78 = (x345&((x346<x347)-x348));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x349 = -1;
	int8_t x352 = INT8_MAX;
	int32_t t79 = 5;

	t79 = (x349&((x350<x351)-x352));

	if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x353 = UINT64_MAX;
	static int32_t x354 = INT32_MIN;
	int8_t x355 = 14;
	uint64_t x356 = 649194808021LLU;

	t80 = (x353&((x354<x355)-x356));

	if (t80 != 18446743424514743596LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x357 = 1U;
	static int8_t x358 = -1;
	int32_t x360 = -1;
	volatile int32_t t81 = 163;

	t81 = (x357&((x358<x359)-x360));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x361 = INT16_MAX;
	volatile uint32_t x362 = 15222987U;
	int32_t x363 = -1;
	int8_t x364 = -3;
	int32_t t82 = 32;

	t82 = (x361&((x362<x363)-x364));

	if (t82 != 4) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x365 = INT8_MAX;
	static int8_t x366 = INT8_MIN;
	int32_t x368 = -259;
	volatile int32_t t83 = -11;

	t83 = (x365&((x366<x367)-x368));

	if (t83 != 4) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x369 = INT64_MIN;
	volatile int32_t x370 = INT32_MAX;
	int16_t x371 = -12608;
	int8_t x372 = INT8_MAX;
	int64_t t84 = INT64_MIN;

	t84 = (x369&((x370<x371)-x372));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x373 = UINT64_MAX;
	int32_t x374 = INT32_MIN;
	static int32_t x375 = INT32_MAX;
	static uint32_t x376 = 52U;
	volatile uint64_t t85 = 2647780789862964LLU;

	t85 = (x373&((x374<x375)-x376));

	if (t85 != 4294967245LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x377 = 3761126513LLU;
	volatile uint16_t x378 = UINT16_MAX;
	volatile int32_t x379 = INT32_MAX;
	uint16_t x380 = 23U;
	static volatile uint64_t t86 = 184293739838068LLU;

	t86 = (x377&((x378<x379)-x380));

	if (t86 != 3761126496LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x381 = INT32_MAX;
	static int64_t x382 = -1LL;
	uint8_t x383 = 1U;
	volatile int32_t t87 = 0;

	t87 = (x381&((x382<x383)-x384));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x385 = 120U;
	static int32_t x386 = INT32_MIN;
	int64_t x387 = -1LL;
	uint32_t x388 = UINT32_MAX;
	volatile uint32_t t88 = 24U;

	t88 = (x385&((x386<x387)-x388));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x389 = INT8_MAX;
	int8_t x391 = -3;
	int16_t x392 = INT16_MIN;
	volatile int32_t t89 = -3673;

	t89 = (x389&((x390<x391)-x392));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x393 = -1;
	int16_t x394 = INT16_MAX;
	uint8_t x395 = 35U;
	int8_t x396 = INT8_MIN;
	volatile int32_t t90 = 84465;

	t90 = (x393&((x394<x395)-x396));

	if (t90 != 128) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x397 = UINT8_MAX;
	static uint16_t x398 = 259U;
	static int32_t x399 = INT32_MIN;
	uint64_t t91 = 4254674986LLU;

	t91 = (x397&((x398<x399)-x400));

	if (t91 != 51LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x401 = INT32_MIN;
	volatile int64_t x402 = INT64_MAX;
	volatile int32_t x404 = INT32_MAX;
	static int32_t t92 = INT32_MIN;

	t92 = (x401&((x402<x403)-x404));

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = INT16_MIN;
	uint8_t x406 = 1U;
	int8_t x408 = INT8_MIN;

	t93 = (x405&((x406<x407)-x408));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x409 = INT64_MIN;
	volatile int8_t x410 = -3;
	uint8_t x412 = 7U;
	static int64_t t94 = INT64_MIN;

	t94 = (x409&((x410<x411)-x412));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x414 = -7;
	int64_t x415 = -1LL;
	int64_t t95 = 359629919LL;

	t95 = (x413&((x414<x415)-x416));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x417 = INT64_MIN;
	uint32_t x418 = UINT32_MAX;
	int16_t x419 = INT16_MAX;
	uint32_t x420 = 94702374U;
	int64_t t96 = -13346301LL;

	t96 = (x417&((x418<x419)-x420));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x421 = INT64_MIN;
	int16_t x422 = INT16_MIN;
	uint16_t x423 = UINT16_MAX;
	int16_t x424 = 1;
	static int64_t t97 = 159LL;

	t97 = (x421&((x422<x423)-x424));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x426 = INT64_MAX;
	static int32_t x427 = INT32_MIN;
	volatile int16_t x428 = INT16_MAX;
	volatile int32_t t98 = -155196981;

	t98 = (x425&((x426<x427)-x428));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x429 = UINT64_MAX;
	uint64_t x431 = UINT64_MAX;
	volatile uint32_t x432 = 497929U;
	volatile uint64_t t99 = 23189647300699LLU;

	t99 = (x429&((x430<x431)-x432));

	if (t99 != 4294469368LLU) { NG(); } else { ; }
	
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

