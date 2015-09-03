#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = -228931691;
static int16_t x38 = 1;
int8_t x40 = INT8_MAX;
volatile int32_t x41 = 8083;
static volatile int64_t t5 = 1LL;
uint64_t x48 = UINT64_MAX;
uint32_t t7 = 110U;
int8_t x55 = -12;
static int32_t x56 = INT32_MAX;
static volatile int8_t x73 = -1;
volatile int64_t t10 = 1LL;
uint32_t t11 = 3U;
int16_t x87 = INT16_MAX;
volatile int8_t x88 = 0;
int32_t t12 = -114264403;
static volatile int8_t x100 = -46;
volatile uint16_t x104 = 450U;
static uint32_t x111 = 37410118U;
volatile int32_t x112 = -1;
uint16_t x115 = 26U;
int32_t x120 = 21;
uint64_t t20 = 1659413889363965LLU;
static int16_t x128 = -1;
volatile uint32_t t21 = 192773U;
uint8_t x132 = 0U;
int32_t x137 = INT32_MIN;
uint64_t x139 = UINT64_MAX;
static volatile uint16_t x141 = 12U;
static int8_t x147 = -1;
int64_t x149 = 1338LL;
static int32_t x166 = 127;
volatile uint32_t x167 = 66235698U;
int32_t x168 = -612402;
int64_t x178 = 2698831582949521889LL;
uint8_t x206 = UINT8_MAX;
uint32_t x209 = 822753U;
static int16_t x211 = -1;
uint8_t x219 = 0U;
volatile uint64_t t36 = UINT64_MAX;
uint64_t x223 = 29859LLU;
int64_t x226 = 44984964LL;
int8_t x233 = INT8_MAX;
uint8_t x243 = UINT8_MAX;
int8_t x244 = -1;
volatile uint32_t t41 = 1724U;
int64_t t42 = -31782072945996030LL;
volatile int8_t x256 = -1;
uint32_t x259 = UINT32_MAX;
volatile uint64_t t44 = 8736967LLU;
uint16_t x262 = 3U;
int8_t x271 = -1;
uint16_t x280 = 1008U;
volatile uint64_t t51 = 3363577403109667LLU;
uint8_t x293 = 2U;
uint8_t x294 = 23U;
static int16_t x297 = -69;
volatile uint64_t x307 = 46816938LLU;
static uint16_t x310 = 10259U;
static uint64_t x328 = 2363002625LLU;
volatile uint64_t t57 = 197640208LLU;
int32_t x331 = INT32_MIN;
uint8_t x337 = UINT8_MAX;
int64_t x341 = INT64_MAX;
int8_t x342 = INT8_MIN;
int32_t x343 = 42656;
int8_t x350 = INT8_MIN;
volatile int8_t x351 = INT8_MIN;
static volatile uint64_t x352 = UINT64_MAX;
volatile uint64_t t62 = 84LLU;
volatile int8_t x355 = INT8_MAX;
static int64_t x361 = INT64_MAX;
int16_t x365 = 0;
static uint64_t x381 = 60846241748625LLU;
int16_t x382 = INT16_MIN;
static volatile uint32_t x384 = 0U;
uint8_t x385 = 5U;
int8_t x387 = INT8_MIN;
int64_t x394 = -6170075751LL;
static int8_t x401 = INT8_MIN;
int64_t x404 = -1LL;
volatile int16_t x410 = -2923;
static int16_t x418 = INT16_MIN;
volatile int64_t t75 = 9276082787784LL;
int32_t t76 = -16083043;
int8_t x430 = INT8_MIN;
static int8_t x431 = 0;
int64_t x439 = INT64_MAX;
int16_t x440 = INT16_MIN;
static int16_t x449 = INT16_MAX;
int32_t x457 = INT32_MIN;
uint64_t t83 = 670LLU;
uint8_t x461 = 54U;
volatile int16_t x462 = -2651;
int8_t x463 = INT8_MIN;
volatile int64_t t84 = -4906136813744715LL;
uint32_t x471 = 96U;
static uint8_t x481 = UINT8_MAX;
static int64_t x486 = -4574750LL;
uint32_t x492 = UINT32_MAX;
static uint32_t x498 = 121077472U;
static int16_t x500 = INT16_MIN;
volatile uint64_t t91 = 117241332LLU;
uint16_t x506 = UINT16_MAX;
int64_t x516 = -16100LL;
int64_t t97 = -27LL;
int8_t x529 = INT8_MAX;
int8_t x531 = -1;
volatile int8_t x532 = 1;


