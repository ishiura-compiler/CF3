#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 2680597096LLU;
uint8_t x9 = UINT8_MAX;
int16_t x15 = INT16_MAX;
volatile uint16_t x23 = 2119U;
volatile int32_t t5 = 3961431;
volatile int32_t x31 = INT32_MIN;
static int64_t x32 = INT64_MAX;
int16_t x38 = -1;
volatile int32_t t10 = -91180653;
int16_t x47 = INT16_MIN;
volatile int32_t t11 = -4484;
int16_t x49 = INT16_MIN;
volatile uint8_t x52 = UINT8_MAX;
int32_t t12 = 4;
int64_t x55 = INT64_MAX;
volatile int32_t t14 = 7405;
static uint32_t x68 = UINT32_MAX;
static uint64_t x70 = 16587996411LLU;
uint32_t x73 = 31722U;
volatile int64_t x80 = -71184966LL;
int16_t x84 = -3731;
int32_t t20 = -160429449;
int8_t x95 = INT8_MAX;
volatile uint16_t x104 = UINT16_MAX;
int8_t x106 = INT8_MIN;
static uint64_t x113 = UINT64_MAX;
volatile int16_t x114 = -1;
int64_t x123 = 11811525LL;
int64_t x128 = -1LL;
int32_t x131 = INT32_MIN;
int32_t t32 = 1354606;
volatile int16_t x136 = INT16_MIN;
int32_t t33 = -8783899;
uint8_t x144 = UINT8_MAX;
int32_t t35 = -4243;
int8_t x147 = INT8_MIN;
int32_t x148 = INT32_MAX;
int32_t t37 = 33166;
static int64_t x162 = -163639564366916786LL;
int32_t t40 = -249;
int32_t t41 = -214;
volatile int32_t x170 = INT32_MAX;
int32_t x173 = INT32_MIN;
int8_t x176 = INT8_MIN;
volatile int32_t t45 = 3974737;
uint16_t x187 = UINT16_MAX;
uint64_t x196 = 261326369235018071LLU;
volatile int32_t t48 = 8161;
static uint16_t x197 = 3U;
static volatile uint8_t x201 = UINT8_MAX;
volatile int32_t t50 = 1;
volatile int32_t t52 = -534778120;
uint64_t x217 = 2429943151260525LLU;
uint32_t x218 = 3906U;
volatile int32_t x220 = INT32_MIN;
volatile int32_t t55 = 446566;
int16_t x236 = INT16_MIN;
int32_t x239 = -6019255;
volatile int32_t t61 = 539731730;
static int8_t x257 = INT8_MIN;
volatile int64_t x259 = -1365927014134763235LL;
int32_t x260 = INT32_MIN;
volatile int64_t x269 = 213LL;
uint16_t x274 = UINT16_MAX;
static uint16_t x275 = 31U;
uint8_t x282 = UINT8_MAX;
static uint32_t x292 = 15U;
int8_t x293 = -1;
volatile int16_t x295 = -1;
static volatile int32_t t73 = 7293;
int16_t x306 = INT16_MIN;
int16_t x308 = INT16_MIN;
int8_t x311 = 0;
static uint64_t x312 = 80LLU;
int32_t t77 = -782;
int32_t x315 = -93535954;
int32_t x319 = -113410;
int16_t x321 = 58;
int16_t x325 = -1;
uint64_t x332 = UINT64_MAX;
int16_t x334 = -1;
uint8_t x343 = 34U;
static int8_t x350 = 1;
volatile int32_t t88 = 1;
static int32_t x374 = INT32_MIN;
volatile int32_t t92 = -23084;
int32_t t94 = 13;
int32_t x388 = -1;
static int64_t x389 = -1LL;
volatile int32_t t96 = -92;
int64_t x400 = -1LL;
uint16_t x403 = 35U;


