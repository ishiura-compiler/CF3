#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x8 = INT8_MIN;
int32_t t2 = 0;
int32_t x14 = 389817191;
static int64_t x20 = INT64_MIN;
volatile int32_t t5 = 1;
int8_t x26 = INT8_MAX;
static uint64_t x27 = 2263LLU;
int16_t x29 = INT16_MIN;
uint32_t x34 = UINT32_MAX;
uint8_t x39 = 61U;
uint32_t x40 = UINT32_MAX;
int8_t x44 = INT8_MIN;
static uint32_t x47 = 478267082U;
uint64_t x51 = 52LLU;
uint64_t x55 = UINT64_MAX;
int8_t x57 = INT8_MIN;
uint64_t x59 = 34104458593102463LLU;
int32_t t14 = 23;
uint8_t x62 = UINT8_MAX;
static int8_t x66 = 2;
static int32_t x75 = -1;
int16_t x82 = 76;
static uint64_t x91 = UINT64_MAX;
static int8_t x95 = INT8_MAX;
volatile uint64_t x97 = 540040470632746780LLU;
int16_t x99 = 111;
static int64_t x103 = INT64_MIN;
volatile int16_t x105 = INT16_MIN;
int32_t t26 = -907;
int32_t x109 = INT32_MIN;
static volatile int32_t t27 = 11;
int16_t x116 = -1506;
int32_t x118 = INT32_MIN;
int32_t x122 = INT32_MIN;
static uint16_t x124 = 28425U;
static volatile int8_t x133 = -12;
uint8_t x136 = 29U;
uint16_t x142 = 0U;
int8_t x148 = -1;
int32_t t36 = 0;
int8_t x149 = INT8_MIN;
uint64_t x150 = 4441546201874133LLU;
int16_t x154 = 66;
int64_t x158 = INT64_MAX;
volatile int64_t x161 = -1LL;
int32_t x180 = INT32_MIN;
int8_t x182 = INT8_MIN;
int16_t x191 = 3027;
int16_t x200 = -1;
int64_t x205 = -1LL;
int64_t x207 = INT64_MIN;
static uint32_t x208 = UINT32_MAX;
static volatile int8_t x213 = INT8_MIN;
uint16_t x221 = 12607U;
static volatile int32_t t56 = -2;
uint8_t x243 = 1U;
static int32_t t60 = -127923;
volatile uint8_t x248 = UINT8_MAX;
volatile int32_t t62 = 767578992;
volatile int64_t x254 = INT64_MIN;
static int32_t x260 = -1;
int64_t x261 = INT64_MIN;
int8_t x263 = INT8_MIN;
static int64_t x265 = INT64_MIN;
int32_t x275 = INT32_MIN;
int16_t x277 = INT16_MIN;
uint32_t x279 = UINT32_MAX;
int32_t t69 = 145124;
uint8_t x285 = 46U;
volatile int32_t t71 = 1667703;
static int32_t t73 = -4901;
int64_t x304 = -1LL;
static volatile int32_t t75 = -7;
uint8_t x308 = UINT8_MAX;
volatile int32_t t76 = 0;
int8_t x313 = -1;
volatile int32_t t81 = -11488;
int16_t x339 = INT16_MAX;
volatile int32_t t84 = -1;
int8_t x342 = INT8_MIN;
int64_t x348 = -26634514LL;
static int16_t x353 = -1;
volatile int32_t x354 = -1;
static int16_t x358 = INT16_MAX;
int64_t x376 = 42277230916707836LL;
volatile int8_t x391 = -5;
int64_t x393 = INT64_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile int8_t x2 = 0;
	int8_t x3 = -25;
	uint64_t x4 = UINT64_MAX;
	int32_t t0 = 161;

	t0 = (x1<=(x2^(x3|x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	static int16_t x6 = 0;
	int64_t x7 = 503899094259LL;
	volatile int32_t t1 = -1938951;

	t1 = (x5<=(x6^(x7|x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -88;
	int8_t x10 = 1;
	uint64_t x11 = UINT64_MAX;
	int8_t x12 = -1;

	t2 = (x9<=(x10^(x11|x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	uint8_t x15 = 1U;
	static int8_t x16 = INT8_MIN;
	int32_t t3 = 256525529;

	t3 = (x13<=(x14^(x15|x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = UINT32_MAX;
	uint16_t x18 = 8941U;
	volatile int32_t x19 = 240;
	volatile int32_t t4 = 11858;

	t4 = (x17<=(x18^(x19|x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 1044LLU;
	static uint32_t x22 = 525360496U;
	uint16_t x23 = 165U;
	uint16_t x24 = UINT16_MAX;

	t5 = (x21<=(x22^(x23|x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	static int16_t x28 = -1;
	int32_t t6 = -8;

	t6 = (x25<=(x26^(x27|x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x30 = 76607039742398LL;
	int32_t x31 = INT32_MAX;
	int64_t x32 = 104469LL;
	int32_t t7 = 55331;

	t7 = (x29<=(x30^(x31|x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	static int32_t x35 = INT32_MIN;
	int32_t x36 = INT32_MIN;
	static volatile int32_t t8 = 0;

	t8 = (x33<=(x34^(x35|x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 20721063215LLU;
	uint32_t x38 = 872496449U;
	volatile int32_t t9 = 24;

	t9 = (x37<=(x38^(x39|x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x41 = INT32_MIN;
	int8_t x42 = 0;
	int32_t x43 = INT32_MIN;
	int32_t t10 = -324626;

	t10 = (x41<=(x42^(x43|x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -23126849LL;
	int64_t x46 = INT64_MIN;
	int64_t x48 = -1LL;
	volatile int32_t t11 = 3224273;

	t11 = (x45<=(x46^(x47|x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 212382267848859568LLU;
	int64_t x50 = INT64_MAX;
	uint32_t x52 = 14587559U;
	volatile int32_t t12 = -433;

	t12 = (x49<=(x50^(x51|x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = 776LL;
	uint64_t x54 = 75339723637LLU;
	static int16_t x56 = 3;
	volatile int32_t t13 = -52418920;

	t13 = (x53<=(x54^(x55|x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MAX;
	volatile int64_t x60 = INT64_MIN;

	t14 = (x57<=(x58^(x59|x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	int32_t x63 = -1;
	uint8_t x64 = 20U;
	static int32_t t15 = 3544290;

	t15 = (x61<=(x62^(x63|x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int16_t x67 = INT16_MIN;
	uint64_t x68 = UINT64_MAX;
	int32_t t16 = -40290801;

	t16 = (x65<=(x66^(x67|x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = -1;
	int16_t x70 = INT16_MIN;
	volatile int64_t x71 = 33873562702LL;
	uint32_t x72 = 2351U;
	volatile int32_t t17 = -274903;

	t17 = (x69<=(x70^(x71|x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x73 = 399U;
	uint8_t x74 = 31U;
	static volatile int8_t x76 = 1;
	int32_t t18 = 6;

	t18 = (x73<=(x74^(x75|x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MAX;
	uint8_t x78 = 13U;
	int32_t x79 = -1;
	volatile int32_t x80 = -12662506;
	int32_t t19 = -1686240;

	t19 = (x77<=(x78^(x79|x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 137U;
	uint64_t x83 = 107355LLU;
	volatile int16_t x84 = INT16_MAX;
	volatile int32_t t20 = 463;

	t20 = (x81<=(x82^(x83|x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	volatile int64_t x86 = INT64_MAX;
	volatile int8_t x87 = INT8_MIN;
	uint64_t x88 = 11575538LLU;
	volatile int32_t t21 = -109639544;

	t21 = (x85<=(x86^(x87|x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -1LL;
	volatile int64_t x90 = INT64_MAX;
	volatile uint32_t x92 = UINT32_MAX;
	volatile int32_t t22 = -7421;

	t22 = (x89<=(x90^(x91|x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = INT16_MAX;
	uint32_t x94 = UINT32_MAX;
	int8_t x96 = INT8_MIN;
	int32_t t23 = -5413;

	t23 = (x93<=(x94^(x95|x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = 3;
	int32_t x100 = INT32_MIN;
	static volatile int32_t t24 = -632697;

	t24 = (x97<=(x98^(x99|x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = INT8_MAX;
	static volatile int64_t x102 = INT64_MIN;
	uint64_t x104 = UINT64_MAX;
	volatile int32_t t25 = -1586;

	t25 = (x101<=(x102^(x103|x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x106 = INT16_MIN;
	int32_t x107 = INT32_MIN;
	uint64_t x108 = 35780326606LLU;

	t26 = (x105<=(x106^(x107|x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x110 = 1U;
	static uint64_t x111 = 3LLU;
	int64_t x112 = -117464026LL;

	t27 = (x109<=(x110^(x111|x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	int32_t x114 = INT32_MAX;
	static int8_t x115 = -6;
	volatile int32_t t28 = 1517829;

	t28 = (x113<=(x114^(x115|x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MAX;
	static int64_t x119 = -1LL;
	uint16_t x120 = UINT16_MAX;
	int32_t t29 = 212;

	t29 = (x117<=(x118^(x119|x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int16_t x123 = INT16_MAX;
	volatile int32_t t30 = -10;

	t30 = (x121<=(x122^(x123|x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	uint8_t x126 = 7U;
	int64_t x127 = INT64_MAX;
	int64_t x128 = INT64_MIN;
	int32_t t31 = -3125;

	t31 = (x125<=(x126^(x127|x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = UINT32_MAX;
	int16_t x130 = INT16_MAX;
	uint16_t x131 = 10U;
	int32_t x132 = INT32_MIN;
	int32_t t32 = 376;

	t32 = (x129<=(x130^(x131|x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x134 = UINT64_MAX;
	int64_t x135 = INT64_MIN;
	static volatile int32_t t33 = 1816480;

	t33 = (x133<=(x134^(x135|x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x137 = 156U;
	static volatile int16_t x138 = 409;
	uint64_t x139 = 306LLU;
	int64_t x140 = INT64_MIN;
	volatile int32_t t34 = -91;

	t34 = (x137<=(x138^(x139|x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	int64_t x143 = -10801959942LL;
	static uint32_t x144 = 48083687U;
	volatile int32_t t35 = 15;

	t35 = (x141<=(x142^(x143|x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = INT64_MAX;
	volatile int64_t x146 = -15698960653LL;
	int32_t x147 = 9039490;

	t36 = (x145<=(x146^(x147|x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x151 = 5;
	volatile int16_t x152 = INT16_MIN;
	int32_t t37 = 12423;

	t37 = (x149<=(x150^(x151|x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = INT16_MIN;
	int64_t x155 = INT64_MIN;
	int16_t x156 = 2657;
	int32_t t38 = 560360;

	t38 = (x153<=(x154^(x155|x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 0U;
	int8_t x159 = INT8_MIN;
	int8_t x160 = INT8_MIN;
	static volatile int32_t t39 = -168;

	t39 = (x157<=(x158^(x159|x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x162 = UINT8_MAX;
	int32_t x163 = INT32_MIN;
	int16_t x164 = -1;
	volatile int32_t t40 = -981291;

	t40 = (x161<=(x162^(x163|x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = -1;
	int8_t x166 = -1;
	int16_t x167 = INT16_MIN;
	volatile uint8_t x168 = 2U;
	int32_t t41 = 1077;

	t41 = (x165<=(x166^(x167|x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int8_t x170 = 5;
	static uint32_t x171 = 1358147U;
	static int8_t x172 = INT8_MAX;
	static int32_t t42 = -260073267;

	t42 = (x169<=(x170^(x171|x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = 51U;
	volatile uint16_t x174 = 5257U;
	int8_t x175 = -1;
	static volatile int8_t x176 = INT8_MIN;
	int32_t t43 = -113471175;

	t43 = (x173<=(x174^(x175|x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = 66296;
	static uint32_t x178 = 32791U;
	int16_t x179 = INT16_MIN;
	int32_t t44 = -521;

	t44 = (x177<=(x178^(x179|x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 2U;
	int32_t x183 = 72464;
	int64_t x184 = INT64_MIN;
	volatile int32_t t45 = -421;

	t45 = (x181<=(x182^(x183|x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x185 = 1325U;
	int64_t x186 = -1LL;
	volatile uint32_t x187 = 1U;
	int32_t x188 = -62563845;
	volatile int32_t t46 = -105311;

	t46 = (x185<=(x186^(x187|x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	uint64_t x190 = 991859185800LLU;
	static uint16_t x192 = 1U;
	static int32_t t47 = 3672961;

	t47 = (x189<=(x190^(x191|x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x193 = INT8_MIN;
	int64_t x194 = -674784LL;
	static uint64_t x195 = 9548445664733511LLU;
	uint16_t x196 = 15U;
	int32_t t48 = 143;

	t48 = (x193<=(x194^(x195|x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = INT64_MIN;
	static int32_t x198 = INT32_MAX;
	static uint32_t x199 = UINT32_MAX;
	volatile int32_t t49 = 86224799;

	t49 = (x197<=(x198^(x199|x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MAX;
	int16_t x202 = INT16_MIN;
	static volatile int8_t x203 = INT8_MAX;
	int16_t x204 = 951;
	static int32_t t50 = -607733059;

	t50 = (x201<=(x202^(x203|x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x206 = INT64_MAX;
	volatile int32_t t51 = -63;

	t51 = (x205<=(x206^(x207|x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	static int32_t x210 = -1;
	volatile int8_t x211 = INT8_MIN;
	uint32_t x212 = 11621U;
	static int32_t t52 = -3412;

	t52 = (x209<=(x210^(x211|x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x214 = 2;
	volatile int8_t x215 = -1;
	int64_t x216 = INT64_MIN;
	int32_t t53 = -3447;

	t53 = (x213<=(x214^(x215|x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x217 = INT64_MIN;
	uint16_t x218 = UINT16_MAX;
	volatile int8_t x219 = -1;
	static volatile int64_t x220 = -21LL;
	int32_t t54 = -1;

	t54 = (x217<=(x218^(x219|x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = 18101;
	uint32_t x223 = 101295569U;
	int8_t x224 = 2;
	volatile int32_t t55 = -131;

	t55 = (x221<=(x222^(x223|x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x225 = 38503U;
	static int32_t x226 = 208623096;
	int32_t x227 = 1;
	static int8_t x228 = INT8_MIN;

	t56 = (x225<=(x226^(x227|x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	static int16_t x230 = 4;
	int8_t x231 = 13;
	static uint8_t x232 = UINT8_MAX;
	int32_t t57 = -374151290;

	t57 = (x229<=(x230^(x231|x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	uint8_t x234 = 42U;
	volatile uint64_t x235 = 8818346163442LLU;
	uint16_t x236 = 27178U;
	static int32_t t58 = 111;

	t58 = (x233<=(x234^(x235|x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int32_t x238 = 0;
	volatile int64_t x239 = -1LL;
	int64_t x240 = -1LL;
	static volatile int32_t t59 = 9;

	t59 = (x237<=(x238^(x239|x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = UINT32_MAX;
	static int16_t x242 = INT16_MIN;
	int32_t x244 = -1;

	t60 = (x241<=(x242^(x243|x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -1LL;
	static uint32_t x246 = UINT32_MAX;
	int8_t x247 = INT8_MIN;
	static volatile int32_t t61 = -655;

	t61 = (x245<=(x246^(x247|x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = UINT64_MAX;
	int32_t x250 = -1;
	int32_t x251 = INT32_MIN;
	int32_t x252 = -1;

	t62 = (x249<=(x250^(x251|x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 1U;
	uint16_t x255 = 82U;
	static int8_t x256 = INT8_MIN;
	int32_t t63 = -8828973;

	t63 = (x253<=(x254^(x255|x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = UINT8_MAX;
	uint8_t x258 = 59U;
	volatile int32_t x259 = INT32_MIN;
	static volatile int32_t t64 = -1;

	t64 = (x257<=(x258^(x259|x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x262 = 24U;
	volatile int32_t x264 = -1;
	static int32_t t65 = 29061;

	t65 = (x261<=(x262^(x263|x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x266 = -190540LL;
	volatile int32_t x267 = 47575;
	uint8_t x268 = 47U;
	static int32_t t66 = 0;

	t66 = (x265<=(x266^(x267|x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -24918762827077500LL;
	uint64_t x270 = 5555321862284024LLU;
	uint32_t x271 = 7U;
	volatile int8_t x272 = 14;
	volatile int32_t t67 = 438;

	t67 = (x269<=(x270^(x271|x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	static volatile int16_t x274 = -58;
	int16_t x276 = 595;
	volatile int32_t t68 = -983682;

	t68 = (x273<=(x274^(x275|x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x278 = -1002;
	static int64_t x280 = -91LL;

	t69 = (x277<=(x278^(x279|x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x281 = 43U;
	int64_t x282 = INT64_MIN;
	volatile uint32_t x283 = UINT32_MAX;
	uint64_t x284 = 18020961071316076LLU;
	volatile int32_t t70 = 40622;

	t70 = (x281<=(x282^(x283|x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x286 = -1;
	int32_t x287 = INT32_MIN;
	int32_t x288 = -1;

	t71 = (x285<=(x286^(x287|x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x289 = INT8_MIN;
	int64_t x290 = 725LL;
	uint64_t x291 = UINT64_MAX;
	static int64_t x292 = -1LL;
	volatile int32_t t72 = 10200;

	t72 = (x289<=(x290^(x291|x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	volatile uint64_t x294 = 106LLU;
	uint64_t x295 = 1LLU;
	int8_t x296 = INT8_MIN;

	t73 = (x293<=(x294^(x295|x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	uint64_t x298 = 47852817LLU;
	uint64_t x299 = 2656947188247047109LLU;
	uint64_t x300 = 127LLU;
	volatile int32_t t74 = 1858;

	t74 = (x297<=(x298^(x299|x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = INT8_MIN;
	int64_t x302 = -344LL;
	int8_t x303 = INT8_MIN;

	t75 = (x301<=(x302^(x303|x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 3U;
	uint32_t x306 = UINT32_MAX;
	uint16_t x307 = 142U;

	t76 = (x305<=(x306^(x307|x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x309 = UINT32_MAX;
	int16_t x310 = INT16_MIN;
	volatile int32_t x311 = -1;
	int32_t x312 = -1;
	int32_t t77 = -6;

	t77 = (x309<=(x310^(x311|x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x314 = UINT64_MAX;
	volatile int64_t x315 = 17572380232633113LL;
	volatile int64_t x316 = INT64_MIN;
	volatile int32_t t78 = -3750;

	t78 = (x313<=(x314^(x315|x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = 0;
	int32_t x318 = INT32_MIN;
	uint16_t x319 = 7U;
	int16_t x320 = INT16_MIN;
	volatile int32_t t79 = 63755;

	t79 = (x317<=(x318^(x319|x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x321 = UINT32_MAX;
	volatile int16_t x322 = INT16_MAX;
	int16_t x323 = -25;
	volatile uint32_t x324 = 748279U;
	int32_t t80 = -185625495;

	t80 = (x321<=(x322^(x323|x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x325 = INT32_MAX;
	uint16_t x326 = 3308U;
	int64_t x327 = 115LL;
	int32_t x328 = -1965;

	t81 = (x325<=(x326^(x327|x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -95971774LL;
	int64_t x330 = INT64_MIN;
	int8_t x331 = -8;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t82 = 369010690;

	t82 = (x329<=(x330^(x331|x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 92U;
	volatile int64_t x334 = INT64_MIN;
	volatile int16_t x335 = -89;
	uint16_t x336 = UINT16_MAX;
	int32_t t83 = -58814934;

	t83 = (x333<=(x334^(x335|x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = 5996166913LL;
	int32_t x338 = INT32_MIN;
	uint8_t x340 = UINT8_MAX;

	t84 = (x337<=(x338^(x339|x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	int8_t x343 = INT8_MIN;
	int32_t x344 = -158;
	volatile int32_t t85 = 117;

	t85 = (x341<=(x342^(x343|x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	int16_t x346 = 66;
	int32_t x347 = -103993;
	int32_t t86 = -189233;

	t86 = (x345<=(x346^(x347|x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = UINT32_MAX;
	int8_t x350 = -1;
	static uint32_t x351 = UINT32_MAX;
	static int8_t x352 = INT8_MAX;
	static volatile int32_t t87 = 1025991;

	t87 = (x349<=(x350^(x351|x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x355 = INT16_MAX;
	static uint32_t x356 = UINT32_MAX;
	int32_t t88 = -115035;

	t88 = (x353<=(x354^(x355|x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 55U;
	volatile uint32_t x359 = UINT32_MAX;
	int16_t x360 = INT16_MIN;
	int32_t t89 = -692830;

	t89 = (x357<=(x358^(x359|x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	static int64_t x362 = INT64_MAX;
	volatile int16_t x363 = INT16_MIN;
	int8_t x364 = -1;
	int32_t t90 = -49;

	t90 = (x361<=(x362^(x363|x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = -1;
	uint64_t x366 = 45579675983926273LLU;
	int64_t x367 = -1009755805LL;
	int8_t x368 = -11;
	volatile int32_t t91 = -20;

	t91 = (x365<=(x366^(x367|x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -722;
	static int64_t x370 = -1LL;
	volatile uint16_t x371 = 1653U;
	int32_t x372 = INT32_MAX;
	volatile int32_t t92 = -186187;

	t92 = (x369<=(x370^(x371|x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -3;
	uint64_t x374 = 6496074456LLU;
	static uint32_t x375 = 24740575U;
	static volatile int32_t t93 = -5106;

	t93 = (x373<=(x374^(x375|x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MAX;
	int32_t x378 = INT32_MIN;
	volatile int32_t x379 = INT32_MIN;
	int64_t x380 = 718667402LL;
	volatile int32_t t94 = -991;

	t94 = (x377<=(x378^(x379|x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	static volatile uint16_t x382 = UINT16_MAX;
	static int16_t x383 = 14734;
	volatile uint32_t x384 = UINT32_MAX;
	int32_t t95 = -2725646;

	t95 = (x381<=(x382^(x383|x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 300202LLU;
	int16_t x386 = 6;
	uint8_t x387 = 94U;
	int32_t x388 = -1;
	volatile int32_t t96 = 35559390;

	t96 = (x385<=(x386^(x387|x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = UINT64_MAX;
	int8_t x390 = 11;
	uint32_t x392 = 30316U;
	volatile int32_t t97 = -25316;

	t97 = (x389<=(x390^(x391|x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x394 = 31U;
	int16_t x395 = -15997;
	int32_t x396 = INT32_MIN;
	int32_t t98 = 193;

	t98 = (x393<=(x394^(x395|x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 11U;
	volatile int64_t x398 = INT64_MIN;
	int8_t x399 = -22;
	int8_t x400 = INT8_MIN;
	static volatile int32_t t99 = 2;

	t99 = (x397<=(x398^(x399|x400)));

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

