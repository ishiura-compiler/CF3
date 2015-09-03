#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -1;
volatile int32_t t0 = -264;
uint8_t x6 = 15U;
volatile int32_t t2 = -6047;
int32_t x19 = 950;
static volatile int8_t x22 = -1;
int32_t x25 = INT32_MAX;
uint8_t x34 = UINT8_MAX;
int64_t x35 = INT64_MIN;
int8_t x38 = -1;
int16_t x43 = 652;
uint64_t x57 = 6302686251382759LLU;
int32_t x59 = INT32_MAX;
int16_t x67 = INT16_MIN;
uint8_t x68 = 0U;
int32_t t15 = 507245;
volatile uint64_t x69 = 4LLU;
int32_t t16 = 2593414;
static int8_t x74 = -2;
int32_t x83 = INT32_MAX;
static int32_t t20 = 502351;
static volatile int32_t t21 = 98584657;
int16_t x93 = INT16_MAX;
uint32_t x102 = 243888043U;
int8_t x114 = -8;
static volatile uint16_t x116 = 61U;
volatile int16_t x120 = -230;
int32_t t27 = -16409528;
static int64_t x126 = INT64_MAX;
uint16_t x127 = UINT16_MAX;
static int8_t x132 = INT8_MIN;
int32_t t31 = -4367;
int32_t x137 = INT32_MAX;
int64_t x138 = INT64_MIN;
uint16_t x140 = 26829U;
uint16_t x143 = 490U;
int8_t x145 = INT8_MAX;
static int16_t x148 = -1;
int32_t t35 = -320;
int64_t x154 = -115051LL;
volatile int32_t t36 = -5;
uint64_t x160 = UINT64_MAX;
int16_t x167 = INT16_MIN;
int16_t x170 = -1;
uint32_t x172 = 71546U;
static volatile int64_t x173 = -488038LL;
volatile int32_t t41 = -491;
static volatile int32_t x184 = INT32_MIN;
volatile int8_t x194 = -1;
int64_t x196 = INT64_MIN;
int16_t x202 = 361;
int64_t x203 = -1LL;
int32_t t47 = -48;
volatile int32_t t48 = -146086446;
volatile int32_t x209 = INT32_MIN;
int16_t x216 = -4328;
uint64_t x219 = 603615678365LLU;
volatile int64_t x222 = -77829846835313929LL;
volatile int16_t x235 = -2;
uint16_t x236 = 29U;
int32_t t53 = -2045;
int16_t x242 = INT16_MAX;
volatile uint64_t x243 = 8122029937560265243LLU;
volatile int16_t x245 = 1;
int64_t x246 = INT64_MAX;
int8_t x251 = INT8_MIN;
int32_t t57 = 16427;
static int32_t x253 = INT32_MIN;
static uint16_t x254 = UINT16_MAX;
volatile int64_t x258 = INT64_MIN;
volatile uint64_t x260 = UINT64_MAX;
int16_t x271 = INT16_MIN;
volatile int8_t x273 = INT8_MIN;
volatile int32_t x274 = -1;
static uint32_t x287 = 73U;
uint8_t x290 = UINT8_MAX;
volatile int32_t t65 = -472;
int32_t t66 = 1;
int32_t t67 = 0;
int8_t x317 = INT8_MIN;
int32_t t70 = -85493573;
int8_t x321 = INT8_MIN;
uint8_t x322 = UINT8_MAX;
uint8_t x324 = 25U;
static volatile int8_t x329 = INT8_MIN;
static uint64_t x333 = 155640098186155LLU;
int32_t x336 = -1;
volatile int32_t t76 = 253;
uint64_t x356 = 641926549LLU;
uint64_t x367 = UINT64_MAX;
int32_t t80 = 1002;
static uint32_t x375 = 1438128U;
uint16_t x379 = 2586U;
int16_t x383 = 4;
static int16_t x384 = INT16_MIN;
static int8_t x385 = INT8_MIN;
volatile int32_t t84 = 55772;
static int32_t t85 = 1;
volatile int32_t t86 = -60661959;
int16_t x401 = INT16_MIN;
int32_t t87 = 217;
uint8_t x406 = 3U;
int32_t x408 = -205;
int32_t x409 = -1;
volatile int32_t x410 = 52387;
volatile int32_t t89 = 268930191;
int16_t x415 = -1;
int8_t x416 = -1;
int64_t x418 = -362LL;
uint32_t x420 = UINT32_MAX;
uint32_t x426 = 1U;
int8_t x427 = INT8_MIN;
int32_t t93 = 482;
volatile int64_t x430 = -1619LL;
int32_t x441 = -1;
static int32_t t97 = -1;
int16_t x463 = 2;


