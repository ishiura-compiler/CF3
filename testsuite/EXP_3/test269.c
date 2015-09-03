#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 110U;
volatile int32_t x4 = 0;
uint64_t x9 = 2104LLU;
volatile uint32_t x10 = UINT32_MAX;
static int32_t t1 = -3818;
int64_t x14 = INT64_MAX;
int16_t x23 = INT16_MAX;
volatile int32_t t3 = 754;
int8_t x31 = INT8_MIN;
int32_t t5 = 1178;
int64_t x33 = INT64_MIN;
int64_t x34 = INT64_MIN;
static int8_t x41 = 2;
volatile int8_t x43 = INT8_MAX;
uint8_t x46 = 32U;
volatile int32_t t10 = 61657;
uint16_t x54 = 192U;
static volatile int32_t x59 = INT32_MAX;
int8_t x62 = INT8_MIN;
static int8_t x70 = 16;
int32_t x81 = 58359198;
int32_t x82 = INT32_MIN;
static volatile int64_t x84 = -8786717LL;
int64_t x92 = 106355LL;
volatile int16_t x97 = 0;
static uint8_t x101 = 3U;
uint64_t x103 = 219784721265464085LLU;
int8_t x114 = INT8_MIN;
int32_t t26 = 9158;
int16_t x127 = -470;
volatile uint32_t x128 = 391157U;
static int64_t x129 = 158239181006059LL;
int64_t x132 = INT64_MIN;
int64_t x134 = INT64_MIN;
static volatile uint8_t x135 = 14U;
int64_t x138 = INT64_MIN;
uint32_t x139 = UINT32_MAX;
static uint64_t x140 = 0LLU;
uint64_t x141 = UINT64_MAX;
int16_t x142 = INT16_MIN;
volatile int8_t x146 = INT8_MIN;
int32_t t32 = 7987;
static int32_t x150 = INT32_MAX;
static volatile int8_t x151 = INT8_MAX;
uint32_t x152 = 54164613U;
int32_t t33 = 630227;
volatile int8_t x153 = INT8_MIN;
static int16_t x155 = -2503;
static int32_t t34 = 1;
static int32_t x162 = INT32_MIN;
int16_t x164 = 1;
int64_t x165 = INT64_MIN;
int32_t x171 = -1;
static int64_t x176 = -290202300LL;
static int16_t x180 = -1;
int32_t t41 = -614545;
volatile int64_t x185 = 60310926061630LL;
uint64_t x187 = UINT64_MAX;
static volatile int32_t t42 = -215607;
int8_t x192 = -1;
volatile int16_t x197 = -1;
int64_t x200 = INT64_MIN;
int32_t x202 = INT32_MIN;
int32_t x203 = -1;
static uint16_t x213 = 26190U;
static volatile int32_t t47 = 13677952;
static volatile int32_t t48 = -2238353;
static int16_t x223 = INT16_MIN;
int8_t x228 = -1;
int32_t x237 = INT32_MAX;
int16_t x245 = INT16_MIN;
int16_t x251 = INT16_MIN;
uint32_t x253 = 13159U;
uint8_t x277 = 108U;
int32_t x285 = 9;
int32_t t61 = 307717371;
static int64_t x293 = INT64_MAX;
int16_t x294 = INT16_MAX;
int8_t x307 = INT8_MIN;
static int16_t x308 = 5411;
volatile uint16_t x310 = UINT16_MAX;
int32_t t67 = 2;
static uint64_t x313 = 41360752LLU;
int8_t x315 = INT8_MIN;
static int32_t t70 = -2;
int64_t x325 = INT64_MAX;
int64_t x333 = INT64_MIN;
int64_t x335 = INT64_MIN;
int8_t x340 = 0;
volatile int16_t x343 = INT16_MIN;
int64_t x349 = INT64_MIN;
static volatile uint16_t x355 = 6U;
volatile int32_t t78 = 684817;
uint16_t x359 = 1939U;
volatile int32_t t79 = 548784281;
int16_t x362 = -1;
static int64_t x364 = -1LL;
int16_t x366 = INT16_MIN;
volatile int8_t x374 = -1;
uint16_t x375 = 20U;
int32_t t84 = 966103630;
int8_t x388 = -1;
int64_t x391 = -1LL;
static volatile uint8_t x392 = 97U;
volatile int32_t t87 = 7;
uint32_t x398 = 26U;
static int64_t x399 = -16301375097LL;
int64_t x406 = -1LL;
volatile uint32_t x409 = UINT32_MAX;
static int64_t x412 = -1LL;
static int64_t x416 = 234385286016328LL;
volatile int32_t t93 = -32601189;
uint16_t x422 = UINT16_MAX;
volatile int8_t x423 = INT8_MIN;
int8_t x432 = -1;
int64_t x446 = INT64_MAX;
volatile int32_t t98 = -528;
int16_t x449 = -1;
int32_t t99 = 36;


