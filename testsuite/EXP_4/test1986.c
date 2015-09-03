#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x7 = 29U;
static int32_t t1 = 109683;
static int8_t x9 = INT8_MAX;
static uint64_t x12 = UINT64_MAX;
int32_t x15 = INT32_MIN;
int32_t t3 = -120;
uint64_t x18 = 1LLU;
int8_t x20 = INT8_MAX;
volatile int32_t t6 = 355249;
volatile int8_t x31 = -15;
uint32_t x34 = UINT32_MAX;
int64_t x36 = -1LL;
volatile int32_t t8 = -167283926;
uint16_t x39 = UINT16_MAX;
uint16_t x41 = 712U;
volatile uint32_t x47 = 60959496U;
int8_t x48 = -1;
int64_t x50 = -169129021549575LL;
int16_t x51 = INT16_MAX;
volatile uint32_t x53 = 12U;
volatile int32_t x54 = -1;
int32_t t13 = 127091;
uint16_t x58 = UINT16_MAX;
static int16_t x60 = INT16_MAX;
static volatile int32_t t14 = 52;
uint16_t x62 = 31U;
int32_t t16 = 213267;
volatile int64_t x71 = INT64_MAX;
int16_t x72 = INT16_MIN;
volatile int32_t t17 = -417;
static uint32_t x75 = UINT32_MAX;
volatile int32_t t18 = -990978354;
uint8_t x83 = UINT8_MAX;
int8_t x84 = 17;
static int32_t x85 = 26061;
static int64_t x90 = -1LL;
volatile int64_t x98 = 0LL;
int32_t t26 = -7027;
static int64_t x109 = INT64_MAX;
int64_t x110 = INT64_MIN;
int16_t x117 = INT16_MAX;
uint64_t x118 = 4842LLU;
int8_t x121 = INT8_MAX;
static int16_t x135 = INT16_MIN;
int64_t x136 = INT64_MAX;
volatile int64_t x138 = INT64_MAX;
uint64_t x140 = UINT64_MAX;
int16_t x145 = -1;
static uint16_t x146 = 427U;
int32_t x149 = -1;
int64_t x150 = INT64_MAX;
uint64_t x157 = 11233090LLU;
volatile int32_t x159 = 3896285;
static volatile int32_t t39 = 13810;
int8_t x162 = 2;
uint16_t x166 = 7528U;
volatile uint64_t x168 = UINT64_MAX;
int8_t x169 = -1;
static int8_t x170 = INT8_MIN;
static int32_t x171 = -503948;
int16_t x172 = INT16_MAX;
int16_t x174 = INT16_MAX;
int16_t x182 = -1;
static int32_t x186 = INT32_MIN;
int32_t x192 = INT32_MAX;
int16_t x195 = -32;
uint8_t x198 = UINT8_MAX;
volatile int32_t x205 = -1;
uint16_t x206 = 0U;
static volatile int32_t t51 = -1;
static volatile int32_t t53 = 12415628;
uint16_t x224 = 1022U;
int32_t t55 = 149488502;
static uint8_t x227 = 9U;
static int32_t x232 = INT32_MIN;
int32_t t57 = 250596645;
static int8_t x234 = 1;
volatile int32_t t61 = 1;
volatile int32_t t62 = -646933;
volatile uint64_t x255 = UINT64_MAX;
int32_t x262 = 945;
uint64_t x263 = 194677872692LLU;
int8_t x268 = INT8_MIN;
volatile int32_t t66 = -7;
int8_t x271 = 1;
static int64_t x273 = INT64_MIN;
int32_t x276 = INT32_MAX;
volatile int32_t t69 = -7348660;
volatile int32_t t70 = 440;
volatile int32_t t71 = 2;
int64_t x289 = 1051538068LL;
volatile int32_t x290 = INT32_MAX;
int32_t t72 = -1305173;
static int32_t x294 = INT32_MAX;
uint64_t x296 = UINT64_MAX;
static int64_t x298 = -1LL;
int16_t x302 = 429;
int64_t x313 = -1LL;
static int64_t x316 = INT64_MIN;
uint8_t x321 = UINT8_MAX;
int64_t x326 = INT64_MIN;
uint64_t x328 = 5766132LLU;
volatile int32_t t82 = -433;
volatile int8_t x334 = INT8_MIN;
volatile int32_t t83 = 2429;
int32_t x340 = INT32_MIN;
uint16_t x342 = 1989U;
int32_t t85 = 3348;
static uint32_t x347 = 7095449U;
uint8_t x348 = 8U;
static int16_t x352 = INT16_MAX;
int8_t x357 = 9;
volatile int16_t x366 = 42;
volatile uint16_t x368 = 5U;
uint32_t x370 = UINT32_MAX;
volatile uint32_t x371 = 62667541U;
int16_t x375 = -709;
int32_t t93 = -88590230;
uint16_t x382 = UINT16_MAX;
static volatile int16_t x384 = INT16_MIN;
uint64_t x395 = 8525016928LLU;
static volatile uint16_t x396 = 0U;
int16_t x400 = INT16_MIN;