void f0(void) {
	uint8_t x1 = 20U;
	int64_t x3 = INT64_MIN;
	volatile int16_t x4 = 5428;

	t0 = (x1<((x2%x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	volatile int16_t x7 = -1;
	static int64_t x8 = INT64_MIN;
	int32_t t1 = 385;

	t1 = (x5<((x6%x7)*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -3684;
	int8_t x10 = INT8_MIN;
	static uint64_t x11 = 220357118683814LLU;
	int8_t x12 = INT8_MIN;

	t2 = (x9<((x10%x11)*x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -556LL;
	uint32_t x14 = UINT32_MAX;
	uint8_t x15 = UINT8_MAX;
	static uint64_t x16 = UINT64_MAX;
	volatile int32_t t3 = 218020;

	t3 = (x13<((x14%x15)*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	uint8_t x18 = UINT8_MAX;
	int8_t x20 = 3;
	int32_t t4 = -110;

	t4 = (x17<((x18%x19)*x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	uint16_t x23 = UINT16_MAX;
	uint16_t x24 = 0U;
	int32_t t5 = 7;

	t5 = (x21<((x22%x23)*x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MAX;
	volatile int64_t x27 = -1LL;
	volatile uint8_t x28 = 86U;
	int32_t t6 = 10152;

	t6 = (x25<((x26%x27)*x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = 10;
	static int64_t x30 = INT64_MIN;
	int16_t x31 = INT16_MAX;
	uint32_t x32 = 42945U;
	int32_t t7 = -1;

	t7 = (x29<((x30%x31)*x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	uint64_t x36 = 59LLU;
	int32_t t8 = 1556;

	t8 = (x33<((x34%x35)*x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = 64830;
	int8_t x39 = INT8_MIN;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = -48992;

	t9 = (x37<((x38%x39)*x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -1;
	int64_t x42 = INT64_MIN;
	uint32_t x44 = 3982U;
	int32_t t10 = -196637;

	t10 = (x41<((x42%x43)*x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	uint32_t x50 = UINT32_MAX;
	int64_t x51 = 90917LL;
	int8_t x52 = INT8_MAX;
	static int32_t t11 = 179;

	t11 = (x49<((x50%x51)*x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = UINT32_MAX;
	int8_t x54 = INT8_MAX;
	static uint32_t x55 = 7U;
	int8_t x56 = INT8_MAX;
	int32_t t12 = 69747144;

	t12 = (x53<((x54%x55)*x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x58 = INT16_MIN;
	volatile uint16_t x60 = 3U;
	int32_t t13 = 340;

	t13 = (x57<((x58%x59)*x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x61 = -52;
	int16_t x62 = 1;
	volatile int64_t x63 = INT64_MAX;
	uint16_t x64 = UINT16_MAX;
	int32_t t14 = -5;

	t14 = (x61<((x62%x63)*x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -1LL;
	int8_t x66 = INT8_MAX;

	t15 = (x65<((x66%x67)*x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x70 = -336;
	int32_t x71 = INT32_MIN;
	uint8_t x72 = UINT8_MAX;

	t16 = (x69<((x70%x71)*x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = -5070;
	uint64_t x75 = 55780587LLU;
	volatile int32_t x76 = INT32_MIN;
	volatile int32_t t17 = 640253;

	t17 = (x73<((x74%x75)*x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = 863LL;
	uint64_t x78 = 3897547821086LLU;
	int64_t x79 = 115054037LL;
	uint32_t x80 = 12U;
	int32_t t18 = -331852535;

	t18 = (x77<((x78%x79)*x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MIN;
	static int64_t x82 = INT64_MIN;
	volatile int32_t x84 = INT32_MIN;
	volatile int32_t t19 = 343134229;

	t19 = (x81<((x82%x83)*x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x85 = 409U;
	static uint8_t x86 = UINT8_MAX;
	static volatile int32_t x87 = -1;
	int8_t x88 = INT8_MIN;

	t20 = (x85<((x86%x87)*x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x89 = -17;
	int8_t x90 = INT8_MIN;
	volatile int8_t x91 = INT8_MIN;
	uint64_t x92 = 6173039LLU;

	t21 = (x89<((x90%x91)*x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x94 = INT64_MAX;
	volatile int8_t x95 = -1;
	uint64_t x96 = 2416891824260510173LLU;
	volatile int32_t t22 = 126777;

	t22 = (x93<((x94%x95)*x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = 148048637876LLU;
	int8_t x103 = 5;
	int64_t x104 = -6842276800LL;
	int32_t t23 = 0;

	t23 = (x101<((x102%x103)*x104));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x105 = INT8_MIN;
	int32_t x106 = INT32_MIN;
	int64_t x107 = INT64_MAX;
	int32_t x108 = -1;
	volatile int32_t t24 = 225626855;

	t24 = (x105<((x106%x107)*x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MAX;
	int16_t x110 = INT16_MAX;
	uint8_t x111 = 2U;
	volatile int64_t x112 = INT64_MIN;
	static volatile int32_t t25 = -3758828;

	t25 = (x109<((x110%x111)*x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x113 = 0;
	volatile int64_t x115 = INT64_MAX;
	int32_t t26 = -38458;

	t26 = (x113<((x114%x115)*x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x117 = INT16_MIN;
	uint8_t x118 = 27U;
	int64_t x119 = INT64_MIN;

	t27 = (x117<((x118%x119)*x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = UINT64_MAX;
	int64_t x122 = INT64_MIN;
	static volatile uint64_t x123 = UINT64_MAX;
	volatile int8_t x124 = 0;
	volatile int32_t t28 = 463810;

	t28 = (x121<((x122%x123)*x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x125 = 3218U;
	uint8_t x128 = 3U;
	volatile int32_t t29 = -4381;

	t29 = (x125<((x126%x127)*x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = -1;
	volatile uint32_t x130 = 118389U;
	uint32_t x131 = 1U;
	int32_t t30 = 1;

	t30 = (x129<((x130%x131)*x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = 29;
	static volatile int8_t x134 = INT8_MAX;
	int32_t x135 = -1;
	static uint16_t x136 = 1U;

	t31 = (x133<((x134%x135)*x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x139 = 11;
	int32_t t32 = -1207;

	t32 = (x137<((x138%x139)*x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x141 = UINT32_MAX;
	static uint32_t x142 = 6305U;
	uint8_t x144 = 8U;
	volatile int32_t t33 = -806320;

	t33 = (x141<((x142%x143)*x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x146 = -12641;
	uint64_t x147 = 31966002537574LLU;
	static volatile int32_t t34 = 2;

	t34 = (x145<((x146%x147)*x148));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x149 = -15;
	int8_t x150 = -1;
	int16_t x151 = INT16_MIN;
	volatile uint8_t x152 = UINT8_MAX;

	t35 = (x149<((x150%x151)*x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = 7;
	volatile int32_t x155 = 943875844;
	static int8_t x156 = INT8_MIN;

	t36 = (x153<((x154%x155)*x156));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MIN;
	int8_t x158 = -1;
	uint16_t x159 = UINT16_MAX;
	volatile int32_t t37 = -2;

	t37 = (x157<((x158%x159)*x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x161 = 662;
	int64_t x162 = -1LL;
	static uint8_t x163 = 7U;
	int32_t x164 = -1;
	int32_t t38 = -3;

	t38 = (x161<((x162%x163)*x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = -5;
	int64_t x166 = -1LL;
	static int8_t x168 = -1;
	volatile int32_t t39 = 366211882;

	t39 = (x165<((x166%x167)*x168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = 1022U;
	int64_t x171 = -39578LL;
	static int32_t t40 = -1171;

	t40 = (x169<((x170%x171)*x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x174 = 450515LLU;
	uint8_t x175 = 34U;
	static uint32_t x176 = 787520U;

	t41 = (x173<((x174%x175)*x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = UINT32_MAX;
	static int32_t x178 = INT32_MIN;
	static volatile int64_t x179 = INT64_MIN;
	int32_t x180 = INT32_MIN;
	int32_t t42 = 1;

	t42 = (x177<((x178%x179)*x180));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x181 = 335436U;
	int16_t x182 = INT16_MIN;
	int64_t x183 = INT64_MAX;
	volatile int32_t t43 = -390958546;

	t43 = (x181<((x182%x183)*x184));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x185 = UINT64_MAX;
	static int16_t x186 = INT16_MIN;
	int32_t x187 = INT32_MIN;
	uint16_t x188 = 43U;
	static int32_t t44 = -397;

	t44 = (x185<((x186%x187)*x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = INT8_MIN;
	volatile int64_t x195 = -1LL;
	int32_t t45 = 13771;

	t45 = (x193<((x194%x195)*x196));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x197 = INT32_MIN;
	int64_t x198 = 499794737431387LL;
	static volatile uint16_t x199 = 65U;
	int8_t x200 = INT8_MIN;
	int32_t t46 = -7321;

	t46 = (x197<((x198%x199)*x200));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x201 = -1LL;
	int16_t x204 = INT16_MIN;

	t47 = (x201<((x202%x203)*x204));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x205 = INT32_MAX;
	static uint32_t x206 = 238957765U;
	int16_t x207 = 4;
	int32_t x208 = INT32_MAX;

	t48 = (x205<((x206%x207)*x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x210 = 6873293699LLU;
	static int16_t x211 = 11596;
	volatile int64_t x212 = -1LL;
	static int32_t t49 = -3;

	t49 = (x209<((x210%x211)*x212));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = -1;
	int32_t x214 = 213506479;
	uint16_t x215 = 545U;
	static volatile int32_t t50 = -1550710;

	t50 = (x213<((x214%x215)*x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x217 = 3290U;
	uint16_t x218 = 8331U;
	volatile uint32_t x220 = UINT32_MAX;
	int32_t t51 = -69365496;

	t51 = (x217<((x218%x219)*x220));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x221 = -1;
	int8_t x223 = -15;
	int8_t x224 = -1;
	volatile int32_t t52 = -140;

	t52 = (x221<((x222%x223)*x224));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x233 = INT16_MIN;
	static volatile int64_t x234 = -85LL;

	t53 = (x233<((x234%x235)*x236));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x237 = 582861100U;
	volatile int16_t x238 = INT16_MAX;
	uint8_t x239 = 44U;
	uint16_t x240 = 14U;
	int32_t t54 = -110360;

	t54 = (x237<((x238%x239)*x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x241 = -12;
	static int8_t x244 = INT8_MIN;
	volatile int32_t t55 = 370101;

	t55 = (x241<((x242%x243)*x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x247 = 436LL;
	int16_t x248 = INT16_MIN;
	volatile int32_t t56 = 1010068623;

	t56 = (x245<((x246%x247)*x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x249 = -584786348319824608LL;
	int32_t x250 = INT32_MIN;
	static int16_t x252 = -461;

	t57 = (x249<((x250%x251)*x252));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x255 = INT64_MIN;
	static uint64_t x256 = UINT64_MAX;
	volatile int32_t t58 = -37496;

	t58 = (x253<((x254%x255)*x256));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x257 = 1U;
	int32_t x259 = INT32_MAX;
	static int32_t t59 = -2951210;

	t59 = (x257<((x258%x259)*x260));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x265 = INT8_MIN;
	volatile int64_t x266 = -390413885167305LL;
	uint64_t x267 = 31735LLU;
	int64_t x268 = 10074663052LL;
	int32_t t60 = -96696311;

	t60 = (x265<((x266%x267)*x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x269 = 305;
	static int16_t x270 = -1;
	int16_t x272 = INT16_MIN;
	int32_t t61 = 24;

	t61 = (x269<((x270%x271)*x272));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x275 = -2;
	int64_t x276 = 3281LL;
	volatile int32_t t62 = 929273495;

	t62 = (x273<((x274%x275)*x276));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x277 = 40U;
	int8_t x278 = INT8_MIN;
	int8_t x279 = INT8_MIN;
	int32_t x280 = INT32_MAX;
	volatile int32_t t63 = 116140339;

	t63 = (x277<((x278%x279)*x280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x285 = -1;
	volatile int64_t x286 = INT64_MAX;
	int64_t x288 = INT64_MAX;
	volatile int32_t t64 = -3628758;

	t64 = (x285<((x286%x287)*x288));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x289 = INT64_MIN;
	int8_t x291 = INT8_MIN;
	volatile uint64_t x292 = 339316647LLU;

	t65 = (x289<((x290%x291)*x292));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x293 = UINT32_MAX;
	static int8_t x294 = -31;
	int16_t x295 = INT16_MAX;
	int64_t x296 = 399LL;

	t66 = (x293<((x294%x295)*x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = INT8_MIN;
	volatile int8_t x298 = INT8_MAX;
	uint16_t x299 = 1140U;
	static uint8_t x300 = UINT8_MAX;

	t67 = (x297<((x298%x299)*x300));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x301 = INT16_MAX;
	uint8_t x302 = 31U;
	uint16_t x303 = 1394U;
	volatile int8_t x304 = INT8_MIN;
	int32_t t68 = -510934;

	t68 = (x301<((x302%x303)*x304));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x305 = -237768LL;
	int16_t x306 = INT16_MIN;
	int8_t x307 = 4;
	static volatile int32_t x308 = 6;
	volatile int32_t t69 = -6248;

	t69 = (x305<((x306%x307)*x308));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x318 = INT16_MIN;
	int8_t x319 = -1;
	volatile uint64_t x320 = UINT64_MAX;

	t70 = (x317<((x318%x319)*x320));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x323 = -1;
	volatile int32_t t71 = 311175468;

	t71 = (x321<((x322%x323)*x324));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x325 = INT16_MIN;
	static uint8_t x326 = 1U;
	uint32_t x327 = UINT32_MAX;
	int16_t x328 = INT16_MIN;
	int32_t t72 = -3;

	t72 = (x325<((x326%x327)*x328));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x330 = 55U;
	int64_t x331 = -469776560LL;
	int32_t x332 = 0;
	volatile int32_t t73 = 26076;

	t73 = (x329<((x330%x331)*x332));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x334 = INT32_MIN;
	static uint64_t x335 = UINT64_MAX;
	int32_t t74 = -3763371;

	t74 = (x333<((x334%x335)*x336));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x337 = 370U;
	int16_t x338 = INT16_MIN;
	uint64_t x339 = 62982LLU;
	int32_t x340 = -74;
	int32_t t75 = 741917;

	t75 = (x337<((x338%x339)*x340));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x345 = 15LL;
	int64_t x346 = -7782LL;
	uint64_t x347 = 1609950533271604LLU;
	static int16_t x348 = -403;

	t76 = (x345<((x346%x347)*x348));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x353 = 3U;
	int16_t x354 = INT16_MAX;
	volatile int16_t x355 = 1543;
	static int32_t t77 = 370231;

	t77 = (x353<((x354%x355)*x356));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x361 = INT16_MAX;
	uint64_t x362 = 220LLU;
	int64_t x363 = -1LL;
	int16_t x364 = 27;
	volatile int32_t t78 = -503621227;

	t78 = (x361<((x362%x363)*x364));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x365 = 2;
	int64_t x366 = -129239745LL;
	uint64_t x368 = UINT64_MAX;
	int32_t t79 = -1;

	t79 = (x365<((x366%x367)*x368));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x369 = INT16_MIN;
	static volatile int16_t x370 = 56;
	uint64_t x371 = UINT64_MAX;
	int32_t x372 = -32460851;

	t80 = (x369<((x370%x371)*x372));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x373 = 122;
	int64_t x374 = -2076673081328LL;
	uint8_t x376 = 112U;
	volatile int32_t t81 = 473032539;

	t81 = (x373<((x374%x375)*x376));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x377 = 242641843558311LLU;
	int32_t x378 = INT32_MAX;
	int64_t x380 = -1LL;
	static int32_t t82 = 797807941;

	t82 = (x377<((x378%x379)*x380));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x381 = -91251789118694LL;
	volatile int32_t x382 = INT32_MAX;
	int32_t t83 = -7;

	t83 = (x381<((x382%x383)*x384));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x386 = -1LL;
	volatile int16_t x387 = -1;
	static volatile int16_t x388 = INT16_MAX;

	t84 = (x385<((x386%x387)*x388));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x389 = -1LL;
	volatile int64_t x390 = 264LL;
	uint32_t x391 = 3274707U;
	int8_t x392 = INT8_MAX;

	t85 = (x389<((x390%x391)*x392));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x393 = UINT8_MAX;
	uint8_t x394 = 1U;
	int32_t x395 = INT32_MIN;
	int64_t x396 = -3LL;

	t86 = (x393<((x394%x395)*x396));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x402 = INT16_MIN;
	int16_t x403 = INT16_MIN;
	static volatile uint16_t x404 = UINT16_MAX;

	t87 = (x401<((x402%x403)*x404));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x405 = INT8_MIN;
	static uint8_t x407 = 21U;
	volatile int32_t t88 = 0;

	t88 = (x405<((x406%x407)*x408));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x411 = UINT16_MAX;
	int64_t x412 = -3371120765017LL;

	t89 = (x409<((x410%x411)*x412));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x413 = -1LL;
	int64_t x414 = INT64_MIN;
	int32_t t90 = -10;

	t90 = (x413<((x414%x415)*x416));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x417 = INT16_MAX;
	volatile int8_t x419 = INT8_MIN;
	int32_t t91 = 0;

	t91 = (x417<((x418%x419)*x420));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x421 = -1;
	static int16_t x422 = 1;
	volatile uint16_t x423 = 11U;
	int32_t x424 = INT32_MIN;
	volatile int32_t t92 = -871;

	t92 = (x421<((x422%x423)*x424));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x425 = INT16_MAX;
	volatile int64_t x428 = 3530752594340343LL;

	t93 = (x425<((x426%x427)*x428));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x429 = 29;
	volatile int16_t x431 = INT16_MAX;
	static int32_t x432 = 361;
	int32_t t94 = -63066;

	t94 = (x429<((x430%x431)*x432));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x437 = UINT16_MAX;
	uint64_t x438 = UINT64_MAX;
	uint16_t x439 = 3U;
	uint8_t x440 = 77U;
	static int32_t t95 = -7779;

	t95 = (x437<((x438%x439)*x440));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x442 = 3LL;
	int32_t x443 = INT32_MIN;
	uint16_t x444 = UINT16_MAX;
	static volatile int32_t t96 = -118;

	t96 = (x441<((x442%x443)*x444));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x449 = 166515592645689748LL;
	int32_t x450 = 0;
	volatile uint64_t x451 = 12094096350781LLU;
	int8_t x452 = 0;

	t97 = (x449<((x450%x451)*x452));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x457 = 5530;
	int8_t x458 = INT8_MIN;
	static int32_t x459 = 190773;
	uint8_t x460 = 6U;
	int32_t t98 = -1512;

	t98 = (x457<((x458%x459)*x460));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x461 = UINT64_MAX;
	uint32_t x462 = UINT32_MAX;
	volatile int64_t x464 = -1LL;
	int32_t t99 = 0;

	t99 = (x461<((x462%x463)*x464));

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