void f0(void) {
	int64_t x1 = 2LL;
	int16_t x3 = -2675;
	volatile int32_t t0 = -418;

	t0 = ((x1==x2)<(x3-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x11 = -1;
	static int32_t x12 = INT32_MIN;

	t1 = ((x9==x10)<(x11-x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x13 = 14U;
	int8_t x15 = INT8_MAX;
	uint32_t x16 = UINT32_MAX;
	static volatile int32_t t2 = 110391743;

	t2 = ((x13==x14)<(x15-x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = INT32_MAX;
	volatile int8_t x22 = -4;
	static volatile int16_t x24 = -1;

	t3 = ((x21==x22)<(x23-x24));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x25 = 14350U;
	volatile int8_t x26 = INT8_MAX;
	int32_t x27 = -23;
	int32_t x28 = INT32_MIN;
	int32_t t4 = 3;

	t4 = ((x25==x26)<(x27-x28));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x29 = UINT8_MAX;
	static volatile int8_t x30 = -1;
	int16_t x32 = -3515;

	t5 = ((x29==x30)<(x31-x32));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x35 = -297737557796612LL;
	int32_t x36 = INT32_MIN;
	volatile int32_t t6 = 11690715;

	t6 = ((x33==x34)<(x35-x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = 7U;
	int8_t x38 = INT8_MIN;
	static uint8_t x39 = 15U;
	int16_t x40 = INT16_MAX;
	int32_t t7 = 115;

	t7 = ((x37==x38)<(x39-x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x42 = -1;
	int8_t x44 = INT8_MIN;
	volatile int32_t t8 = 117;

	t8 = ((x41==x42)<(x43-x44));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = -1;
	uint16_t x47 = 180U;
	uint32_t x48 = 1992304U;
	volatile int32_t t9 = 5113;

	t9 = ((x45==x46)<(x47-x48));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MIN;
	int32_t x50 = -362295257;
	static uint64_t x51 = UINT64_MAX;
	int16_t x52 = INT16_MIN;

	t10 = ((x49==x50)<(x51-x52));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x53 = INT64_MIN;
	int8_t x55 = INT8_MIN;
	int32_t x56 = INT32_MIN;
	static volatile int32_t t11 = 316;

	t11 = ((x53==x54)<(x55-x56));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x57 = 2LL;
	int64_t x58 = -1LL;
	int8_t x60 = INT8_MAX;
	int32_t t12 = 2714495;

	t12 = ((x57==x58)<(x59-x60));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x61 = INT8_MAX;
	int8_t x63 = 2;
	int32_t x64 = INT32_MAX;
	static int32_t t13 = -105214;

	t13 = ((x61==x62)<(x63-x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x69 = 75U;
	volatile uint16_t x71 = 5U;
	int16_t x72 = -1;
	int32_t t14 = -1036498347;

	t14 = ((x69==x70)<(x71-x72));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = INT16_MIN;
	int64_t x74 = INT64_MAX;
	volatile int16_t x75 = 4;
	volatile int32_t x76 = -1;
	static volatile int32_t t15 = 2;

	t15 = ((x73==x74)<(x75-x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 0U;
	uint64_t x78 = 2151644554288848LLU;
	int16_t x79 = INT16_MIN;
	int8_t x80 = INT8_MIN;
	int32_t t16 = 482033076;

	t16 = ((x77==x78)<(x79-x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x83 = UINT64_MAX;
	volatile int32_t t17 = 56403;

	t17 = ((x81==x82)<(x83-x84));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = 13;
	volatile uint64_t x86 = 6702285176LLU;
	int8_t x87 = INT8_MIN;
	volatile int64_t x88 = -1LL;
	int32_t t18 = -69391579;

	t18 = ((x85==x86)<(x87-x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x89 = UINT8_MAX;
	uint64_t x90 = 2055762851LLU;
	volatile uint32_t x91 = 1U;
	volatile int32_t t19 = -93;

	t19 = ((x89==x90)<(x91-x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = 63U;
	volatile int64_t x94 = -1LL;
	volatile int16_t x95 = INT16_MIN;
	int16_t x96 = INT16_MAX;
	int32_t t20 = 589867;

	t20 = ((x93==x94)<(x95-x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x98 = -1938884222LL;
	volatile uint16_t x99 = 681U;
	static int16_t x100 = -1;
	int32_t t21 = 169884;

	t21 = ((x97==x98)<(x99-x100));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x102 = 26507U;
	static volatile uint64_t x104 = UINT64_MAX;
	volatile int32_t t22 = -1874;

	t22 = ((x101==x102)<(x103-x104));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MIN;
	int8_t x106 = 3;
	volatile uint64_t x107 = 119505LLU;
	int64_t x108 = INT64_MAX;
	volatile int32_t t23 = -386881;

	t23 = ((x105==x106)<(x107-x108));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = INT64_MAX;
	uint16_t x115 = 204U;
	int64_t x116 = -1LL;
	int32_t t24 = 114851;

	t24 = ((x113==x114)<(x115-x116));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = INT16_MIN;
	uint16_t x118 = 17786U;
	uint8_t x119 = 103U;
	int8_t x120 = INT8_MIN;
	volatile int32_t t25 = 12962570;

	t25 = ((x117==x118)<(x119-x120));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = -1;
	int8_t x122 = -6;
	volatile uint16_t x123 = 2U;
	int16_t x124 = 0;

	t26 = ((x121==x122)<(x123-x124));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x125 = INT32_MAX;
	int32_t x126 = 3112443;
	volatile int32_t t27 = 782011186;

	t27 = ((x125==x126)<(x127-x128));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x130 = 33275604608672031LLU;
	int32_t x131 = -868543;
	static int32_t t28 = -577912;

	t28 = ((x129==x130)<(x131-x132));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x133 = 372U;
	uint16_t x136 = 4733U;
	volatile int32_t t29 = 18;

	t29 = ((x133==x134)<(x135-x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = 3962948928998490911LL;
	volatile int32_t t30 = -13397286;

	t30 = ((x137==x138)<(x139-x140));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x143 = INT16_MIN;
	int8_t x144 = INT8_MAX;
	volatile int32_t t31 = 1;

	t31 = ((x141==x142)<(x143-x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = 0;
	static int64_t x147 = INT64_MIN;
	int32_t x148 = -13342;

	t32 = ((x145==x146)<(x147-x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x149 = 2647U;

	t33 = ((x149==x150)<(x151-x152));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x154 = INT64_MIN;
	uint32_t x156 = 25984U;

	t34 = ((x153==x154)<(x155-x156));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = INT32_MIN;
	volatile uint64_t x158 = 149LLU;
	int64_t x159 = 9566251LL;
	uint64_t x160 = 3277434160356LLU;
	static int32_t t35 = -1;

	t35 = ((x157==x158)<(x159-x160));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x161 = 113622511894LLU;
	static int8_t x163 = -15;
	int32_t t36 = -60;

	t36 = ((x161==x162)<(x163-x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x166 = -1LL;
	volatile uint32_t x167 = 133282121U;
	static volatile uint64_t x168 = UINT64_MAX;
	int32_t t37 = -11686;

	t37 = ((x165==x166)<(x167-x168));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x169 = -1;
	int8_t x170 = INT8_MAX;
	volatile uint32_t x172 = 1028879U;
	int32_t t38 = 4;

	t38 = ((x169==x170)<(x171-x172));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = INT64_MIN;
	static int16_t x174 = INT16_MAX;
	static int8_t x175 = -33;
	volatile int32_t t39 = -40798;

	t39 = ((x173==x174)<(x175-x176));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x177 = 16;
	int64_t x178 = INT64_MIN;
	volatile uint8_t x179 = 101U;
	int32_t t40 = 2;

	t40 = ((x177==x178)<(x179-x180));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = 504454U;
	int64_t x182 = 873278098273510289LL;
	int8_t x183 = 0;
	int64_t x184 = -6056069LL;

	t41 = ((x181==x182)<(x183-x184));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x186 = INT16_MAX;
	static volatile int8_t x188 = INT8_MIN;

	t42 = ((x185==x186)<(x187-x188));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = -1;
	volatile uint8_t x190 = UINT8_MAX;
	static int8_t x191 = -1;
	volatile int32_t t43 = -42641;

	t43 = ((x189==x190)<(x191-x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x198 = INT64_MAX;
	int64_t x199 = INT64_MIN;
	int32_t t44 = -1;

	t44 = ((x197==x198)<(x199-x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x201 = INT32_MIN;
	static int16_t x204 = INT16_MIN;
	volatile int32_t t45 = -6778373;

	t45 = ((x201==x202)<(x203-x204));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x209 = UINT8_MAX;
	volatile int32_t x210 = -1;
	static uint16_t x211 = 1U;
	uint32_t x212 = UINT32_MAX;
	int32_t t46 = -925;

	t46 = ((x209==x210)<(x211-x212));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x214 = -1LL;
	int32_t x215 = INT32_MIN;
	uint64_t x216 = UINT64_MAX;

	t47 = ((x213==x214)<(x215-x216));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x217 = INT32_MIN;
	uint8_t x218 = 115U;
	uint64_t x219 = 4854084599918921LLU;
	int64_t x220 = INT64_MAX;

	t48 = ((x217==x218)<(x219-x220));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x221 = 175567868811LLU;
	int16_t x222 = -1;
	static int64_t x224 = -1LL;
	volatile int32_t t49 = -21264815;

	t49 = ((x221==x222)<(x223-x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x225 = -1;
	int8_t x226 = INT8_MIN;
	int32_t x227 = -1;
	volatile int32_t t50 = -366838;

	t50 = ((x225==x226)<(x227-x228));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = INT8_MIN;
	volatile int32_t x230 = INT32_MIN;
	uint8_t x231 = UINT8_MAX;
	int8_t x232 = INT8_MIN;
	static int32_t t51 = -4372;

	t51 = ((x229==x230)<(x231-x232));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x238 = 31911410LL;
	static int16_t x239 = 1;
	uint64_t x240 = UINT64_MAX;
	int32_t t52 = 949700;

	t52 = ((x237==x238)<(x239-x240));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x241 = UINT64_MAX;
	int16_t x242 = INT16_MIN;
	static uint16_t x243 = UINT16_MAX;
	uint64_t x244 = 2534077LLU;
	static int32_t t53 = 0;

	t53 = ((x241==x242)<(x243-x244));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x246 = 0U;
	static volatile int64_t x247 = INT64_MIN;
	int8_t x248 = -1;
	int32_t t54 = -731573569;

	t54 = ((x245==x246)<(x247-x248));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x249 = UINT64_MAX;
	int16_t x250 = INT16_MIN;
	int8_t x252 = INT8_MIN;
	int32_t t55 = -4158498;

	t55 = ((x249==x250)<(x251-x252));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x254 = 61U;
	int16_t x255 = -1;
	static int32_t x256 = -13;
	volatile int32_t t56 = -22093;

	t56 = ((x253==x254)<(x255-x256));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x257 = -1LL;
	int64_t x258 = INT64_MAX;
	int64_t x259 = -410197LL;
	int32_t x260 = -1;
	int32_t t57 = -903014664;

	t57 = ((x257==x258)<(x259-x260));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x265 = -1;
	int8_t x266 = -1;
	int32_t x267 = 10243;
	volatile int16_t x268 = INT16_MIN;
	int32_t t58 = 1;

	t58 = ((x265==x266)<(x267-x268));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x273 = 472595U;
	uint32_t x274 = UINT32_MAX;
	int8_t x275 = -5;
	volatile uint64_t x276 = 67722281601401649LLU;
	int32_t t59 = -24828008;

	t59 = ((x273==x274)<(x275-x276));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x278 = 3694U;
	static int64_t x279 = -444LL;
	int8_t x280 = INT8_MAX;
	static volatile int32_t t60 = -1766;

	t60 = ((x277==x278)<(x279-x280));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x286 = -1;
	int32_t x287 = INT32_MAX;
	volatile uint64_t x288 = UINT64_MAX;

	t61 = ((x285==x286)<(x287-x288));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x289 = -33;
	int8_t x290 = -1;
	uint32_t x291 = UINT32_MAX;
	uint16_t x292 = 17582U;
	static int32_t t62 = -2794;

	t62 = ((x289==x290)<(x291-x292));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x295 = 235U;
	volatile int16_t x296 = -251;
	static int32_t t63 = 81495;

	t63 = ((x293==x294)<(x295-x296));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x297 = -1;
	volatile int16_t x298 = 14239;
	uint16_t x299 = UINT16_MAX;
	volatile int8_t x300 = -1;
	volatile int32_t t64 = 361197578;

	t64 = ((x297==x298)<(x299-x300));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x301 = INT32_MAX;
	int16_t x302 = 74;
	uint64_t x303 = 67486809LLU;
	uint32_t x304 = 250742622U;
	int32_t t65 = -117359562;

	t65 = ((x301==x302)<(x303-x304));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x305 = 1439834870U;
	int32_t x306 = INT32_MIN;
	int32_t t66 = 48152;

	t66 = ((x305==x306)<(x307-x308));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x309 = INT64_MAX;
	uint64_t x311 = 9LLU;
	static int64_t x312 = 66652388992442LL;

	t67 = ((x309==x310)<(x311-x312));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x314 = 17U;
	int8_t x316 = INT8_MIN;
	int32_t t68 = 5;

	t68 = ((x313==x314)<(x315-x316));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x317 = 47;
	int32_t x318 = INT32_MIN;
	int64_t x319 = INT64_MAX;
	uint16_t x320 = 7529U;
	static volatile int32_t t69 = -3692;

	t69 = ((x317==x318)<(x319-x320));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x321 = -3;
	int16_t x322 = INT16_MIN;
	static uint16_t x323 = 390U;
	uint8_t x324 = 1U;

	t70 = ((x321==x322)<(x323-x324));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x326 = -1;
	uint32_t x327 = 41832U;
	int32_t x328 = 1;
	volatile int32_t t71 = 199556753;

	t71 = ((x325==x326)<(x327-x328));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x329 = 24U;
	static uint64_t x330 = 503312538048937603LLU;
	uint64_t x331 = UINT64_MAX;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t72 = 795;

	t72 = ((x329==x330)<(x331-x332));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x334 = 17471804389264061LLU;
	int64_t x336 = -41212189LL;
	volatile int32_t t73 = 435892898;

	t73 = ((x333==x334)<(x335-x336));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x337 = INT16_MIN;
	volatile uint8_t x338 = UINT8_MAX;
	int64_t x339 = -1LL;
	int32_t t74 = -110191;

	t74 = ((x337==x338)<(x339-x340));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x341 = INT64_MIN;
	uint8_t x342 = 1U;
	uint8_t x344 = 112U;
	int32_t t75 = 53935;

	t75 = ((x341==x342)<(x343-x344));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x345 = INT64_MIN;
	int8_t x346 = 1;
	int8_t x347 = -3;
	static int64_t x348 = -411381LL;
	int32_t t76 = 2223;

	t76 = ((x345==x346)<(x347-x348));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x350 = -69600605192672LL;
	int16_t x351 = -1;
	volatile int8_t x352 = INT8_MIN;
	static int32_t t77 = 0;

	t77 = ((x349==x350)<(x351-x352));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x353 = 31;
	int8_t x354 = -1;
	volatile int64_t x356 = -7668936173636LL;

	t78 = ((x353==x354)<(x355-x356));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x357 = INT32_MIN;
	int8_t x358 = 5;
	int16_t x360 = 5470;

	t79 = ((x357==x358)<(x359-x360));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x361 = INT8_MIN;
	int8_t x363 = -3;
	static int32_t t80 = 1;

	t80 = ((x361==x362)<(x363-x364));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x365 = -125LL;
	static int8_t x367 = INT8_MAX;
	int16_t x368 = -1;
	volatile int32_t t81 = 35801898;

	t81 = ((x365==x366)<(x367-x368));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x369 = -1LL;
	volatile int32_t x370 = INT32_MAX;
	uint8_t x371 = 7U;
	uint64_t x372 = 3224092874671569LLU;
	volatile int32_t t82 = 451276;

	t82 = ((x369==x370)<(x371-x372));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x373 = 5429994LLU;
	int32_t x376 = INT32_MAX;
	volatile int32_t t83 = 6780;

	t83 = ((x373==x374)<(x375-x376));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x377 = -1863130;
	int64_t x378 = INT64_MIN;
	uint64_t x379 = 19705229733024518LLU;
	int64_t x380 = 3LL;

	t84 = ((x377==x378)<(x379-x380));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x381 = -1;
	int8_t x382 = INT8_MAX;
	int8_t x383 = -1;
	int64_t x384 = INT64_MAX;
	int32_t t85 = -121477487;

	t85 = ((x381==x382)<(x383-x384));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x385 = -1;
	int16_t x386 = INT16_MIN;
	volatile uint64_t x387 = 3494505656683341LLU;
	static int32_t t86 = -102;

	t86 = ((x385==x386)<(x387-x388));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x389 = INT8_MIN;
	volatile int8_t x390 = 5;

	t87 = ((x389==x390)<(x391-x392));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x397 = 2;
	static uint16_t x400 = 13760U;
	volatile int32_t t88 = -442741302;

	t88 = ((x397==x398)<(x399-x400));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x401 = 12;
	volatile int16_t x402 = INT16_MAX;
	uint8_t x403 = 0U;
	uint16_t x404 = UINT16_MAX;
	volatile int32_t t89 = -11;

	t89 = ((x401==x402)<(x403-x404));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x405 = UINT8_MAX;
	int64_t x407 = INT64_MIN;
	int64_t x408 = -1LL;
	int32_t t90 = 692;

	t90 = ((x405==x406)<(x407-x408));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x410 = INT8_MAX;
	int8_t x411 = 15;
	static volatile int32_t t91 = 141776367;

	t91 = ((x409==x410)<(x411-x412));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x413 = -1LL;
	int32_t x414 = INT32_MIN;
	int8_t x415 = INT8_MIN;
	int32_t t92 = -1;

	t92 = ((x413==x414)<(x415-x416));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x417 = INT32_MIN;
	int16_t x418 = INT16_MAX;
	int16_t x419 = 5;
	int16_t x420 = INT16_MAX;

	t93 = ((x417==x418)<(x419-x420));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x421 = 3294;
	int64_t x424 = -22145634490LL;
	int32_t t94 = 133885172;

	t94 = ((x421==x422)<(x423-x424));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x429 = 47U;
	static volatile int16_t x430 = INT16_MIN;
	int64_t x431 = 249677LL;
	volatile int32_t t95 = -1868;

	t95 = ((x429==x430)<(x431-x432));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x437 = INT32_MAX;
	static volatile int8_t x438 = -3;
	int8_t x439 = INT8_MIN;
	uint32_t x440 = UINT32_MAX;
	volatile int32_t t96 = -4;

	t96 = ((x437==x438)<(x439-x440));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x441 = INT8_MAX;
	int16_t x442 = INT16_MIN;
	static volatile int16_t x443 = INT16_MIN;
	volatile int16_t x444 = INT16_MAX;
	volatile int32_t t97 = 0;

	t97 = ((x441==x442)<(x443-x444));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x445 = INT8_MIN;
	int8_t x447 = 6;
	uint32_t x448 = UINT32_MAX;

	t98 = ((x445==x446)<(x447-x448));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x450 = INT32_MAX;
	static volatile int32_t x451 = 6723;
	uint32_t x452 = UINT32_MAX;

	t99 = ((x449==x450)<(x451-x452));

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