void f0(void) {
	int16_t x2 = -8492;
	static int8_t x3 = INT8_MIN;
	static int32_t x4 = -1;
	int32_t t0 = -6708;

	t0 = (x1<=(x2/(x3|x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	static int32_t x6 = INT32_MAX;
	static uint32_t x7 = 8U;
	uint8_t x8 = 7U;
	int32_t t1 = -23347;

	t1 = (x5<=(x6/(x7|x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = 15;
	static int64_t x11 = INT64_MIN;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -33;

	t2 = (x9<=(x10/(x11|x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MAX;
	int16_t x14 = -5562;
	int16_t x16 = -11119;
	int32_t t3 = 19933272;

	t3 = (x13<=(x14/(x15|x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	static uint8_t x18 = 13U;
	static int64_t x19 = -1LL;
	volatile int8_t x20 = 0;
	int32_t t4 = -8950;

	t4 = (x17<=(x18/(x19|x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 1854U;
	int64_t x22 = -715420896242585LL;
	int64_t x24 = -6LL;

	t5 = (x21<=(x22/(x23|x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int8_t x26 = -1;
	int16_t x27 = 2686;
	static uint32_t x28 = UINT32_MAX;
	int32_t t6 = -800;

	t6 = (x25<=(x26/(x27|x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MIN;
	static int16_t x30 = INT16_MAX;
	int32_t t7 = 3;

	t7 = (x29<=(x30/(x31|x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	int8_t x34 = -1;
	static int32_t x35 = INT32_MIN;
	int64_t x36 = -1LL;
	volatile int32_t t8 = 0;

	t8 = (x33<=(x34/(x35|x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 1649066411U;
	uint16_t x39 = 12U;
	int8_t x40 = -1;
	int32_t t9 = 0;

	t9 = (x37<=(x38/(x39|x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 85;
	int16_t x42 = -1;
	int16_t x43 = INT16_MAX;
	int8_t x44 = -1;

	t10 = (x41<=(x42/(x43|x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x45 = 1U;
	uint32_t x46 = 4U;
	static uint16_t x48 = 36U;

	t11 = (x45<=(x46/(x47|x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = UINT32_MAX;
	uint8_t x51 = 2U;

	t12 = (x49<=(x50/(x51|x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x53 = INT16_MAX;
	int64_t x54 = -1LL;
	uint32_t x56 = 328U;
	static volatile int32_t t13 = 175072118;

	t13 = (x53<=(x54/(x55|x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 11U;
	uint8_t x58 = 0U;
	int32_t x59 = INT32_MAX;
	volatile int16_t x60 = INT16_MIN;

	t14 = (x57<=(x58/(x59|x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = -1LL;
	volatile int16_t x62 = -1;
	uint16_t x63 = 1U;
	static int32_t x64 = -79870;
	static int32_t t15 = -364690;

	t15 = (x61<=(x62/(x63|x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = 4U;
	static volatile int16_t x66 = 261;
	uint32_t x67 = UINT32_MAX;
	volatile int32_t t16 = -61;

	t16 = (x65<=(x66/(x67|x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = -3;
	uint8_t x71 = 2U;
	int8_t x72 = 0;
	int32_t t17 = -10;

	t17 = (x69<=(x70/(x71|x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = INT32_MAX;
	int64_t x75 = -1LL;
	int64_t x76 = INT64_MAX;
	volatile int32_t t18 = -6343832;

	t18 = (x73<=(x74/(x75|x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	uint64_t x78 = 6192518LLU;
	volatile int8_t x79 = INT8_MIN;
	volatile int32_t t19 = 4626;

	t19 = (x77<=(x78/(x79|x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = -147374431LL;
	int8_t x82 = INT8_MIN;
	uint8_t x83 = 6U;

	t20 = (x81<=(x82/(x83|x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 1LLU;
	int16_t x86 = INT16_MIN;
	int16_t x87 = 13;
	static int8_t x88 = INT8_MIN;
	int32_t t21 = -3800603;

	t21 = (x85<=(x86/(x87|x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	volatile uint64_t x90 = 60061934LLU;
	volatile int16_t x91 = 16;
	uint16_t x92 = 5U;
	static int32_t t22 = 10747010;

	t22 = (x89<=(x90/(x91|x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = -3;
	volatile uint16_t x94 = 27882U;
	uint32_t x96 = 82U;
	int32_t t23 = 42;

	t23 = (x93<=(x94/(x95|x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	uint16_t x98 = 7U;
	int8_t x99 = 7;
	uint16_t x100 = 160U;
	static volatile int32_t t24 = -25615086;

	t24 = (x97<=(x98/(x99|x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -669LL;
	uint32_t x102 = 3756518U;
	uint16_t x103 = 7U;
	volatile int32_t t25 = 96;

	t25 = (x101<=(x102/(x103|x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MIN;
	int32_t x107 = -3810;
	int16_t x108 = INT16_MAX;
	int32_t t26 = -1;

	t26 = (x105<=(x106/(x107|x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int32_t x110 = -1;
	static volatile int64_t x111 = INT64_MIN;
	int32_t x112 = INT32_MAX;
	volatile int32_t t27 = 1349948;

	t27 = (x109<=(x110/(x111|x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x115 = 5317LL;
	int16_t x116 = 11462;
	static volatile int32_t t28 = 13909;

	t28 = (x113<=(x114/(x115|x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = INT16_MIN;
	static int16_t x118 = 14999;
	int16_t x119 = 12212;
	static volatile uint32_t x120 = 1668U;
	int32_t t29 = 13320238;

	t29 = (x117<=(x118/(x119|x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = -9481;
	uint64_t x122 = 80487191396080LLU;
	static volatile int16_t x124 = 894;
	int32_t t30 = 18;

	t30 = (x121<=(x122/(x123|x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x125 = 29U;
	uint8_t x126 = UINT8_MAX;
	uint64_t x127 = 868LLU;
	int32_t t31 = 33;

	t31 = (x125<=(x126/(x127|x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	static uint8_t x130 = UINT8_MAX;
	int8_t x132 = 0;

	t32 = (x129<=(x130/(x131|x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	int8_t x134 = -1;
	int32_t x135 = INT32_MIN;

	t33 = (x133<=(x134/(x135|x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = -15;
	static int32_t x138 = -942411;
	static int16_t x139 = 892;
	volatile uint64_t x140 = 443138642LLU;
	volatile int32_t t34 = -6459556;

	t34 = (x137<=(x138/(x139|x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = -11;
	static uint64_t x142 = UINT64_MAX;
	int64_t x143 = -190570870LL;

	t35 = (x141<=(x142/(x143|x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = 440757882;
	volatile int8_t x146 = -1;
	int32_t t36 = -31110411;

	t36 = (x145<=(x146/(x147|x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = INT64_MIN;
	int8_t x150 = INT8_MIN;
	int64_t x151 = INT64_MAX;
	static int16_t x152 = -1;

	t37 = (x149<=(x150/(x151|x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 6U;
	int64_t x154 = -1LL;
	int8_t x155 = INT8_MIN;
	int32_t x156 = INT32_MIN;
	volatile int32_t t38 = 4684;

	t38 = (x153<=(x154/(x155|x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x157 = 3;
	uint32_t x158 = 26117507U;
	static int64_t x159 = 3504808795LL;
	int16_t x160 = -1;
	int32_t t39 = 3;

	t39 = (x157<=(x158/(x159|x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = INT16_MIN;
	volatile uint32_t x163 = 106168U;
	int16_t x164 = -1;

	t40 = (x161<=(x162/(x163|x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	int16_t x166 = 5472;
	int8_t x167 = 1;
	uint64_t x168 = UINT64_MAX;

	t41 = (x165<=(x166/(x167|x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -2;
	uint32_t x171 = 480U;
	int16_t x172 = -507;
	static int32_t t42 = 93256895;

	t42 = (x169<=(x170/(x171|x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = INT8_MIN;
	volatile int16_t x175 = INT16_MIN;
	int32_t t43 = -2;

	t43 = (x173<=(x174/(x175|x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x177 = 6763U;
	int64_t x178 = -35064398627LL;
	int64_t x179 = -3047LL;
	static int8_t x180 = 25;
	int32_t t44 = 1818960;

	t44 = (x177<=(x178/(x179|x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = INT8_MAX;
	volatile int16_t x182 = 5653;
	static int32_t x183 = INT32_MIN;
	int8_t x184 = INT8_MAX;

	t45 = (x181<=(x182/(x183|x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	uint16_t x186 = UINT16_MAX;
	int8_t x188 = INT8_MIN;
	static volatile int32_t t46 = -51857;

	t46 = (x185<=(x186/(x187|x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -1;
	int32_t x190 = 64621;
	int8_t x191 = -2;
	int32_t x192 = 20;
	int32_t t47 = -378345152;

	t47 = (x189<=(x190/(x191|x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = 88805;
	int8_t x194 = INT8_MIN;
	int8_t x195 = INT8_MAX;

	t48 = (x193<=(x194/(x195|x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x198 = INT8_MAX;
	int8_t x199 = INT8_MAX;
	volatile int32_t x200 = INT32_MIN;
	int32_t t49 = -60438169;

	t49 = (x197<=(x198/(x199|x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x202 = INT32_MIN;
	uint64_t x203 = 3558109727068125802LLU;
	static uint32_t x204 = 2771U;

	t50 = (x201<=(x202/(x203|x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = UINT32_MAX;
	int8_t x206 = INT8_MIN;
	static volatile uint16_t x207 = UINT16_MAX;
	uint16_t x208 = 4389U;
	int32_t t51 = -14249386;

	t51 = (x205<=(x206/(x207|x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 10U;
	volatile int16_t x210 = INT16_MAX;
	static int16_t x211 = INT16_MIN;
	int64_t x212 = -964735528726LL;

	t52 = (x209<=(x210/(x211|x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MAX;
	int16_t x214 = 9;
	uint16_t x215 = 1171U;
	int8_t x216 = -4;
	int32_t t53 = 242;

	t53 = (x213<=(x214/(x215|x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x219 = 215;
	volatile int32_t t54 = -135;

	t54 = (x217<=(x218/(x219|x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = INT16_MAX;
	static int16_t x222 = -1350;
	int16_t x223 = INT16_MIN;
	int8_t x224 = INT8_MIN;

	t55 = (x221<=(x222/(x223|x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 1182919LL;
	uint64_t x226 = UINT64_MAX;
	int8_t x227 = INT8_MIN;
	volatile uint32_t x228 = 2498U;
	volatile int32_t t56 = 14376;

	t56 = (x225<=(x226/(x227|x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 202U;
	int8_t x230 = -34;
	int64_t x231 = -1LL;
	int8_t x232 = INT8_MIN;
	int32_t t57 = -130436028;

	t57 = (x229<=(x230/(x231|x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = 83;
	int8_t x234 = INT8_MIN;
	volatile int64_t x235 = INT64_MIN;
	int32_t t58 = 91342;

	t58 = (x233<=(x234/(x235|x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = INT64_MIN;
	int64_t x238 = 94LL;
	int8_t x240 = -1;
	volatile int32_t t59 = 4693852;

	t59 = (x237<=(x238/(x239|x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = UINT64_MAX;
	int32_t x242 = -1;
	int8_t x243 = INT8_MIN;
	uint8_t x244 = 1U;
	volatile int32_t t60 = 19618314;

	t60 = (x241<=(x242/(x243|x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 6U;
	int64_t x246 = INT64_MIN;
	int64_t x247 = -203570855829428LL;
	int8_t x248 = 0;

	t61 = (x245<=(x246/(x247|x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = 0;
	static uint32_t x250 = 502570U;
	int64_t x251 = -1LL;
	int32_t x252 = INT32_MIN;
	static volatile int32_t t62 = 107687289;

	t62 = (x249<=(x250/(x251|x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = -13420;
	uint16_t x254 = 68U;
	int16_t x255 = INT16_MIN;
	int64_t x256 = INT64_MIN;
	static volatile int32_t t63 = -495200;

	t63 = (x253<=(x254/(x255|x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x258 = 0U;
	int32_t t64 = -407453560;

	t64 = (x257<=(x258/(x259|x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -2378297324LL;
	int32_t x262 = INT32_MIN;
	uint32_t x263 = 29055U;
	uint64_t x264 = UINT64_MAX;
	int32_t t65 = -62811878;

	t65 = (x261<=(x262/(x263|x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = INT16_MIN;
	uint32_t x266 = 6U;
	uint64_t x267 = 315408326831LLU;
	int8_t x268 = 3;
	static int32_t t66 = 20;

	t66 = (x265<=(x266/(x267|x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x270 = 13790613U;
	int32_t x271 = -1;
	int64_t x272 = -1LL;
	static volatile int32_t t67 = 13452;

	t67 = (x269<=(x270/(x271|x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = UINT16_MAX;
	static volatile int8_t x276 = INT8_MIN;
	int32_t t68 = 78843;

	t68 = (x273<=(x274/(x275|x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	volatile int64_t x278 = -974524095559612020LL;
	int8_t x279 = INT8_MIN;
	int8_t x280 = INT8_MIN;
	static volatile int32_t t69 = 0;

	t69 = (x277<=(x278/(x279|x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = 135LL;
	int64_t x283 = -1LL;
	static int32_t x284 = INT32_MIN;
	int32_t t70 = 25;

	t70 = (x281<=(x282/(x283|x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	uint16_t x286 = UINT16_MAX;
	int16_t x287 = INT16_MIN;
	int64_t x288 = INT64_MIN;
	volatile int32_t t71 = -1527334;

	t71 = (x285<=(x286/(x287|x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 14303U;
	volatile int64_t x290 = 5LL;
	int32_t x291 = -1;
	volatile int32_t t72 = 1;

	t72 = (x289<=(x290/(x291|x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x294 = UINT64_MAX;
	volatile int64_t x296 = INT64_MIN;

	t73 = (x293<=(x294/(x295|x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MAX;
	static int32_t x298 = -255;
	int64_t x299 = -72LL;
	int64_t x300 = -1LL;
	static int32_t t74 = -6949;

	t74 = (x297<=(x298/(x299|x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = INT8_MAX;
	int8_t x302 = INT8_MAX;
	int32_t x303 = -1;
	uint64_t x304 = 5386512104LLU;
	static int32_t t75 = -25998;

	t75 = (x301<=(x302/(x303|x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	volatile int16_t x307 = -4813;
	static volatile int32_t t76 = -235309;

	t76 = (x305<=(x306/(x307|x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x309 = UINT16_MAX;
	int64_t x310 = INT64_MIN;

	t77 = (x309<=(x310/(x311|x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x313 = 14U;
	int64_t x314 = INT64_MIN;
	static int16_t x316 = INT16_MIN;
	volatile int32_t t78 = 154481699;

	t78 = (x313<=(x314/(x315|x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	static int64_t x318 = -178854326LL;
	uint8_t x320 = UINT8_MAX;
	static int32_t t79 = 1;

	t79 = (x317<=(x318/(x319|x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = 561;
	uint8_t x323 = 0U;
	int8_t x324 = -1;
	int32_t t80 = -16772032;

	t80 = (x321<=(x322/(x323|x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x326 = INT16_MAX;
	volatile uint64_t x327 = UINT64_MAX;
	static uint32_t x328 = 21550157U;
	static volatile int32_t t81 = 247058;

	t81 = (x325<=(x326/(x327|x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x329 = 772U;
	int8_t x330 = 27;
	int8_t x331 = INT8_MIN;
	volatile int32_t t82 = 39;

	t82 = (x329<=(x330/(x331|x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -14;
	int16_t x335 = INT16_MIN;
	int64_t x336 = -1LL;
	static int32_t t83 = -464620848;

	t83 = (x333<=(x334/(x335|x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = 3;
	int8_t x338 = -36;
	volatile int64_t x339 = -1LL;
	int16_t x340 = INT16_MAX;
	int32_t t84 = 762288624;

	t84 = (x337<=(x338/(x339|x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = 54098;
	int32_t x342 = -1;
	uint64_t x344 = UINT64_MAX;
	int32_t t85 = 30204;

	t85 = (x341<=(x342/(x343|x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	volatile int16_t x346 = -1;
	int16_t x347 = INT16_MIN;
	uint8_t x348 = 24U;
	int32_t t86 = 318429166;

	t86 = (x345<=(x346/(x347|x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = 17;
	int16_t x351 = -1;
	int32_t x352 = -1;
	int32_t t87 = 23103889;

	t87 = (x349<=(x350/(x351|x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MAX;
	static int32_t x354 = INT32_MIN;
	uint64_t x355 = UINT64_MAX;
	volatile uint64_t x356 = UINT64_MAX;

	t88 = (x353<=(x354/(x355|x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x357 = INT8_MIN;
	uint32_t x358 = 1588742670U;
	int64_t x359 = INT64_MIN;
	int32_t x360 = 6309188;
	int32_t t89 = 5;

	t89 = (x357<=(x358/(x359|x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x361 = UINT8_MAX;
	uint16_t x362 = UINT16_MAX;
	volatile int32_t x363 = -93;
	uint64_t x364 = 1918LLU;
	int32_t t90 = -1;

	t90 = (x361<=(x362/(x363|x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = UINT32_MAX;
	static uint64_t x366 = 59710599927954LLU;
	static int8_t x367 = -1;
	static int32_t x368 = INT32_MAX;
	int32_t t91 = -13724459;

	t91 = (x365<=(x366/(x367|x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x373 = INT16_MAX;
	volatile int8_t x375 = 0;
	volatile int16_t x376 = INT16_MAX;

	t92 = (x373<=(x374/(x375|x376)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x377 = UINT32_MAX;
	int64_t x378 = INT64_MAX;
	volatile int16_t x379 = INT16_MIN;
	volatile int32_t x380 = INT32_MIN;
	volatile int32_t t93 = 1709;

	t93 = (x377<=(x378/(x379|x380)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x381 = -5867443;
	int64_t x382 = -1LL;
	uint32_t x383 = UINT32_MAX;
	int16_t x384 = INT16_MAX;

	t94 = (x381<=(x382/(x383|x384)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x385 = INT32_MAX;
	int32_t x386 = -6;
	int16_t x387 = INT16_MIN;
	int32_t t95 = 62;

	t95 = (x385<=(x386/(x387|x388)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x390 = -128188LL;
	static int64_t x391 = INT64_MAX;
	uint64_t x392 = UINT64_MAX;

	t96 = (x389<=(x390/(x391|x392)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x393 = INT32_MIN;
	uint16_t x394 = 565U;
	int8_t x395 = -1;
	uint32_t x396 = 118075U;
	volatile int32_t t97 = 602;

	t97 = (x393<=(x394/(x395|x396)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x397 = 15;
	static volatile uint64_t x398 = 56406LLU;
	int64_t x399 = INT64_MIN;
	int32_t t98 = 4043;

	t98 = (x397<=(x398/(x399|x400)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x401 = -1;
	uint64_t x402 = 4952844769LLU;
	int32_t x404 = -47;
	int32_t t99 = 8;

	t99 = (x401<=(x402/(x403|x404)));

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

