#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = UINT32_MAX;
int32_t t1 = -852650;
volatile uint16_t x11 = 6379U;
int32_t x12 = INT32_MIN;
volatile int32_t t2 = 669553789;
int32_t x21 = INT32_MIN;
int64_t x23 = -1LL;
uint16_t x34 = 390U;
int32_t t8 = -1978;
static int32_t x48 = INT32_MAX;
static uint32_t x51 = 126382883U;
volatile uint8_t x58 = 6U;
static uint8_t x63 = 1U;
int32_t x74 = INT32_MIN;
int8_t x75 = INT8_MIN;
static volatile int32_t t18 = -62940324;
static int16_t x77 = INT16_MAX;
int64_t x81 = INT64_MAX;
static uint16_t x98 = 1U;
static volatile int32_t t23 = -6658503;
int32_t x105 = INT32_MAX;
volatile int32_t t24 = 64;
static int32_t x111 = -302970;
static uint64_t x112 = 501444LLU;
volatile uint32_t x114 = UINT32_MAX;
int16_t x118 = -14775;
volatile int8_t x120 = INT8_MIN;
volatile int32_t t27 = 129;
uint16_t x121 = UINT16_MAX;
int8_t x123 = -1;
static int32_t x127 = INT32_MIN;
int32_t t31 = -25;
int32_t t32 = -10218;
uint64_t x151 = 378111LLU;
static uint32_t x157 = 21894U;
int64_t x162 = -1LL;
volatile int32_t t37 = -1;
static uint64_t x171 = 475321476LLU;
static int32_t t38 = -24;
volatile int32_t x174 = -1;
uint32_t x175 = 5092U;
int16_t x178 = INT16_MIN;
static volatile int32_t t40 = -103377;
static int32_t t43 = 2817608;
static volatile int64_t x198 = INT64_MIN;
volatile int16_t x202 = INT16_MIN;
uint32_t x209 = UINT32_MAX;
int8_t x210 = INT8_MIN;
static int8_t x213 = 0;
static uint8_t x224 = 23U;
int8_t x226 = INT8_MIN;
int16_t x234 = INT16_MAX;
static int32_t t53 = -126643188;
int64_t x238 = -1LL;
uint32_t x247 = 3640U;
static int32_t t56 = 963573801;
int32_t t57 = -218373206;
int16_t x260 = INT16_MIN;
int32_t x262 = -395011737;
static volatile uint32_t x264 = 16643U;
uint16_t x272 = UINT16_MAX;
static int64_t x273 = INT64_MAX;
int16_t x277 = 948;
uint64_t x291 = 4LLU;
volatile uint16_t x293 = UINT16_MAX;
volatile int32_t t68 = -13059532;
static uint32_t x305 = 212U;
int32_t x312 = -1;
volatile int8_t x318 = -1;
int32_t x321 = INT32_MIN;
int8_t x323 = INT8_MAX;
int32_t x324 = 1;
uint64_t x327 = UINT64_MAX;
uint64_t x330 = UINT64_MAX;
volatile int64_t x332 = 520579890753LL;
int8_t x334 = 0;
int32_t t77 = 960982;
static int32_t x340 = INT32_MAX;
int32_t x341 = -172973;
int16_t x347 = -3136;
volatile int32_t t80 = 1;
uint8_t x350 = UINT8_MAX;
int64_t x352 = INT64_MIN;
uint64_t x355 = 1411258715LLU;
volatile int32_t x356 = INT32_MAX;
int32_t x357 = INT32_MIN;
int16_t x360 = -1;
int64_t x362 = INT64_MAX;
static uint8_t x366 = 5U;
int32_t x367 = INT32_MAX;
static int32_t x376 = 63771;
int32_t t87 = -1;
int32_t t88 = 160;
static uint8_t x382 = 62U;
int64_t x389 = 1651000412LL;
int16_t x393 = 940;
uint16_t x404 = 80U;
int16_t x405 = INT16_MIN;
int16_t x406 = -116;
int8_t x407 = -1;
int16_t x408 = -3100;
uint32_t x411 = 2375365U;
int64_t x417 = INT64_MAX;
uint32_t x422 = UINT32_MAX;
int32_t t99 = 5;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int64_t x2 = INT64_MIN;
	uint8_t x3 = 1U;
	int32_t t0 = -23751;

	t0 = (x1<=(x2/(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile int8_t x6 = -1;
	int32_t x7 = -4976;
	uint32_t x8 = UINT32_MAX;

	t1 = (x5<=(x6/(x7^x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 12438843U;
	int16_t x10 = INT16_MAX;

	t2 = (x9<=(x10/(x11^x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int32_t x14 = -3590;
	int8_t x15 = INT8_MAX;
	int64_t x16 = -1LL;
	int32_t t3 = 1695617;

	t3 = (x13<=(x14/(x15^x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int64_t x18 = INT64_MIN;
	volatile int64_t x19 = INT64_MIN;
	uint16_t x20 = 1290U;
	static volatile int32_t t4 = 266820905;

	t4 = (x17<=(x18/(x19^x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = 527U;
	uint8_t x24 = UINT8_MAX;
	int32_t t5 = -4;

	t5 = (x21<=(x22/(x23^x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 342205U;
	int8_t x26 = INT8_MIN;
	int32_t x27 = INT32_MAX;
	uint64_t x28 = 113LLU;
	volatile int32_t t6 = 5144336;

	t6 = (x25<=(x26/(x27^x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	static int32_t x30 = INT32_MIN;
	uint32_t x31 = 1244696493U;
	int64_t x32 = -1LL;
	int32_t t7 = -2478;

	t7 = (x29<=(x30/(x31^x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint8_t x33 = 5U;
	int32_t x35 = 5724186;
	uint16_t x36 = 204U;

	t8 = (x33<=(x34/(x35^x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x37 = 60U;
	int32_t x38 = -103102133;
	uint32_t x39 = 4862U;
	volatile uint32_t x40 = UINT32_MAX;
	int32_t t9 = -876529;

	t9 = (x37<=(x38/(x39^x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	uint16_t x42 = 1U;
	volatile int64_t x43 = 398109192777LL;
	uint8_t x44 = 1U;
	int32_t t10 = -10754;

	t10 = (x41<=(x42/(x43^x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	volatile uint16_t x46 = UINT16_MAX;
	static uint64_t x47 = 2292156LLU;
	volatile int32_t t11 = 4;

	t11 = (x45<=(x46/(x47^x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 5404U;
	int64_t x50 = 30774LL;
	int64_t x52 = INT64_MAX;
	int32_t t12 = 1;

	t12 = (x49<=(x50/(x51^x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x53 = 92021U;
	volatile int64_t x54 = INT64_MIN;
	int16_t x55 = INT16_MIN;
	int64_t x56 = INT64_MIN;
	int32_t t13 = -343;

	t13 = (x53<=(x54/(x55^x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 40LL;
	uint8_t x59 = UINT8_MAX;
	static int64_t x60 = 577948438301LL;
	int32_t t14 = 179;

	t14 = (x57<=(x58/(x59^x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MAX;
	int32_t x62 = -31228347;
	int16_t x64 = -1;
	static int32_t t15 = -1582;

	t15 = (x61<=(x62/(x63^x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	int32_t x66 = 16274807;
	static uint16_t x67 = 3U;
	static int16_t x68 = INT16_MIN;
	int32_t t16 = 1373;

	t16 = (x65<=(x66/(x67^x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x69 = UINT32_MAX;
	uint16_t x70 = 329U;
	uint64_t x71 = 9982121555LLU;
	static uint8_t x72 = 3U;
	volatile int32_t t17 = -203219;

	t17 = (x69<=(x70/(x71^x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -5;
	volatile uint16_t x76 = 2U;

	t18 = (x73<=(x74/(x75^x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x78 = 2U;
	int16_t x79 = INT16_MIN;
	int16_t x80 = -1;
	volatile int32_t t19 = -1;

	t19 = (x77<=(x78/(x79^x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x82 = INT64_MIN;
	int32_t x83 = INT32_MIN;
	volatile int8_t x84 = INT8_MIN;
	int32_t t20 = 3239607;

	t20 = (x81<=(x82/(x83^x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MIN;
	int64_t x90 = INT64_MAX;
	uint64_t x91 = 292396118145579505LLU;
	volatile uint8_t x92 = 1U;
	int32_t t21 = 389139;

	t21 = (x89<=(x90/(x91^x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 835U;
	int32_t x94 = INT32_MAX;
	static uint32_t x95 = UINT32_MAX;
	static uint16_t x96 = 246U;
	volatile int32_t t22 = 4216;

	t22 = (x93<=(x94/(x95^x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = 3;
	uint16_t x99 = 10U;
	int32_t x100 = -1;

	t23 = (x97<=(x98/(x99^x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x106 = 497472123236576753LL;
	static int16_t x107 = -1;
	int64_t x108 = INT64_MIN;

	t24 = (x105<=(x106/(x107^x108)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = INT64_MAX;
	int32_t x110 = -2477778;
	int32_t t25 = -1;

	t25 = (x109<=(x110/(x111^x112)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = 42U;
	uint64_t x115 = 231603744288LLU;
	static int64_t x116 = INT64_MIN;
	volatile int32_t t26 = -2749;

	t26 = (x113<=(x114/(x115^x116)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = -1LL;
	int32_t x119 = -1;

	t27 = (x117<=(x118/(x119^x120)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x122 = INT8_MIN;
	int64_t x124 = INT64_MIN;
	int32_t t28 = -172351;

	t28 = (x121<=(x122/(x123^x124)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = 30403705LLU;
	int64_t x126 = INT64_MIN;
	uint32_t x128 = UINT32_MAX;
	volatile int32_t t29 = 59244;

	t29 = (x125<=(x126/(x127^x128)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = UINT8_MAX;
	uint8_t x130 = UINT8_MAX;
	volatile int32_t x131 = INT32_MIN;
	uint32_t x132 = UINT32_MAX;
	volatile int32_t t30 = 732333946;

	t30 = (x129<=(x130/(x131^x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = 0U;
	static int64_t x134 = INT64_MIN;
	int64_t x135 = INT64_MIN;
	static int16_t x136 = INT16_MIN;

	t31 = (x133<=(x134/(x135^x136)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x137 = -532506;
	static uint8_t x138 = UINT8_MAX;
	uint32_t x139 = 1141U;
	static uint64_t x140 = 878301017480363686LLU;

	t32 = (x137<=(x138/(x139^x140)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x149 = INT64_MIN;
	uint64_t x150 = UINT64_MAX;
	volatile uint64_t x152 = 2229683859393LLU;
	static volatile int32_t t33 = 1947;

	t33 = (x149<=(x150/(x151^x152)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x153 = 395;
	int16_t x154 = -9062;
	int32_t x155 = INT32_MAX;
	int32_t x156 = 3;
	int32_t t34 = 0;

	t34 = (x153<=(x154/(x155^x156)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x158 = INT64_MAX;
	static volatile uint8_t x159 = 1U;
	volatile int16_t x160 = INT16_MAX;
	int32_t t35 = -3;

	t35 = (x157<=(x158/(x159^x160)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x161 = -1;
	int64_t x163 = 64659047426209LL;
	uint8_t x164 = 0U;
	volatile int32_t t36 = 308236;

	t36 = (x161<=(x162/(x163^x164)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = INT32_MIN;
	uint64_t x166 = 32352LLU;
	int8_t x167 = INT8_MIN;
	static uint32_t x168 = UINT32_MAX;

	t37 = (x165<=(x166/(x167^x168)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x169 = 1U;
	int16_t x170 = INT16_MIN;
	uint8_t x172 = UINT8_MAX;

	t38 = (x169<=(x170/(x171^x172)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = -1;
	static int8_t x176 = INT8_MAX;
	volatile int32_t t39 = 63207;

	t39 = (x173<=(x174/(x175^x176)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x177 = INT64_MAX;
	int8_t x179 = INT8_MAX;
	int64_t x180 = -6339387217926LL;

	t40 = (x177<=(x178/(x179^x180)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x181 = 125LLU;
	static int64_t x182 = INT64_MIN;
	uint8_t x183 = 41U;
	uint64_t x184 = 12213870449872LLU;
	volatile int32_t t41 = -237015;

	t41 = (x181<=(x182/(x183^x184)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x185 = INT32_MAX;
	int8_t x186 = 2;
	static int16_t x187 = -1;
	int16_t x188 = INT16_MIN;
	static volatile int32_t t42 = -25;

	t42 = (x185<=(x186/(x187^x188)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x189 = -3;
	uint32_t x190 = 14067395U;
	uint8_t x191 = UINT8_MAX;
	static int64_t x192 = 0LL;

	t43 = (x189<=(x190/(x191^x192)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x197 = 60U;
	static int16_t x199 = -1;
	int8_t x200 = INT8_MAX;
	int32_t t44 = 32407217;

	t44 = (x197<=(x198/(x199^x200)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x201 = -1;
	int16_t x203 = -1159;
	volatile int32_t x204 = -3379189;
	static int32_t t45 = -103130487;

	t45 = (x201<=(x202/(x203^x204)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = INT64_MAX;
	static int32_t x206 = 100140810;
	volatile int64_t x207 = -34453870671695828LL;
	volatile uint8_t x208 = 1U;
	int32_t t46 = -17030927;

	t46 = (x205<=(x206/(x207^x208)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x211 = 88LLU;
	int16_t x212 = 1;
	int32_t t47 = 2022;

	t47 = (x209<=(x210/(x211^x212)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x214 = 58462393U;
	static int64_t x215 = -91891034LL;
	uint32_t x216 = 11867493U;
	volatile int32_t t48 = 170045;

	t48 = (x213<=(x214/(x215^x216)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x217 = 91562LLU;
	int8_t x218 = INT8_MIN;
	uint8_t x219 = 5U;
	uint32_t x220 = 862U;
	volatile int32_t t49 = -1;

	t49 = (x217<=(x218/(x219^x220)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x221 = 29;
	uint16_t x222 = 2U;
	volatile uint16_t x223 = 2U;
	volatile int32_t t50 = 126833825;

	t50 = (x221<=(x222/(x223^x224)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x225 = -69420900298339LL;
	int8_t x227 = INT8_MAX;
	volatile int64_t x228 = INT64_MIN;
	volatile int32_t t51 = -4;

	t51 = (x225<=(x226/(x227^x228)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x229 = 3;
	volatile int8_t x230 = 20;
	int16_t x231 = INT16_MAX;
	static int32_t x232 = INT32_MIN;
	int32_t t52 = 0;

	t52 = (x229<=(x230/(x231^x232)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x233 = 4836096875194LL;
	static uint16_t x235 = 2038U;
	volatile uint16_t x236 = 2459U;

	t53 = (x233<=(x234/(x235^x236)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = INT32_MIN;
	int64_t x239 = -1LL;
	int64_t x240 = INT64_MIN;
	int32_t t54 = -880517;

	t54 = (x237<=(x238/(x239^x240)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x245 = -1LL;
	int16_t x246 = INT16_MIN;
	static uint64_t x248 = 19633459194750LLU;
	static volatile int32_t t55 = -4016018;

	t55 = (x245<=(x246/(x247^x248)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x249 = -1;
	int64_t x250 = INT64_MIN;
	volatile int8_t x251 = 3;
	uint32_t x252 = 1342888981U;

	t56 = (x249<=(x250/(x251^x252)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x253 = -1;
	uint8_t x254 = 4U;
	int32_t x255 = INT32_MIN;
	static int32_t x256 = -365834677;

	t57 = (x253<=(x254/(x255^x256)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x257 = 554U;
	uint64_t x258 = 61712LLU;
	int8_t x259 = -1;
	volatile int32_t t58 = 37;

	t58 = (x257<=(x258/(x259^x260)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x261 = 2391U;
	volatile int8_t x263 = 5;
	int32_t t59 = 2923;

	t59 = (x261<=(x262/(x263^x264)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x265 = -1;
	volatile int32_t x266 = INT32_MIN;
	volatile int8_t x267 = -22;
	int32_t x268 = INT32_MIN;
	volatile int32_t t60 = -356931;

	t60 = (x265<=(x266/(x267^x268)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x269 = -1;
	volatile uint16_t x270 = UINT16_MAX;
	int64_t x271 = -1LL;
	int32_t t61 = -2468938;

	t61 = (x269<=(x270/(x271^x272)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x274 = INT64_MIN;
	int8_t x275 = INT8_MIN;
	volatile uint8_t x276 = 30U;
	volatile int32_t t62 = -71;

	t62 = (x273<=(x274/(x275^x276)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x278 = -1;
	uint32_t x279 = 794010U;
	int64_t x280 = INT64_MIN;
	volatile int32_t t63 = 0;

	t63 = (x277<=(x278/(x279^x280)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x281 = 1;
	int64_t x282 = -1LL;
	uint32_t x283 = UINT32_MAX;
	uint64_t x284 = UINT64_MAX;
	int32_t t64 = 27067;

	t64 = (x281<=(x282/(x283^x284)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x285 = INT8_MIN;
	int64_t x286 = 303615984350309LL;
	int16_t x287 = 6;
	int16_t x288 = INT16_MIN;
	int32_t t65 = 136;

	t65 = (x285<=(x286/(x287^x288)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x289 = 3503188929244878LLU;
	volatile int16_t x290 = -1;
	int64_t x292 = 1654426133LL;
	volatile int32_t t66 = 1;

	t66 = (x289<=(x290/(x291^x292)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x294 = -1;
	uint8_t x295 = 54U;
	int8_t x296 = INT8_MAX;
	volatile int32_t t67 = -8;

	t67 = (x293<=(x294/(x295^x296)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x297 = 25626U;
	int32_t x298 = -1;
	int16_t x299 = 421;
	volatile uint64_t x300 = UINT64_MAX;

	t68 = (x297<=(x298/(x299^x300)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x301 = UINT8_MAX;
	volatile int8_t x302 = 3;
	volatile uint16_t x303 = UINT16_MAX;
	int64_t x304 = INT64_MAX;
	volatile int32_t t69 = 3425641;

	t69 = (x301<=(x302/(x303^x304)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x306 = INT64_MAX;
	volatile int16_t x307 = 710;
	int16_t x308 = -3613;
	int32_t t70 = 29302;

	t70 = (x305<=(x306/(x307^x308)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x309 = 1;
	int64_t x310 = INT64_MAX;
	volatile int32_t x311 = -175;
	volatile int32_t t71 = 206294519;

	t71 = (x309<=(x310/(x311^x312)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x313 = INT32_MAX;
	int32_t x314 = INT32_MAX;
	uint32_t x315 = 33647U;
	int32_t x316 = INT32_MIN;
	int32_t t72 = -33;

	t72 = (x313<=(x314/(x315^x316)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x317 = INT32_MIN;
	volatile int16_t x319 = INT16_MIN;
	static int8_t x320 = INT8_MIN;
	int32_t t73 = -770;

	t73 = (x317<=(x318/(x319^x320)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x322 = INT32_MIN;
	static int32_t t74 = 97161;

	t74 = (x321<=(x322/(x323^x324)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x325 = INT64_MIN;
	int64_t x326 = -1LL;
	uint8_t x328 = 25U;
	int32_t t75 = 116318364;

	t75 = (x325<=(x326/(x327^x328)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x329 = 12U;
	volatile int64_t x331 = -1LL;
	volatile int32_t t76 = 1411321;

	t76 = (x329<=(x330/(x331^x332)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x333 = 701390573LLU;
	static uint8_t x335 = UINT8_MAX;
	volatile uint64_t x336 = 3469217519795747988LLU;

	t77 = (x333<=(x334/(x335^x336)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x337 = 103U;
	uint64_t x338 = 179LLU;
	int32_t x339 = -224083479;
	int32_t t78 = -1;

	t78 = (x337<=(x338/(x339^x340)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x342 = INT64_MIN;
	static uint16_t x343 = UINT16_MAX;
	volatile int32_t x344 = -2051;
	int32_t t79 = -11;

	t79 = (x341<=(x342/(x343^x344)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x345 = 0;
	volatile int8_t x346 = -3;
	static uint8_t x348 = UINT8_MAX;

	t80 = (x345<=(x346/(x347^x348)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x349 = 54;
	int32_t x351 = INT32_MIN;
	volatile int32_t t81 = -814700;

	t81 = (x349<=(x350/(x351^x352)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x353 = -1;
	int32_t x354 = 95776;
	volatile int32_t t82 = 683767380;

	t82 = (x353<=(x354/(x355^x356)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x358 = 0;
	uint16_t x359 = UINT16_MAX;
	volatile int32_t t83 = -1;

	t83 = (x357<=(x358/(x359^x360)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x361 = UINT32_MAX;
	uint16_t x363 = 7U;
	int32_t x364 = -236;
	volatile int32_t t84 = -401;

	t84 = (x361<=(x362/(x363^x364)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x365 = 4307018562382887693LLU;
	uint32_t x368 = UINT32_MAX;
	static volatile int32_t t85 = 3;

	t85 = (x365<=(x366/(x367^x368)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x369 = 15U;
	uint16_t x370 = 26985U;
	volatile uint8_t x371 = UINT8_MAX;
	int32_t x372 = INT32_MIN;
	static volatile int32_t t86 = 14;

	t86 = (x369<=(x370/(x371^x372)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x373 = 70365015689539LL;
	uint8_t x374 = 92U;
	volatile uint64_t x375 = UINT64_MAX;

	t87 = (x373<=(x374/(x375^x376)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x377 = 28140U;
	int8_t x378 = -1;
	uint64_t x379 = 1798852307506458LLU;
	int16_t x380 = INT16_MAX;

	t88 = (x377<=(x378/(x379^x380)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x381 = 740541491U;
	static uint64_t x383 = UINT64_MAX;
	static uint8_t x384 = 51U;
	static int32_t t89 = -407074;

	t89 = (x381<=(x382/(x383^x384)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x385 = UINT64_MAX;
	int64_t x386 = -4918LL;
	uint8_t x387 = 13U;
	int64_t x388 = INT64_MIN;
	static int32_t t90 = 666;

	t90 = (x385<=(x386/(x387^x388)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x390 = INT32_MIN;
	int16_t x391 = 0;
	int16_t x392 = INT16_MIN;
	static int32_t t91 = 3;

	t91 = (x389<=(x390/(x391^x392)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x394 = 214;
	static int16_t x395 = 42;
	volatile int16_t x396 = -1;
	static int32_t t92 = -238617423;

	t92 = (x393<=(x394/(x395^x396)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x397 = INT64_MAX;
	int32_t x398 = 9328338;
	uint8_t x399 = UINT8_MAX;
	int8_t x400 = INT8_MAX;
	int32_t t93 = -7576480;

	t93 = (x397<=(x398/(x399^x400)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x401 = INT32_MIN;
	uint64_t x402 = 131900837LLU;
	uint32_t x403 = 1433439982U;
	int32_t t94 = -44;

	t94 = (x401<=(x402/(x403^x404)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t t95 = -90202633;

	t95 = (x405<=(x406/(x407^x408)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x409 = 0U;
	volatile uint64_t x410 = UINT64_MAX;
	int32_t x412 = -1;
	static int32_t t96 = 8688;

	t96 = (x409<=(x410/(x411^x412)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x413 = 0;
	static int64_t x414 = -1LL;
	int32_t x415 = INT32_MIN;
	int32_t x416 = -1945729;
	static int32_t t97 = 63;

	t97 = (x413<=(x414/(x415^x416)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x418 = 12811334493521LLU;
	int64_t x419 = INT64_MAX;
	uint8_t x420 = 5U;
	volatile int32_t t98 = 1036939187;

	t98 = (x417<=(x418/(x419^x420)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x421 = 2911097U;
	volatile uint32_t x423 = 27U;
	int32_t x424 = 961;

	t99 = (x421<=(x422/(x423^x424)));

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

