#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -1;
uint16_t x3 = 11535U;
int32_t x6 = -146893215;
int8_t x11 = INT8_MIN;
static uint64_t x14 = 1786598605LLU;
int32_t x19 = 61;
int32_t x23 = 262624317;
int64_t x25 = 114LL;
uint64_t x31 = 290514803LLU;
int8_t x32 = -13;
static uint8_t x34 = UINT8_MAX;
int32_t t9 = 123;
int8_t x46 = -1;
int64_t x47 = -1LL;
uint16_t x50 = UINT16_MAX;
int8_t x58 = INT8_MAX;
volatile uint16_t x60 = 975U;
volatile int32_t t14 = 7557103;
int32_t t15 = -204;
static int32_t t17 = -2953956;
static volatile int32_t t18 = 1028;
uint32_t x79 = UINT32_MAX;
static int64_t x81 = -1174005905935LL;
int64_t x84 = INT64_MIN;
int64_t x99 = INT64_MIN;
volatile int32_t t26 = -1;
int64_t x116 = INT64_MIN;
uint16_t x120 = 3U;
volatile uint32_t x126 = 110U;
static int64_t x133 = -1LL;
volatile int32_t t34 = 50;
static uint64_t x143 = UINT64_MAX;
volatile int32_t t35 = -5746;
volatile uint8_t x145 = UINT8_MAX;
int64_t x154 = -475922031328192138LL;
int32_t t38 = -205919900;
static int64_t x168 = -407164039859739851LL;
static int32_t t41 = 166003;
int64_t x198 = INT64_MIN;
int64_t x199 = -1LL;
int32_t x203 = INT32_MIN;
int32_t x209 = -1;
int8_t x211 = -1;
volatile int32_t t51 = 1485;
int32_t t52 = 15870;
uint32_t x220 = 408427U;
volatile int32_t t53 = -82161689;
uint64_t x222 = 200118455986LLU;
volatile int32_t t54 = -98384461;
int8_t x228 = INT8_MAX;
static uint16_t x232 = 123U;
volatile int32_t t57 = -425;
static int8_t x243 = INT8_MIN;
int8_t x249 = -1;
int32_t x250 = INT32_MIN;
int32_t t61 = 93;
int32_t t62 = 2311;
volatile int32_t t65 = 12;
uint16_t x276 = UINT16_MAX;
static int16_t x278 = INT16_MAX;
int64_t x279 = -12LL;
static volatile uint32_t x281 = 23226306U;
uint16_t x284 = 2U;
volatile int32_t t68 = 6742;
int16_t x292 = INT16_MIN;
uint32_t x293 = UINT32_MAX;
int64_t x297 = INT64_MIN;
volatile int16_t x299 = -1;
volatile int16_t x301 = -1;
int16_t x307 = INT16_MIN;
volatile int64_t x308 = 1565584144100LL;
uint8_t x310 = 0U;
int32_t t74 = -15279481;
static int64_t x314 = -11677LL;
int8_t x321 = -1;
int16_t x322 = -1;
volatile int32_t t77 = -14;
int16_t x328 = INT16_MIN;
volatile int32_t t78 = 948411535;
volatile uint32_t x352 = UINT32_MAX;
static int16_t x361 = INT16_MIN;
uint8_t x368 = 38U;
int64_t x371 = -344287516LL;
volatile int32_t t88 = -260358;
volatile int8_t x383 = INT8_MIN;
volatile int8_t x386 = INT8_MIN;
volatile int16_t x388 = INT16_MIN;
int32_t t90 = -73193;
volatile int64_t x397 = -2LL;
int16_t x399 = INT16_MIN;
volatile uint16_t x405 = 4U;
int32_t x410 = INT32_MIN;
uint32_t x412 = 100906U;
int32_t x413 = INT32_MAX;
volatile int16_t x414 = 239;
static uint16_t x418 = UINT16_MAX;
static volatile int32_t t98 = 253;
volatile int32_t t99 = 77623221;