void f0(void) {
	volatile uint32_t x1 = 61U;
	static int16_t x2 = INT16_MAX;
	uint16_t x3 = 60U;
	int32_t x4 = -1;
	uint32_t t0 = 283U;

	t0 = (((x1|x2)*x3)-x4);

	if (t0 != 1966021U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	static int16_t x6 = -1;
	volatile int8_t x7 = -1;
	uint32_t t1 = 116U;

	t1 = (((x5|x6)*x7)-x8);

	if (t1 != 228931692U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x25 = -383124678;
	volatile int8_t x26 = INT8_MIN;
	static uint64_t x27 = 3LLU;
	static int8_t x28 = INT8_MIN;
	volatile uint64_t t2 = 232584063928752LLU;

	t2 = (((x25|x26)*x27)-x28);

	if (t2 != 18446744073709551534LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x29 = -285;
	int32_t x30 = INT32_MAX;
	int32_t x31 = INT32_MAX;
	static uint32_t x32 = 5U;
	uint32_t t3 = 53465383U;

	t3 = (((x29|x30)*x31)-x32);

	if (t3 != 2147483644U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x37 = UINT32_MAX;
	static uint16_t x39 = UINT16_MAX;
	uint32_t t4 = 675671U;

	t4 = (((x37|x38)*x39)-x40);

	if (t4 != 4294901634U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x42 = 0U;
	uint8_t x43 = UINT8_MAX;
	int64_t x44 = -1LL;

	t5 = (((x41|x42)*x43)-x44);

	if (t5 != 2061166LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x45 = -1447;
	int8_t x46 = -1;
	int16_t x47 = INT16_MIN;
	volatile uint64_t t6 = 32760LLU;

	t6 = (((x45|x46)*x47)-x48);

	if (t6 != 32769LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x49 = INT8_MAX;
	int16_t x50 = INT16_MIN;
	uint32_t x51 = UINT32_MAX;
	volatile uint16_t x52 = 47U;

	t7 = (((x49|x50)*x51)-x52);

	if (t7 != 32594U) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x53 = -1;
	int8_t x54 = INT8_MAX;
	volatile int32_t t8 = -4;

	t8 = (((x53|x54)*x55)-x56);

	if (t8 != -2147483635) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x69 = INT64_MAX;
	int64_t x70 = INT64_MIN;
	uint32_t x71 = 30632433U;
	static int16_t x72 = INT16_MAX;
	int64_t t9 = 5048857821106LL;

	t9 = (((x69|x70)*x71)-x72);

	if (t9 != -30665200LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x74 = INT32_MIN;
	int32_t x75 = 14758;
	int64_t x76 = INT64_MIN;

	t10 = (((x73|x74)*x75)-x76);

	if (t10 != 9223372036854761050LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x77 = -1;
	uint32_t x78 = UINT32_MAX;
	int32_t x79 = -1;
	int16_t x80 = INT16_MIN;

	t11 = (((x77|x78)*x79)-x80);

	if (t11 != 32769U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x85 = 1;
	volatile uint16_t x86 = 49U;

	t12 = (((x85|x86)*x87)-x88);

	if (t12 != 1605583) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x89 = 406;
	static volatile uint64_t x90 = 812429969808LLU;
	static uint8_t x91 = UINT8_MAX;
	int64_t x92 = 95LL;
	volatile uint64_t t13 = 2751100651404440LLU;

	t13 = (((x89|x90)*x91)-x92);

	if (t13 != 207169642302475LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x93 = INT64_MIN;
	int32_t x94 = -26619872;
	uint32_t x95 = 8858197U;
	int8_t x96 = -17;
	int64_t t14 = -1457920423032263LL;

	t14 = (((x93|x94)*x95)-x96);

	if (t14 != -235804070290767LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x97 = 14909292347LLU;
	int64_t x98 = -1266856212042419542LL;
	int32_t x99 = INT32_MIN;
	volatile uint64_t t15 = 3215033LLU;

	t15 = (((x97|x98)*x99)-x100);

	if (t15 != 153122535506968622LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x101 = INT8_MAX;
	int16_t x102 = -1;
	int16_t x103 = INT16_MIN;
	int32_t t16 = -15552768;

	t16 = (((x101|x102)*x103)-x104);

	if (t16 != 32318) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x109 = UINT8_MAX;
	static int16_t x110 = INT16_MAX;
	uint32_t t17 = 9401U;

	t17 = (((x109|x110)*x111)-x112);

	if (t17 != 1751657147U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x113 = -1;
	int16_t x114 = -800;
	static volatile int32_t x116 = INT32_MIN;
	int32_t t18 = -2172199;

	t18 = (((x113|x114)*x115)-x116);

	if (t18 != 2147483622) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x117 = 1U;
	static uint16_t x118 = 2410U;
	volatile int64_t x119 = 0LL;
	static volatile int64_t t19 = 10LL;

	t19 = (((x117|x118)*x119)-x120);

	if (t19 != -21LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x121 = -1LL;
	volatile int64_t x122 = 3LL;
	volatile uint64_t x123 = UINT64_MAX;
	int8_t x124 = INT8_MIN;

	t20 = (((x121|x122)*x123)-x124);

	if (t20 != 129LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x125 = 392U;
	static uint32_t x126 = 13964604U;
	int16_t x127 = -1;

	t21 = (((x125|x126)*x127)-x128);

	if (t21 != 4281002565U) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x129 = INT16_MIN;
	static volatile int32_t x130 = -1;
	uint16_t x131 = UINT16_MAX;
	volatile int32_t t22 = 132342;

	t22 = (((x129|x130)*x131)-x132);

	if (t22 != -65535) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x138 = -2;
	uint8_t x140 = 1U;
	volatile uint64_t t23 = 23399952950LLU;

	t23 = (((x137|x138)*x139)-x140);

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x142 = INT64_MIN;
	volatile uint8_t x143 = 1U;
	static int64_t x144 = INT64_MIN;
	int64_t t24 = -98470016846902LL;

	t24 = (((x141|x142)*x143)-x144);

	if (t24 != 12LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x145 = 1024927660938LLU;
	uint32_t x146 = 14067U;
	uint16_t x148 = 5954U;
	uint64_t t25 = 6633734LLU;

	t25 = (((x145|x146)*x147)-x148);

	if (t25 != 18446743048781883587LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x150 = INT64_MIN;
	static uint64_t x151 = UINT64_MAX;
	volatile int16_t x152 = 5674;
	volatile uint64_t t26 = 5985462177LLU;

	t26 = (((x149|x150)*x151)-x152);

	if (t26 != 9223372036854768796LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x153 = INT32_MAX;
	int8_t x154 = INT8_MIN;
	volatile uint64_t x155 = 4LLU;
	static int16_t x156 = 1;
	volatile uint64_t t27 = 109LLU;

	t27 = (((x153|x154)*x155)-x156);

	if (t27 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x157 = 0;
	uint32_t x158 = 1417577U;
	int32_t x159 = -1;
	volatile int8_t x160 = -1;
	volatile uint32_t t28 = 196726U;

	t28 = (((x157|x158)*x159)-x160);

	if (t28 != 4293549720U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x161 = 2U;
	static int64_t x162 = -3614009691946LL;
	int32_t x163 = -1;
	uint64_t x164 = 611LLU;
	volatile uint64_t t29 = 455LLU;

	t29 = (((x161|x162)*x163)-x164);

	if (t29 != 3614009691335LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x165 = -1LL;
	int64_t t30 = -336706622639563743LL;

	t30 = (((x165|x166)*x167)-x168);

	if (t30 != -65623296LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x177 = UINT64_MAX;
	static int64_t x179 = -1LL;
	uint8_t x180 = UINT8_MAX;
	uint64_t t31 = 513465LLU;

	t31 = (((x177|x178)*x179)-x180);

	if (t31 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x189 = -1;
	int8_t x190 = INT8_MIN;
	int8_t x191 = INT8_MIN;
	static int8_t x192 = -3;
	volatile int32_t t32 = 1;

	t32 = (((x189|x190)*x191)-x192);

	if (t32 != 131) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x193 = 139649432LLU;
	volatile uint16_t x194 = UINT16_MAX;
	int32_t x195 = -76059;
	static int64_t x196 = INT64_MAX;
	uint64_t t33 = 1LLU;

	t33 = (((x193|x194)*x195)-x196);

	if (t33 != 9223361414666660124LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x205 = -150LL;
	int32_t x207 = 113;
	volatile int16_t x208 = -1441;
	int64_t t34 = 2414919LL;

	t34 = (((x205|x206)*x207)-x208);

	if (t34 != 1328LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x210 = -3;
	int16_t x212 = INT16_MIN;
	volatile uint32_t t35 = 50536U;

	t35 = (((x209|x210)*x211)-x212);

	if (t35 != 32771U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x217 = 4264317313581374LLU;
	int16_t x218 = INT16_MIN;
	volatile uint8_t x220 = 1U;

	t36 = (((x217|x218)*x219)-x220);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x221 = INT64_MAX;
	uint32_t x222 = 68336289U;
	static uint64_t x224 = 2235749349797259888LLU;
	volatile uint64_t t37 = 7LLU;

	t37 = (((x221|x222)*x223)-x224);

	if (t37 != 6987622687057486061LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x225 = 1U;
	int8_t x227 = INT8_MIN;
	static volatile int8_t x228 = 4;
	int64_t t38 = -44497LL;

	t38 = (((x225|x226)*x227)-x228);

	if (t38 != -5758075524LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x229 = UINT16_MAX;
	volatile int8_t x230 = -2;
	static uint64_t x231 = 11499LLU;
	static volatile int64_t x232 = 3LL;
	volatile uint64_t t39 = 8821482846466368983LLU;

	t39 = (((x229|x230)*x231)-x232);

	if (t39 != 18446744073709540114LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x234 = 27U;
	int64_t x235 = 50560LL;
	int8_t x236 = 13;
	static volatile int64_t t40 = -463299162LL;

	t40 = (((x233|x234)*x235)-x236);

	if (t40 != 6421107LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x241 = 133609079U;
	uint8_t x242 = UINT8_MAX;

	t41 = (((x241|x242)*x243)-x244);

	if (t41 != 4005578754U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x245 = -1;
	int32_t x246 = INT32_MIN;
	int64_t x247 = INT64_MAX;
	volatile int16_t x248 = -1;

	t42 = (((x245|x246)*x247)-x248);

	if (t42 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x253 = -1LL;
	static int8_t x254 = 13;
	int32_t x255 = -1;
	volatile int64_t t43 = -28806282644LL;

	t43 = (((x253|x254)*x255)-x256);

	if (t43 != 2LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x257 = 0U;
	int8_t x258 = INT8_MAX;
	uint64_t x260 = UINT64_MAX;

	t44 = (((x257|x258)*x259)-x260);

	if (t44 != 4294967170LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x261 = 5541U;
	uint64_t x263 = 118LLU;
	int32_t x264 = -1;
	volatile uint64_t t45 = 21LLU;

	t45 = (((x261|x262)*x263)-x264);

	if (t45 != 654075LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x265 = 9672U;
	volatile int16_t x266 = INT16_MIN;
	static int32_t x267 = INT32_MIN;
	uint16_t x268 = 30U;
	static uint32_t t46 = 293110U;

	t46 = (((x265|x266)*x267)-x268);

	if (t46 != 4294967266U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x269 = INT64_MAX;
	static int64_t x270 = INT64_MIN;
	static int8_t x272 = INT8_MIN;
	volatile int64_t t47 = -1235562665060LL;

	t47 = (((x269|x270)*x271)-x272);

	if (t47 != 129LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x273 = INT8_MIN;
	volatile uint32_t x274 = 6U;
	uint64_t x275 = 13793689391836361LLU;
	int16_t x276 = 5;
	volatile uint64_t t48 = 3970820126LLU;

	t48 = (((x273|x274)*x275)-x276);

	if (t48 != 9006372114071529521LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x277 = INT32_MIN;
	static int32_t x278 = 57020779;
	uint64_t x279 = 5LLU;
	volatile uint64_t t49 = 2120527600856LLU;

	t49 = (((x277|x278)*x279)-x280);

	if (t49 != 18446744063257236263LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x281 = INT16_MIN;
	int32_t x282 = INT32_MIN;
	static uint32_t x283 = 5313607U;
	int16_t x284 = -5;
	uint32_t t50 = 763U;

	t50 = (((x281|x282)*x283)-x284);

	if (t50 != 1977384965U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x289 = -1LL;
	volatile uint64_t x290 = 297LLU;
	static int64_t x291 = -37096867303543361LL;
	int32_t x292 = INT32_MIN;

	t51 = (((x289|x290)*x291)-x292);

	if (t51 != 37096869451027009LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x295 = -22225995460769LL;
	int64_t x296 = 67LL;
	volatile int64_t t52 = 6056592768LL;

	t52 = (((x293|x294)*x295)-x296);

	if (t52 != -511197895597754LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x298 = INT32_MAX;
	static int8_t x299 = INT8_MAX;
	int16_t x300 = INT16_MAX;
	int32_t t53 = 3498659;

	t53 = (((x297|x298)*x299)-x300);

	if (t53 != -32894) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x305 = 14761858LLU;
	volatile int32_t x306 = -30704498;
	volatile int32_t x308 = 211994;
	static volatile uint64_t t54 = 5287732239430790LLU;

	t54 = (((x305|x306)*x307)-x308);

	if (t54 != 18445895712496524338LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x309 = 12U;
	static volatile uint32_t x311 = 9U;
	volatile int16_t x312 = 45;
	volatile uint32_t t55 = 30U;

	t55 = (((x309|x310)*x311)-x312);

	if (t55 != 92394U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x321 = -1LL;
	int8_t x322 = INT8_MIN;
	uint8_t x323 = UINT8_MAX;
	uint16_t x324 = UINT16_MAX;
	int64_t t56 = -435927LL;

	t56 = (((x321|x322)*x323)-x324);

	if (t56 != -65790LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x325 = -1;
	int8_t x326 = INT8_MAX;
	static int32_t x327 = -1;

	t57 = (((x325|x326)*x327)-x328);

	if (t57 != 18446744071346548992LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x329 = 15LLU;
	static uint64_t x330 = 7525449278880471516LLU;
	uint32_t x332 = UINT32_MAX;
	uint64_t t58 = 11356484LLU;

	t58 = (((x329|x330)*x331)-x332);

	if (t58 != 5660482738944212993LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x338 = 44;
	volatile int16_t x339 = INT16_MIN;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t59 = 3346499567553LLU;

	t59 = (((x337|x338)*x339)-x340);

	if (t59 != 18446744073701195777LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x344 = INT64_MIN;
	int64_t t60 = 44922LL;

	t60 = (((x341|x342)*x343)-x344);

	if (t60 != 9223372036854733152LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x345 = 6;
	int8_t x346 = INT8_MAX;
	uint32_t x347 = UINT32_MAX;
	static uint32_t x348 = 26U;
	uint32_t t61 = 1419119U;

	t61 = (((x345|x346)*x347)-x348);

	if (t61 != 4294967143U) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x349 = INT32_MIN;

	t62 = (((x349|x350)*x351)-x352);

	if (t62 != 16385LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x353 = INT64_MIN;
	uint64_t x354 = 1LLU;
	volatile int16_t x356 = -1;
	static uint64_t t63 = 130185005LLU;

	t63 = (((x353|x354)*x355)-x356);

	if (t63 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x357 = -2;
	uint32_t x358 = UINT32_MAX;
	static uint64_t x359 = 76468LLU;
	static uint32_t x360 = 85U;
	uint64_t t64 = 94LLU;

	t64 = (((x357|x358)*x359)-x360);

	if (t64 != 328427559113975LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x362 = -1;
	volatile int8_t x363 = INT8_MIN;
	uint32_t x364 = 11356883U;
	int64_t t65 = 6033429LL;

	t65 = (((x361|x362)*x363)-x364);

	if (t65 != -11356755LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x366 = INT16_MIN;
	int16_t x367 = -1;
	uint8_t x368 = 2U;
	int32_t t66 = 0;

	t66 = (((x365|x366)*x367)-x368);

	if (t66 != 32766) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x373 = INT32_MIN;
	int64_t x374 = INT64_MIN;
	static int32_t x375 = INT32_MIN;
	int8_t x376 = -1;
	volatile int64_t t67 = 4157843602758314331LL;

	t67 = (((x373|x374)*x375)-x376);

	if (t67 != 4611686018427387905LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x383 = -27;
	uint64_t t68 = 5257224663097756602LLU;

	t68 = (((x381|x382)*x383)-x384);

	if (t68 != 728757LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x386 = 18297U;
	volatile uint8_t x388 = 7U;
	static volatile int32_t t69 = 44042868;

	t69 = (((x385|x386)*x387)-x388);

	if (t69 != -2342535) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x389 = 909159LLU;
	uint64_t x390 = 4494635447798573LLU;
	volatile uint64_t x391 = 492480496563929200LLU;
	int32_t x392 = -1;
	volatile uint64_t t70 = 4102LLU;

	t70 = (((x389|x390)*x391)-x392);

	if (t70 != 12178384086436249745LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x393 = 59U;
	int64_t x395 = -1984084LL;
	static int8_t x396 = INT8_MIN;
	static int64_t t71 = -7320545LL;

	t71 = (((x393|x394)*x395)-x396);

	if (t71 != 12241948508888356LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x397 = INT8_MIN;
	int16_t x398 = 135;
	volatile int32_t x399 = -29058;
	int16_t x400 = INT16_MAX;
	static int32_t t72 = 3101104;

	t72 = (((x397|x398)*x399)-x400);

	if (t72 != 3483251) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x402 = INT8_MIN;
	uint8_t x403 = UINT8_MAX;
	volatile int64_t t73 = -67102166295LL;

	t73 = (((x401|x402)*x403)-x404);

	if (t73 != -32639LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x409 = -1;
	int8_t x411 = INT8_MIN;
	static int8_t x412 = INT8_MIN;
	int32_t t74 = -6867;

	t74 = (((x409|x410)*x411)-x412);

	if (t74 != 256) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x417 = INT16_MIN;
	int16_t x419 = INT16_MAX;
	int64_t x420 = -93238137LL;

	t75 = (((x417|x418)*x419)-x420);

	if (t75 != -980470919LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x421 = INT16_MIN;
	uint16_t x422 = 5704U;
	volatile int16_t x423 = INT16_MIN;
	volatile int32_t x424 = -1;

	t76 = (((x421|x422)*x423)-x424);

	if (t76 != 886833153) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x429 = -1;
	static uint32_t x432 = UINT32_MAX;
	uint32_t t77 = 49U;

	t77 = (((x429|x430)*x431)-x432);

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x437 = -1;
	int64_t x438 = -43549618LL;
	int64_t t78 = 9LL;

	t78 = (((x437|x438)*x439)-x440);

	if (t78 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x441 = -21468;
	uint32_t x442 = 1466994U;
	uint64_t x443 = UINT64_MAX;
	uint16_t x444 = 19U;
	static uint64_t t79 = 25890826186469045LLU;

	t79 = (((x441|x442)*x443)-x444);

	if (t79 != 18446744069414588791LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x445 = INT32_MIN;
	int64_t x446 = 118379648636LL;
	int32_t x447 = INT32_MIN;
	static int16_t x448 = INT16_MIN;
	volatile int64_t t80 = 51LL;

	t80 = (((x445|x446)*x447)-x448);

	if (t80 != 4036057330138251264LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x450 = -1;
	uint8_t x451 = 1U;
	volatile int64_t x452 = INT64_MIN;
	volatile int64_t t81 = INT64_MAX;

	t81 = (((x449|x450)*x451)-x452);

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x453 = INT64_MIN;
	int8_t x454 = -1;
	static volatile int16_t x455 = 74;
	int8_t x456 = INT8_MIN;
	volatile int64_t t82 = 14LL;

	t82 = (((x453|x454)*x455)-x456);

	if (t82 != 54LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x458 = INT8_MIN;
	static volatile uint64_t x459 = UINT64_MAX;
	volatile int8_t x460 = 24;

	t83 = (((x457|x458)*x459)-x460);

	if (t83 != 104LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x464 = -1LL;

	t84 = (((x461|x462)*x463)-x464);

	if (t84 != 337025LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x465 = -1;
	int8_t x466 = -5;
	static int8_t x467 = INT8_MIN;
	int16_t x468 = INT16_MAX;
	int32_t t85 = -60;

	t85 = (((x465|x466)*x467)-x468);

	if (t85 != -32639) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x469 = 17U;
	static int16_t x470 = -115;
	int32_t x472 = INT32_MAX;
	static volatile uint32_t t86 = 0U;

	t86 = (((x469|x470)*x471)-x472);

	if (t86 != 2147474145U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x482 = 928U;
	volatile int32_t x483 = -1;
	uint32_t x484 = UINT32_MAX;
	uint32_t t87 = 1530U;

	t87 = (((x481|x482)*x483)-x484);

	if (t87 != 4294966274U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x485 = -1;
	volatile int16_t x487 = -1;
	int16_t x488 = 5;
	volatile int64_t t88 = 14435857956294844LL;

	t88 = (((x485|x486)*x487)-x488);

	if (t88 != -4LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x489 = INT8_MIN;
	static uint8_t x490 = 2U;
	int16_t x491 = INT16_MAX;
	volatile uint32_t t89 = 113427U;

	t89 = (((x489|x490)*x491)-x492);

	if (t89 != 4290838655U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x493 = 2U;
	volatile uint8_t x494 = UINT8_MAX;
	static int8_t x495 = INT8_MIN;
	static int32_t x496 = INT32_MIN;
	int32_t t90 = -4929827;

	t90 = (((x493|x494)*x495)-x496);

	if (t90 != 2147451008) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x497 = 803LLU;
	volatile int64_t x499 = INT64_MAX;

	t91 = (((x497|x498)*x499)-x500);

	if (t91 != 9223372036733730845LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x501 = -1;
	int32_t x502 = INT32_MAX;
	int16_t x503 = INT16_MAX;
	int8_t x504 = INT8_MAX;
	int32_t t92 = -6041;

	t92 = (((x501|x502)*x503)-x504);

	if (t92 != -32894) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x505 = INT16_MIN;
	int32_t x507 = -1;
	uint32_t x508 = 113U;
	uint32_t t93 = 39805476U;

	t93 = (((x505|x506)*x507)-x508);

	if (t93 != 4294967184U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x509 = INT8_MIN;
	volatile int16_t x510 = INT16_MIN;
	static int8_t x511 = -1;
	volatile uint64_t x512 = UINT64_MAX;
	uint64_t t94 = 101521686LLU;

	t94 = (((x509|x510)*x511)-x512);

	if (t94 != 129LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x513 = INT32_MAX;
	static int8_t x514 = -1;
	uint16_t x515 = 26U;
	int64_t t95 = 16340862226126330LL;

	t95 = (((x513|x514)*x515)-x516);

	if (t95 != 16074LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x517 = INT8_MIN;
	volatile int32_t x518 = -6693783;
	int64_t x519 = -241LL;
	static int32_t x520 = -3841604;
	int64_t t96 = 147215LL;

	t96 = (((x517|x518)*x519)-x520);

	if (t96 != 3847147LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x521 = -1;
	static volatile int32_t x522 = -37737;
	int16_t x523 = INT16_MIN;
	int64_t x524 = INT64_MAX;

	t97 = (((x521|x522)*x523)-x524);

	if (t97 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x525 = 37U;
	volatile int32_t x526 = INT32_MIN;
	uint32_t x527 = 30U;
	static volatile uint64_t x528 = 1451542LLU;
	static volatile uint64_t t98 = 116LLU;

	t98 = (((x525|x526)*x527)-x528);

	if (t98 != 18446744073708101184LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x530 = 12064067;
	int32_t t99 = 59;

	t99 = (((x529|x530)*x531)-x532);

	if (t99 != -12064128) { NG(); } else { ; }
	
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

