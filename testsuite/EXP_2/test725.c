#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = -142;
int64_t x4 = 8490648LL;
int32_t x14 = -1;
static int16_t x16 = INT16_MIN;
volatile uint32_t x20 = UINT32_MAX;
int16_t x25 = INT16_MIN;
volatile uint8_t x27 = UINT8_MAX;
uint32_t x30 = 44U;
int32_t t6 = 2;
int32_t x43 = INT32_MAX;
int32_t t7 = 0;
int16_t x53 = INT16_MIN;
static int32_t x62 = INT32_MAX;
int64_t x73 = 88821161LL;
static int16_t x74 = 107;
volatile int32_t t11 = 46;
static uint16_t x77 = 4U;
int32_t x78 = -2;
int32_t t16 = 257;
static volatile uint16_t x106 = 3319U;
uint16_t x108 = 1U;
static int32_t t17 = 642176925;
int16_t x110 = INT16_MAX;
int32_t x111 = 5;
static int32_t t18 = 14;
static volatile int8_t x115 = INT8_MIN;
static int64_t x129 = INT64_MAX;
uint64_t x131 = UINT64_MAX;
static int8_t x132 = -1;
static uint8_t x134 = UINT8_MAX;
uint16_t x135 = 34U;
static int32_t t22 = -109883909;
int32_t x148 = -1;
volatile int32_t t24 = -300092;
uint16_t x149 = UINT16_MAX;
int8_t x152 = -1;
int64_t x154 = -744357927LL;
volatile uint8_t x159 = UINT8_MAX;
static int16_t x162 = INT16_MIN;
int32_t x163 = -59;
uint16_t x166 = 1U;
static int32_t x171 = 77;
int32_t t30 = 1;
static volatile int8_t x177 = -1;
uint16_t x179 = 20U;
static uint8_t x181 = 104U;
static uint8_t x186 = 7U;
uint32_t x188 = 6U;
int32_t t36 = 618692;
int32_t x205 = INT32_MIN;
uint8_t x208 = UINT8_MAX;
uint32_t x216 = 44U;
uint32_t x223 = 187510U;
volatile int8_t x224 = -1;
uint8_t x227 = 40U;
static int8_t x229 = INT8_MIN;
int16_t x231 = INT16_MIN;
int32_t x254 = 1113;
int16_t x265 = -67;
volatile int16_t x269 = INT16_MAX;
static volatile uint8_t x285 = UINT8_MAX;
static volatile int16_t x292 = -1;
uint16_t x296 = UINT16_MAX;
int8_t x305 = INT8_MIN;
int32_t t56 = -64172;
int16_t x315 = INT16_MIN;
uint32_t x328 = 178242U;
volatile int32_t t59 = 174923521;
static int16_t x335 = 411;
static int8_t x341 = 3;
int32_t x364 = -23;
int64_t x365 = INT64_MAX;
int16_t x370 = -5;
uint8_t x374 = 2U;
volatile int32_t t69 = 432571;
volatile int64_t x382 = -1LL;
static int32_t x384 = 284;
uint8_t x385 = 56U;
int32_t t73 = -378;
uint16_t x396 = 1U;
uint16_t x398 = UINT16_MAX;
uint16_t x415 = 483U;
volatile int32_t t76 = -38958;
uint8_t x427 = UINT8_MAX;
volatile int32_t t77 = -35;
volatile uint16_t x439 = 4074U;
static int32_t t79 = 433565;
volatile uint8_t x452 = 0U;
int32_t t80 = -146;
int8_t x459 = INT8_MIN;
volatile int64_t x460 = INT64_MAX;
uint64_t x468 = 207274111LLU;
int32_t t83 = -9636566;
volatile int8_t x485 = 0;
int32_t x487 = INT32_MAX;
int8_t x494 = -31;
uint64_t x496 = 91983108LLU;
volatile int32_t t86 = 1;
volatile int8_t x501 = INT8_MIN;
int32_t t87 = -429226391;
volatile int32_t t88 = -90;
int64_t x516 = INT64_MAX;
int16_t x524 = INT16_MIN;
uint8_t x525 = UINT8_MAX;
uint32_t x526 = 7973982U;
uint64_t x528 = UINT64_MAX;
int32_t t92 = 39664932;
int32_t t94 = 226828;
volatile uint32_t x544 = 5U;
static int16_t x556 = -1;
uint8_t x558 = 92U;
static int32_t t99 = -735;