void f0(void) {
	volatile int32_t x1 = -1;
	int16_t x4 = INT16_MIN;
	static int32_t t0 = 24946;

	t0 = (x1==((x2%x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 181086348U;
	static int32_t x7 = 2;
	volatile int8_t x8 = 1;
	static volatile int32_t t1 = -1715;

	t1 = (x5==((x6%x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = INT8_MIN;
	volatile int32_t x10 = -118;
	uint64_t x12 = 256760003LLU;
	int32_t t2 = 405021629;

	t2 = (x9==((x10%x11)/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -1;
	volatile int64_t x15 = INT64_MAX;
	volatile int16_t x16 = 1521;
	static int32_t t3 = 25044;

	t3 = (x13==((x14%x15)/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int32_t x18 = INT32_MIN;
	uint32_t x20 = UINT32_MAX;
	volatile int32_t t4 = 159;

	t4 = (x17==((x18%x19)/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = -1;
	volatile uint16_t x22 = UINT16_MAX;
	volatile int64_t x24 = -1LL;
	volatile int32_t t5 = -6259358;

	t5 = (x21==((x22%x23)/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MIN;
	int8_t x27 = INT8_MIN;
	uint8_t x28 = 6U;
	int32_t t6 = 184942;

	t6 = (x25==((x26%x27)/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = UINT64_MAX;
	uint16_t x30 = UINT16_MAX;
	static volatile int32_t t7 = 59;

	t7 = (x29==((x30%x31)/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = UINT64_MAX;
	static int16_t x35 = 9;
	static int8_t x36 = -1;
	volatile int32_t t8 = 711254;

	t8 = (x33==((x34%x35)/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	static uint32_t x38 = 43513204U;
	int32_t x39 = INT32_MIN;
	int8_t x40 = INT8_MIN;

	t9 = (x37==((x38%x39)/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -32;
	volatile uint32_t x42 = 6313U;
	uint16_t x43 = 96U;
	uint32_t x44 = 689459U;
	volatile int32_t t10 = 1057;

	t10 = (x41==((x42%x43)/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 38U;
	int64_t x48 = INT64_MIN;
	int32_t t11 = 10;

	t11 = (x45==((x46%x47)/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x49 = 0U;
	static volatile uint16_t x51 = 4529U;
	int16_t x52 = -8;
	int32_t t12 = 865;

	t12 = (x49==((x50%x51)/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = 1;
	static int8_t x54 = -1;
	int32_t x55 = -1;
	static uint64_t x56 = 572180008028LLU;
	volatile int32_t t13 = 53849802;

	t13 = (x53==((x54%x55)/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	int32_t x59 = INT32_MIN;

	t14 = (x57==((x58%x59)/x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = INT64_MAX;
	volatile int8_t x62 = 0;
	uint16_t x63 = 1U;
	uint32_t x64 = 92093895U;

	t15 = (x61==((x62%x63)/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	static volatile int16_t x66 = 6677;
	volatile int32_t x67 = INT32_MAX;
	uint16_t x68 = 1574U;
	static int32_t t16 = -57;

	t16 = (x65==((x66%x67)/x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int64_t x70 = -6798LL;
	int64_t x71 = INT64_MIN;
	static uint64_t x72 = 5786LLU;

	t17 = (x69==((x70%x71)/x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int32_t x74 = 23269;
	uint64_t x75 = 1092638852518370757LLU;
	static volatile int8_t x76 = INT8_MIN;

	t18 = (x73==((x74%x75)/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = 1;
	volatile int16_t x78 = INT16_MIN;
	int64_t x80 = INT64_MIN;
	int32_t t19 = 1742;

	t19 = (x77==((x78%x79)/x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = UINT8_MAX;
	static uint32_t x83 = 103U;
	int32_t t20 = -36;

	t20 = (x81==((x82%x83)/x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	static volatile int32_t x86 = INT32_MAX;
	static volatile int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MIN;
	int32_t t21 = 7;

	t21 = (x85==((x86%x87)/x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	int16_t x90 = INT16_MIN;
	uint64_t x91 = UINT64_MAX;
	volatile int8_t x92 = 9;
	volatile int32_t t22 = -1;

	t22 = (x89==((x90%x91)/x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	uint64_t x94 = UINT64_MAX;
	static int64_t x95 = 1LL;
	int16_t x96 = 850;
	volatile int32_t t23 = -5277059;

	t23 = (x93==((x94%x95)/x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int64_t x98 = INT64_MAX;
	volatile int64_t x100 = INT64_MIN;
	static int32_t t24 = 255282;

	t24 = (x97==((x98%x99)/x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = 5266256721055826LL;
	volatile int32_t x102 = INT32_MIN;
	uint32_t x103 = UINT32_MAX;
	static int64_t x104 = INT64_MIN;
	volatile int32_t t25 = -556;

	t25 = (x101==((x102%x103)/x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = INT16_MIN;
	int16_t x106 = 2;
	uint32_t x107 = 93880336U;
	uint16_t x108 = 280U;

	t26 = (x105==((x106%x107)/x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 3;
	static int8_t x110 = INT8_MIN;
	int64_t x111 = INT64_MAX;
	int8_t x112 = INT8_MAX;
	volatile int32_t t27 = 38393;

	t27 = (x109==((x110%x111)/x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x113 = -470;
	uint32_t x114 = UINT32_MAX;
	volatile int32_t x115 = INT32_MIN;
	int32_t t28 = -8412544;

	t28 = (x113==((x114%x115)/x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	uint32_t x118 = 957689U;
	int32_t x119 = INT32_MIN;
	int32_t t29 = 12593380;

	t29 = (x117==((x118%x119)/x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	int64_t x122 = -1544LL;
	volatile uint32_t x123 = UINT32_MAX;
	int8_t x124 = -1;
	static volatile int32_t t30 = -128;

	t30 = (x121==((x122%x123)/x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = 24;
	int16_t x127 = -1;
	volatile int32_t x128 = INT32_MIN;
	volatile int32_t t31 = 3296830;

	t31 = (x125==((x126%x127)/x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	static uint8_t x130 = UINT8_MAX;
	static volatile int8_t x131 = 1;
	volatile int64_t x132 = -1LL;
	volatile int32_t t32 = 789;

	t32 = (x129==((x130%x131)/x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x134 = UINT32_MAX;
	static int16_t x135 = -1;
	static volatile int64_t x136 = -16214LL;
	volatile int32_t t33 = 374;

	t33 = (x133==((x134%x135)/x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 1159525;
	volatile uint8_t x138 = 104U;
	volatile int64_t x139 = -1LL;
	volatile int64_t x140 = INT64_MIN;

	t34 = (x137==((x138%x139)/x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	uint64_t x142 = UINT64_MAX;
	static int64_t x144 = INT64_MIN;

	t35 = (x141==((x142%x143)/x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x146 = UINT32_MAX;
	volatile uint16_t x147 = 32U;
	uint32_t x148 = 7171U;
	static int32_t t36 = 2;

	t36 = (x145==((x146%x147)/x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	uint16_t x150 = 5157U;
	int64_t x151 = INT64_MIN;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = 6;

	t37 = (x149==((x150%x151)/x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 1U;
	int8_t x155 = -7;
	static int16_t x156 = INT16_MIN;

	t38 = (x153==((x154%x155)/x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x157 = UINT8_MAX;
	int32_t x158 = -3;
	static int64_t x159 = INT64_MIN;
	int64_t x160 = 4227908425243LL;
	int32_t t39 = 26;

	t39 = (x157==((x158%x159)/x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MAX;
	volatile uint8_t x162 = UINT8_MAX;
	static uint16_t x163 = 7831U;
	volatile int8_t x164 = INT8_MAX;
	volatile int32_t t40 = 3575;

	t40 = (x161==((x162%x163)/x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	volatile int8_t x166 = INT8_MAX;
	volatile int8_t x167 = INT8_MIN;

	t41 = (x165==((x166%x167)/x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int64_t x170 = -162LL;
	static int64_t x171 = INT64_MIN;
	uint16_t x172 = 9U;
	volatile int32_t t42 = 3299828;

	t42 = (x169==((x170%x171)/x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = -1231025619597251LL;
	static volatile int16_t x174 = -1;
	int8_t x175 = -1;
	int16_t x176 = -1;
	static int32_t t43 = -264092971;

	t43 = (x173==((x174%x175)/x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 0U;
	volatile int8_t x178 = INT8_MAX;
	int64_t x179 = INT64_MIN;
	int16_t x180 = 2;
	int32_t t44 = 27422071;

	t44 = (x177==((x178%x179)/x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 1;
	int8_t x182 = INT8_MIN;
	int32_t x183 = -1;
	uint8_t x184 = 7U;
	int32_t t45 = 31471705;

	t45 = (x181==((x182%x183)/x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	static int32_t x186 = INT32_MAX;
	static volatile int32_t x187 = -2883;
	int8_t x188 = -28;
	volatile int32_t t46 = 1;

	t46 = (x185==((x186%x187)/x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 9U;
	int16_t x190 = -7;
	static int32_t x191 = 123234220;
	int8_t x192 = -2;
	int32_t t47 = 607;

	t47 = (x189==((x190%x191)/x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	volatile int8_t x194 = -1;
	uint16_t x195 = UINT16_MAX;
	int64_t x196 = INT64_MIN;
	volatile int32_t t48 = 2956158;

	t48 = (x193==((x194%x195)/x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 12660LLU;
	int8_t x200 = -1;
	volatile int32_t t49 = -1;

	t49 = (x197==((x198%x199)/x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = 1;
	volatile int64_t x202 = 5625772436LL;
	static int32_t x204 = -1;
	int32_t t50 = 3642;

	t50 = (x201==((x202%x203)/x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x210 = -1;
	int64_t x212 = 3686765661871LL;

	t51 = (x209==((x210%x211)/x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x213 = 97517826U;
	static int16_t x214 = 224;
	volatile int64_t x215 = 1LL;
	int16_t x216 = INT16_MAX;

	t52 = (x213==((x214%x215)/x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = -1;
	uint8_t x218 = 1U;
	volatile int32_t x219 = -16821;

	t53 = (x217==((x218%x219)/x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x221 = 1337032LL;
	int16_t x223 = INT16_MIN;
	volatile int8_t x224 = INT8_MIN;

	t54 = (x221==((x222%x223)/x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = INT32_MIN;
	static volatile uint64_t x226 = UINT64_MAX;
	uint64_t x227 = 684346695427240LLU;
	volatile int32_t t55 = 48;

	t55 = (x225==((x226%x227)/x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x229 = 13730U;
	int32_t x230 = INT32_MIN;
	int64_t x231 = INT64_MIN;
	volatile int32_t t56 = -107488589;

	t56 = (x229==((x230%x231)/x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = INT64_MIN;
	volatile int64_t x234 = -1257055222315LL;
	volatile int16_t x235 = INT16_MIN;
	int32_t x236 = 1331754;

	t57 = (x233==((x234%x235)/x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x237 = 278175852U;
	int64_t x238 = -1LL;
	static uint16_t x239 = UINT16_MAX;
	static int32_t x240 = -1;
	int32_t t58 = 11274019;

	t58 = (x237==((x238%x239)/x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = -1636757LL;
	int8_t x242 = 29;
	int8_t x244 = -1;
	int32_t t59 = 143787055;

	t59 = (x241==((x242%x243)/x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = 10;
	int8_t x246 = INT8_MIN;
	int32_t x247 = -2;
	static int32_t x248 = -1;
	int32_t t60 = 12;

	t60 = (x245==((x246%x247)/x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x251 = -1;
	int8_t x252 = -1;

	t61 = (x249==((x250%x251)/x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = INT16_MIN;
	int32_t x254 = INT32_MAX;
	volatile uint8_t x255 = UINT8_MAX;
	static volatile int32_t x256 = 5491;

	t62 = (x253==((x254%x255)/x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x257 = UINT16_MAX;
	uint16_t x258 = 6U;
	int64_t x259 = -1LL;
	volatile uint8_t x260 = 7U;
	int32_t t63 = 832141333;

	t63 = (x257==((x258%x259)/x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x261 = -3354;
	int64_t x262 = -1LL;
	int64_t x263 = INT64_MIN;
	volatile int16_t x264 = -1;
	volatile int32_t t64 = -340;

	t64 = (x261==((x262%x263)/x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = INT32_MAX;
	static int32_t x266 = INT32_MIN;
	volatile int32_t x267 = -1;
	volatile int16_t x268 = INT16_MIN;

	t65 = (x265==((x266%x267)/x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x273 = 7U;
	volatile int64_t x274 = -5205858LL;
	int8_t x275 = INT8_MAX;
	int32_t t66 = -217;

	t66 = (x273==((x274%x275)/x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x277 = 1U;
	int8_t x280 = INT8_MAX;
	int32_t t67 = 347523018;

	t67 = (x277==((x278%x279)/x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x282 = UINT16_MAX;
	int64_t x283 = INT64_MAX;

	t68 = (x281==((x282%x283)/x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = INT16_MAX;
	int8_t x290 = INT8_MIN;
	volatile uint8_t x291 = UINT8_MAX;
	static volatile int32_t t69 = -548538;

	t69 = (x289==((x290%x291)/x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x294 = 54U;
	int32_t x295 = -16105316;
	int8_t x296 = INT8_MAX;
	volatile int32_t t70 = 59;

	t70 = (x293==((x294%x295)/x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x298 = INT64_MIN;
	int16_t x300 = INT16_MAX;
	volatile int32_t t71 = 3;

	t71 = (x297==((x298%x299)/x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x302 = INT32_MIN;
	int32_t x303 = -357657;
	static int16_t x304 = INT16_MIN;
	volatile int32_t t72 = -21;

	t72 = (x301==((x302%x303)/x304));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x305 = INT64_MIN;
	uint64_t x306 = 720259286261766LLU;
	int32_t t73 = -831;

	t73 = (x305==((x306%x307)/x308));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x309 = 387806LLU;
	volatile uint64_t x311 = 421611614994927003LLU;
	volatile uint64_t x312 = 26627995895LLU;

	t74 = (x309==((x310%x311)/x312));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x313 = 0U;
	uint16_t x315 = UINT16_MAX;
	int32_t x316 = -1;
	int32_t t75 = -480919;

	t75 = (x313==((x314%x315)/x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = INT64_MIN;
	volatile int64_t x318 = 36LL;
	int32_t x319 = -1;
	int32_t x320 = 6867567;
	static volatile int32_t t76 = -391724;

	t76 = (x317==((x318%x319)/x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x323 = 2;
	int8_t x324 = INT8_MIN;

	t77 = (x321==((x322%x323)/x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = 10533519LL;
	static volatile int64_t x326 = -1LL;
	int8_t x327 = INT8_MAX;

	t78 = (x325==((x326%x327)/x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x337 = 601U;
	int8_t x338 = -1;
	volatile int32_t x339 = -1;
	int64_t x340 = INT64_MIN;
	int32_t t79 = 36866;

	t79 = (x337==((x338%x339)/x340));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x341 = INT64_MIN;
	uint32_t x342 = 26161889U;
	int16_t x343 = INT16_MIN;
	volatile int64_t x344 = 7690LL;
	volatile int32_t t80 = -201;

	t80 = (x341==((x342%x343)/x344));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x345 = UINT32_MAX;
	int16_t x346 = INT16_MAX;
	static uint32_t x347 = 889U;
	int8_t x348 = -1;
	volatile int32_t t81 = 18425;

	t81 = (x345==((x346%x347)/x348));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x349 = -1;
	volatile uint8_t x350 = 1U;
	int32_t x351 = INT32_MAX;
	static volatile int32_t t82 = 12311;

	t82 = (x349==((x350%x351)/x352));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x353 = INT32_MAX;
	uint8_t x354 = 12U;
	int8_t x355 = INT8_MAX;
	volatile uint16_t x356 = 37U;
	int32_t t83 = -977859;

	t83 = (x353==((x354%x355)/x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x362 = 0;
	static int32_t x363 = INT32_MAX;
	static int16_t x364 = INT16_MIN;
	static int32_t t84 = -16683;

	t84 = (x361==((x362%x363)/x364));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x365 = 1U;
	uint64_t x366 = 44304246590125LLU;
	volatile int32_t x367 = -1;
	int32_t t85 = -85623;

	t85 = (x365==((x366%x367)/x368));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x369 = 25;
	static int64_t x370 = -1LL;
	static int64_t x372 = -1824443946070388424LL;
	static int32_t t86 = 19;

	t86 = (x369==((x370%x371)/x372));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x373 = INT16_MAX;
	int32_t x374 = INT32_MAX;
	int8_t x375 = -1;
	int64_t x376 = INT64_MIN;
	volatile int32_t t87 = -1545735;

	t87 = (x373==((x374%x375)/x376));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint8_t x377 = UINT8_MAX;
	int16_t x378 = INT16_MAX;
	uint16_t x379 = 3U;
	uint16_t x380 = UINT16_MAX;

	t88 = (x377==((x378%x379)/x380));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x381 = -20581;
	int8_t x382 = -14;
	static int32_t x384 = -102;
	int32_t t89 = 0;

	t89 = (x381==((x382%x383)/x384));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x385 = UINT32_MAX;
	volatile uint64_t x387 = 1488965599605019LLU;

	t90 = (x385==((x386%x387)/x388));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x389 = -1;
	int64_t x390 = -21827167771793142LL;
	int64_t x391 = INT64_MAX;
	volatile int16_t x392 = INT16_MAX;
	volatile int32_t t91 = -1534;

	t91 = (x389==((x390%x391)/x392));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x393 = INT8_MAX;
	int8_t x394 = INT8_MIN;
	volatile int16_t x395 = 4;
	int8_t x396 = INT8_MAX;
	int32_t t92 = 800854793;

	t92 = (x393==((x394%x395)/x396));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x398 = INT64_MAX;
	static int16_t x400 = 14831;
	int32_t t93 = 4;

	t93 = (x397==((x398%x399)/x400));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x401 = 27787591073049LL;
	int8_t x402 = INT8_MIN;
	int16_t x403 = INT16_MIN;
	int8_t x404 = INT8_MIN;
	volatile int32_t t94 = 880937;

	t94 = (x401==((x402%x403)/x404));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x406 = INT16_MIN;
	uint64_t x407 = 216LLU;
	uint16_t x408 = UINT16_MAX;
	static volatile int32_t t95 = -11094044;

	t95 = (x405==((x406%x407)/x408));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x409 = -1;
	int32_t x411 = -1;
	int32_t t96 = -1026;

	t96 = (x409==((x410%x411)/x412));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x415 = INT64_MAX;
	int64_t x416 = INT64_MAX;
	volatile int32_t t97 = -25294328;

	t97 = (x413==((x414%x415)/x416));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x417 = INT16_MIN;
	int32_t x419 = INT32_MAX;
	static int16_t x420 = INT16_MIN;

	t98 = (x417==((x418%x419)/x420));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x421 = 11519940LLU;
	int64_t x422 = INT64_MAX;
	volatile int16_t x423 = 4030;
	int16_t x424 = 11;

	t99 = (x421==((x422%x423)/x424));

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