void f0(void) {
	int64_t x1 = -3383LL;
	volatile uint8_t x2 = UINT8_MAX;
	volatile uint64_t x3 = UINT64_MAX;
	volatile int8_t x4 = INT8_MIN;
	int32_t t0 = 102;

	t0 = (x1<=(x2<=(x3|x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 2371162924721500LL;
	static int32_t x6 = INT32_MIN;
	uint16_t x8 = UINT16_MAX;

	t1 = (x5<=(x6<=(x7|x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MAX;
	volatile uint32_t x11 = UINT32_MAX;
	volatile int32_t t2 = -1261043;

	t2 = (x9<=(x10<=(x11|x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 6368175;
	int32_t x14 = 10949;
	int64_t x16 = INT64_MIN;

	t3 = (x13<=(x14<=(x15|x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int64_t x19 = 531497049556073LL;
	int32_t t4 = 1043927;

	t4 = (x17<=(x18<=(x19|x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	volatile int16_t x22 = -12287;
	int8_t x23 = -5;
	volatile int64_t x24 = INT64_MIN;
	volatile int32_t t5 = -5;

	t5 = (x21<=(x22<=(x23|x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 3;
	uint64_t x26 = 5296903949441125LLU;
	static int16_t x27 = INT16_MIN;
	int16_t x28 = -115;

	t6 = (x25<=(x26<=(x27|x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	int64_t x30 = INT64_MIN;
	int32_t x32 = INT32_MIN;
	int32_t t7 = -2094;

	t7 = (x29<=(x30<=(x31|x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 6;
	static uint64_t x35 = UINT64_MAX;

	t8 = (x33<=(x34<=(x35|x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int8_t x38 = INT8_MIN;
	int32_t x40 = INT32_MIN;
	int32_t t9 = 9277;

	t9 = (x37<=(x38<=(x39|x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x42 = INT32_MAX;
	int32_t x43 = INT32_MAX;
	int16_t x44 = INT16_MIN;
	volatile int32_t t10 = 4;

	t10 = (x41<=(x42<=(x43|x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -182402;
	int64_t x46 = INT64_MIN;
	static int32_t t11 = 342;

	t11 = (x45<=(x46<=(x47|x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = -1;
	volatile int32_t x52 = -1;
	volatile int32_t t12 = -3;

	t12 = (x49<=(x50<=(x51|x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x55 = -10;
	uint32_t x56 = UINT32_MAX;

	t13 = (x53<=(x54<=(x55|x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -28322142312887LL;
	volatile int16_t x59 = -76;

	t14 = (x57<=(x58<=(x59|x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 20;
	int64_t x63 = INT64_MIN;
	static int8_t x64 = 0;
	static int32_t t15 = 1;

	t15 = (x61<=(x62<=(x63|x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = UINT32_MAX;
	uint8_t x66 = UINT8_MAX;
	static int8_t x67 = INT8_MIN;
	volatile uint16_t x68 = 0U;

	t16 = (x65<=(x66<=(x67|x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = 7LL;
	int16_t x70 = INT16_MIN;

	t17 = (x69<=(x70<=(x71|x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = INT64_MIN;
	uint8_t x74 = UINT8_MAX;
	volatile int32_t x76 = INT32_MIN;

	t18 = (x73<=(x74<=(x75|x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MAX;
	int8_t x78 = INT8_MIN;
	int32_t x79 = -1;
	int32_t x80 = 1;
	static int32_t t19 = -4351;

	t19 = (x77<=(x78<=(x79|x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -18071002LL;
	uint64_t x82 = UINT64_MAX;
	int32_t t20 = 139726275;

	t20 = (x81<=(x82<=(x83|x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = -15;
	int32_t x87 = 4997;
	uint32_t x88 = UINT32_MAX;
	int32_t t21 = 157541237;

	t21 = (x85<=(x86<=(x87|x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	static int32_t x91 = 31;
	volatile int16_t x92 = -195;
	int32_t t22 = 5908551;

	t22 = (x89<=(x90<=(x91|x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 5026LLU;
	int16_t x94 = INT16_MAX;
	static int16_t x95 = -3;
	uint64_t x96 = 1415736910084LLU;
	int32_t t23 = 18371;

	t23 = (x93<=(x94<=(x95|x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 446;
	uint32_t x99 = 42U;
	int8_t x100 = -1;
	int32_t t24 = -104530015;

	t24 = (x97<=(x98<=(x99|x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	volatile int32_t x102 = INT32_MIN;
	int16_t x103 = -28;
	int32_t x104 = INT32_MIN;
	volatile int32_t t25 = 0;

	t25 = (x101<=(x102<=(x103|x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 1;
	volatile uint8_t x106 = UINT8_MAX;
	volatile int32_t x107 = 55076;
	uint16_t x108 = UINT16_MAX;

	t26 = (x105<=(x106<=(x107|x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x111 = UINT16_MAX;
	int64_t x112 = INT64_MAX;
	int32_t t27 = -43;

	t27 = (x109<=(x110<=(x111|x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 15U;
	int32_t x114 = INT32_MIN;
	static uint16_t x115 = UINT16_MAX;
	volatile int32_t x116 = INT32_MIN;
	int32_t t28 = 19618;

	t28 = (x113<=(x114<=(x115|x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x119 = -1;
	int32_t x120 = INT32_MAX;
	static int32_t t29 = 893;

	t29 = (x117<=(x118<=(x119|x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x122 = 44348088069101LL;
	volatile int64_t x123 = 1941LL;
	static uint32_t x124 = 332501589U;
	static volatile int32_t t30 = -3078;

	t30 = (x121<=(x122<=(x123|x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x125 = 1U;
	int32_t x126 = INT32_MIN;
	int64_t x127 = INT64_MAX;
	int64_t x128 = INT64_MAX;
	static int32_t t31 = 66498283;

	t31 = (x125<=(x126<=(x127|x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x129 = 99U;
	volatile int32_t x130 = -1;
	int64_t x131 = 101LL;
	int32_t x132 = 1986;
	int32_t t32 = -2021253;

	t32 = (x129<=(x130<=(x131|x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = -1;
	static int16_t x134 = INT16_MAX;
	static int32_t t33 = 3959;

	t33 = (x133<=(x134<=(x135|x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MAX;
	uint16_t x139 = 5771U;
	int32_t t34 = -18918511;

	t34 = (x137<=(x138<=(x139|x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	int8_t x142 = -1;
	volatile int16_t x143 = -1;
	int64_t x144 = INT64_MIN;
	int32_t t35 = 33383467;

	t35 = (x141<=(x142<=(x143|x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x147 = -344;
	int32_t x148 = -64;
	volatile int32_t t36 = -2;

	t36 = (x145<=(x146<=(x147|x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x151 = UINT16_MAX;
	uint32_t x152 = 106U;
	int32_t t37 = 0;

	t37 = (x149<=(x150<=(x151|x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = -21LL;
	volatile int16_t x154 = -1;
	volatile int16_t x155 = -1;
	static volatile int32_t x156 = INT32_MIN;
	int32_t t38 = -1;

	t38 = (x153<=(x154<=(x155|x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x158 = -1LL;
	int8_t x160 = -1;

	t39 = (x157<=(x158<=(x159|x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = INT8_MIN;
	uint8_t x163 = 123U;
	int32_t x164 = 666;
	volatile int32_t t40 = -178515882;

	t40 = (x161<=(x162<=(x163|x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x165 = 68U;
	int8_t x167 = -7;
	volatile int32_t t41 = 1462175;

	t41 = (x165<=(x166<=(x167|x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t t42 = 16;

	t42 = (x169<=(x170<=(x171|x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 3U;
	static uint64_t x175 = 10LLU;
	int32_t x176 = -1;
	volatile int32_t t43 = -99374719;

	t43 = (x173<=(x174<=(x175|x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 6U;
	uint64_t x178 = UINT64_MAX;
	int16_t x179 = 2917;
	volatile int8_t x180 = 1;
	volatile int32_t t44 = 1713989;

	t44 = (x177<=(x178<=(x179|x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	int64_t x183 = -1LL;
	int8_t x184 = -1;
	int32_t t45 = -247;

	t45 = (x181<=(x182<=(x183|x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 279973903765LLU;
	static int8_t x187 = -1;
	int64_t x188 = INT64_MAX;
	static volatile int32_t t46 = -49338499;

	t46 = (x185<=(x186<=(x187|x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x189 = UINT8_MAX;
	static uint64_t x190 = UINT64_MAX;
	int32_t x191 = INT32_MIN;
	int32_t t47 = 53;

	t47 = (x189<=(x190<=(x191|x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = INT16_MAX;
	static int8_t x194 = -3;
	int64_t x196 = 734955LL;
	static int32_t t48 = -1010854;

	t48 = (x193<=(x194<=(x195|x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MAX;
	int32_t x199 = INT32_MAX;
	volatile uint16_t x200 = UINT16_MAX;
	volatile int32_t t49 = 59942576;

	t49 = (x197<=(x198<=(x199|x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	volatile uint32_t x202 = UINT32_MAX;
	uint16_t x203 = 546U;
	int32_t x204 = -74176734;
	int32_t t50 = 1;

	t50 = (x201<=(x202<=(x203|x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x207 = INT16_MIN;
	int32_t x208 = -132910173;

	t51 = (x205<=(x206<=(x207|x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -3268LL;
	static int64_t x210 = INT64_MIN;
	int32_t x211 = INT32_MIN;
	uint64_t x212 = 8311283377575001940LLU;
	static int32_t t52 = 382933;

	t52 = (x209<=(x210<=(x211|x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -1LL;
	int8_t x214 = INT8_MIN;
	int16_t x215 = -1;
	int64_t x216 = -1LL;

	t53 = (x213<=(x214<=(x215|x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -2791324760288085LL;
	uint16_t x218 = UINT16_MAX;
	int16_t x219 = 1;
	static volatile int32_t x220 = -19;
	int32_t t54 = 2068476;

	t54 = (x217<=(x218<=(x219|x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	static uint32_t x222 = UINT32_MAX;
	uint64_t x223 = 2233596248678488LLU;

	t55 = (x221<=(x222<=(x223|x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1LL;
	int16_t x226 = INT16_MIN;
	uint32_t x228 = 1712612U;
	volatile int32_t t56 = 11;

	t56 = (x225<=(x226<=(x227|x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -1;
	uint16_t x230 = 427U;
	int32_t x231 = INT32_MAX;

	t57 = (x229<=(x230<=(x231|x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = UINT8_MAX;
	int64_t x235 = INT64_MAX;
	static int8_t x236 = INT8_MAX;
	int32_t t58 = 153728060;

	t58 = (x233<=(x234<=(x235|x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MAX;
	static volatile int8_t x238 = INT8_MIN;
	static int16_t x239 = 1;
	volatile int16_t x240 = INT16_MIN;
	volatile int32_t t59 = 16442;

	t59 = (x237<=(x238<=(x239|x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	int8_t x242 = 24;
	int64_t x243 = 346627266316919LL;
	int64_t x244 = INT64_MAX;
	volatile int32_t t60 = -355;

	t60 = (x241<=(x242<=(x243|x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x245 = 40049811533049074LLU;
	int32_t x246 = -1;
	volatile int64_t x247 = 20404049841LL;
	static int8_t x248 = INT8_MAX;

	t61 = (x245<=(x246<=(x247|x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	uint16_t x250 = UINT16_MAX;
	int32_t x251 = -1;
	uint32_t x252 = 15243U;

	t62 = (x249<=(x250<=(x251|x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = INT64_MIN;
	static uint16_t x254 = UINT16_MAX;
	int32_t x256 = 8;
	static volatile int32_t t63 = -12836;

	t63 = (x253<=(x254<=(x255|x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = INT64_MAX;
	uint32_t x258 = 4056697U;
	uint64_t x259 = UINT64_MAX;
	static int64_t x260 = INT64_MIN;
	int32_t t64 = -13;

	t64 = (x257<=(x258<=(x259|x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -1LL;
	int16_t x264 = INT16_MIN;
	int32_t t65 = -114345;

	t65 = (x261<=(x262<=(x263|x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = INT32_MIN;
	int16_t x266 = -1;
	int32_t x267 = INT32_MIN;

	t66 = (x265<=(x266<=(x267|x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = INT64_MAX;
	int16_t x270 = -1;
	int64_t x272 = INT64_MIN;
	static volatile int32_t t67 = -1;

	t67 = (x269<=(x270<=(x271|x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x274 = INT16_MIN;
	static int32_t x275 = INT32_MIN;
	int32_t t68 = -910451;

	t68 = (x273<=(x274<=(x275|x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = INT64_MIN;
	int64_t x278 = INT64_MIN;
	static int16_t x279 = INT16_MAX;
	uint8_t x280 = 24U;

	t69 = (x277<=(x278<=(x279|x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x281 = UINT8_MAX;
	int32_t x282 = INT32_MIN;
	uint16_t x283 = UINT16_MAX;
	int64_t x284 = INT64_MIN;

	t70 = (x281<=(x282<=(x283|x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	int32_t x286 = -3445281;
	int8_t x287 = -1;
	static volatile int8_t x288 = -1;

	t71 = (x285<=(x286<=(x287|x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x291 = 146U;
	int8_t x292 = -3;

	t72 = (x289<=(x290<=(x291|x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	int64_t x295 = INT64_MIN;
	int32_t t73 = 3284;

	t73 = (x293<=(x294<=(x295|x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1;
	uint16_t x299 = 2U;
	int8_t x300 = -1;
	volatile int32_t t74 = -14211075;

	t74 = (x297<=(x298<=(x299|x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	uint32_t x303 = UINT32_MAX;
	uint16_t x304 = 9U;
	static int32_t t75 = 3898366;

	t75 = (x301<=(x302<=(x303|x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MAX;
	volatile int32_t x306 = INT32_MIN;
	volatile int32_t x307 = INT32_MIN;
	uint16_t x308 = UINT16_MAX;
	int32_t t76 = 179966660;

	t76 = (x305<=(x306<=(x307|x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	volatile uint8_t x310 = 1U;
	volatile int64_t x311 = 8279499163LL;
	static uint64_t x312 = 501072LLU;
	volatile int32_t t77 = -1644;

	t77 = (x309<=(x310<=(x311|x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x314 = INT16_MIN;
	int8_t x315 = INT8_MIN;
	volatile int32_t t78 = -69791707;

	t78 = (x313<=(x314<=(x315|x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	int16_t x318 = INT16_MIN;
	uint8_t x319 = 74U;
	int64_t x320 = -1LL;
	static volatile int32_t t79 = 522215;

	t79 = (x317<=(x318<=(x319|x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x322 = INT64_MIN;
	uint32_t x323 = UINT32_MAX;
	int8_t x324 = INT8_MIN;
	int32_t t80 = -57428041;

	t80 = (x321<=(x322<=(x323|x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	volatile uint8_t x327 = 1U;
	volatile int32_t t81 = -17;

	t81 = (x325<=(x326<=(x327|x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	uint32_t x330 = 208U;
	int32_t x331 = -1;
	static uint32_t x332 = 4362145U;

	t82 = (x329<=(x330<=(x331|x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	int8_t x335 = INT8_MIN;
	uint8_t x336 = 0U;

	t83 = (x333<=(x334<=(x335|x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 4460LLU;
	int16_t x338 = 0;
	uint16_t x339 = 5303U;
	volatile int32_t t84 = -2237;

	t84 = (x337<=(x338<=(x339|x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = 7;
	static volatile int16_t x343 = 1;
	volatile uint16_t x344 = UINT16_MAX;

	t85 = (x341<=(x342<=(x343|x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	int32_t x346 = INT32_MIN;
	int32_t t86 = -2266852;

	t86 = (x345<=(x346<=(x347|x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x349 = UINT16_MAX;
	int64_t x350 = -1LL;
	volatile int32_t x351 = INT32_MIN;
	int32_t t87 = -358;

	t87 = (x349<=(x350<=(x351|x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = -1;
	static int32_t x354 = -1;
	uint32_t x355 = 21U;
	uint32_t x356 = UINT32_MAX;
	static int32_t t88 = 6;

	t88 = (x353<=(x354<=(x355|x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x358 = INT32_MIN;
	volatile int64_t x359 = INT64_MIN;
	static uint32_t x360 = UINT32_MAX;
	volatile int32_t t89 = -561584838;

	t89 = (x357<=(x358<=(x359|x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = UINT8_MAX;
	static int64_t x362 = INT64_MAX;
	volatile int32_t x363 = INT32_MIN;
	int8_t x364 = INT8_MAX;
	volatile int32_t t90 = 21366;

	t90 = (x361<=(x362<=(x363|x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 290080849U;
	int8_t x367 = 42;
	volatile int32_t t91 = -70255161;

	t91 = (x365<=(x366<=(x367|x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	volatile int8_t x372 = INT8_MAX;
	volatile int32_t t92 = -22607272;

	t92 = (x369<=(x370<=(x371|x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -43;
	static int8_t x374 = -1;
	volatile uint16_t x376 = 1455U;

	t93 = (x373<=(x374<=(x375|x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = 28496910408065101LL;
	uint64_t x378 = 10615LLU;
	static uint64_t x379 = 6311365421389844LLU;
	static uint64_t x380 = UINT64_MAX;
	int32_t t94 = -2;

	t94 = (x377<=(x378<=(x379|x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = -1;
	uint8_t x383 = UINT8_MAX;
	volatile int32_t t95 = -1966;

	t95 = (x381<=(x382<=(x383|x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MAX;
	volatile uint16_t x386 = 26U;
	int64_t x387 = 98LL;
	int64_t x388 = INT64_MAX;
	volatile int32_t t96 = 390569;

	t96 = (x385<=(x386<=(x387|x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = UINT32_MAX;
	int16_t x390 = -2;
	static int64_t x391 = INT64_MIN;
	uint16_t x392 = 52U;
	volatile int32_t t97 = -4;

	t97 = (x389<=(x390<=(x391|x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x393 = 526U;
	int32_t x394 = -7520581;
	int32_t t98 = 48;

	t98 = (x393<=(x394<=(x395|x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x397 = -3088225;
	int64_t x398 = -8LL;
	int32_t x399 = 1;
	int32_t t99 = 47656036;

	t99 = (x397<=(x398<=(x399|x400)));

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

