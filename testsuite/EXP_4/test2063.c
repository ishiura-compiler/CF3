#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x4 = -346;
int16_t x8 = -1;
int16_t x15 = 13;
volatile int32_t t3 = -109;
int16_t x30 = -1;
static int32_t t7 = -250521221;
static int32_t x35 = INT32_MAX;
int32_t t8 = 129;
static int16_t x40 = -3;
int32_t t9 = 2209;
volatile int32_t t10 = 21705;
int16_t x53 = -1;
uint8_t x54 = UINT8_MAX;
int8_t x59 = INT8_MIN;
int8_t x84 = INT8_MIN;
int16_t x86 = -1;
int32_t x87 = -1;
uint64_t x88 = UINT64_MAX;
int64_t x97 = INT64_MIN;
int8_t x98 = INT8_MAX;
static int32_t t19 = 5;
static int32_t t20 = 1;
int8_t x105 = -1;
int8_t x106 = 44;
volatile int8_t x108 = -1;
volatile int32_t t22 = -1715772;
static int16_t x130 = INT16_MAX;
volatile int64_t x131 = 924LL;
volatile int32_t x137 = INT32_MIN;
int32_t t26 = 1157;
uint8_t x144 = UINT8_MAX;
volatile int32_t t27 = 6761284;
int32_t x150 = 2093;
int32_t x153 = INT32_MAX;
uint16_t x155 = 32118U;
int8_t x159 = INT8_MAX;
volatile uint64_t x167 = 114672548472LLU;
int32_t t32 = 282;
static uint16_t x169 = 80U;
uint64_t x185 = 4LLU;
uint32_t x186 = UINT32_MAX;
int32_t t38 = -2;
static volatile int64_t x209 = INT64_MIN;
volatile uint64_t x212 = 6684282123192966373LLU;
volatile int32_t t40 = 136727;
int32_t x227 = -1;
int32_t x238 = INT32_MIN;
volatile int16_t x248 = INT16_MIN;
int32_t t47 = 40140098;
static uint8_t x249 = 54U;
int16_t x251 = INT16_MIN;
int64_t x257 = INT64_MIN;
volatile int32_t x259 = -367;
int16_t x261 = INT16_MIN;
uint8_t x264 = 1U;
int16_t x269 = INT16_MIN;
volatile int32_t t53 = 17;
volatile int64_t x273 = 807999338919017166LL;
int8_t x275 = INT8_MIN;
volatile int32_t t55 = -707988;
int64_t x292 = -1LL;
int32_t t58 = 1;
static int64_t x304 = INT64_MIN;
uint16_t x308 = 471U;
volatile int32_t t60 = 15;
int16_t x326 = INT16_MIN;
volatile int8_t x328 = INT8_MIN;
int16_t x330 = INT16_MIN;
volatile int16_t x331 = INT16_MIN;
uint32_t x339 = 7466226U;
volatile int32_t t64 = -754;
int8_t x345 = INT8_MIN;
int16_t x347 = INT16_MIN;
int32_t t66 = -223048;
volatile int32_t t67 = 8467;
int8_t x365 = INT8_MIN;
volatile int16_t x366 = INT16_MIN;
volatile int8_t x369 = -1;
volatile uint32_t x372 = UINT32_MAX;
static int64_t x377 = INT64_MIN;
int16_t x378 = INT16_MIN;
uint64_t x382 = UINT64_MAX;
int32_t t72 = 4874;
static int32_t x436 = 262079;
volatile uint64_t x438 = UINT64_MAX;
volatile uint64_t x442 = UINT64_MAX;
int16_t x450 = INT16_MIN;
static volatile int16_t x453 = INT16_MAX;
static int16_t x455 = -1;
uint16_t x461 = 5135U;
volatile int32_t t88 = -55235333;
uint32_t x466 = 2U;
volatile uint16_t x467 = 397U;
int16_t x471 = INT16_MIN;
int32_t t90 = -16;
int8_t x477 = INT8_MIN;
uint8_t x478 = UINT8_MAX;
int64_t x481 = INT64_MAX;
uint64_t x484 = 475916861888731901LLU;
volatile int8_t x486 = -1;
volatile int32_t x488 = INT32_MIN;
uint8_t x498 = UINT8_MAX;
int64_t x510 = INT64_MIN;
static volatile uint8_t x517 = 1U;
static int32_t x518 = -153061;
int32_t t98 = 2342273;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int16_t x2 = INT16_MIN;
	int16_t x3 = -1;
	int32_t t0 = -21215794;

	t0 = (x1<(x2*(x3^x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 115U;
	uint8_t x6 = UINT8_MAX;
	int32_t x7 = -381;
	volatile int32_t t1 = -19;

	t1 = (x5<(x6*(x7^x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 132U;
	int8_t x10 = INT8_MIN;
	static uint8_t x11 = 0U;
	static int32_t x12 = 126;
	volatile int32_t t2 = 416043;

	t2 = (x9<(x10*(x11^x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 77U;
	static int8_t x14 = INT8_MAX;
	static uint64_t x16 = 998467409383LLU;

	t3 = (x13<(x14*(x15^x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	uint64_t x18 = 6531LLU;
	volatile int64_t x19 = INT64_MIN;
	int8_t x20 = INT8_MIN;
	static int32_t t4 = -603743;

	t4 = (x17<(x18*(x19^x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	uint64_t x22 = 2647655841886812781LLU;
	int32_t x23 = INT32_MIN;
	volatile int8_t x24 = 5;
	int32_t t5 = -522813;

	t5 = (x21<(x22*(x23^x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	int64_t x26 = INT64_MAX;
	int64_t x27 = -1LL;
	int16_t x28 = -1;
	volatile int32_t t6 = -18;

	t6 = (x25<(x26*(x27^x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 359328883;
	uint16_t x31 = 5U;
	uint16_t x32 = 44U;

	t7 = (x29<(x30*(x31^x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	int32_t x34 = -4571;
	uint64_t x36 = 10912274271532LLU;

	t8 = (x33<(x34*(x35^x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = 1876297;
	uint32_t x38 = UINT32_MAX;
	volatile int16_t x39 = 637;

	t9 = (x37<(x38*(x39^x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = UINT16_MAX;
	uint16_t x50 = 48U;
	static int64_t x51 = INT64_MIN;
	int64_t x52 = INT64_MAX;

	t10 = (x49<(x50*(x51^x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x55 = INT16_MIN;
	int8_t x56 = -1;
	int32_t t11 = 1;

	t11 = (x53<(x54*(x55^x56)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x57 = UINT64_MAX;
	int16_t x58 = -1;
	int8_t x60 = -5;
	volatile int32_t t12 = 255;

	t12 = (x57<(x58*(x59^x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = UINT8_MAX;
	volatile int32_t x66 = -49;
	static uint8_t x67 = 31U;
	int8_t x68 = INT8_MIN;
	static volatile int32_t t13 = -220;

	t13 = (x65<(x66*(x67^x68)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	int64_t x70 = -1LL;
	int64_t x71 = -1LL;
	int8_t x72 = -1;
	int32_t t14 = -5;

	t14 = (x69<(x70*(x71^x72)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = -20183;
	int16_t x74 = -2007;
	int16_t x75 = -1;
	int16_t x76 = INT16_MAX;
	volatile int32_t t15 = -33;

	t15 = (x73<(x74*(x75^x76)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x81 = 1;
	static int16_t x82 = -1;
	volatile int8_t x83 = INT8_MAX;
	volatile int32_t t16 = -191589563;

	t16 = (x81<(x82*(x83^x84)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x85 = 1U;
	int32_t t17 = -3017;

	t17 = (x85<(x86*(x87^x88)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x89 = INT8_MIN;
	int8_t x90 = 33;
	static uint16_t x91 = 8080U;
	volatile uint32_t x92 = 119065U;
	volatile int32_t t18 = 0;

	t18 = (x89<(x90*(x91^x92)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x99 = UINT32_MAX;
	uint32_t x100 = 1033935U;

	t19 = (x97<(x98*(x99^x100)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x101 = 107U;
	volatile int64_t x102 = -1LL;
	int8_t x103 = INT8_MIN;
	static volatile int32_t x104 = -1;

	t20 = (x101<(x102*(x103^x104)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x107 = INT8_MIN;
	int32_t t21 = 22;

	t21 = (x105<(x106*(x107^x108)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x117 = -1;
	int16_t x118 = INT16_MIN;
	int16_t x119 = INT16_MAX;
	static int16_t x120 = INT16_MAX;

	t22 = (x117<(x118*(x119^x120)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x125 = 149197030176LL;
	int16_t x126 = 4271;
	int16_t x127 = -1;
	uint8_t x128 = UINT8_MAX;
	volatile int32_t t23 = 0;

	t23 = (x125<(x126*(x127^x128)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x129 = INT64_MIN;
	uint8_t x132 = 2U;
	int32_t t24 = -1521;

	t24 = (x129<(x130*(x131^x132)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x133 = INT64_MIN;
	int32_t x134 = -2719;
	uint32_t x135 = 163657U;
	int8_t x136 = 1;
	volatile int32_t t25 = 3562294;

	t25 = (x133<(x134*(x135^x136)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x138 = 10U;
	uint8_t x139 = 91U;
	int32_t x140 = -1;

	t26 = (x137<(x138*(x139^x140)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x141 = 908U;
	int16_t x142 = INT16_MIN;
	int8_t x143 = 7;

	t27 = (x141<(x142*(x143^x144)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x145 = INT32_MIN;
	uint16_t x146 = 2U;
	int8_t x147 = INT8_MIN;
	uint32_t x148 = UINT32_MAX;
	int32_t t28 = 28;

	t28 = (x145<(x146*(x147^x148)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x149 = UINT8_MAX;
	uint64_t x151 = 6862LLU;
	int32_t x152 = -1;
	volatile int32_t t29 = 0;

	t29 = (x149<(x150*(x151^x152)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x154 = INT64_MIN;
	uint64_t x156 = UINT64_MAX;
	static int32_t t30 = 982;

	t30 = (x153<(x154*(x155^x156)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x157 = -1;
	int32_t x158 = 173;
	int32_t x160 = -21391;
	int32_t t31 = -479786883;

	t31 = (x157<(x158*(x159^x160)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x165 = INT8_MAX;
	int16_t x166 = -1;
	static int32_t x168 = INT32_MIN;

	t32 = (x165<(x166*(x167^x168)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x170 = UINT32_MAX;
	int32_t x171 = -1;
	int16_t x172 = -1;
	volatile int32_t t33 = -306336;

	t33 = (x169<(x170*(x171^x172)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x173 = 0U;
	int8_t x174 = INT8_MIN;
	volatile uint16_t x175 = UINT16_MAX;
	static int32_t x176 = 16318;
	volatile int32_t t34 = 942;

	t34 = (x173<(x174*(x175^x176)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x177 = 562872144322417LLU;
	int16_t x178 = INT16_MIN;
	volatile uint8_t x179 = 1U;
	int16_t x180 = -132;
	static volatile int32_t t35 = 11;

	t35 = (x177<(x178*(x179^x180)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x187 = 3749630600490LLU;
	uint32_t x188 = 47107958U;
	int32_t t36 = -2229;

	t36 = (x185<(x186*(x187^x188)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x189 = INT8_MIN;
	int8_t x190 = INT8_MIN;
	volatile uint64_t x191 = 501790822841LLU;
	uint16_t x192 = 1U;
	int32_t t37 = 165431988;

	t37 = (x189<(x190*(x191^x192)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x193 = 7U;
	int32_t x194 = -128720762;
	int64_t x195 = INT64_MAX;
	static uint64_t x196 = 233263379499809921LLU;

	t38 = (x193<(x194*(x195^x196)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x201 = INT64_MIN;
	int16_t x202 = -14;
	int8_t x203 = 1;
	int16_t x204 = -1;
	volatile int32_t t39 = 1;

	t39 = (x201<(x202*(x203^x204)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x210 = 596U;
	int32_t x211 = 26;

	t40 = (x209<(x210*(x211^x212)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x213 = 17U;
	int16_t x214 = INT16_MIN;
	int8_t x215 = INT8_MIN;
	uint8_t x216 = 1U;
	volatile int32_t t41 = -5298492;

	t41 = (x213<(x214*(x215^x216)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x221 = INT16_MIN;
	int32_t x222 = INT32_MIN;
	volatile uint8_t x223 = UINT8_MAX;
	uint64_t x224 = 4LLU;
	int32_t t42 = 16324;

	t42 = (x221<(x222*(x223^x224)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x225 = UINT64_MAX;
	static volatile uint64_t x226 = 51734LLU;
	uint64_t x228 = UINT64_MAX;
	volatile int32_t t43 = 25176;

	t43 = (x225<(x226*(x227^x228)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x229 = 97U;
	static int32_t x230 = INT32_MIN;
	static int16_t x231 = INT16_MIN;
	volatile int16_t x232 = INT16_MIN;
	int32_t t44 = -391;

	t44 = (x229<(x230*(x231^x232)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x237 = INT8_MIN;
	uint64_t x239 = 89201490456LLU;
	static int8_t x240 = INT8_MAX;
	int32_t t45 = -28196013;

	t45 = (x237<(x238*(x239^x240)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x241 = UINT32_MAX;
	static int16_t x242 = -1;
	int64_t x243 = INT64_MIN;
	static volatile uint16_t x244 = 109U;
	static volatile int32_t t46 = 28070850;

	t46 = (x241<(x242*(x243^x244)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x245 = 13U;
	int32_t x246 = -32;
	int8_t x247 = INT8_MIN;

	t47 = (x245<(x246*(x247^x248)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x250 = -1LL;
	static uint16_t x252 = 521U;
	int32_t t48 = 7852;

	t48 = (x249<(x250*(x251^x252)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x253 = UINT32_MAX;
	int32_t x254 = 155;
	int8_t x255 = 2;
	int8_t x256 = INT8_MAX;
	volatile int32_t t49 = -53;

	t49 = (x253<(x254*(x255^x256)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x258 = 1U;
	int16_t x260 = INT16_MIN;
	static int32_t t50 = 7;

	t50 = (x257<(x258*(x259^x260)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x262 = -1LL;
	uint32_t x263 = UINT32_MAX;
	int32_t t51 = -15;

	t51 = (x261<(x262*(x263^x264)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x265 = -115;
	uint16_t x266 = 26529U;
	int8_t x267 = 0;
	uint16_t x268 = UINT16_MAX;
	volatile int32_t t52 = 250;

	t52 = (x265<(x266*(x267^x268)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x270 = -1;
	uint8_t x271 = 3U;
	static volatile int8_t x272 = -1;

	t53 = (x269<(x270*(x271^x272)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x274 = 554454688024LLU;
	int32_t x276 = -966679;
	static volatile int32_t t54 = 0;

	t54 = (x273<(x274*(x275^x276)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x277 = 9LLU;
	static int8_t x278 = INT8_MIN;
	uint16_t x279 = 6927U;
	uint8_t x280 = 10U;

	t55 = (x277<(x278*(x279^x280)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x281 = 0;
	int32_t x282 = -63;
	static uint8_t x283 = 1U;
	uint64_t x284 = UINT64_MAX;
	static volatile int32_t t56 = 0;

	t56 = (x281<(x282*(x283^x284)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x289 = 123LLU;
	int32_t x290 = -1;
	uint8_t x291 = UINT8_MAX;
	static volatile int32_t t57 = 9820151;

	t57 = (x289<(x290*(x291^x292)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x293 = 90675LLU;
	int8_t x294 = -3;
	int32_t x295 = 1221432;
	int64_t x296 = -70910156LL;

	t58 = (x293<(x294*(x295^x296)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x301 = 3509787721787634LLU;
	uint8_t x302 = 0U;
	volatile int64_t x303 = INT64_MAX;
	static volatile int32_t t59 = -96;

	t59 = (x301<(x302*(x303^x304)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x305 = INT32_MAX;
	static int8_t x306 = -1;
	int16_t x307 = INT16_MIN;

	t60 = (x305<(x306*(x307^x308)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x313 = -163277621237LL;
	static uint8_t x314 = 3U;
	static int64_t x315 = 36371849LL;
	uint64_t x316 = UINT64_MAX;
	static volatile int32_t t61 = -13041910;

	t61 = (x313<(x314*(x315^x316)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x325 = 1U;
	int16_t x327 = -61;
	int32_t t62 = 23392952;

	t62 = (x325<(x326*(x327^x328)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x329 = -19002118;
	int64_t x332 = -1LL;
	int32_t t63 = -1;

	t63 = (x329<(x330*(x331^x332)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x337 = 2456221LLU;
	int32_t x338 = -672261507;
	volatile int32_t x340 = -18910039;

	t64 = (x337<(x338*(x339^x340)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x341 = INT16_MIN;
	int16_t x342 = INT16_MIN;
	static volatile int16_t x343 = INT16_MIN;
	static uint16_t x344 = 18739U;
	volatile int32_t t65 = 1149616;

	t65 = (x341<(x342*(x343^x344)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x346 = INT8_MIN;
	uint32_t x348 = UINT32_MAX;

	t66 = (x345<(x346*(x347^x348)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x357 = -3351;
	volatile int32_t x358 = INT32_MAX;
	static int16_t x359 = INT16_MIN;
	volatile uint64_t x360 = UINT64_MAX;

	t67 = (x357<(x358*(x359^x360)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x361 = INT32_MIN;
	int64_t x362 = 7LL;
	int32_t x363 = INT32_MIN;
	volatile int8_t x364 = -1;
	volatile int32_t t68 = -89429;

	t68 = (x361<(x362*(x363^x364)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x367 = 6269U;
	uint64_t x368 = 7020602270267369LLU;
	static volatile int32_t t69 = 0;

	t69 = (x365<(x366*(x367^x368)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x370 = UINT16_MAX;
	static uint64_t x371 = UINT64_MAX;
	int32_t t70 = 695;

	t70 = (x369<(x370*(x371^x372)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x379 = INT16_MIN;
	int32_t x380 = -1;
	volatile int32_t t71 = -1;

	t71 = (x377<(x378*(x379^x380)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x381 = INT8_MIN;
	static int32_t x383 = INT32_MIN;
	volatile int8_t x384 = INT8_MAX;

	t72 = (x381<(x382*(x383^x384)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x389 = 232974912LLU;
	uint64_t x390 = 3452058283774540LLU;
	static uint8_t x391 = UINT8_MAX;
	uint32_t x392 = UINT32_MAX;
	int32_t t73 = -1137;

	t73 = (x389<(x390*(x391^x392)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x393 = INT64_MAX;
	uint32_t x394 = UINT32_MAX;
	uint64_t x395 = 520133991320LLU;
	volatile int16_t x396 = INT16_MIN;
	int32_t t74 = -17;

	t74 = (x393<(x394*(x395^x396)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x397 = INT16_MAX;
	static volatile uint16_t x398 = UINT16_MAX;
	uint16_t x399 = 5U;
	volatile uint32_t x400 = 26371006U;
	int32_t t75 = -28;

	t75 = (x397<(x398*(x399^x400)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x401 = -107523614685620LL;
	static volatile int8_t x402 = INT8_MAX;
	volatile uint16_t x403 = 27554U;
	static uint64_t x404 = 1908268LLU;
	int32_t t76 = 357857108;

	t76 = (x401<(x402*(x403^x404)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x405 = 40U;
	static uint64_t x406 = UINT64_MAX;
	int8_t x407 = INT8_MAX;
	int32_t x408 = INT32_MIN;
	volatile int32_t t77 = -2508864;

	t77 = (x405<(x406*(x407^x408)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x409 = 177U;
	int32_t x410 = -1;
	static int16_t x411 = INT16_MAX;
	int8_t x412 = INT8_MIN;
	int32_t t78 = 2;

	t78 = (x409<(x410*(x411^x412)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x421 = INT32_MIN;
	int16_t x422 = INT16_MIN;
	int16_t x423 = INT16_MIN;
	int16_t x424 = INT16_MAX;
	int32_t t79 = -326323665;

	t79 = (x421<(x422*(x423^x424)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x429 = 1;
	static int64_t x430 = INT64_MIN;
	static volatile uint64_t x431 = 46290676958LLU;
	int8_t x432 = INT8_MIN;
	int32_t t80 = 3;

	t80 = (x429<(x430*(x431^x432)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x433 = -1LL;
	uint8_t x434 = 115U;
	int16_t x435 = -2;
	volatile int32_t t81 = 29540420;

	t81 = (x433<(x434*(x435^x436)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x437 = -1LL;
	int64_t x439 = -1138805327989LL;
	int16_t x440 = -1;
	int32_t t82 = 39521;

	t82 = (x437<(x438*(x439^x440)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x441 = 9791U;
	volatile int16_t x443 = 22;
	int8_t x444 = 50;
	int32_t t83 = -8127690;

	t83 = (x441<(x442*(x443^x444)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x445 = INT16_MAX;
	int64_t x446 = INT64_MIN;
	int8_t x447 = -1;
	static uint64_t x448 = 3052961731962106804LLU;
	volatile int32_t t84 = -1;

	t84 = (x445<(x446*(x447^x448)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x449 = 57U;
	volatile int32_t x451 = -1;
	int8_t x452 = INT8_MIN;
	int32_t t85 = 679181;

	t85 = (x449<(x450*(x451^x452)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x454 = 41U;
	uint16_t x456 = 68U;
	int32_t t86 = 130;

	t86 = (x453<(x454*(x455^x456)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x457 = INT32_MIN;
	int32_t x458 = -1;
	int64_t x459 = -1LL;
	uint8_t x460 = 4U;
	static int32_t t87 = 5759566;

	t87 = (x457<(x458*(x459^x460)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x462 = INT8_MAX;
	static volatile int16_t x463 = INT16_MIN;
	uint8_t x464 = UINT8_MAX;

	t88 = (x461<(x462*(x463^x464)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x465 = INT32_MIN;
	volatile uint64_t x468 = 1644639840639129656LLU;
	volatile int32_t t89 = 0;

	t89 = (x465<(x466*(x467^x468)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x469 = 79U;
	uint32_t x470 = UINT32_MAX;
	uint16_t x472 = 3U;

	t90 = (x469<(x470*(x471^x472)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x479 = UINT16_MAX;
	int16_t x480 = INT16_MIN;
	int32_t t91 = -35;

	t91 = (x477<(x478*(x479^x480)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x482 = 26923345;
	int64_t x483 = -1LL;
	volatile int32_t t92 = 654081515;

	t92 = (x481<(x482*(x483^x484)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x485 = INT32_MIN;
	int16_t x487 = -1;
	int32_t t93 = 93;

	t93 = (x485<(x486*(x487^x488)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x497 = 53962728655333213LLU;
	int8_t x499 = INT8_MIN;
	uint64_t x500 = 8LLU;
	int32_t t94 = 207580;

	t94 = (x497<(x498*(x499^x500)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x501 = 17835U;
	uint8_t x502 = 0U;
	static uint16_t x503 = 17609U;
	int32_t x504 = INT32_MAX;
	static int32_t t95 = 1;

	t95 = (x501<(x502*(x503^x504)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x505 = INT32_MIN;
	uint64_t x506 = UINT64_MAX;
	int32_t x507 = 777562988;
	static int64_t x508 = INT64_MIN;
	static volatile int32_t t96 = -1;

	t96 = (x505<(x506*(x507^x508)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x509 = 209797021U;
	static uint64_t x511 = 6749667LLU;
	uint32_t x512 = UINT32_MAX;
	volatile int32_t t97 = 2068;

	t97 = (x509<(x510*(x511^x512)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x519 = INT16_MAX;
	int16_t x520 = INT16_MIN;

	t98 = (x517<(x518*(x519^x520)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x521 = 30LL;
	uint64_t x522 = 1021LLU;
	volatile int8_t x523 = INT8_MAX;
	uint8_t x524 = 124U;
	int32_t t99 = 23113798;

	t99 = (x521<(x522*(x523^x524)));

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

