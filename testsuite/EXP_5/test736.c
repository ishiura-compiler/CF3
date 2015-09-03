#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = 139645;
static int64_t x14 = 4672778778LL;
int64_t x16 = -1024954LL;
int32_t t3 = -6;
int8_t x20 = INT8_MIN;
volatile uint16_t x28 = UINT16_MAX;
volatile int32_t t6 = 813347;
static int32_t x29 = -1;
static uint32_t x34 = 8688747U;
static int8_t x42 = -2;
int8_t x44 = INT8_MIN;
uint32_t x45 = 562955U;
uint16_t x46 = UINT16_MAX;
uint16_t x47 = UINT16_MAX;
int8_t x48 = INT8_MIN;
static volatile uint32_t x51 = UINT32_MAX;
int32_t x63 = INT32_MIN;
static volatile int32_t t16 = 2155995;
int32_t x69 = INT32_MAX;
uint8_t x71 = 2U;
uint16_t x73 = UINT16_MAX;
static int32_t x76 = INT32_MIN;
int32_t x77 = -1;
volatile int32_t t19 = -24783;
uint32_t x100 = UINT32_MAX;
int8_t x103 = 39;
uint16_t x106 = UINT16_MAX;
int8_t x107 = -1;
int32_t t26 = 186105;
volatile int32_t t27 = -753;
int16_t x114 = INT16_MAX;
volatile int32_t t30 = 530;
volatile int32_t t31 = -2210;
uint64_t x144 = UINT64_MAX;
uint16_t x155 = 11721U;
static volatile int32_t t36 = -11602720;
int8_t x159 = -31;
uint8_t x163 = 36U;
volatile int32_t t38 = 220932;
uint16_t x179 = 1U;
int8_t x180 = INT8_MIN;
int16_t x185 = 134;
static int64_t x188 = 38751246805324LL;
uint64_t x191 = 16990250081883338LLU;
static int8_t x192 = INT8_MIN;
int64_t x199 = -513045900695882LL;
int16_t x200 = -2649;
int32_t x201 = INT32_MIN;
int64_t x205 = 3LL;
static int8_t x216 = INT8_MAX;
volatile int8_t x221 = 59;
uint16_t x222 = 3694U;
int64_t x225 = -1LL;
int32_t x237 = 6196895;
static uint64_t x239 = 202102500200476896LLU;
static int32_t x248 = INT32_MIN;
static volatile int8_t x251 = INT8_MIN;
int32_t x257 = 1;
uint8_t x258 = 35U;
uint16_t x259 = UINT16_MAX;
uint8_t x263 = 1U;
int32_t x265 = INT32_MIN;
volatile uint16_t x269 = 1632U;
volatile int32_t t65 = 1;
uint16_t x296 = 4U;
volatile int32_t t68 = 51159;
volatile uint64_t x299 = 203834594486396LLU;
volatile int16_t x301 = INT16_MIN;
int64_t x303 = 14600431239832687LL;
static volatile int32_t t71 = 2;
int16_t x315 = 49;
int64_t x318 = -1LL;
static uint32_t x322 = 1799U;
uint16_t x329 = 7066U;
uint16_t x332 = UINT16_MAX;
volatile int32_t t77 = 527;
int8_t x339 = -1;
int16_t x341 = 0;
int16_t x342 = INT16_MAX;
static uint32_t x347 = 43U;
uint16_t x349 = UINT16_MAX;
static uint64_t x364 = 3905097LLU;
int8_t x366 = -1;
uint8_t x370 = 4U;
static int64_t x381 = INT64_MAX;
int32_t x388 = INT32_MIN;
int32_t x389 = INT32_MIN;
uint16_t x396 = 25U;
static volatile int32_t t91 = -176917;
uint32_t x401 = UINT32_MAX;
int32_t t94 = -3839969;
static int16_t x428 = INT16_MIN;


