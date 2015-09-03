#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x3 = 8591103U;
int16_t x4 = -1;
int16_t x7 = -64;
int32_t x8 = INT32_MAX;
static int16_t x9 = 1358;
int32_t x13 = -465;
int32_t x16 = -1;
uint8_t x22 = UINT8_MAX;
int8_t x23 = INT8_MIN;
int32_t x32 = INT32_MIN;
volatile uint64_t x33 = 200LLU;
int64_t x35 = 1376154653692784064LL;
int64_t x36 = INT64_MIN;
volatile int32_t t9 = -3357;
int32_t t10 = -29301604;
static volatile int64_t x47 = INT64_MIN;
int32_t x49 = -1;
int32_t x51 = INT32_MIN;
static int32_t t12 = 217108082;
uint8_t x67 = 19U;
volatile int32_t t16 = -118661804;
int64_t x70 = INT64_MIN;
int8_t x71 = INT8_MIN;
uint64_t x73 = UINT64_MAX;
int32_t x80 = INT32_MIN;
volatile int32_t t20 = -1375275;
int64_t x85 = INT64_MIN;
int64_t x95 = INT64_MAX;
int32_t t25 = 207745;
static uint64_t x105 = 428LLU;
int64_t x107 = INT64_MIN;
int32_t x111 = -1;
int8_t x112 = 56;
int16_t x115 = -1;
volatile int32_t t28 = 953;
int32_t x123 = -42;
static volatile int32_t t30 = 450905;
static volatile int32_t t32 = -926;
volatile int32_t t34 = 25912807;
int8_t x141 = INT8_MIN;
int16_t x143 = INT16_MAX;
int32_t x145 = INT32_MAX;
static volatile int16_t x146 = INT16_MIN;
static uint32_t x147 = UINT32_MAX;
int32_t x149 = INT32_MIN;
int64_t x153 = INT64_MAX;
volatile uint16_t x154 = UINT16_MAX;
volatile uint32_t x166 = UINT32_MAX;
int32_t t42 = 16612529;
int64_t x173 = 8LL;
static uint32_t x174 = UINT32_MAX;
int32_t x180 = INT32_MAX;
static uint16_t x182 = 7321U;
int32_t x183 = -50340;
int64_t x187 = INT64_MIN;
volatile int32_t t46 = -28728;
int32_t t48 = 0;
volatile uint32_t x200 = UINT32_MAX;
int32_t x212 = INT32_MIN;
uint32_t x213 = UINT32_MAX;
static int16_t x221 = INT16_MAX;
volatile uint16_t x224 = UINT16_MAX;
int64_t x232 = INT64_MAX;
int8_t x233 = -40;
int32_t t58 = -61781088;
uint64_t x250 = 271058746095LLU;
int32_t t63 = -33776;
uint32_t x261 = 11U;
int32_t x272 = INT32_MIN;
uint64_t x278 = 678986324LLU;
uint32_t x280 = UINT32_MAX;
int16_t x284 = 46;
int64_t x289 = INT64_MIN;
int8_t x291 = -1;
static int16_t x292 = INT16_MAX;
volatile int32_t t72 = 299132186;
int16_t x298 = -1;
int32_t t73 = 166426820;
volatile int8_t x308 = -9;
int32_t t75 = -405;
static volatile uint32_t x320 = 1397197U;
volatile int16_t x324 = INT16_MIN;
uint8_t x327 = 4U;
static uint8_t x329 = 7U;
int64_t x337 = INT64_MIN;
uint64_t x349 = 1783620403573LLU;
volatile int32_t t86 = -26019668;
int32_t t87 = -283338;
static int32_t t89 = -86199138;
int16_t x370 = -13284;
uint16_t x373 = 0U;
static uint32_t x385 = UINT32_MAX;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	int32_t x2 = 2304769;
	int32_t t0 = -240;

	t0 = (x1<(x2&(x3%x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	uint64_t x6 = 1217LLU;
	static int32_t t1 = 974036878;

	t1 = (x5<(x6&(x7%x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = UINT32_MAX;
	int8_t x11 = INT8_MIN;
	int16_t x12 = INT16_MIN;
	int32_t t2 = -168112;

	t2 = (x9<(x10&(x11%x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = UINT16_MAX;
	int16_t x15 = INT16_MIN;
	int32_t t3 = 25;

	t3 = (x13<(x14&(x15%x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -50538207558639LL;
	volatile int16_t x18 = INT16_MIN;
	int16_t x19 = 0;
	static uint16_t x20 = UINT16_MAX;
	static int32_t t4 = -237339575;

	t4 = (x17<(x18&(x19%x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = UINT32_MAX;
	int8_t x24 = -1;
	volatile int32_t t5 = 3;

	t5 = (x21<(x22&(x23%x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 1U;
	int32_t x26 = INT32_MIN;
	static volatile int32_t x27 = 534058050;
	int64_t x28 = -2551979754338044292LL;
	static int32_t t6 = -1;

	t6 = (x25<(x26&(x27%x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x29 = 15347U;
	static int16_t x30 = -1;
	int32_t x31 = INT32_MAX;
	volatile int32_t t7 = 769;

	t7 = (x29<(x30&(x31%x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = -207;
	static volatile int32_t t8 = 2;

	t8 = (x33<(x34&(x35%x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = -1;
	int64_t x38 = INT64_MIN;
	static int16_t x39 = INT16_MIN;
	uint64_t x40 = 1LLU;

	t9 = (x37<(x38&(x39%x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	int8_t x42 = -1;
	uint16_t x43 = 159U;
	int32_t x44 = INT32_MAX;

	t10 = (x41<(x42&(x43%x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	uint8_t x46 = 85U;
	static int16_t x48 = INT16_MIN;
	int32_t t11 = -29;

	t11 = (x45<(x46&(x47%x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MIN;
	int8_t x52 = -1;

	t12 = (x49<(x50&(x51%x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -14159408LL;
	int16_t x54 = 0;
	volatile int32_t x55 = INT32_MIN;
	uint8_t x56 = 11U;
	int32_t t13 = 20335;

	t13 = (x53<(x54&(x55%x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = 13;
	uint64_t x58 = 32993LLU;
	static int8_t x59 = INT8_MIN;
	int16_t x60 = 1;
	static volatile int32_t t14 = 98376454;

	t14 = (x57<(x58&(x59%x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	static int64_t x62 = INT64_MAX;
	static int8_t x63 = -1;
	uint8_t x64 = UINT8_MAX;
	int32_t t15 = 2876589;

	t15 = (x61<(x62&(x63%x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -108286206684091678LL;
	uint8_t x66 = 19U;
	static uint32_t x68 = 1652927321U;

	t16 = (x65<(x66&(x67%x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 1880279769519LLU;
	int16_t x72 = -8;
	int32_t t17 = 1830092;

	t17 = (x69<(x70&(x71%x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = 1;
	int32_t x75 = -1;
	uint16_t x76 = 465U;
	volatile int32_t t18 = -46;

	t18 = (x73<(x74&(x75%x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int64_t x78 = -3LL;
	uint16_t x79 = UINT16_MAX;
	static int32_t t19 = -15637178;

	t19 = (x77<(x78&(x79%x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = -1;
	volatile uint32_t x82 = 9434U;
	int32_t x83 = INT32_MIN;
	uint32_t x84 = UINT32_MAX;

	t20 = (x81<(x82&(x83%x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = 1730LL;
	static int8_t x87 = 1;
	uint32_t x88 = 34350U;
	static volatile int32_t t21 = -16;

	t21 = (x85<(x86&(x87%x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -37LL;
	int32_t x90 = -8042072;
	int32_t x91 = INT32_MAX;
	volatile int32_t x92 = -10018006;
	volatile int32_t t22 = -3825;

	t22 = (x89<(x90&(x91%x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	uint32_t x94 = UINT32_MAX;
	int64_t x96 = -7691432599LL;
	int32_t t23 = 1957;

	t23 = (x93<(x94&(x95%x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 21U;
	volatile int8_t x98 = -1;
	int8_t x99 = -1;
	volatile int16_t x100 = -1799;
	static volatile int32_t t24 = 29547;

	t24 = (x97<(x98&(x99%x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	uint16_t x102 = 6U;
	int16_t x103 = -1;
	uint32_t x104 = UINT32_MAX;

	t25 = (x101<(x102&(x103%x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = -1;
	uint16_t x108 = 13U;
	int32_t t26 = -2066732;

	t26 = (x105<(x106&(x107%x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = 176829813;
	int16_t x110 = INT16_MAX;
	int32_t t27 = -4;

	t27 = (x109<(x110&(x111%x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = -1LL;
	static int8_t x114 = 1;
	volatile int16_t x116 = -1;

	t28 = (x113<(x114&(x115%x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x117 = 2U;
	int16_t x118 = INT16_MIN;
	static volatile uint8_t x119 = UINT8_MAX;
	int8_t x120 = INT8_MAX;
	int32_t t29 = 20863;

	t29 = (x117<(x118&(x119%x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x121 = UINT16_MAX;
	int16_t x122 = -1;
	static volatile int32_t x124 = INT32_MIN;

	t30 = (x121<(x122&(x123%x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = 47;
	int64_t x126 = INT64_MIN;
	uint8_t x127 = 16U;
	volatile int32_t x128 = -3;
	int32_t t31 = -403;

	t31 = (x125<(x126&(x127%x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = 0;
	volatile int32_t x130 = -163927;
	static uint32_t x131 = 3U;
	uint8_t x132 = UINT8_MAX;

	t32 = (x129<(x130&(x131%x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int64_t x134 = INT64_MAX;
	int8_t x135 = INT8_MAX;
	int16_t x136 = INT16_MIN;
	int32_t t33 = 119178;

	t33 = (x133<(x134&(x135%x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 68220LL;
	int16_t x138 = INT16_MAX;
	uint8_t x139 = 61U;
	uint32_t x140 = 360U;

	t34 = (x137<(x138&(x139%x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x142 = 12U;
	uint64_t x144 = 457119950131206127LLU;
	int32_t t35 = -8547;

	t35 = (x141<(x142&(x143%x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x148 = 59U;
	int32_t t36 = 4018;

	t36 = (x145<(x146&(x147%x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = INT32_MIN;
	int32_t x151 = 1;
	uint32_t x152 = 127747856U;
	volatile int32_t t37 = -52145216;

	t37 = (x149<(x150&(x151%x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x155 = INT32_MIN;
	static int32_t x156 = INT32_MIN;
	volatile int32_t t38 = 27;

	t38 = (x153<(x154&(x155%x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 208U;
	static uint8_t x158 = 112U;
	int64_t x159 = INT64_MIN;
	int8_t x160 = -4;
	volatile int32_t t39 = 2653354;

	t39 = (x157<(x158&(x159%x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	uint8_t x162 = UINT8_MAX;
	uint8_t x163 = 6U;
	static int8_t x164 = 14;
	static volatile int32_t t40 = -236295;

	t40 = (x161<(x162&(x163%x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MAX;
	volatile int16_t x167 = 939;
	int16_t x168 = -1;
	static int32_t t41 = -152338580;

	t41 = (x165<(x166&(x167%x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = UINT16_MAX;
	int8_t x170 = INT8_MAX;
	int16_t x171 = 876;
	static int32_t x172 = -1;

	t42 = (x169<(x170&(x171%x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x175 = -2;
	uint8_t x176 = 3U;
	volatile int32_t t43 = 0;

	t43 = (x173<(x174&(x175%x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MAX;
	volatile int16_t x178 = INT16_MAX;
	int16_t x179 = INT16_MIN;
	int32_t t44 = 674;

	t44 = (x177<(x178&(x179%x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = INT16_MIN;
	uint64_t x184 = 1893LLU;
	int32_t t45 = -594;

	t45 = (x181<(x182&(x183%x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 435071914U;
	uint16_t x186 = 1U;
	int8_t x188 = 1;

	t46 = (x185<(x186&(x187%x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = INT16_MAX;
	static volatile uint64_t x190 = UINT64_MAX;
	static int16_t x191 = -1;
	static uint32_t x192 = 2473U;
	int32_t t47 = -80595;

	t47 = (x189<(x190&(x191%x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	int16_t x194 = 7;
	int32_t x195 = -112620;
	int8_t x196 = INT8_MIN;

	t48 = (x193<(x194&(x195%x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 149U;
	int32_t x198 = INT32_MIN;
	uint64_t x199 = 3353893228856LLU;
	volatile int32_t t49 = 44;

	t49 = (x197<(x198&(x199%x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x201 = 6U;
	int32_t x202 = INT32_MAX;
	volatile int8_t x203 = INT8_MIN;
	int32_t x204 = INT32_MIN;
	volatile int32_t t50 = 14634880;

	t50 = (x201<(x202&(x203%x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -727886920LL;
	static uint32_t x206 = 5557804U;
	int16_t x207 = INT16_MIN;
	volatile int16_t x208 = -1;
	int32_t t51 = 1;

	t51 = (x205<(x206&(x207%x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	int64_t x210 = INT64_MAX;
	static uint16_t x211 = 2081U;
	volatile int32_t t52 = -1003;

	t52 = (x209<(x210&(x211%x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = 0;
	uint64_t x215 = 500348852284LLU;
	int64_t x216 = -13427754672322LL;
	static int32_t t53 = 28655;

	t53 = (x213<(x214&(x215%x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -1;
	int32_t x218 = INT32_MAX;
	int16_t x219 = -3428;
	uint16_t x220 = UINT16_MAX;
	static int32_t t54 = 3890;

	t54 = (x217<(x218&(x219%x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x222 = UINT32_MAX;
	int64_t x223 = -1LL;
	int32_t t55 = -195385242;

	t55 = (x221<(x222&(x223%x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = UINT16_MAX;
	int32_t x226 = -462118;
	int8_t x227 = 1;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t56 = 3432;

	t56 = (x225<(x226&(x227%x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 4U;
	int32_t x230 = 0;
	int16_t x231 = -13;
	int32_t t57 = -412412559;

	t57 = (x229<(x230&(x231%x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x234 = 62802LLU;
	static int32_t x235 = INT32_MIN;
	int8_t x236 = INT8_MIN;

	t58 = (x233<(x234&(x235%x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MAX;
	static volatile uint8_t x238 = 0U;
	int32_t x239 = INT32_MAX;
	int8_t x240 = -1;
	static volatile int32_t t59 = -10;

	t59 = (x237<(x238&(x239%x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = -1;
	volatile int8_t x246 = -1;
	int64_t x247 = INT64_MAX;
	int32_t x248 = INT32_MAX;
	int32_t t60 = 740;

	t60 = (x245<(x246&(x247%x248)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = 40LL;
	int64_t x251 = -1LL;
	uint32_t x252 = 63122U;
	static volatile int32_t t61 = 55359040;

	t61 = (x249<(x250&(x251%x252)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = INT64_MIN;
	int32_t x254 = INT32_MIN;
	volatile int16_t x255 = INT16_MAX;
	int32_t x256 = 83575;
	int32_t t62 = 5726271;

	t62 = (x253<(x254&(x255%x256)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x257 = INT64_MAX;
	static volatile int64_t x258 = 22264938307LL;
	int32_t x259 = INT32_MIN;
	static volatile int16_t x260 = -1;

	t63 = (x257<(x258&(x259%x260)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x262 = INT8_MIN;
	uint32_t x263 = 8U;
	uint8_t x264 = UINT8_MAX;
	volatile int32_t t64 = -4;

	t64 = (x261<(x262&(x263%x264)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x265 = INT16_MIN;
	uint64_t x266 = 18255LLU;
	uint32_t x267 = 63773U;
	volatile uint16_t x268 = UINT16_MAX;
	int32_t t65 = -7385375;

	t65 = (x265<(x266&(x267%x268)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x269 = 24;
	int8_t x270 = INT8_MIN;
	volatile uint16_t x271 = 52U;
	int32_t t66 = -180634784;

	t66 = (x269<(x270&(x271%x272)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x273 = 5024476U;
	uint64_t x274 = 99499918881LLU;
	static int8_t x275 = -2;
	int64_t x276 = -13101287320815208LL;
	int32_t t67 = -2025;

	t67 = (x273<(x274&(x275%x276)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = INT8_MIN;
	volatile uint64_t x279 = UINT64_MAX;
	int32_t t68 = -146;

	t68 = (x277<(x278&(x279%x280)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x281 = 5036LLU;
	uint64_t x282 = 9116808133LLU;
	uint8_t x283 = 0U;
	int32_t t69 = -529;

	t69 = (x281<(x282&(x283%x284)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x285 = 3U;
	static int64_t x286 = -27939LL;
	int64_t x287 = 1868808049444LL;
	int64_t x288 = INT64_MIN;
	int32_t t70 = -1;

	t70 = (x285<(x286&(x287%x288)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x290 = -1;
	volatile int32_t t71 = 0;

	t71 = (x289<(x290&(x291%x292)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x293 = UINT8_MAX;
	uint32_t x294 = 5U;
	int16_t x295 = INT16_MAX;
	uint64_t x296 = 398878309628719374LLU;

	t72 = (x293<(x294&(x295%x296)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x297 = INT32_MIN;
	volatile uint64_t x299 = 3321058431771517414LLU;
	static volatile int64_t x300 = INT64_MIN;

	t73 = (x297<(x298&(x299%x300)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x301 = 114328LLU;
	uint8_t x302 = 40U;
	uint16_t x303 = 1061U;
	uint8_t x304 = 79U;
	int32_t t74 = -112;

	t74 = (x301<(x302&(x303%x304)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x305 = INT8_MAX;
	static volatile int64_t x306 = -1LL;
	int64_t x307 = -26323878LL;

	t75 = (x305<(x306&(x307%x308)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x309 = UINT16_MAX;
	static int64_t x310 = -86595276836LL;
	int16_t x311 = INT16_MIN;
	volatile int16_t x312 = 461;
	int32_t t76 = -2191409;

	t76 = (x309<(x310&(x311%x312)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x313 = 5U;
	uint32_t x314 = 1U;
	static int32_t x315 = -2191892;
	static uint64_t x316 = 50584249746485786LLU;
	static int32_t t77 = -282577;

	t77 = (x313<(x314&(x315%x316)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x317 = INT32_MAX;
	int32_t x318 = INT32_MAX;
	volatile int64_t x319 = -4174059363658032LL;
	static int32_t t78 = -775164;

	t78 = (x317<(x318&(x319%x320)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = -1;
	int32_t x322 = INT32_MIN;
	uint64_t x323 = 348343893040574434LLU;
	int32_t t79 = 1;

	t79 = (x321<(x322&(x323%x324)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x325 = INT16_MIN;
	volatile uint32_t x326 = 4U;
	int16_t x328 = INT16_MIN;
	static volatile int32_t t80 = 1;

	t80 = (x325<(x326&(x327%x328)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x330 = -987LL;
	volatile int8_t x331 = INT8_MAX;
	static int8_t x332 = -2;
	volatile int32_t t81 = -38;

	t81 = (x329<(x330&(x331%x332)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x333 = INT64_MIN;
	static int64_t x334 = -136542141617LL;
	uint16_t x335 = UINT16_MAX;
	int16_t x336 = -1;
	volatile int32_t t82 = -198;

	t82 = (x333<(x334&(x335%x336)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x338 = -346;
	static int8_t x339 = -1;
	int64_t x340 = -1LL;
	static volatile int32_t t83 = 130286374;

	t83 = (x337<(x338&(x339%x340)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = INT8_MIN;
	int64_t x342 = -408762342525954LL;
	int16_t x343 = INT16_MIN;
	uint8_t x344 = 6U;
	int32_t t84 = 30175097;

	t84 = (x341<(x342&(x343%x344)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x345 = 3189635U;
	int32_t x346 = -1;
	int16_t x347 = 5;
	int32_t x348 = -1;
	static int32_t t85 = 12864454;

	t85 = (x345<(x346&(x347%x348)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x350 = INT32_MAX;
	uint64_t x351 = 29462805967100413LLU;
	int16_t x352 = INT16_MIN;

	t86 = (x349<(x350&(x351%x352)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x353 = -324;
	static int8_t x354 = INT8_MAX;
	int8_t x355 = INT8_MAX;
	static int8_t x356 = -1;

	t87 = (x353<(x354&(x355%x356)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x357 = UINT16_MAX;
	static int8_t x358 = INT8_MIN;
	volatile uint64_t x359 = 17403248LLU;
	int32_t x360 = -1;
	volatile int32_t t88 = -63817132;

	t88 = (x357<(x358&(x359%x360)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x361 = UINT64_MAX;
	static int16_t x362 = INT16_MIN;
	int64_t x363 = INT64_MAX;
	int16_t x364 = INT16_MAX;

	t89 = (x361<(x362&(x363%x364)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x365 = INT16_MIN;
	uint32_t x366 = UINT32_MAX;
	static uint32_t x367 = UINT32_MAX;
	static volatile uint8_t x368 = 25U;
	volatile int32_t t90 = -12200;

	t90 = (x365<(x366&(x367%x368)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x369 = INT32_MIN;
	static int16_t x371 = INT16_MAX;
	int64_t x372 = -1LL;
	volatile int32_t t91 = 1161;

	t91 = (x369<(x370&(x371%x372)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x374 = UINT32_MAX;
	uint16_t x375 = 1900U;
	static uint16_t x376 = 1759U;
	int32_t t92 = -467;

	t92 = (x373<(x374&(x375%x376)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x377 = INT8_MIN;
	static volatile uint8_t x378 = 2U;
	int32_t x379 = -1;
	uint8_t x380 = 38U;
	int32_t t93 = -2;

	t93 = (x377<(x378&(x379%x380)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x381 = -1;
	int32_t x382 = INT32_MAX;
	int16_t x383 = INT16_MIN;
	uint32_t x384 = UINT32_MAX;
	int32_t t94 = -1000;

	t94 = (x381<(x382&(x383%x384)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x386 = -1;
	uint64_t x387 = 21LLU;
	int8_t x388 = 1;
	int32_t t95 = -1;

	t95 = (x385<(x386&(x387%x388)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x389 = 1188U;
	int16_t x390 = -1;
	static int32_t x391 = -1;
	static volatile int32_t x392 = 2;
	volatile int32_t t96 = -3;

	t96 = (x389<(x390&(x391%x392)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x393 = INT32_MAX;
	uint32_t x394 = UINT32_MAX;
	static int8_t x395 = INT8_MIN;
	int32_t x396 = INT32_MAX;
	volatile int32_t t97 = 127125;

	t97 = (x393<(x394&(x395%x396)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x397 = INT8_MAX;
	int8_t x398 = -1;
	volatile int16_t x399 = 3667;
	int64_t x400 = -1LL;
	volatile int32_t t98 = -7020547;

	t98 = (x397<(x398&(x399%x400)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x401 = -1LL;
	int64_t x402 = -1LL;
	uint8_t x403 = UINT8_MAX;
	int8_t x404 = -21;
	int32_t t99 = 18600682;

	t99 = (x401<(x402&(x403%x404)));

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

