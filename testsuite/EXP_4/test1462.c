#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
uint32_t x5 = 12806U;
uint32_t x13 = UINT32_MAX;
uint64_t x16 = UINT64_MAX;
int16_t x20 = INT16_MIN;
int32_t x32 = 1591630;
int32_t x36 = INT32_MAX;
static volatile int64_t t6 = INT64_MAX;
int32_t x58 = -289545;
int8_t x60 = INT8_MIN;
uint64_t x68 = UINT64_MAX;
int32_t t10 = 12;
int32_t x81 = 3522;
uint32_t x82 = 745641U;
static volatile int32_t x84 = -6071158;
int32_t x92 = INT32_MIN;
int8_t x97 = INT8_MAX;
uint8_t x99 = UINT8_MAX;
int64_t x100 = 2LL;
uint32_t x101 = 122U;
static int8_t x120 = INT8_MIN;
volatile uint64_t t18 = 1162488238828617986LLU;
volatile int16_t x131 = -63;
int32_t t19 = -1618014;
volatile uint64_t x139 = 158841542LLU;
volatile int32_t t23 = -458391;
static volatile uint64_t x161 = 24082792257372LLU;
volatile int16_t x162 = 1;
uint8_t x173 = 1U;
static uint64_t x177 = UINT64_MAX;
int32_t x178 = INT32_MAX;
uint64_t x191 = UINT64_MAX;
volatile uint64_t x193 = 7LLU;
int8_t x194 = INT8_MAX;
int16_t x195 = 0;
uint16_t x196 = 4159U;
volatile uint64_t t30 = 533887031321LLU;
static uint64_t x203 = UINT64_MAX;
static int32_t t33 = -762982;
uint16_t x233 = 1U;
uint32_t x235 = UINT32_MAX;
volatile int16_t x236 = INT16_MIN;
int16_t x245 = 646;
int64_t x248 = -572552342LL;
int32_t x254 = -3375;
static int32_t x256 = INT32_MAX;
volatile uint32_t x263 = 1U;
int16_t x265 = INT16_MAX;
int16_t x273 = 175;
static int64_t x274 = INT64_MIN;
int8_t x276 = -1;
uint64_t x282 = 82224LLU;
uint8_t x283 = 2U;
int8_t x284 = INT8_MIN;
volatile uint32_t x285 = 3935986U;
volatile int64_t x289 = INT64_MAX;
uint64_t x290 = UINT64_MAX;
uint64_t x291 = UINT64_MAX;
int32_t x294 = -213;
int16_t x296 = INT16_MAX;
static int32_t t45 = 53857460;
volatile int32_t t46 = -3;
volatile int32_t t48 = -12423278;
uint8_t x327 = 5U;
uint64_t x333 = 1392494391153LLU;
uint8_t x336 = 0U;
int32_t x348 = INT32_MIN;
int8_t x353 = 0;
uint16_t x355 = 570U;
volatile int8_t x357 = 1;
uint8_t x359 = UINT8_MAX;
uint32_t x360 = UINT32_MAX;
static volatile int32_t t58 = -59064243;
int8_t x369 = 1;
uint32_t x371 = 1621U;
int16_t x375 = -1;
uint32_t t60 = 51378363U;
static int32_t x381 = 430540544;
uint64_t x385 = 1696723LLU;
uint16_t x386 = 4U;
int8_t x391 = INT8_MIN;
int32_t x395 = INT32_MIN;
volatile uint32_t x402 = 886225U;
uint8_t x412 = 30U;
int32_t x417 = 4494;
int8_t x423 = INT8_MIN;
uint8_t x424 = 3U;
int32_t t71 = 98020;
static int16_t x432 = 0;
int32_t t73 = 162;
static int64_t x443 = INT64_MIN;
int8_t x455 = INT8_MIN;
int32_t x456 = -1;
static int8_t x461 = 8;
static volatile int32_t t78 = -7626;
static uint64_t x465 = UINT64_MAX;
int8_t x468 = INT8_MIN;
static uint32_t x509 = 4U;
uint64_t t86 = 7658115630832248LLU;
volatile int32_t x518 = INT32_MIN;
int32_t x523 = INT32_MAX;
static int64_t x527 = -1LL;
static uint16_t x528 = 21U;
uint16_t x532 = 4372U;
uint64_t t91 = 34649633933LLU;
volatile int16_t x565 = 0;
uint64_t x566 = 2LLU;
int16_t x573 = 4;
int64_t x590 = -1LL;
int8_t x592 = -1;
static int64_t x605 = 831409665LL;
int32_t x606 = INT32_MAX;
static int64_t t99 = -1033220LL;