void f0(void) {
	int16_t x1 = 1333;
	static int32_t x2 = INT32_MIN;
	volatile uint32_t x3 = 49U;
	int64_t x4 = 62LL;
	static int32_t t0 = 4133095;

	t0 = (x1==((x2%x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	int64_t x6 = 8121809260452684LL;
	int32_t x8 = 16;
	volatile int32_t t1 = -121;

	t1 = (x5==((x6%x7)%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	static uint16_t x10 = 18U;
	uint32_t x11 = 165778U;
	static int8_t x12 = -54;
	int32_t t2 = 0;

	t2 = (x9==((x10%x11)%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 5U;
	static int16_t x15 = -437;

	t3 = (x13==((x14%x15)%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = 2139;
	int16_t x18 = INT16_MIN;
	int32_t x19 = INT32_MAX;
	volatile int32_t t4 = -4334;

	t4 = (x17==((x18%x19)%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int32_t x22 = INT32_MIN;
	uint16_t x23 = 7U;
	int16_t x24 = -1;
	volatile int32_t t5 = -50;

	t5 = (x21==((x22%x23)%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	static int32_t x26 = INT32_MAX;
	int32_t x27 = 28777899;

	t6 = (x25==((x26%x27)%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = UINT16_MAX;
	int64_t x31 = 3360841LL;
	int8_t x32 = 2;
	volatile int32_t t7 = 0;

	t7 = (x29==((x30%x31)%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 15272U;
	static uint32_t x35 = UINT32_MAX;
	volatile int32_t x36 = INT32_MIN;
	static int32_t t8 = 0;

	t8 = (x33==((x34%x35)%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint8_t x38 = 1U;
	uint8_t x39 = UINT8_MAX;
	uint64_t x40 = 150213021313782693LLU;
	static int32_t t9 = 118165;

	t9 = (x37==((x38%x39)%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	static int8_t x43 = INT8_MAX;
	volatile int32_t t10 = -1717;

	t10 = (x41==((x42%x43)%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t t11 = 2163;

	t11 = (x45==((x46%x47)%x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int32_t x50 = INT32_MIN;
	static volatile int8_t x52 = INT8_MIN;
	volatile int32_t t12 = 1085;

	t12 = (x49==((x50%x51)%x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	int16_t x54 = -1;
	volatile uint8_t x55 = UINT8_MAX;
	int64_t x56 = INT64_MIN;
	volatile int32_t t13 = 34;

	t13 = (x53==((x54%x55)%x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	static int32_t x58 = INT32_MIN;
	static uint32_t x59 = UINT32_MAX;
	static volatile int8_t x60 = INT8_MAX;
	volatile int32_t t14 = 14547651;

	t14 = (x57==((x58%x59)%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 74714U;
	int64_t x62 = INT64_MIN;
	int32_t x64 = INT32_MAX;
	volatile int32_t t15 = 204979;

	t15 = (x61==((x62%x63)%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	int8_t x66 = -4;
	int64_t x67 = INT64_MIN;
	int8_t x68 = INT8_MAX;

	t16 = (x65==((x66%x67)%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x70 = INT64_MIN;
	uint64_t x72 = 1551293LLU;
	static int32_t t17 = 2039;

	t17 = (x69==((x70%x71)%x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = INT16_MIN;
	int8_t x75 = -1;
	int32_t t18 = -44;

	t18 = (x73==((x74%x75)%x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = -1;
	uint64_t x79 = UINT64_MAX;
	int16_t x80 = INT16_MAX;

	t19 = (x77==((x78%x79)%x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x81 = UINT32_MAX;
	uint16_t x82 = UINT16_MAX;
	int64_t x83 = INT64_MAX;
	uint8_t x84 = 18U;
	volatile int32_t t20 = -13;

	t20 = (x81==((x82%x83)%x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	int64_t x86 = INT64_MIN;
	static volatile uint16_t x87 = 34U;
	uint8_t x88 = UINT8_MAX;
	int32_t t21 = -78;

	t21 = (x85==((x86%x87)%x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	uint32_t x90 = UINT32_MAX;
	int16_t x91 = 1;
	volatile int32_t x92 = -1;
	int32_t t22 = -392995;

	t22 = (x89==((x90%x91)%x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x93 = INT32_MIN;
	int32_t x94 = INT32_MIN;
	static volatile uint32_t x95 = 959230857U;
	uint64_t x96 = UINT64_MAX;
	int32_t t23 = -540422;

	t23 = (x93==((x94%x95)%x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	uint64_t x98 = UINT64_MAX;
	int16_t x99 = -1;
	int32_t t24 = 107;

	t24 = (x97==((x98%x99)%x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = 15634U;
	uint16_t x102 = UINT16_MAX;
	int64_t x104 = -1LL;
	int32_t t25 = 4;

	t25 = (x101==((x102%x103)%x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	int8_t x108 = 5;

	t26 = (x105==((x106%x107)%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = -1;
	int64_t x110 = INT64_MAX;
	static int8_t x111 = -28;
	uint16_t x112 = 1754U;

	t27 = (x109==((x110%x111)%x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	volatile int8_t x115 = INT8_MIN;
	static volatile uint8_t x116 = UINT8_MAX;
	int32_t t28 = -616;

	t28 = (x113==((x114%x115)%x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = -1LL;
	static uint8_t x118 = 32U;
	uint16_t x119 = 1U;
	volatile int16_t x120 = INT16_MIN;
	volatile int32_t t29 = 71004980;

	t29 = (x117==((x118%x119)%x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x121 = 21U;
	int32_t x122 = INT32_MIN;
	static int16_t x123 = -1;
	volatile int64_t x124 = INT64_MIN;

	t30 = (x121==((x122%x123)%x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	int32_t x126 = INT32_MAX;
	uint8_t x127 = 10U;
	int32_t x128 = -1;

	t31 = (x125==((x126%x127)%x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x133 = -1;
	volatile int32_t x134 = 1;
	int8_t x135 = INT8_MIN;
	static uint8_t x136 = 28U;
	int32_t t32 = -3469;

	t32 = (x133==((x134%x135)%x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x141 = 146148604878035154LL;
	static uint32_t x142 = 3968U;
	int8_t x143 = INT8_MIN;
	static int32_t t33 = -31;

	t33 = (x141==((x142%x143)%x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = INT32_MIN;
	int64_t x146 = INT64_MIN;
	int8_t x147 = INT8_MIN;
	int64_t x148 = INT64_MIN;
	int32_t t34 = 7;

	t34 = (x145==((x146%x147)%x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x149 = 27U;
	int64_t x150 = 502692682912LL;
	uint64_t x151 = 208432266LLU;
	int16_t x152 = INT16_MAX;
	volatile int32_t t35 = -1021633;

	t35 = (x149==((x150%x151)%x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x153 = 13U;
	static int64_t x154 = -458226126659976617LL;
	int64_t x156 = -1LL;

	t36 = (x153==((x154%x155)%x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x157 = UINT32_MAX;
	int8_t x158 = INT8_MIN;
	uint8_t x160 = 43U;
	volatile int32_t t37 = 1;

	t37 = (x157==((x158%x159)%x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x161 = INT16_MIN;
	volatile int32_t x162 = INT32_MIN;
	volatile int16_t x164 = INT16_MIN;

	t38 = (x161==((x162%x163)%x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = INT16_MIN;
	uint64_t x166 = UINT64_MAX;
	int64_t x167 = -14423870LL;
	static int32_t x168 = -1;
	volatile int32_t t39 = -63852;

	t39 = (x165==((x166%x167)%x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = INT8_MIN;
	int32_t x174 = INT32_MIN;
	int16_t x175 = INT16_MAX;
	int32_t x176 = -1;
	int32_t t40 = 115912;

	t40 = (x173==((x174%x175)%x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = 0;
	uint16_t x178 = 1U;
	volatile int32_t t41 = 97;

	t41 = (x177==((x178%x179)%x180));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x186 = 688837033;
	int8_t x187 = INT8_MIN;
	volatile int32_t t42 = -42976;

	t42 = (x185==((x186%x187)%x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x189 = 10U;
	int32_t x190 = INT32_MAX;
	int32_t t43 = -11022;

	t43 = (x189==((x190%x191)%x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x193 = UINT8_MAX;
	uint64_t x194 = UINT64_MAX;
	static uint32_t x195 = 359236411U;
	volatile int32_t x196 = INT32_MAX;
	int32_t t44 = 3817787;

	t44 = (x193==((x194%x195)%x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x197 = -1LL;
	uint64_t x198 = UINT64_MAX;
	int32_t t45 = 502;

	t45 = (x197==((x198%x199)%x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x202 = INT32_MIN;
	int16_t x203 = -1;
	int8_t x204 = INT8_MAX;
	static int32_t t46 = -40038;

	t46 = (x201==((x202%x203)%x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x206 = -1;
	volatile uint16_t x207 = 494U;
	uint32_t x208 = 735977U;
	static int32_t t47 = -43673;

	t47 = (x205==((x206%x207)%x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x209 = 15012U;
	static int32_t x210 = -1;
	uint8_t x211 = UINT8_MAX;
	int32_t x212 = INT32_MAX;
	volatile int32_t t48 = -70;

	t48 = (x209==((x210%x211)%x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x213 = UINT16_MAX;
	static uint32_t x214 = UINT32_MAX;
	int32_t x215 = INT32_MAX;
	volatile int32_t t49 = -1795;

	t49 = (x213==((x214%x215)%x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x217 = INT32_MAX;
	int64_t x218 = 909814774852302839LL;
	int64_t x219 = INT64_MAX;
	static int64_t x220 = INT64_MAX;
	int32_t t50 = 26854;

	t50 = (x217==((x218%x219)%x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x223 = 186U;
	static int64_t x224 = INT64_MAX;
	int32_t t51 = 149;

	t51 = (x221==((x222%x223)%x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x226 = 6;
	int32_t x227 = -1;
	static volatile uint16_t x228 = 426U;
	volatile int32_t t52 = 5826;

	t52 = (x225==((x226%x227)%x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x229 = UINT32_MAX;
	uint16_t x230 = 7140U;
	int8_t x231 = INT8_MIN;
	int64_t x232 = 139543848126LL;
	int32_t t53 = 0;

	t53 = (x229==((x230%x231)%x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = INT64_MIN;
	int16_t x234 = -1;
	int16_t x235 = INT16_MIN;
	static int64_t x236 = INT64_MIN;
	int32_t t54 = -9;

	t54 = (x233==((x234%x235)%x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x238 = -1;
	uint32_t x240 = UINT32_MAX;
	int32_t t55 = -1913923;

	t55 = (x237==((x238%x239)%x240));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x241 = 1485785021537069LLU;
	int64_t x242 = 73LL;
	uint64_t x243 = 5145LLU;
	int8_t x244 = 12;
	volatile int32_t t56 = 5;

	t56 = (x241==((x242%x243)%x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = INT8_MAX;
	volatile int64_t x246 = 0LL;
	int64_t x247 = 20040403076483LL;
	static int32_t t57 = 2553860;

	t57 = (x245==((x246%x247)%x248));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x249 = 5309;
	int8_t x250 = -23;
	int32_t x252 = INT32_MIN;
	volatile int32_t t58 = -12018;

	t58 = (x249==((x250%x251)%x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = 11;
	volatile int8_t x254 = INT8_MIN;
	int32_t x255 = INT32_MIN;
	volatile int8_t x256 = INT8_MAX;
	static volatile int32_t t59 = -15732504;

	t59 = (x253==((x254%x255)%x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x260 = INT8_MAX;
	volatile int32_t t60 = 43508948;

	t60 = (x257==((x258%x259)%x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x261 = 0;
	int64_t x262 = 788963679437071415LL;
	uint32_t x264 = UINT32_MAX;
	volatile int32_t t61 = -941;

	t61 = (x261==((x262%x263)%x264));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x266 = INT8_MAX;
	static volatile int16_t x267 = INT16_MAX;
	volatile uint32_t x268 = 6U;
	volatile int32_t t62 = -13016918;

	t62 = (x265==((x266%x267)%x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x270 = UINT16_MAX;
	int8_t x271 = 4;
	int32_t x272 = INT32_MIN;
	volatile int32_t t63 = 11;

	t63 = (x269==((x270%x271)%x272));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x277 = 41422575331142LLU;
	uint64_t x278 = 7076222675771LLU;
	uint32_t x279 = 14U;
	volatile int64_t x280 = INT64_MIN;
	int32_t t64 = -25429804;

	t64 = (x277==((x278%x279)%x280));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x281 = 500235U;
	int8_t x282 = 0;
	volatile uint64_t x283 = UINT64_MAX;
	static volatile int8_t x284 = 2;

	t65 = (x281==((x282%x283)%x284));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = -1;
	volatile uint64_t x286 = 3868066385165LLU;
	int8_t x287 = INT8_MIN;
	int32_t x288 = INT32_MIN;
	volatile int32_t t66 = -1;

	t66 = (x285==((x286%x287)%x288));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x289 = -1;
	uint8_t x290 = 1U;
	int64_t x291 = -1LL;
	volatile int8_t x292 = 3;
	static int32_t t67 = 221674;

	t67 = (x289==((x290%x291)%x292));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x293 = -46416701875443209LL;
	uint32_t x294 = 12U;
	int32_t x295 = INT32_MIN;

	t68 = (x293==((x294%x295)%x296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x297 = INT8_MIN;
	static int32_t x298 = -374790;
	int64_t x300 = -45810LL;
	volatile int32_t t69 = 190495;

	t69 = (x297==((x298%x299)%x300));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x302 = INT64_MIN;
	uint8_t x304 = 6U;
	volatile int32_t t70 = -1;

	t70 = (x301==((x302%x303)%x304));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = -1;
	int8_t x306 = INT8_MIN;
	int64_t x307 = INT64_MAX;
	static int32_t x308 = -1;

	t71 = (x305==((x306%x307)%x308));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x309 = INT16_MAX;
	volatile uint64_t x310 = 125547640LLU;
	int8_t x311 = 29;
	int64_t x312 = -1LL;
	int32_t t72 = -7264621;

	t72 = (x309==((x310%x311)%x312));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x313 = -1;
	static int8_t x314 = INT8_MIN;
	volatile int16_t x316 = INT16_MIN;
	int32_t t73 = 641755747;

	t73 = (x313==((x314%x315)%x316));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x317 = UINT64_MAX;
	int16_t x319 = 113;
	uint32_t x320 = 3513784U;
	static volatile int32_t t74 = -85580805;

	t74 = (x317==((x318%x319)%x320));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x321 = INT8_MAX;
	static int32_t x323 = INT32_MIN;
	static volatile int16_t x324 = INT16_MAX;
	int32_t t75 = 33;

	t75 = (x321==((x322%x323)%x324));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x330 = INT16_MIN;
	static int8_t x331 = INT8_MAX;
	int32_t t76 = 3;

	t76 = (x329==((x330%x331)%x332));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x333 = -2273;
	int32_t x334 = INT32_MIN;
	volatile int64_t x335 = INT64_MAX;
	int8_t x336 = -1;

	t77 = (x333==((x334%x335)%x336));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x337 = 16266LLU;
	int64_t x338 = -1LL;
	int32_t x340 = 5645;
	static volatile int32_t t78 = 6;

	t78 = (x337==((x338%x339)%x340));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x343 = -1835;
	int8_t x344 = -14;
	int32_t t79 = 90956082;

	t79 = (x341==((x342%x343)%x344));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x345 = 1540844U;
	volatile uint64_t x346 = 682392896386254LLU;
	volatile int32_t x348 = -5317124;
	int32_t t80 = -642;

	t80 = (x345==((x346%x347)%x348));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x350 = 39;
	static int64_t x351 = -12LL;
	int16_t x352 = INT16_MAX;
	volatile int32_t t81 = 215;

	t81 = (x349==((x350%x351)%x352));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x353 = UINT32_MAX;
	int8_t x354 = INT8_MAX;
	uint8_t x355 = 110U;
	int8_t x356 = INT8_MAX;
	int32_t t82 = 27337186;

	t82 = (x353==((x354%x355)%x356));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x361 = INT64_MAX;
	int8_t x362 = -1;
	uint16_t x363 = 3U;
	int32_t t83 = -1067341851;

	t83 = (x361==((x362%x363)%x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x365 = -1;
	static int64_t x367 = -534327772323LL;
	int64_t x368 = INT64_MIN;
	int32_t t84 = 0;

	t84 = (x365==((x366%x367)%x368));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x369 = INT8_MIN;
	int8_t x371 = -5;
	static uint64_t x372 = 72LLU;
	static volatile int32_t t85 = 157;

	t85 = (x369==((x370%x371)%x372));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x373 = -1;
	uint8_t x374 = 1U;
	static int16_t x375 = INT16_MIN;
	static int16_t x376 = INT16_MAX;
	int32_t t86 = 198517162;

	t86 = (x373==((x374%x375)%x376));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x377 = -1;
	int16_t x378 = INT16_MIN;
	int16_t x379 = -2;
	uint32_t x380 = 1U;
	int32_t t87 = 37;

	t87 = (x377==((x378%x379)%x380));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x382 = INT32_MIN;
	volatile uint16_t x383 = 223U;
	static volatile int32_t x384 = -1;
	int32_t t88 = 772188236;

	t88 = (x381==((x382%x383)%x384));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x385 = UINT16_MAX;
	static int32_t x386 = INT32_MAX;
	static uint32_t x387 = 7U;
	int32_t t89 = -6782;

	t89 = (x385==((x386%x387)%x388));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x390 = INT64_MIN;
	int64_t x391 = -81547191237LL;
	uint8_t x392 = UINT8_MAX;
	int32_t t90 = -690997152;

	t90 = (x389==((x390%x391)%x392));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x393 = 615539730U;
	int16_t x394 = INT16_MIN;
	static int16_t x395 = -452;

	t91 = (x393==((x394%x395)%x396));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x397 = INT8_MIN;
	uint64_t x398 = 137076986555LLU;
	int8_t x399 = -1;
	uint32_t x400 = 61682964U;
	volatile int32_t t92 = 1575792;

	t92 = (x397==((x398%x399)%x400));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x402 = 1LLU;
	int32_t x403 = INT32_MIN;
	static int64_t x404 = INT64_MIN;
	int32_t t93 = 1;

	t93 = (x401==((x402%x403)%x404));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x405 = 206181LLU;
	int64_t x406 = 10623223766LL;
	int32_t x407 = INT32_MAX;
	int32_t x408 = -1818272;

	t94 = (x405==((x406%x407)%x408));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x409 = -1;
	int32_t x410 = 1;
	int64_t x411 = INT64_MAX;
	int8_t x412 = 15;
	volatile int32_t t95 = 62409419;

	t95 = (x409==((x410%x411)%x412));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x413 = 376104LL;
	int32_t x414 = INT32_MIN;
	uint32_t x415 = 35401143U;
	volatile int64_t x416 = INT64_MIN;
	volatile int32_t t96 = -9601704;

	t96 = (x413==((x414%x415)%x416));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x417 = INT8_MIN;
	int32_t x418 = INT32_MIN;
	static int32_t x419 = INT32_MIN;
	int16_t x420 = INT16_MIN;
	volatile int32_t t97 = -440135412;

	t97 = (x417==((x418%x419)%x420));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x421 = INT64_MIN;
	volatile int16_t x422 = INT16_MIN;
	int8_t x423 = INT8_MIN;
	static volatile int64_t x424 = INT64_MIN;
	static volatile int32_t t98 = 21755;

	t98 = (x421==((x422%x423)%x424));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x425 = 1712;
	uint8_t x426 = 40U;
	int32_t x427 = 158;
	volatile int32_t t99 = 69;

	t99 = (x425==((x426%x427)%x428));

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