void f0(void) {
	uint8_t x2 = UINT8_MAX;
	int8_t x3 = -8;
	int32_t t0 = -609950930;

	t0 = ((x1/(x2%x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = UINT16_MAX;
	int8_t x6 = INT8_MIN;
	int64_t x7 = INT64_MAX;
	int64_t x8 = INT64_MIN;
	int32_t t1 = -4646158;

	t1 = ((x5/(x6%x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int32_t x10 = INT32_MAX;
	int8_t x11 = INT8_MIN;
	volatile int8_t x12 = 0;
	volatile int32_t t2 = -248;

	t2 = ((x9/(x10%x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 2397U;
	static volatile uint8_t x15 = 95U;
	volatile int32_t t3 = 667117425;

	t3 = ((x13/(x14%x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int64_t x18 = -1LL;
	uint64_t x19 = 2LLU;
	static int32_t t4 = 1976941;

	t4 = ((x17/(x18%x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x26 = INT64_MAX;
	uint16_t x28 = UINT16_MAX;
	int32_t t5 = 4907798;

	t5 = ((x25/(x26%x27))<=x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	volatile int8_t x31 = INT8_MIN;
	int16_t x32 = -1;

	t6 = ((x29/(x30%x31))<=x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x41 = -637982433;
	static int16_t x42 = -36;
	static int32_t x44 = INT32_MIN;

	t7 = ((x41/(x42%x43))<=x44);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = 74469;
	int16_t x46 = INT16_MIN;
	volatile uint32_t x47 = 2226792U;
	int32_t x48 = INT32_MAX;
	volatile int32_t t8 = 1;

	t8 = ((x45/(x46%x47))<=x48);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x54 = INT16_MIN;
	int32_t x55 = 2372;
	int64_t x56 = INT64_MAX;
	int32_t t9 = -5173220;

	t9 = ((x53/(x54%x55))<=x56);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x61 = 24U;
	uint64_t x63 = 4LLU;
	uint32_t x64 = 3U;
	volatile int32_t t10 = -278;

	t10 = ((x61/(x62%x63))<=x64);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x75 = INT16_MAX;
	uint64_t x76 = UINT64_MAX;

	t11 = ((x73/(x74%x75))<=x76);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x79 = INT8_MIN;
	static uint16_t x80 = 659U;
	static volatile int32_t t12 = 3859;

	t12 = ((x77/(x78%x79))<=x80);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x81 = -1;
	static volatile uint64_t x82 = 468344038857LLU;
	volatile int32_t x83 = INT32_MIN;
	static uint8_t x84 = UINT8_MAX;
	int32_t t13 = -26977655;

	t13 = ((x81/(x82%x83))<=x84);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x89 = UINT8_MAX;
	static int8_t x90 = INT8_MIN;
	int32_t x91 = INT32_MAX;
	uint16_t x92 = 10U;
	int32_t t14 = 505522;

	t14 = ((x89/(x90%x91))<=x92);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x97 = 15U;
	uint8_t x98 = 10U;
	uint32_t x99 = 630107U;
	int32_t x100 = INT32_MIN;
	int32_t t15 = 69657707;

	t15 = ((x97/(x98%x99))<=x100);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x101 = UINT8_MAX;
	uint16_t x102 = 27U;
	int32_t x103 = 126063;
	int8_t x104 = INT8_MIN;

	t16 = ((x101/(x102%x103))<=x104);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x105 = -1LL;
	static uint64_t x107 = 7884233608472147606LLU;

	t17 = ((x105/(x106%x107))<=x108);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x109 = 0U;
	uint8_t x112 = UINT8_MAX;

	t18 = ((x109/(x110%x111))<=x112);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x113 = 326192U;
	uint32_t x114 = 229534U;
	int8_t x116 = -1;
	volatile int32_t t19 = -339;

	t19 = ((x113/(x114%x115))<=x116);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x130 = INT16_MIN;
	int32_t t20 = -63917;

	t20 = ((x129/(x130%x131))<=x132);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x133 = 1434602LLU;
	int64_t x136 = INT64_MIN;
	volatile int32_t t21 = 0;

	t21 = ((x133/(x134%x135))<=x136);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x137 = 145969199U;
	volatile uint16_t x138 = 24786U;
	int16_t x139 = INT16_MAX;
	static uint8_t x140 = 1U;

	t22 = ((x137/(x138%x139))<=x140);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x141 = 2838U;
	volatile int16_t x142 = INT16_MIN;
	uint32_t x143 = UINT32_MAX;
	volatile int16_t x144 = 1;
	static int32_t t23 = -1577;

	t23 = ((x141/(x142%x143))<=x144);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x145 = 219002U;
	static uint32_t x146 = UINT32_MAX;
	volatile int8_t x147 = 23;

	t24 = ((x145/(x146%x147))<=x148);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x150 = 104U;
	uint16_t x151 = 2927U;
	volatile int32_t t25 = 4854;

	t25 = ((x149/(x150%x151))<=x152);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x153 = INT64_MIN;
	uint32_t x155 = 38331048U;
	volatile int16_t x156 = INT16_MAX;
	volatile int32_t t26 = 481171174;

	t26 = ((x153/(x154%x155))<=x156);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x157 = 9U;
	uint64_t x158 = 18583560906192LLU;
	uint8_t x160 = 30U;
	static int32_t t27 = 348;

	t27 = ((x157/(x158%x159))<=x160);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x161 = INT32_MIN;
	static uint8_t x164 = 41U;
	volatile int32_t t28 = -14328171;

	t28 = ((x161/(x162%x163))<=x164);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x165 = 6U;
	int32_t x167 = -374438;
	uint64_t x168 = UINT64_MAX;
	static volatile int32_t t29 = 29703;

	t29 = ((x165/(x166%x167))<=x168);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x169 = UINT32_MAX;
	volatile int32_t x170 = -23911;
	volatile int16_t x172 = INT16_MIN;

	t30 = ((x169/(x170%x171))<=x172);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x173 = INT64_MIN;
	uint16_t x174 = UINT16_MAX;
	int16_t x175 = INT16_MIN;
	static uint16_t x176 = 0U;
	volatile int32_t t31 = -69574;

	t31 = ((x173/(x174%x175))<=x176);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x178 = 5;
	int64_t x180 = 99768477418LL;
	int32_t t32 = 72246;

	t32 = ((x177/(x178%x179))<=x180);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x182 = INT16_MIN;
	uint16_t x183 = 6028U;
	uint8_t x184 = 15U;
	int32_t t33 = -3315659;

	t33 = ((x181/(x182%x183))<=x184);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x185 = 1658U;
	static volatile int32_t x187 = 7741147;
	int32_t t34 = 15;

	t34 = ((x185/(x186%x187))<=x188);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x189 = UINT32_MAX;
	uint64_t x190 = 486511117LLU;
	volatile int64_t x191 = 479249LL;
	int16_t x192 = INT16_MIN;
	int32_t t35 = 5601170;

	t35 = ((x189/(x190%x191))<=x192);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x193 = INT64_MIN;
	int8_t x194 = INT8_MAX;
	uint64_t x195 = UINT64_MAX;
	volatile int64_t x196 = 13107LL;

	t36 = ((x193/(x194%x195))<=x196);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x206 = 5;
	volatile int32_t x207 = INT32_MIN;
	static volatile int32_t t37 = 2120045;

	t37 = ((x205/(x206%x207))<=x208);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x209 = 1589793416LLU;
	volatile int32_t x210 = -1;
	int32_t x211 = INT32_MIN;
	int16_t x212 = -1;
	int32_t t38 = 164;

	t38 = ((x209/(x210%x211))<=x212);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x213 = INT32_MAX;
	volatile int16_t x214 = INT16_MAX;
	uint32_t x215 = 124603U;
	volatile int32_t t39 = 1;

	t39 = ((x213/(x214%x215))<=x216);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x217 = 3874;
	static volatile int16_t x218 = 2;
	uint64_t x219 = UINT64_MAX;
	int8_t x220 = -1;
	volatile int32_t t40 = 134744477;

	t40 = ((x217/(x218%x219))<=x220);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x221 = INT8_MIN;
	static int32_t x222 = INT32_MIN;
	int32_t t41 = 0;

	t41 = ((x221/(x222%x223))<=x224);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x225 = -2;
	int32_t x226 = -223551;
	volatile int16_t x228 = -1;
	int32_t t42 = -2969;

	t42 = ((x225/(x226%x227))<=x228);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x230 = -3574;
	uint64_t x232 = UINT64_MAX;
	volatile int32_t t43 = 243;

	t43 = ((x229/(x230%x231))<=x232);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x233 = 0;
	int32_t x234 = -1;
	int16_t x235 = INT16_MAX;
	volatile int16_t x236 = -1;
	int32_t t44 = 791208;

	t44 = ((x233/(x234%x235))<=x236);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x245 = -5;
	int32_t x246 = -1;
	int64_t x247 = INT64_MAX;
	int32_t x248 = INT32_MIN;
	static int32_t t45 = -342;

	t45 = ((x245/(x246%x247))<=x248);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x253 = 7;
	uint32_t x255 = 183U;
	int32_t x256 = INT32_MIN;
	volatile int32_t t46 = -419;

	t46 = ((x253/(x254%x255))<=x256);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x261 = INT64_MAX;
	uint16_t x262 = 877U;
	uint32_t x263 = 24U;
	int16_t x264 = 7435;
	int32_t t47 = 121;

	t47 = ((x261/(x262%x263))<=x264);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x266 = INT16_MIN;
	uint32_t x267 = 185230U;
	int16_t x268 = 15718;
	int32_t t48 = -1642829;

	t48 = ((x265/(x266%x267))<=x268);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x270 = 1U;
	volatile uint64_t x271 = 45029854775739582LLU;
	int64_t x272 = -93LL;
	int32_t t49 = 108997;

	t49 = ((x269/(x270%x271))<=x272);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x281 = 263636522LLU;
	static uint32_t x282 = 1278297625U;
	uint64_t x283 = UINT64_MAX;
	int64_t x284 = INT64_MIN;
	volatile int32_t t50 = -733658191;

	t50 = ((x281/(x282%x283))<=x284);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint8_t x286 = 4U;
	int16_t x287 = INT16_MIN;
	static int32_t x288 = INT32_MAX;
	volatile int32_t t51 = -29572;

	t51 = ((x285/(x286%x287))<=x288);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x289 = 577911461U;
	uint8_t x290 = 34U;
	int32_t x291 = INT32_MAX;
	int32_t t52 = -85340;

	t52 = ((x289/(x290%x291))<=x292);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x293 = INT64_MAX;
	uint32_t x294 = 169U;
	uint16_t x295 = 81U;
	int32_t t53 = -26263365;

	t53 = ((x293/(x294%x295))<=x296);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x297 = 2;
	volatile int16_t x298 = -1;
	uint8_t x299 = 27U;
	int64_t x300 = 6885LL;
	volatile int32_t t54 = -53618;

	t54 = ((x297/(x298%x299))<=x300);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x306 = INT64_MAX;
	uint16_t x307 = UINT16_MAX;
	uint8_t x308 = 101U;
	static volatile int32_t t55 = 1;

	t55 = ((x305/(x306%x307))<=x308);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x309 = INT8_MAX;
	int8_t x310 = INT8_MIN;
	uint32_t x311 = 99659U;
	int16_t x312 = -1;

	t56 = ((x309/(x310%x311))<=x312);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x313 = 7;
	uint64_t x314 = UINT64_MAX;
	int16_t x316 = 0;
	volatile int32_t t57 = 110;

	t57 = ((x313/(x314%x315))<=x316);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x321 = INT16_MAX;
	uint32_t x322 = 467059755U;
	int8_t x323 = -1;
	static uint16_t x324 = 34U;
	volatile int32_t t58 = -93;

	t58 = ((x321/(x322%x323))<=x324);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x325 = INT16_MIN;
	uint64_t x326 = 14029LLU;
	int32_t x327 = INT32_MIN;

	t59 = ((x325/(x326%x327))<=x328);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x329 = 210828917U;
	int8_t x330 = -13;
	static uint32_t x331 = 3949953U;
	volatile int8_t x332 = -4;
	static volatile int32_t t60 = 41334;

	t60 = ((x329/(x330%x331))<=x332);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x333 = 1313895757U;
	uint16_t x334 = UINT16_MAX;
	int8_t x336 = -1;
	volatile int32_t t61 = -36379212;

	t61 = ((x333/(x334%x335))<=x336);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x337 = 138U;
	int32_t x338 = 6;
	uint32_t x339 = UINT32_MAX;
	volatile int16_t x340 = -1;
	volatile int32_t t62 = 993347221;

	t62 = ((x337/(x338%x339))<=x340);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x342 = INT32_MIN;
	uint32_t x343 = 17U;
	int16_t x344 = INT16_MAX;
	int32_t t63 = 117;

	t63 = ((x341/(x342%x343))<=x344);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x349 = -1LL;
	volatile int32_t x350 = -397664;
	volatile uint64_t x351 = 30559LLU;
	static int16_t x352 = -1;
	volatile int32_t t64 = -2;

	t64 = ((x349/(x350%x351))<=x352);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x357 = -1290;
	int8_t x358 = INT8_MAX;
	uint32_t x359 = UINT32_MAX;
	uint8_t x360 = 0U;
	int32_t t65 = -379554200;

	t65 = ((x357/(x358%x359))<=x360);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x361 = INT8_MAX;
	uint8_t x362 = 27U;
	int8_t x363 = 2;
	static volatile int32_t t66 = 30744;

	t66 = ((x361/(x362%x363))<=x364);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x366 = INT64_MIN;
	int16_t x367 = INT16_MAX;
	int32_t x368 = -1;
	static volatile int32_t t67 = 826;

	t67 = ((x365/(x366%x367))<=x368);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x369 = INT64_MIN;
	uint32_t x371 = UINT32_MAX;
	int64_t x372 = 125298LL;
	volatile int32_t t68 = -2071;

	t68 = ((x369/(x370%x371))<=x372);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x373 = INT16_MIN;
	static int64_t x375 = INT64_MAX;
	int32_t x376 = 1040;

	t69 = ((x373/(x374%x375))<=x376);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x377 = 22480763;
	uint32_t x378 = 119489U;
	static volatile int8_t x379 = 2;
	int32_t x380 = -1;
	int32_t t70 = -551;

	t70 = ((x377/(x378%x379))<=x380);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x381 = INT32_MIN;
	int64_t x383 = INT64_MAX;
	volatile int32_t t71 = -3;

	t71 = ((x381/(x382%x383))<=x384);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x386 = 658U;
	int64_t x387 = 120178470LL;
	volatile uint32_t x388 = 71U;
	static int32_t t72 = -250;

	t72 = ((x385/(x386%x387))<=x388);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x389 = 62453U;
	int8_t x390 = INT8_MAX;
	uint64_t x391 = UINT64_MAX;
	int64_t x392 = -1763633475LL;

	t73 = ((x389/(x390%x391))<=x392);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x393 = -1;
	uint64_t x394 = UINT64_MAX;
	uint32_t x395 = 5273272U;
	volatile int32_t t74 = 5;

	t74 = ((x393/(x394%x395))<=x396);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x397 = -1;
	static int8_t x399 = INT8_MIN;
	int16_t x400 = -1;
	static int32_t t75 = 3;

	t75 = ((x397/(x398%x399))<=x400);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x413 = -3;
	uint32_t x414 = 1U;
	uint16_t x416 = UINT16_MAX;

	t76 = ((x413/(x414%x415))<=x416);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x425 = -1;
	int64_t x426 = -1LL;
	int8_t x428 = 1;

	t77 = ((x425/(x426%x427))<=x428);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x437 = INT64_MIN;
	static volatile int32_t x438 = 797;
	volatile int32_t x440 = INT32_MIN;
	volatile int32_t t78 = 5;

	t78 = ((x437/(x438%x439))<=x440);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x445 = -1LL;
	uint16_t x446 = 24098U;
	static int8_t x447 = 8;
	static uint8_t x448 = 108U;

	t79 = ((x445/(x446%x447))<=x448);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x449 = -1;
	int16_t x450 = INT16_MAX;
	volatile int64_t x451 = INT64_MIN;

	t80 = ((x449/(x450%x451))<=x452);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x457 = 0;
	int8_t x458 = -1;
	int32_t t81 = -8;

	t81 = ((x457/(x458%x459))<=x460);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x465 = 114U;
	static int16_t x466 = INT16_MIN;
	int32_t x467 = INT32_MIN;
	int32_t t82 = -183487547;

	t82 = ((x465/(x466%x467))<=x468);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x469 = 6371U;
	volatile uint64_t x470 = 15679LLU;
	int64_t x471 = -1LL;
	int16_t x472 = INT16_MIN;

	t83 = ((x469/(x470%x471))<=x472);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x481 = -41;
	static int64_t x482 = -3LL;
	static int64_t x483 = 2413003621610157015LL;
	int64_t x484 = INT64_MAX;
	volatile int32_t t84 = -82744139;

	t84 = ((x481/(x482%x483))<=x484);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x486 = INT32_MIN;
	static int8_t x488 = INT8_MAX;
	volatile int32_t t85 = 1;

	t85 = ((x485/(x486%x487))<=x488);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x493 = 0U;
	int8_t x495 = INT8_MIN;

	t86 = ((x493/(x494%x495))<=x496);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x502 = 1U;
	int32_t x503 = INT32_MIN;
	int32_t x504 = INT32_MAX;

	t87 = ((x501/(x502%x503))<=x504);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x509 = -743370;
	volatile uint64_t x510 = UINT64_MAX;
	static int8_t x511 = INT8_MIN;
	static volatile int32_t x512 = INT32_MIN;

	t88 = ((x509/(x510%x511))<=x512);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x513 = 5312750LL;
	static volatile int32_t x514 = -1;
	int64_t x515 = -192600062LL;
	int32_t t89 = 4503292;

	t89 = ((x513/(x514%x515))<=x516);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x517 = -156;
	int8_t x518 = INT8_MIN;
	static uint64_t x519 = UINT64_MAX;
	volatile uint32_t x520 = 46902593U;
	int32_t t90 = 43;

	t90 = ((x517/(x518%x519))<=x520);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x521 = 92776LLU;
	uint16_t x522 = 1139U;
	static int16_t x523 = -1317;
	int32_t t91 = 1;

	t91 = ((x521/(x522%x523))<=x524);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x527 = INT64_MIN;

	t92 = ((x525/(x526%x527))<=x528);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x533 = UINT16_MAX;
	uint8_t x534 = UINT8_MAX;
	int8_t x535 = 10;
	static uint16_t x536 = 3U;
	volatile int32_t t93 = 950659343;

	t93 = ((x533/(x534%x535))<=x536);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x537 = -1;
	int32_t x538 = INT32_MIN;
	int64_t x539 = INT64_MAX;
	volatile int64_t x540 = -1LL;

	t94 = ((x537/(x538%x539))<=x540);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x541 = -1;
	uint32_t x542 = 16U;
	int64_t x543 = INT64_MAX;
	int32_t t95 = -7;

	t95 = ((x541/(x542%x543))<=x544);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x545 = UINT16_MAX;
	int8_t x546 = -1;
	int16_t x547 = INT16_MIN;
	volatile uint16_t x548 = 229U;
	static int32_t t96 = 0;

	t96 = ((x545/(x546%x547))<=x548);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x549 = INT16_MIN;
	int8_t x550 = INT8_MAX;
	static volatile int64_t x551 = INT64_MIN;
	int64_t x552 = -164974301799958826LL;
	static int32_t t97 = -79514;

	t97 = ((x549/(x550%x551))<=x552);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x553 = INT32_MAX;
	static uint16_t x554 = 162U;
	int8_t x555 = -16;
	volatile int32_t t98 = -632;

	t98 = ((x553/(x554%x555))<=x556);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x557 = INT64_MIN;
	static int64_t x559 = INT64_MAX;
	static uint16_t x560 = UINT16_MAX;

	t99 = ((x557/(x558%x559))<=x560);

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

