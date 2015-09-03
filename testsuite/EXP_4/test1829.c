#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x7 = 7027387U;
int64_t x9 = 93489LL;
int32_t x10 = -439;
int16_t x13 = -1;
int64_t x17 = 2LL;
int8_t x24 = -1;
uint32_t x29 = 2U;
volatile int32_t x35 = -6;
int64_t x36 = -10LL;
volatile uint8_t x41 = 4U;
volatile int32_t t11 = 3;
static uint16_t x52 = 16250U;
volatile int64_t x56 = INT64_MAX;
uint8_t x69 = 1U;
uint8_t x70 = 115U;
static volatile int32_t t17 = 994;
static int64_t x73 = -437828769415995LL;
volatile int32_t t18 = 9;
uint8_t x77 = 3U;
int32_t x78 = INT32_MAX;
int32_t x80 = 13960760;
volatile int32_t t20 = -201990;
static volatile int32_t t21 = 22978616;
int32_t t22 = 290909;
int8_t x97 = INT8_MIN;
int8_t x108 = INT8_MAX;
int8_t x112 = INT8_MIN;
int16_t x118 = -1;
uint64_t x120 = 1675233017LLU;
volatile int64_t x121 = INT64_MIN;
int32_t x126 = -1;
uint32_t x128 = UINT32_MAX;
int16_t x130 = -1;
int8_t x131 = INT8_MAX;
int8_t x134 = INT8_MIN;
static uint64_t x142 = 991442662959LLU;
static int32_t x144 = INT32_MIN;
int32_t x146 = INT32_MAX;
uint8_t x149 = 38U;
int64_t x153 = INT64_MIN;
int64_t x156 = -405064568996LL;
int32_t t38 = -458695854;
int32_t t40 = 4136726;
int64_t x168 = INT64_MAX;
volatile uint32_t x169 = 71U;
int16_t x184 = -1;
volatile uint16_t x188 = 4790U;
volatile int16_t x189 = INT16_MIN;
static int64_t x200 = INT64_MIN;
uint16_t x204 = 485U;
int8_t x212 = INT8_MIN;
volatile int32_t x215 = INT32_MAX;
volatile int32_t t53 = 229944;
int8_t x218 = INT8_MAX;
int16_t x220 = 5317;
volatile uint64_t x221 = 1160LLU;
int16_t x222 = INT16_MIN;
static int16_t x234 = INT16_MIN;
int32_t x236 = INT32_MAX;
volatile int32_t t58 = 5348683;
static int8_t x238 = -29;
int64_t x253 = INT64_MIN;
int16_t x262 = -1;
int64_t x267 = INT64_MIN;
uint8_t x269 = UINT8_MAX;
int16_t x276 = INT16_MIN;
volatile int32_t t73 = -15;
int64_t x302 = 86LL;
static volatile int16_t x303 = INT16_MAX;
uint32_t x309 = 18889U;
volatile uint16_t x310 = 236U;
uint16_t x311 = 5U;
int32_t x316 = INT32_MAX;
volatile int32_t t78 = -248967;
static int64_t x323 = 180277552060963310LL;
int32_t x327 = -1;
volatile int32_t t81 = -34755491;
static int32_t t82 = 378607020;
int32_t x336 = -1;
int8_t x361 = -1;
int32_t x365 = -377802;
uint8_t x377 = 13U;
static uint16_t x381 = UINT16_MAX;
int32_t t97 = 40345556;
int32_t x395 = -614689614;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int32_t x2 = -1;
	int64_t x3 = INT64_MAX;
	uint64_t x4 = 952LLU;
	static int32_t t0 = -1;

	t0 = (x1<(x2&(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	volatile int64_t x6 = 1314870388465590LL;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 14;

	t1 = (x5<(x6&(x7&x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x11 = 1U;
	int8_t x12 = INT8_MAX;
	int32_t t2 = -1;

	t2 = (x9<(x10&(x11&x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x14 = INT16_MIN;
	uint32_t x15 = 8991U;
	static uint32_t x16 = UINT32_MAX;
	int32_t t3 = -48804393;

	t3 = (x13<(x14&(x15&x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MAX;
	int16_t x19 = INT16_MIN;
	static uint64_t x20 = 16956944286917512LLU;
	int32_t t4 = -6;

	t4 = (x17<(x18&(x19&x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	uint32_t x22 = 70U;
	int16_t x23 = INT16_MIN;
	volatile int32_t t5 = -2365;

	t5 = (x21<(x22&(x23&x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int8_t x26 = INT8_MIN;
	int8_t x27 = INT8_MIN;
	int32_t x28 = INT32_MIN;
	static int32_t t6 = -256183;

	t6 = (x25<(x26&(x27&x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x30 = -1;
	static int32_t x31 = INT32_MIN;
	int64_t x32 = INT64_MIN;
	volatile int32_t t7 = -30;

	t7 = (x29<(x30&(x31&x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 757;
	int16_t x34 = -134;
	int32_t t8 = -15626;

	t8 = (x33<(x34&(x35&x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	int16_t x38 = INT16_MIN;
	int32_t x39 = -1;
	uint64_t x40 = 11681589LLU;
	int32_t t9 = 23;

	t9 = (x37<(x38&(x39&x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x42 = -1LL;
	static int16_t x43 = INT16_MAX;
	volatile uint16_t x44 = 1364U;
	int32_t t10 = 2040;

	t10 = (x41<(x42&(x43&x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = 12794309U;
	int64_t x46 = INT64_MIN;
	int32_t x47 = INT32_MAX;
	volatile int64_t x48 = INT64_MIN;

	t11 = (x45<(x46&(x47&x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 0U;
	static int64_t x50 = -4943LL;
	int16_t x51 = INT16_MIN;
	int32_t t12 = 0;

	t12 = (x49<(x50&(x51&x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = -219;
	int8_t x54 = INT8_MIN;
	static uint64_t x55 = 13277LLU;
	volatile int32_t t13 = 5;

	t13 = (x53<(x54&(x55&x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 4105;
	int16_t x58 = INT16_MIN;
	int32_t x59 = -1;
	uint16_t x60 = 2U;
	static int32_t t14 = 5783818;

	t14 = (x57<(x58&(x59&x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 1U;
	volatile int8_t x62 = -1;
	int64_t x63 = INT64_MIN;
	int8_t x64 = INT8_MAX;
	volatile int32_t t15 = -4;

	t15 = (x61<(x62&(x63&x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = 223;
	uint8_t x66 = UINT8_MAX;
	int8_t x67 = -1;
	uint64_t x68 = 205657712094971LLU;
	int32_t t16 = -79;

	t16 = (x65<(x66&(x67&x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x71 = INT64_MIN;
	int64_t x72 = INT64_MIN;

	t17 = (x69<(x70&(x71&x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x74 = INT64_MIN;
	static int8_t x75 = INT8_MIN;
	volatile uint8_t x76 = 112U;

	t18 = (x73<(x74&(x75&x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x79 = 1079LLU;
	volatile int32_t t19 = 2034439;

	t19 = (x77<(x78&(x79&x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 2741872550LL;
	int64_t x82 = -1LL;
	int8_t x83 = INT8_MIN;
	volatile uint16_t x84 = 924U;

	t20 = (x81<(x82&(x83&x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = 0;
	uint16_t x86 = UINT16_MAX;
	uint8_t x87 = 3U;
	volatile uint32_t x88 = 426803881U;

	t21 = (x85<(x86&(x87&x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x89 = -3011;
	int8_t x90 = -1;
	static int32_t x91 = INT32_MIN;
	int32_t x92 = INT32_MIN;

	t22 = (x89<(x90&(x91&x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	static uint32_t x94 = 15593526U;
	volatile int32_t x95 = INT32_MAX;
	int32_t x96 = -1;
	volatile int32_t t23 = 1239688;

	t23 = (x93<(x94&(x95&x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x98 = UINT16_MAX;
	uint16_t x99 = 10481U;
	volatile int32_t x100 = 62;
	int32_t t24 = 999;

	t24 = (x97<(x98&(x99&x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	volatile int64_t x102 = 6225249336063006LL;
	int32_t x103 = INT32_MAX;
	uint16_t x104 = 2U;
	volatile int32_t t25 = 1;

	t25 = (x101<(x102&(x103&x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = INT64_MIN;
	int64_t x106 = INT64_MAX;
	static uint64_t x107 = 274897990174089562LLU;
	static int32_t t26 = 51077;

	t26 = (x105<(x106&(x107&x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 1185217818U;
	static uint32_t x110 = 228214978U;
	static volatile uint64_t x111 = UINT64_MAX;
	volatile int32_t t27 = -1;

	t27 = (x109<(x110&(x111&x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = INT16_MIN;
	volatile int64_t x114 = -2LL;
	volatile int32_t x115 = INT32_MIN;
	volatile int8_t x116 = 1;
	volatile int32_t t28 = 2007433;

	t28 = (x113<(x114&(x115&x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	static uint64_t x119 = 43949669LLU;
	volatile int32_t t29 = -46885;

	t29 = (x117<(x118&(x119&x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = INT8_MIN;
	int64_t x123 = -5532483047LL;
	int16_t x124 = INT16_MIN;
	static int32_t t30 = -72337282;

	t30 = (x121<(x122&(x123&x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = 960698130406LLU;
	int8_t x127 = INT8_MIN;
	volatile int32_t t31 = -96;

	t31 = (x125<(x126&(x127&x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	volatile int8_t x132 = 4;
	int32_t t32 = 2;

	t32 = (x129<(x130&(x131&x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -216065566561944574LL;
	int8_t x135 = 3;
	int64_t x136 = INT64_MIN;
	volatile int32_t t33 = 158588703;

	t33 = (x133<(x134&(x135&x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x137 = 1LLU;
	int16_t x138 = INT16_MAX;
	static int64_t x139 = 0LL;
	int32_t x140 = -11324;
	int32_t t34 = 240512358;

	t34 = (x137<(x138&(x139&x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = -11583LL;
	int8_t x143 = -1;
	static int32_t t35 = 18;

	t35 = (x141<(x142&(x143&x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	uint8_t x147 = 1U;
	int64_t x148 = INT64_MAX;
	int32_t t36 = -40973;

	t36 = (x145<(x146&(x147&x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x150 = INT64_MAX;
	int8_t x151 = INT8_MAX;
	static volatile int16_t x152 = INT16_MAX;
	static int32_t t37 = 106494;

	t37 = (x149<(x150&(x151&x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = INT32_MIN;
	uint32_t x155 = UINT32_MAX;

	t38 = (x153<(x154&(x155&x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x157 = 1U;
	static int16_t x158 = INT16_MAX;
	volatile uint64_t x159 = 1LLU;
	static uint8_t x160 = 44U;
	static volatile int32_t t39 = 59978498;

	t39 = (x157<(x158&(x159&x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x161 = 4LLU;
	static volatile int8_t x162 = -37;
	uint32_t x163 = 40U;
	int16_t x164 = -1;

	t40 = (x161<(x162&(x163&x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = INT64_MIN;
	int8_t x166 = INT8_MIN;
	static uint16_t x167 = UINT16_MAX;
	static int32_t t41 = 2808;

	t41 = (x165<(x166&(x167&x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = 2;
	volatile int32_t x171 = INT32_MIN;
	static uint8_t x172 = 4U;
	int32_t t42 = 51378543;

	t42 = (x169<(x170&(x171&x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 0LLU;
	static int16_t x174 = INT16_MAX;
	static int16_t x175 = INT16_MIN;
	uint64_t x176 = 251LLU;
	int32_t t43 = 1;

	t43 = (x173<(x174&(x175&x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = -4690527156388LL;
	int64_t x178 = 1LL;
	uint32_t x179 = UINT32_MAX;
	volatile int64_t x180 = INT64_MIN;
	volatile int32_t t44 = 5238464;

	t44 = (x177<(x178&(x179&x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 2905U;
	int64_t x182 = INT64_MIN;
	int64_t x183 = INT64_MAX;
	volatile int32_t t45 = -847;

	t45 = (x181<(x182&(x183&x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x185 = UINT16_MAX;
	int64_t x186 = -231527625256856LL;
	int32_t x187 = -7826159;
	int32_t t46 = 329436144;

	t46 = (x185<(x186&(x187&x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = INT64_MAX;
	int32_t x191 = 8079711;
	int64_t x192 = INT64_MIN;
	volatile int32_t t47 = 950227530;

	t47 = (x189<(x190&(x191&x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 1;
	int32_t x194 = INT32_MAX;
	volatile int32_t x195 = INT32_MIN;
	int8_t x196 = 6;
	static volatile int32_t t48 = -203144214;

	t48 = (x193<(x194&(x195&x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	int64_t x198 = -117LL;
	static uint16_t x199 = UINT16_MAX;
	int32_t t49 = -419730471;

	t49 = (x197<(x198&(x199&x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 101633369;
	int64_t x202 = -1LL;
	volatile uint16_t x203 = 5U;
	int32_t t50 = -207;

	t50 = (x201<(x202&(x203&x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = -1LL;
	uint64_t x206 = 2331609214LLU;
	int64_t x207 = INT64_MIN;
	int16_t x208 = INT16_MIN;
	volatile int32_t t51 = -9496;

	t51 = (x205<(x206&(x207&x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -1;
	uint8_t x210 = 6U;
	int16_t x211 = 0;
	volatile int32_t t52 = -2;

	t52 = (x209<(x210&(x211&x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -1LL;
	int64_t x214 = INT64_MIN;
	static volatile int64_t x216 = INT64_MAX;

	t53 = (x213<(x214&(x215&x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 327082U;
	static uint32_t x219 = 143533730U;
	volatile int32_t t54 = 223134;

	t54 = (x217<(x218&(x219&x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x223 = -1LL;
	uint64_t x224 = 23174463LLU;
	volatile int32_t t55 = 419;

	t55 = (x221<(x222&(x223&x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -1059;
	static int32_t x226 = 16078564;
	static volatile int32_t x227 = 4;
	volatile int8_t x228 = -1;
	volatile int32_t t56 = -1;

	t56 = (x225<(x226&(x227&x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = 1284102;
	uint16_t x230 = UINT16_MAX;
	int16_t x231 = -11434;
	int16_t x232 = INT16_MAX;
	volatile int32_t t57 = -117973;

	t57 = (x229<(x230&(x231&x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = -1;
	int32_t x235 = -1;

	t58 = (x233<(x234&(x235&x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -2;
	int16_t x239 = INT16_MIN;
	static int16_t x240 = 403;
	volatile int32_t t59 = -513187;

	t59 = (x237<(x238&(x239&x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	static uint64_t x242 = UINT64_MAX;
	int32_t x243 = INT32_MAX;
	int16_t x244 = -1;
	static int32_t t60 = -11196095;

	t60 = (x241<(x242&(x243&x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = -379264592;
	int8_t x246 = -1;
	int64_t x247 = -232LL;
	uint64_t x248 = UINT64_MAX;
	volatile int32_t t61 = 59400;

	t61 = (x245<(x246&(x247&x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 111U;
	uint8_t x250 = 2U;
	static int8_t x251 = 6;
	uint32_t x252 = 61522U;
	int32_t t62 = 847051;

	t62 = (x249<(x250&(x251&x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x254 = UINT8_MAX;
	int32_t x255 = -1;
	static int32_t x256 = INT32_MIN;
	volatile int32_t t63 = 497;

	t63 = (x253<(x254&(x255&x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MAX;
	int8_t x258 = INT8_MIN;
	static volatile uint32_t x259 = 27651348U;
	uint64_t x260 = 4170706231LLU;
	int32_t t64 = 10;

	t64 = (x257<(x258&(x259&x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x261 = UINT64_MAX;
	int16_t x263 = INT16_MIN;
	int32_t x264 = INT32_MAX;
	int32_t t65 = -6;

	t65 = (x261<(x262&(x263&x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = UINT8_MAX;
	int8_t x266 = INT8_MIN;
	static int64_t x268 = INT64_MIN;
	int32_t t66 = -2551;

	t66 = (x265<(x266&(x267&x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x270 = 0;
	volatile int64_t x271 = INT64_MAX;
	uint16_t x272 = 7759U;
	static int32_t t67 = 22;

	t67 = (x269<(x270&(x271&x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = -855;
	uint32_t x274 = 1492379420U;
	int32_t x275 = INT32_MIN;
	int32_t t68 = -174420928;

	t68 = (x273<(x274&(x275&x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -637705253650LL;
	int16_t x278 = INT16_MIN;
	int32_t x279 = INT32_MAX;
	static volatile int16_t x280 = INT16_MIN;
	int32_t t69 = -1;

	t69 = (x277<(x278&(x279&x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	int32_t x282 = INT32_MIN;
	static int16_t x283 = INT16_MIN;
	int16_t x284 = 12;
	int32_t t70 = 11979;

	t70 = (x281<(x282&(x283&x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 1857U;
	static int16_t x286 = -1;
	uint64_t x287 = UINT64_MAX;
	int16_t x288 = INT16_MIN;
	int32_t t71 = 1;

	t71 = (x285<(x286&(x287&x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 0U;
	volatile uint64_t x290 = UINT64_MAX;
	uint8_t x291 = 63U;
	static uint16_t x292 = 6U;
	static int32_t t72 = 499866;

	t72 = (x289<(x290&(x291&x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MAX;
	static int64_t x294 = -72314705LL;
	int64_t x295 = INT64_MAX;
	volatile int64_t x296 = -2LL;

	t73 = (x293<(x294&(x295&x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	volatile int8_t x298 = 8;
	static uint16_t x299 = 6695U;
	static int16_t x300 = -54;
	static int32_t t74 = 352607;

	t74 = (x297<(x298&(x299&x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x301 = 31;
	static uint64_t x304 = 1973933476420224LLU;
	volatile int32_t t75 = -862;

	t75 = (x301<(x302&(x303&x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -1;
	volatile int8_t x306 = INT8_MIN;
	int16_t x307 = -1;
	static int16_t x308 = INT16_MIN;
	volatile int32_t t76 = -527206204;

	t76 = (x305<(x306&(x307&x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x312 = -4249836346LL;
	int32_t t77 = -4;

	t77 = (x309<(x310&(x311&x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	uint16_t x314 = 5U;
	uint32_t x315 = 1973611509U;

	t78 = (x313<(x314&(x315&x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = 3;
	uint16_t x318 = 3U;
	uint8_t x319 = 2U;
	static volatile int8_t x320 = -1;
	int32_t t79 = -43631201;

	t79 = (x317<(x318&(x319&x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x321 = 0U;
	int8_t x322 = 0;
	uint16_t x324 = 6010U;
	static int32_t t80 = 38137;

	t80 = (x321<(x322&(x323&x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 1954146LLU;
	static uint64_t x326 = 8059823408LLU;
	static uint8_t x328 = UINT8_MAX;

	t81 = (x325<(x326&(x327&x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = 1;
	uint64_t x330 = 8694991394246LLU;
	int64_t x331 = INT64_MAX;
	int64_t x332 = 74LL;

	t82 = (x329<(x330&(x331&x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = -1;
	uint32_t x334 = 6U;
	volatile int16_t x335 = INT16_MIN;
	int32_t t83 = -499;

	t83 = (x333<(x334&(x335&x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = 20;
	int32_t x338 = INT32_MAX;
	int64_t x339 = -1LL;
	volatile int8_t x340 = -1;
	volatile int32_t t84 = 38839486;

	t84 = (x337<(x338&(x339&x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x341 = -65258;
	int16_t x342 = 475;
	volatile uint64_t x343 = UINT64_MAX;
	int32_t x344 = INT32_MAX;
	int32_t t85 = -101;

	t85 = (x341<(x342&(x343&x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = UINT8_MAX;
	int32_t x346 = -4406480;
	int8_t x347 = -1;
	int32_t x348 = INT32_MIN;
	volatile int32_t t86 = -847193268;

	t86 = (x345<(x346&(x347&x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = INT16_MIN;
	int16_t x350 = 6;
	int32_t x351 = INT32_MIN;
	static int32_t x352 = INT32_MAX;
	int32_t t87 = 14839;

	t87 = (x349<(x350&(x351&x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	int64_t x354 = INT64_MIN;
	static int8_t x355 = 7;
	uint32_t x356 = 22970465U;
	int32_t t88 = -4605;

	t88 = (x353<(x354&(x355&x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = -5778LL;
	int16_t x358 = INT16_MIN;
	uint32_t x359 = 4498324U;
	int32_t x360 = INT32_MIN;
	int32_t t89 = -1540580;

	t89 = (x357<(x358&(x359&x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x362 = INT16_MIN;
	static int64_t x363 = -1LL;
	int32_t x364 = -1;
	static volatile int32_t t90 = 19;

	t90 = (x361<(x362&(x363&x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x366 = INT16_MAX;
	int64_t x367 = 8707748668264LL;
	uint32_t x368 = 395584U;
	static volatile int32_t t91 = 58;

	t91 = (x365<(x366&(x367&x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = 3;
	int8_t x370 = -1;
	int32_t x371 = -53;
	volatile uint8_t x372 = 23U;
	volatile int32_t t92 = 46;

	t92 = (x369<(x370&(x371&x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MAX;
	int16_t x374 = 30;
	int8_t x375 = INT8_MAX;
	volatile int32_t x376 = INT32_MIN;
	static volatile int32_t t93 = 943;

	t93 = (x373<(x374&(x375&x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x378 = INT8_MIN;
	int8_t x379 = 7;
	int8_t x380 = INT8_MIN;
	int32_t t94 = 1;

	t94 = (x377<(x378&(x379&x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x382 = INT32_MIN;
	static int32_t x383 = INT32_MIN;
	int8_t x384 = -1;
	volatile int32_t t95 = 7;

	t95 = (x381<(x382&(x383&x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -2;
	uint32_t x386 = 550842922U;
	int32_t x387 = INT32_MIN;
	int32_t x388 = INT32_MAX;
	int32_t t96 = -268232564;

	t96 = (x385<(x386&(x387&x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x389 = 2U;
	int32_t x390 = -1;
	int8_t x391 = 0;
	int8_t x392 = INT8_MAX;

	t97 = (x389<(x390&(x391&x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	int64_t x394 = -1LL;
	static volatile uint8_t x396 = 1U;
	static volatile int32_t t98 = 18;

	t98 = (x393<(x394&(x395&x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = 689LL;
	uint16_t x398 = UINT16_MAX;
	uint64_t x399 = 81639LLU;
	static uint8_t x400 = 7U;
	int32_t t99 = 66141832;

	t99 = (x397<(x398&(x399&x400)));

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