void f0(void) {
	volatile uint64_t x2 = 14991043374LLU;
	static int16_t x3 = INT16_MIN;
	int32_t x4 = INT32_MIN;
	uint32_t t0 = UINT32_MAX;

	t0 = (x1<<(x2<(x3<x4)));

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	uint8_t x7 = 24U;
	uint8_t x8 = 6U;
	volatile uint32_t t1 = 1U;

	t1 = (x5<<(x6<(x7<x8)));

	if (t1 != 25612U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x14 = UINT16_MAX;
	uint32_t x15 = 7564350U;
	static volatile uint32_t t2 = UINT32_MAX;

	t2 = (x13<<(x14<(x15<x16)));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 41U;
	static uint8_t x18 = 127U;
	int64_t x19 = INT64_MIN;
	int32_t t3 = 6871465;

	t3 = (x17<<(x18<(x19<x20)));

	if (t3 != 41) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MAX;
	static int8_t x22 = 6;
	uint16_t x23 = 29U;
	int8_t x24 = INT8_MIN;
	static volatile int32_t t4 = 39;

	t4 = (x21<<(x22<(x23<x24)));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x29 = 31;
	volatile int16_t x30 = INT16_MIN;
	int16_t x31 = -1;
	int32_t t5 = -219139427;

	t5 = (x29<<(x30<(x31<x32)));

	if (t5 != 62) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = INT64_MAX;
	volatile int8_t x34 = INT8_MAX;
	uint64_t x35 = 897729098089834132LLU;

	t6 = (x33<<(x34<(x35<x36)));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x49 = 6126979LLU;
	uint16_t x50 = 11U;
	uint32_t x51 = UINT32_MAX;
	static uint16_t x52 = 1U;
	volatile uint64_t t7 = 3920409106319925485LLU;

	t7 = (x49<<(x50<(x51<x52)));

	if (t7 != 6126979LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x53 = UINT64_MAX;
	int32_t x54 = -1;
	uint8_t x55 = UINT8_MAX;
	uint8_t x56 = UINT8_MAX;
	volatile uint64_t t8 = 1469859901LLU;

	t8 = (x53<<(x54<(x55<x56)));

	if (t8 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x57 = UINT8_MAX;
	int64_t x59 = -1LL;
	static volatile int32_t t9 = 5662230;

	t9 = (x57<<(x58<(x59<x60)));

	if (t9 != 510) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x65 = 38U;
	volatile uint32_t x66 = UINT32_MAX;
	static volatile int8_t x67 = INT8_MIN;

	t10 = (x65<<(x66<(x67<x68)));

	if (t10 != 38) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x83 = -1LL;
	int32_t t11 = -36;

	t11 = (x81<<(x82<(x83<x84)));

	if (t11 != 3522) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x85 = 0U;
	static int16_t x86 = -1;
	uint8_t x87 = UINT8_MAX;
	static int8_t x88 = INT8_MIN;
	int32_t t12 = -45145536;

	t12 = (x85<<(x86<(x87<x88)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x89 = 55059157293827952LLU;
	uint8_t x90 = 0U;
	int64_t x91 = -1LL;
	static uint64_t t13 = 10839376362002965LLU;

	t13 = (x89<<(x90<(x91<x92)));

	if (t13 != 55059157293827952LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x93 = 2U;
	int32_t x94 = INT32_MIN;
	volatile uint64_t x95 = 3907957345732906LLU;
	volatile int64_t x96 = 1926227LL;
	int32_t t14 = 55402861;

	t14 = (x93<<(x94<(x95<x96)));

	if (t14 != 4) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x98 = INT16_MIN;
	static volatile int32_t t15 = 11775;

	t15 = (x97<<(x98<(x99<x100)));

	if (t15 != 254) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x102 = 2003U;
	int16_t x103 = INT16_MAX;
	uint64_t x104 = 4311585799735005921LLU;
	uint32_t t16 = 512687628U;

	t16 = (x101<<(x102<(x103<x104)));

	if (t16 != 122U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x117 = 23951629U;
	int32_t x118 = INT32_MIN;
	uint32_t x119 = 418U;
	uint32_t t17 = 20U;

	t17 = (x117<<(x118<(x119<x120)));

	if (t17 != 47903258U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x125 = 10066741LLU;
	uint8_t x126 = 1U;
	uint32_t x127 = 2431U;
	int16_t x128 = INT16_MIN;

	t18 = (x125<<(x126<(x127<x128)));

	if (t18 != 10066741LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x129 = UINT8_MAX;
	static uint64_t x130 = UINT64_MAX;
	int32_t x132 = 54735;

	t19 = (x129<<(x130<(x131<x132)));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x137 = 61840568U;
	static volatile int8_t x138 = -1;
	uint8_t x140 = 25U;
	volatile uint32_t t20 = 834U;

	t20 = (x137<<(x138<(x139<x140)));

	if (t20 != 123681136U) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x149 = 4109;
	volatile uint8_t x150 = 3U;
	uint32_t x151 = 230469U;
	int8_t x152 = -1;
	static int32_t t21 = 535689621;

	t21 = (x149<<(x150<(x151<x152)));

	if (t21 != 4109) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x153 = INT16_MAX;
	static uint8_t x154 = 1U;
	static int64_t x155 = INT64_MIN;
	int32_t x156 = -6;
	int32_t t22 = -693;

	t22 = (x153<<(x154<(x155<x156)));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x157 = UINT16_MAX;
	int32_t x158 = INT32_MIN;
	int32_t x159 = INT32_MAX;
	int8_t x160 = INT8_MIN;

	t23 = (x157<<(x158<(x159<x160)));

	if (t23 != 131070) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x163 = -1925130LL;
	int32_t x164 = 13236;
	volatile uint64_t t24 = 7815237255LLU;

	t24 = (x161<<(x162<(x163<x164)));

	if (t24 != 24082792257372LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x165 = INT32_MAX;
	volatile int8_t x166 = INT8_MAX;
	volatile int16_t x167 = INT16_MIN;
	static int32_t x168 = INT32_MIN;
	int32_t t25 = INT32_MAX;

	t25 = (x165<<(x166<(x167<x168)));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x169 = 0U;
	uint64_t x170 = 0LLU;
	uint64_t x171 = 8194078581LLU;
	volatile uint8_t x172 = 1U;
	int32_t t26 = -42;

	t26 = (x169<<(x170<(x171<x172)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x174 = 50;
	int64_t x175 = -7LL;
	static uint16_t x176 = 28U;
	int32_t t27 = -114260;

	t27 = (x173<<(x174<(x175<x176)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x179 = 63U;
	int16_t x180 = INT16_MIN;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = (x177<<(x178<(x179<x180)));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x189 = 15623LL;
	volatile int32_t x190 = 1;
	uint8_t x192 = UINT8_MAX;
	int64_t t29 = 0LL;

	t29 = (x189<<(x190<(x191<x192)));

	if (t29 != 15623LL) { NG(); } else { ; }
	
}

void f30(void) {


	t30 = (x193<<(x194<(x195<x196)));

	if (t30 != 7LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x201 = 3158U;
	int64_t x202 = -791832083782LL;
	static int16_t x204 = 2900;
	uint32_t t31 = 101427U;

	t31 = (x201<<(x202<(x203<x204)));

	if (t31 != 6316U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x205 = 130258778LLU;
	uint64_t x206 = UINT64_MAX;
	static volatile int8_t x207 = -9;
	volatile int32_t x208 = -1;
	uint64_t t32 = 560LLU;

	t32 = (x205<<(x206<(x207<x208)));

	if (t32 != 130258778LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x209 = 61;
	int64_t x210 = -1LL;
	uint64_t x211 = UINT64_MAX;
	int16_t x212 = 0;

	t33 = (x209<<(x210<(x211<x212)));

	if (t33 != 122) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x225 = INT8_MAX;
	volatile uint64_t x226 = 187662761098493546LLU;
	uint64_t x227 = 1859186639453803LLU;
	int16_t x228 = INT16_MAX;
	volatile int32_t t34 = -336;

	t34 = (x225<<(x226<(x227<x228)));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x234 = -6;
	volatile int32_t t35 = 2419648;

	t35 = (x233<<(x234<(x235<x236)));

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x246 = INT32_MAX;
	volatile int16_t x247 = -1;
	static volatile int32_t t36 = -1171;

	t36 = (x245<<(x246<(x247<x248)));

	if (t36 != 646) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x249 = INT8_MAX;
	volatile uint8_t x250 = UINT8_MAX;
	static int32_t x251 = -3387352;
	int64_t x252 = INT64_MAX;
	static int32_t t37 = 77411439;

	t37 = (x249<<(x250<(x251<x252)));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x253 = UINT8_MAX;
	int32_t x255 = -141;
	volatile int32_t t38 = 0;

	t38 = (x253<<(x254<(x255<x256)));

	if (t38 != 510) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x261 = 2219LLU;
	uint32_t x262 = 160934560U;
	int16_t x264 = INT16_MIN;
	static uint64_t t39 = 0LLU;

	t39 = (x261<<(x262<(x263<x264)));

	if (t39 != 2219LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x266 = INT64_MAX;
	int32_t x267 = 32688;
	int8_t x268 = 4;
	int32_t t40 = -360702845;

	t40 = (x265<<(x266<(x267<x268)));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x275 = INT32_MAX;
	volatile int32_t t41 = -120239;

	t41 = (x273<<(x274<(x275<x276)));

	if (t41 != 350) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x281 = 5U;
	int32_t t42 = 11609520;

	t42 = (x281<<(x282<(x283<x284)));

	if (t42 != 5) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x286 = 1243;
	uint64_t x287 = UINT64_MAX;
	uint32_t x288 = 478U;
	static volatile uint32_t t43 = 430395242U;

	t43 = (x285<<(x286<(x287<x288)));

	if (t43 != 3935986U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x292 = -15;
	static int64_t t44 = INT64_MAX;

	t44 = (x289<<(x290<(x291<x292)));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x293 = INT8_MAX;
	volatile uint8_t x295 = 1U;

	t45 = (x293<<(x294<(x295<x296)));

	if (t45 != 254) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x301 = 1302;
	static int8_t x302 = INT8_MIN;
	uint16_t x303 = 28778U;
	int16_t x304 = -22;

	t46 = (x301<<(x302<(x303<x304)));

	if (t46 != 2604) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x305 = 350650229U;
	uint64_t x306 = 6125920282202LLU;
	static int32_t x307 = INT32_MAX;
	uint8_t x308 = UINT8_MAX;
	volatile uint32_t t47 = 46436U;

	t47 = (x305<<(x306<(x307<x308)));

	if (t47 != 350650229U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x309 = 5232U;
	int8_t x310 = INT8_MAX;
	uint32_t x311 = 10076U;
	volatile int16_t x312 = -9;

	t48 = (x309<<(x310<(x311<x312)));

	if (t48 != 5232) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x317 = 40898U;
	uint64_t x318 = UINT64_MAX;
	int8_t x319 = INT8_MIN;
	int64_t x320 = INT64_MAX;
	uint32_t t49 = 5046401U;

	t49 = (x317<<(x318<(x319<x320)));

	if (t49 != 40898U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x325 = 2101859924237549676LLU;
	static int8_t x326 = 26;
	volatile int64_t x328 = INT64_MAX;
	uint64_t t50 = 1000610778900916507LLU;

	t50 = (x325<<(x326<(x327<x328)));

	if (t50 != 2101859924237549676LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x329 = 5;
	static int16_t x330 = 1;
	int8_t x331 = -1;
	volatile int16_t x332 = 208;
	static volatile int32_t t51 = -433744617;

	t51 = (x329<<(x330<(x331<x332)));

	if (t51 != 5) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x334 = INT8_MIN;
	static volatile uint16_t x335 = 28304U;
	uint64_t t52 = 1770631119LLU;

	t52 = (x333<<(x334<(x335<x336)));

	if (t52 != 2784988782306LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x341 = 34955342996877150LL;
	int16_t x342 = INT16_MAX;
	static int64_t x343 = -1LL;
	uint16_t x344 = 10U;
	int64_t t53 = -7447686413309631LL;

	t53 = (x341<<(x342<(x343<x344)));

	if (t53 != 34955342996877150LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x345 = 511632U;
	uint8_t x346 = 22U;
	int16_t x347 = 24;
	volatile uint32_t t54 = 151U;

	t54 = (x345<<(x346<(x347<x348)));

	if (t54 != 511632U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x349 = 2LLU;
	uint16_t x350 = UINT16_MAX;
	volatile int16_t x351 = INT16_MIN;
	uint8_t x352 = 54U;
	uint64_t t55 = 229LLU;

	t55 = (x349<<(x350<(x351<x352)));

	if (t55 != 2LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x354 = 142U;
	uint8_t x356 = 40U;
	int32_t t56 = -124;

	t56 = (x353<<(x354<(x355<x356)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x358 = 1950612006789LLU;
	volatile int32_t t57 = 0;

	t57 = (x357<<(x358<(x359<x360)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x365 = INT8_MAX;
	static uint64_t x366 = UINT64_MAX;
	volatile uint32_t x367 = 129715U;
	volatile int64_t x368 = INT64_MIN;

	t58 = (x365<<(x366<(x367<x368)));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x370 = INT16_MIN;
	uint16_t x372 = 27291U;
	int32_t t59 = -852;

	t59 = (x369<<(x370<(x371<x372)));

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x373 = 256057603U;
	uint64_t x374 = 675166185LLU;
	int32_t x376 = 25881738;

	t60 = (x373<<(x374<(x375<x376)));

	if (t60 != 256057603U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x377 = UINT16_MAX;
	static int32_t x378 = INT32_MIN;
	int16_t x379 = INT16_MAX;
	uint64_t x380 = UINT64_MAX;
	int32_t t61 = 56873276;

	t61 = (x377<<(x378<(x379<x380)));

	if (t61 != 131070) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x382 = 12U;
	int16_t x383 = 344;
	static int64_t x384 = -92369559LL;
	int32_t t62 = -49664155;

	t62 = (x381<<(x382<(x383<x384)));

	if (t62 != 430540544) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x387 = -1LL;
	int32_t x388 = INT32_MIN;
	uint64_t t63 = 178821661127LLU;

	t63 = (x385<<(x386<(x387<x388)));

	if (t63 != 1696723LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x389 = 46U;
	static volatile uint8_t x390 = 1U;
	static uint8_t x392 = 50U;
	int32_t t64 = -15;

	t64 = (x389<<(x390<(x391<x392)));

	if (t64 != 46) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x393 = UINT16_MAX;
	int8_t x394 = -60;
	uint64_t x396 = 208480160LLU;
	static int32_t t65 = -217;

	t65 = (x393<<(x394<(x395<x396)));

	if (t65 != 131070) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x401 = 36U;
	int16_t x403 = -1;
	int16_t x404 = INT16_MIN;
	uint32_t t66 = 20826U;

	t66 = (x401<<(x402<(x403<x404)));

	if (t66 != 36U) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x409 = 25304403136LL;
	int16_t x410 = INT16_MAX;
	int8_t x411 = INT8_MIN;
	int64_t t67 = 3953229007404LL;

	t67 = (x409<<(x410<(x411<x412)));

	if (t67 != 25304403136LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x413 = 5498016LL;
	int32_t x414 = -1;
	int32_t x415 = -1;
	uint16_t x416 = 3069U;
	volatile int64_t t68 = -14LL;

	t68 = (x413<<(x414<(x415<x416)));

	if (t68 != 10996032LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x418 = INT32_MIN;
	int16_t x419 = INT16_MIN;
	static volatile int64_t x420 = 405300656385LL;
	int32_t t69 = 570542801;

	t69 = (x417<<(x418<(x419<x420)));

	if (t69 != 8988) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x421 = 1U;
	int16_t x422 = -760;
	int32_t t70 = 14723;

	t70 = (x421<<(x422<(x423<x424)));

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x425 = 0;
	static int16_t x426 = 381;
	static uint16_t x427 = UINT16_MAX;
	static int64_t x428 = -125696926625LL;

	t71 = (x425<<(x426<(x427<x428)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x429 = UINT64_MAX;
	uint64_t x430 = 11LLU;
	volatile int8_t x431 = 3;
	static uint64_t t72 = UINT64_MAX;

	t72 = (x429<<(x430<(x431<x432)));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x433 = 6;
	int32_t x434 = -3;
	static volatile int32_t x435 = INT32_MIN;
	int32_t x436 = INT32_MIN;

	t73 = (x433<<(x434<(x435<x436)));

	if (t73 != 12) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x441 = 33062465;
	static int64_t x442 = INT64_MIN;
	int16_t x444 = -1;
	static int32_t t74 = -30;

	t74 = (x441<<(x442<(x443<x444)));

	if (t74 != 66124930) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x445 = 87U;
	volatile uint16_t x446 = UINT16_MAX;
	static volatile uint32_t x447 = UINT32_MAX;
	int16_t x448 = INT16_MIN;
	int32_t t75 = -772158646;

	t75 = (x445<<(x446<(x447<x448)));

	if (t75 != 87) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x453 = 21;
	int8_t x454 = INT8_MIN;
	volatile int32_t t76 = 14;

	t76 = (x453<<(x454<(x455<x456)));

	if (t76 != 42) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x457 = 137706953125LL;
	int64_t x458 = INT64_MIN;
	volatile int32_t x459 = INT32_MIN;
	int8_t x460 = INT8_MIN;
	static int64_t t77 = 1LL;

	t77 = (x457<<(x458<(x459<x460)));

	if (t77 != 275413906250LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x462 = 34;
	int8_t x463 = INT8_MIN;
	volatile int64_t x464 = INT64_MIN;

	t78 = (x461<<(x462<(x463<x464)));

	if (t78 != 8) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x466 = -1LL;
	int8_t x467 = -50;
	volatile uint64_t t79 = 1579LLU;

	t79 = (x465<<(x466<(x467<x468)));

	if (t79 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x477 = UINT32_MAX;
	uint8_t x478 = 1U;
	int32_t x479 = INT32_MAX;
	int32_t x480 = -1;
	volatile uint32_t t80 = UINT32_MAX;

	t80 = (x477<<(x478<(x479<x480)));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x485 = INT16_MAX;
	int32_t x486 = INT32_MIN;
	volatile int64_t x487 = INT64_MIN;
	int64_t x488 = INT64_MIN;
	volatile int32_t t81 = 251883;

	t81 = (x485<<(x486<(x487<x488)));

	if (t81 != 65534) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x489 = 1;
	int32_t x490 = INT32_MIN;
	static volatile int8_t x491 = 8;
	uint8_t x492 = 11U;
	volatile int32_t t82 = -15;

	t82 = (x489<<(x490<(x491<x492)));

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x497 = 1U;
	int32_t x498 = -1;
	volatile uint32_t x499 = 1671383108U;
	uint16_t x500 = 0U;
	volatile int32_t t83 = -11;

	t83 = (x497<<(x498<(x499<x500)));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x505 = UINT8_MAX;
	uint8_t x506 = 1U;
	int16_t x507 = 0;
	int8_t x508 = 7;
	int32_t t84 = 937004385;

	t84 = (x505<<(x506<(x507<x508)));

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x510 = INT8_MAX;
	int16_t x511 = INT16_MAX;
	int16_t x512 = -1;
	uint32_t t85 = 17698U;

	t85 = (x509<<(x510<(x511<x512)));

	if (t85 != 4U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x513 = UINT64_MAX;
	volatile int8_t x514 = -2;
	uint8_t x515 = 0U;
	int64_t x516 = -985479067152852084LL;

	t86 = (x513<<(x514<(x515<x516)));

	if (t86 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x517 = UINT32_MAX;
	uint32_t x519 = 3074U;
	uint64_t x520 = 125LLU;
	uint32_t t87 = 59449U;

	t87 = (x517<<(x518<(x519<x520)));

	if (t87 != 4294967294U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x521 = 14U;
	uint8_t x522 = 0U;
	static int16_t x524 = INT16_MIN;
	static volatile int32_t t88 = 83759;

	t88 = (x521<<(x522<(x523<x524)));

	if (t88 != 14) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x525 = 101319746448910LL;
	int64_t x526 = INT64_MAX;
	int64_t t89 = -520743LL;

	t89 = (x525<<(x526<(x527<x528)));

	if (t89 != 101319746448910LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x529 = 241892432273654394LLU;
	int8_t x530 = 2;
	int64_t x531 = 339747LL;
	volatile uint64_t t90 = 5473475498243LLU;

	t90 = (x529<<(x530<(x531<x532)));

	if (t90 != 241892432273654394LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x537 = 218395038LLU;
	int16_t x538 = INT16_MIN;
	int8_t x539 = 0;
	int64_t x540 = INT64_MIN;

	t91 = (x537<<(x538<(x539<x540)));

	if (t91 != 436790076LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x549 = 2016490U;
	uint8_t x550 = UINT8_MAX;
	static int16_t x551 = 482;
	int32_t x552 = -1;
	static volatile uint32_t t92 = 56233242U;

	t92 = (x549<<(x550<(x551<x552)));

	if (t92 != 2016490U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x567 = -7570;
	uint8_t x568 = 10U;
	volatile int32_t t93 = -14;

	t93 = (x565<<(x566<(x567<x568)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x574 = 0U;
	static uint32_t x575 = UINT32_MAX;
	uint16_t x576 = 416U;
	volatile int32_t t94 = -254742;

	t94 = (x573<<(x574<(x575<x576)));

	if (t94 != 4) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x581 = 99476548122404294LLU;
	int16_t x582 = INT16_MIN;
	uint8_t x583 = UINT8_MAX;
	static int32_t x584 = INT32_MIN;
	volatile uint64_t t95 = 4778474054596LLU;

	t95 = (x581<<(x582<(x583<x584)));

	if (t95 != 198953096244808588LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x589 = 3;
	int32_t x591 = 15933;
	volatile int32_t t96 = 0;

	t96 = (x589<<(x590<(x591<x592)));

	if (t96 != 6) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x593 = 5U;
	uint8_t x594 = 36U;
	int8_t x595 = -1;
	volatile uint32_t x596 = 122U;
	int32_t t97 = -597743051;

	t97 = (x593<<(x594<(x595<x596)));

	if (t97 != 5) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x597 = 1148LLU;
	int32_t x598 = -313200;
	uint32_t x599 = 409U;
	int8_t x600 = INT8_MAX;
	static uint64_t t98 = 24767177766254175LLU;

	t98 = (x597<<(x598<(x599<x600)));

	if (t98 != 2296LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x607 = INT32_MAX;
	static int64_t x608 = -75295760764883011LL;

	t99 = (x605<<(x606<(x607<x608)));

	if (t99 != 831409665LL) { NG(); } else { ; }
	
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

