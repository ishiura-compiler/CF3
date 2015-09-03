#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x11 = 711155007LLU;
uint8_t x12 = 14U;
int64_t x19 = -1302176581LL;
int64_t x22 = INT64_MIN;
uint32_t x24 = UINT32_MAX;
int32_t x25 = 45;
static int32_t x26 = -7765201;
volatile uint64_t t4 = 79756596003688079LLU;
uint8_t x36 = UINT8_MAX;
static uint64_t t6 = 11675834054LLU;
int64_t x55 = 7089689760095LL;
static volatile uint64_t t10 = 741313887115LLU;
int8_t x61 = 28;
int8_t x68 = 1;
int8_t x70 = INT8_MAX;
volatile int8_t x71 = -3;
int8_t x72 = 1;
int8_t x73 = 0;
int8_t x79 = -1;
static int8_t x86 = -15;
volatile int64_t t16 = -57308LL;
static volatile uint32_t t18 = 21717735U;
volatile int8_t x97 = INT8_MAX;
int32_t x100 = INT32_MIN;
static uint8_t x114 = 47U;
int32_t x117 = -1;
int32_t x120 = INT32_MAX;
static int8_t x125 = -6;
volatile int32_t t27 = 237;
int32_t x148 = 2;
volatile int64_t t29 = 361551646246112LL;
volatile uint8_t x151 = 4U;
static uint64_t t32 = 9825188578609003LLU;
int8_t x190 = INT8_MIN;
int64_t x197 = INT64_MAX;
int16_t x198 = INT16_MAX;
volatile int16_t x206 = INT16_MIN;
uint64_t x207 = 185868027LLU;
volatile uint64_t x208 = UINT64_MAX;
int16_t x215 = -376;
volatile uint64_t t44 = 1780082992517LLU;
uint32_t x218 = 17398177U;
volatile uint32_t t45 = 817U;
uint16_t x222 = UINT16_MAX;
static uint16_t x226 = UINT16_MAX;
static int16_t x228 = -1;
int8_t x250 = INT8_MIN;
volatile int64_t t51 = 17198LL;
int32_t x263 = INT32_MIN;
int16_t x264 = 219;
int32_t t53 = -20044;
static volatile uint32_t x268 = 1U;
volatile int32_t x271 = -67003;
volatile uint64_t t55 = 433205400458262LLU;
int32_t t57 = -4864109;
volatile int8_t x299 = 1;
int16_t x310 = INT16_MIN;
static int64_t x319 = -3487746LL;
int32_t x322 = 2282;
static int8_t x326 = INT8_MIN;
volatile int32_t t66 = 45;
uint16_t x330 = 248U;
int64_t x338 = -1LL;
volatile uint64_t t70 = 1661344185819923857LLU;
uint32_t x366 = UINT32_MAX;
static uint16_t x369 = UINT16_MAX;
static volatile uint64_t x372 = UINT64_MAX;
int32_t x380 = INT32_MIN;
int64_t t75 = 25970238044630226LL;
static int32_t x391 = -28;
uint16_t x395 = 3U;
volatile int64_t t78 = 7874710LL;
int8_t x405 = -1;
int32_t x420 = INT32_MIN;
int32_t x426 = INT32_MAX;
uint64_t x436 = 21808LLU;
int16_t x437 = 1;
volatile int16_t x442 = INT16_MIN;
volatile int64_t t87 = -809291LL;
static uint16_t x448 = 18242U;
int8_t x459 = 11;
static int16_t x490 = INT16_MAX;
volatile uint64_t x496 = 24788821951949045LLU;
uint32_t t97 = 53U;
int32_t x501 = -1;
int32_t x506 = 500818;
int32_t x508 = 3250;


void f0(void) {
	int32_t x9 = INT32_MIN;
	int8_t x10 = -52;
	volatile uint64_t t0 = 2100958844LLU;

	t0 = ((x9/(x10&x11))-x12);

	if (t0 != 25939134510LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = -25;
	uint64_t x14 = 458828589LLU;
	int16_t x15 = -1;
	static int16_t x16 = INT16_MAX;
	volatile uint64_t t1 = 10456492LLU;

	t1 = ((x13/(x14&x15))-x16);

	if (t1 != 40203966103LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = 2861U;
	volatile int32_t x18 = INT32_MIN;
	uint32_t x20 = 28835U;
	int64_t t2 = 9430916LL;

	t2 = ((x17/(x18&x19))-x20);

	if (t2 != -28835LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = -60078694LL;
	static uint64_t x23 = UINT64_MAX;
	static volatile uint64_t t3 = 56121765449698673LLU;

	t3 = ((x21/(x22&x23))-x24);

	if (t3 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x27 = 7375597211291812106LLU;
	int64_t x28 = INT64_MAX;

	t4 = ((x25/(x26&x27))-x28);

	if (t4 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = -1;
	int8_t x30 = INT8_MIN;
	uint16_t x31 = 12841U;
	static volatile uint32_t x32 = 1717U;
	volatile uint32_t t5 = 0U;

	t5 = ((x29/(x30&x31))-x32);

	if (t5 != 4294965579U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = UINT64_MAX;
	int8_t x34 = -3;
	int32_t x35 = 166980;

	t6 = ((x33/(x34&x35))-x36);

	if (t6 != 110472775623829LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = -1;
	volatile int32_t x38 = INT32_MAX;
	uint32_t x39 = 118U;
	uint64_t x40 = UINT64_MAX;
	volatile uint64_t t7 = 81969542035LLU;

	t7 = ((x37/(x38&x39))-x40);

	if (t7 != 36398028LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MAX;
	uint8_t x42 = UINT8_MAX;
	int8_t x43 = INT8_MAX;
	uint64_t x44 = 97445971LLU;
	uint64_t t8 = 26695052390018701LLU;

	t8 = ((x41/(x42&x43))-x44);

	if (t8 != 18446744073612105903LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = INT32_MIN;
	uint16_t x54 = 2858U;
	volatile int32_t x56 = INT32_MAX;
	static int64_t t9 = -212201466577LL;

	t9 = ((x53/(x54&x55))-x56);

	if (t9 != -2155556893LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x57 = INT32_MAX;
	volatile uint32_t x58 = 204U;
	static uint64_t x59 = 1738881522LLU;
	static int8_t x60 = -1;

	t10 = ((x57/(x58&x59))-x60);

	if (t10 != 11184811LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x62 = -255;
	volatile int8_t x63 = INT8_MAX;
	static volatile int16_t x64 = -3;
	static int32_t t11 = 730511652;

	t11 = ((x61/(x62&x63))-x64);

	if (t11 != 31) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x65 = -1LL;
	int64_t x66 = INT64_MIN;
	int64_t x67 = INT64_MIN;
	volatile int64_t t12 = 20LL;

	t12 = ((x65/(x66&x67))-x68);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x69 = INT64_MIN;
	static int64_t t13 = -35681572450554370LL;

	t13 = ((x69/(x70&x71))-x72);

	if (t13 != -73786976294838207LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x74 = INT8_MIN;
	static int64_t x75 = INT64_MAX;
	int8_t x76 = -1;
	volatile int64_t t14 = -326197518554933LL;

	t14 = ((x73/(x74&x75))-x76);

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x77 = 2918U;
	volatile int64_t x78 = INT64_MIN;
	int64_t x80 = 149810317288974LL;
	int64_t t15 = -410575063262LL;

	t15 = ((x77/(x78&x79))-x80);

	if (t15 != -149810317288974LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = INT64_MAX;
	volatile uint16_t x87 = 10139U;
	int32_t x88 = INT32_MIN;

	t16 = ((x85/(x86&x87))-x88);

	if (t16 != 910592732620855LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x89 = INT64_MAX;
	uint8_t x90 = 14U;
	int32_t x91 = -127896;
	uint32_t x92 = UINT32_MAX;
	volatile int64_t t17 = -10624806390929874LL;

	t17 = ((x89/(x90&x91))-x92);

	if (t17 != 1152921500311879680LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x93 = 1U;
	int32_t x94 = INT32_MAX;
	int32_t x95 = INT32_MAX;
	static uint32_t x96 = UINT32_MAX;

	t18 = ((x93/(x94&x95))-x96);

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x98 = 33LL;
	volatile uint16_t x99 = UINT16_MAX;
	static volatile int64_t t19 = -204172552804LL;

	t19 = ((x97/(x98&x99))-x100);

	if (t19 != 2147483651LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x105 = INT32_MIN;
	static volatile int16_t x106 = INT16_MIN;
	volatile int64_t x107 = -1620138773997677LL;
	volatile int16_t x108 = INT16_MIN;
	int64_t t20 = -198828LL;

	t20 = ((x105/(x106&x107))-x108);

	if (t20 != 32768LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = 1;
	volatile int64_t x110 = -1LL;
	int16_t x111 = -1;
	volatile uint8_t x112 = UINT8_MAX;
	int64_t t21 = -105544645LL;

	t21 = ((x109/(x110&x111))-x112);

	if (t21 != -256LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x113 = INT64_MIN;
	volatile int16_t x115 = -1;
	static int8_t x116 = INT8_MAX;
	int64_t t22 = 3006060LL;

	t22 = ((x113/(x114&x115))-x116);

	if (t22 != -196241958230952803LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x118 = -2589498LL;
	static uint16_t x119 = 50U;
	volatile int64_t t23 = 439403049671324LL;

	t23 = ((x117/(x118&x119))-x120);

	if (t23 != -2147483647LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x126 = 280U;
	volatile uint64_t x127 = 141318075LLU;
	int16_t x128 = 1226;
	volatile uint64_t t24 = 2362286211904468791LLU;

	t24 = ((x125/(x126&x127))-x128);

	if (t24 != 65881228834675744LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x129 = INT64_MIN;
	static volatile int8_t x130 = INT8_MIN;
	static uint32_t x131 = 3323864U;
	int64_t x132 = -206765LL;
	volatile int64_t t25 = 4LL;

	t25 = ((x129/(x130&x131))-x132);

	if (t25 != -2774967792539LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x133 = UINT16_MAX;
	int32_t x134 = INT32_MIN;
	int64_t x135 = INT64_MIN;
	int8_t x136 = 25;
	int64_t t26 = -23LL;

	t26 = ((x133/(x134&x135))-x136);

	if (t26 != -25LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x137 = INT8_MAX;
	int8_t x138 = -1;
	static int16_t x139 = -7437;
	int8_t x140 = INT8_MAX;

	t27 = ((x137/(x138&x139))-x140);

	if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x141 = INT64_MAX;
	int64_t x142 = 241281913LL;
	volatile int64_t x143 = -1211996446914LL;
	uint32_t x144 = 356U;
	volatile int64_t t28 = 16730222020LL;

	t28 = ((x141/(x142&x143))-x144);

	if (t28 != 38227845111LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x145 = 4095U;
	int8_t x146 = -1;
	int64_t x147 = -1LL;

	t29 = ((x145/(x146&x147))-x148);

	if (t29 != -4097LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x149 = -292;
	volatile uint32_t x150 = UINT32_MAX;
	volatile int8_t x152 = INT8_MIN;
	static volatile uint32_t t30 = 90521001U;

	t30 = ((x149/(x150&x151))-x152);

	if (t30 != 1073741879U) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x153 = -2079456LL;
	static int8_t x154 = INT8_MIN;
	volatile int64_t x155 = INT64_MAX;
	int16_t x156 = -828;
	volatile int64_t t31 = -87207254777634713LL;

	t31 = ((x153/(x154&x155))-x156);

	if (t31 != 828LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x157 = INT8_MIN;
	int16_t x158 = INT16_MIN;
	static volatile int64_t x159 = -5826599588314727LL;
	static uint64_t x160 = 39606462605506LLU;

	t32 = ((x157/(x158&x159))-x160);

	if (t32 != 18446704467246946110LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x161 = 88043LLU;
	int32_t x162 = INT32_MAX;
	uint32_t x163 = 19265008U;
	int64_t x164 = -1LL;
	uint64_t t33 = 282424653953638819LLU;

	t33 = ((x161/(x162&x163))-x164);

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x165 = INT64_MAX;
	static uint16_t x166 = 86U;
	volatile uint16_t x167 = 6U;
	int16_t x168 = INT16_MIN;
	int64_t t34 = -244391788LL;

	t34 = ((x165/(x166&x167))-x168);

	if (t34 != 1537228672809162069LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x169 = -1;
	static uint16_t x170 = 13826U;
	uint32_t x171 = 15U;
	uint8_t x172 = UINT8_MAX;
	uint32_t t35 = 2U;

	t35 = ((x169/(x170&x171))-x172);

	if (t35 != 2147483392U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x173 = 6;
	int16_t x174 = -2381;
	uint64_t x175 = UINT64_MAX;
	int64_t x176 = INT64_MAX;
	static uint64_t t36 = 0LLU;

	t36 = ((x173/(x174&x175))-x176);

	if (t36 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x181 = INT64_MAX;
	int16_t x182 = INT16_MAX;
	int32_t x183 = -18251247;
	static int64_t x184 = 196970516LL;
	static volatile int64_t t37 = -3740885LL;

	t37 = ((x181/(x182&x183))-x184);

	if (t37 != 17435485695004485LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x185 = 1232307586527983689LLU;
	uint64_t x186 = 1544389253391LLU;
	int32_t x187 = INT32_MIN;
	int64_t x188 = INT64_MIN;
	uint64_t t38 = 1380LLU;

	t38 = ((x185/(x186&x187))-x188);

	if (t38 != 9223372036855573913LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x189 = INT32_MIN;
	int16_t x191 = INT16_MIN;
	static int16_t x192 = 1605;
	int32_t t39 = -10889049;

	t39 = ((x189/(x190&x191))-x192);

	if (t39 != 63931) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x193 = INT16_MAX;
	int16_t x194 = -1;
	static uint32_t x195 = UINT32_MAX;
	volatile uint32_t x196 = 16645U;
	uint32_t t40 = 266100009U;

	t40 = ((x193/(x194&x195))-x196);

	if (t40 != 4294950651U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x199 = UINT16_MAX;
	int32_t x200 = INT32_MAX;
	volatile int64_t t41 = 55562045LL;

	t41 = ((x197/(x198&x199))-x200);

	if (t41 != 281481419423753LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x201 = INT8_MAX;
	int32_t x202 = 1177;
	volatile uint8_t x203 = 3U;
	int8_t x204 = 35;
	int32_t t42 = -688954;

	t42 = ((x201/(x202&x203))-x204);

	if (t42 != 92) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x205 = 16973329847945LLU;
	uint64_t t43 = 1639388336LLU;

	t43 = ((x205/(x206&x207))-x208);

	if (t43 != 91324LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x213 = 34;
	static int16_t x214 = INT16_MIN;
	volatile uint64_t x216 = UINT64_MAX;

	t44 = ((x213/(x214&x215))-x216);

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x217 = INT8_MIN;
	int16_t x219 = 15370;
	static volatile uint16_t x220 = 4U;

	t45 = ((x217/(x218&x219))-x220);

	if (t45 != 299589U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x221 = 0U;
	int16_t x223 = -1;
	int32_t x224 = -71;
	static uint32_t t46 = 294U;

	t46 = ((x221/(x222&x223))-x224);

	if (t46 != 71U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x225 = 53U;
	int16_t x227 = INT16_MIN;
	static volatile int32_t t47 = 129301708;

	t47 = ((x225/(x226&x227))-x228);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x233 = -125;
	uint8_t x234 = UINT8_MAX;
	int16_t x235 = 85;
	volatile int8_t x236 = INT8_MIN;
	int32_t t48 = 0;

	t48 = ((x233/(x234&x235))-x236);

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x237 = UINT8_MAX;
	static int8_t x238 = INT8_MIN;
	volatile int8_t x239 = -1;
	int64_t x240 = INT64_MIN;
	static volatile int64_t t49 = INT64_MAX;

	t49 = ((x237/(x238&x239))-x240);

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x245 = 4249900127404910460LLU;
	uint8_t x246 = 4U;
	int64_t x247 = -1LL;
	uint8_t x248 = 3U;
	volatile uint64_t t50 = 17766743027LLU;

	t50 = ((x245/(x246&x247))-x248);

	if (t50 != 1062475031851227612LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x249 = -424;
	int16_t x251 = -1;
	int64_t x252 = INT64_MAX;

	t51 = ((x249/(x250&x251))-x252);

	if (t51 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x257 = -57;
	int64_t x258 = -16925088341LL;
	static int64_t x259 = 348343LL;
	int8_t x260 = 6;
	static volatile int64_t t52 = 494315133111LL;

	t52 = ((x257/(x258&x259))-x260);

	if (t52 != -6LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x261 = -1;
	int32_t x262 = -1;

	t53 = ((x261/(x262&x263))-x264);

	if (t53 != -219) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x265 = 33181346U;
	uint32_t x266 = 65198944U;
	int16_t x267 = INT16_MIN;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = ((x265/(x266&x267))-x268);

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x269 = UINT64_MAX;
	int64_t x270 = INT64_MAX;
	int16_t x272 = INT16_MAX;

	t55 = ((x269/(x270&x271))-x272);

	if (t55 != 18446744073709518851LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x273 = 213206749842981745LL;
	static int32_t x274 = -243831;
	int16_t x275 = -4151;
	int8_t x276 = -1;
	int64_t t56 = -59801382308746064LL;

	t56 = ((x273/(x274&x275))-x276);

	if (t56 != -874403787224LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x277 = -1;
	int8_t x278 = INT8_MAX;
	int16_t x279 = 81;
	int32_t x280 = -1;

	t57 = ((x277/(x278&x279))-x280);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x285 = -1;
	uint8_t x286 = UINT8_MAX;
	uint64_t x287 = UINT64_MAX;
	static int16_t x288 = -1;
	volatile uint64_t t58 = 705351850LLU;

	t58 = ((x285/(x286&x287))-x288);

	if (t58 != 72340172838076674LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x289 = -1;
	uint64_t x290 = UINT64_MAX;
	uint16_t x291 = 32U;
	volatile uint8_t x292 = 0U;
	volatile uint64_t t59 = 24532938285647LLU;

	t59 = ((x289/(x290&x291))-x292);

	if (t59 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x293 = INT32_MIN;
	int32_t x294 = -6050;
	static int16_t x295 = INT16_MIN;
	uint32_t x296 = 145118U;
	uint32_t t60 = 251680U;

	t60 = ((x293/(x294&x295))-x296);

	if (t60 != 4294887714U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x297 = 5U;
	int16_t x298 = 1;
	int64_t x300 = INT64_MAX;
	volatile int64_t t61 = -2796LL;

	t61 = ((x297/(x298&x299))-x300);

	if (t61 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x305 = -1LL;
	volatile int8_t x306 = -1;
	int32_t x307 = -1;
	uint32_t x308 = 8654622U;
	volatile int64_t t62 = 111476LL;

	t62 = ((x305/(x306&x307))-x308);

	if (t62 != -8654621LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x309 = INT32_MIN;
	int16_t x311 = INT16_MIN;
	static int16_t x312 = -1;
	int32_t t63 = -1;

	t63 = ((x309/(x310&x311))-x312);

	if (t63 != 65537) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x317 = -15;
	static int16_t x318 = INT16_MIN;
	int32_t x320 = INT32_MAX;
	int64_t t64 = -740411207087LL;

	t64 = ((x317/(x318&x319))-x320);

	if (t64 != -2147483647LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x321 = -1;
	uint16_t x323 = 3U;
	int16_t x324 = INT16_MIN;
	static int32_t t65 = 1217;

	t65 = ((x321/(x322&x323))-x324);

	if (t65 != 32768) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x325 = INT32_MAX;
	volatile int32_t x327 = INT32_MIN;
	uint16_t x328 = UINT16_MAX;

	t66 = ((x325/(x326&x327))-x328);

	if (t66 != -65535) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x329 = 1;
	int16_t x331 = 82;
	int64_t x332 = INT64_MAX;
	static volatile int64_t t67 = -233401872717LL;

	t67 = ((x329/(x330&x331))-x332);

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x337 = UINT32_MAX;
	int8_t x339 = 25;
	static volatile uint16_t x340 = UINT16_MAX;
	volatile int64_t t68 = -3040041581938564878LL;

	t68 = ((x337/(x338&x339))-x340);

	if (t68 != 171733156LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x353 = 1U;
	static uint64_t x354 = UINT64_MAX;
	static int16_t x355 = INT16_MAX;
	int16_t x356 = INT16_MIN;
	uint64_t t69 = 30074845310092LLU;

	t69 = ((x353/(x354&x355))-x356);

	if (t69 != 32768LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x357 = INT16_MIN;
	uint64_t x358 = UINT64_MAX;
	uint32_t x359 = UINT32_MAX;
	uint8_t x360 = 39U;

	t70 = ((x357/(x358&x359))-x360);

	if (t70 != 4294967257LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x361 = UINT64_MAX;
	int16_t x362 = 446;
	int8_t x363 = INT8_MIN;
	int32_t x364 = -3;
	volatile uint64_t t71 = 1LLU;

	t71 = ((x361/(x362&x363))-x364);

	if (t71 != 48038396025285293LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x365 = UINT32_MAX;
	volatile uint16_t x367 = 1U;
	int32_t x368 = INT32_MIN;
	static volatile uint32_t t72 = 89105550U;

	t72 = ((x365/(x366&x367))-x368);

	if (t72 != 2147483647U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x370 = UINT32_MAX;
	volatile int16_t x371 = -1;
	static uint64_t t73 = 213766988326LLU;

	t73 = ((x369/(x370&x371))-x372);

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x373 = 14LLU;
	int16_t x374 = INT16_MIN;
	int8_t x375 = INT8_MIN;
	int32_t x376 = INT32_MAX;
	uint64_t t74 = 8748019636333650468LLU;

	t74 = ((x373/(x374&x375))-x376);

	if (t74 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x377 = INT64_MIN;
	int64_t x378 = INT64_MAX;
	int64_t x379 = 12551491LL;

	t75 = ((x377/(x378&x379))-x380);

	if (t75 != -732695256298LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x385 = INT32_MAX;
	volatile int8_t x386 = -13;
	uint64_t x387 = 5957428677LLU;
	int64_t x388 = -1LL;
	volatile uint64_t t76 = 31753558LLU;

	t76 = ((x385/(x386&x387))-x388);

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x389 = INT64_MAX;
	uint8_t x390 = 15U;
	int16_t x392 = -1;
	static int64_t t77 = 47674998386554LL;

	t77 = ((x389/(x390&x391))-x392);

	if (t77 != 2305843009213693952LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x393 = 66760U;
	int64_t x394 = INT64_MAX;
	volatile uint32_t x396 = UINT32_MAX;

	t78 = ((x393/(x394&x395))-x396);

	if (t78 != -4294945042LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x406 = INT32_MIN;
	uint32_t x407 = UINT32_MAX;
	static int8_t x408 = 0;
	static volatile uint32_t t79 = 157U;

	t79 = ((x405/(x406&x407))-x408);

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x409 = -1;
	volatile uint8_t x410 = 46U;
	static int16_t x411 = 442;
	static int8_t x412 = INT8_MIN;
	int32_t t80 = -96009371;

	t80 = ((x409/(x410&x411))-x412);

	if (t80 != 128) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x417 = UINT64_MAX;
	int8_t x418 = INT8_MIN;
	static int16_t x419 = -1;
	volatile uint64_t t81 = 15919033050LLU;

	t81 = ((x417/(x418&x419))-x420);

	if (t81 != 2147483649LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x421 = 105815LLU;
	int16_t x422 = INT16_MIN;
	uint32_t x423 = 504708527U;
	uint32_t x424 = 122737U;
	uint64_t t82 = 0LLU;

	t82 = ((x421/(x422&x423))-x424);

	if (t82 != 18446744073709428879LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x425 = 13;
	int16_t x427 = -1;
	volatile int32_t x428 = -1081467;
	static volatile int32_t t83 = -149;

	t83 = ((x425/(x426&x427))-x428);

	if (t83 != 1081467) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x429 = 177241U;
	static int8_t x430 = INT8_MIN;
	int32_t x431 = INT32_MAX;
	static int8_t x432 = 1;
	volatile uint32_t t84 = UINT32_MAX;

	t84 = ((x429/(x430&x431))-x432);

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x433 = INT64_MIN;
	int8_t x434 = INT8_MIN;
	int64_t x435 = -1LL;
	uint64_t t85 = 1LLU;

	t85 = ((x433/(x434&x435))-x436);

	if (t85 != 72057594037906128LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x438 = INT64_MAX;
	int16_t x439 = -14221;
	int32_t x440 = -461205083;
	volatile int64_t t86 = -29770685LL;

	t86 = ((x437/(x438&x439))-x440);

	if (t86 != 461205083LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x441 = -1LL;
	int16_t x443 = INT16_MIN;
	int32_t x444 = -1;

	t87 = ((x441/(x442&x443))-x444);

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x445 = INT32_MAX;
	int16_t x446 = INT16_MAX;
	int8_t x447 = -1;
	volatile int32_t t88 = 5564948;

	t88 = ((x445/(x446&x447))-x448);

	if (t88 != 47296) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x449 = 30497401127966LL;
	static uint8_t x450 = 31U;
	uint16_t x451 = UINT16_MAX;
	int32_t x452 = -1;
	volatile int64_t t89 = -75955812LL;

	t89 = ((x449/(x450&x451))-x452);

	if (t89 != 983787133161LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x457 = UINT16_MAX;
	int64_t x458 = INT64_MAX;
	int8_t x460 = INT8_MIN;
	volatile int64_t t90 = -22LL;

	t90 = ((x457/(x458&x459))-x460);

	if (t90 != 6085LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x465 = 10514LL;
	int64_t x466 = -1LL;
	int8_t x467 = INT8_MAX;
	static int8_t x468 = INT8_MIN;
	int64_t t91 = -28874401LL;

	t91 = ((x465/(x466&x467))-x468);

	if (t91 != 210LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x473 = 2U;
	int32_t x474 = 575763941;
	static uint16_t x475 = UINT16_MAX;
	uint64_t x476 = 3451930231916LLU;
	static volatile uint64_t t92 = 480LLU;

	t92 = ((x473/(x474&x475))-x476);

	if (t92 != 18446740621779319700LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x477 = -1;
	static volatile uint8_t x478 = 15U;
	static int8_t x479 = 15;
	uint16_t x480 = 24U;
	volatile int32_t t93 = 8937;

	t93 = ((x477/(x478&x479))-x480);

	if (t93 != -24) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x481 = INT32_MIN;
	int16_t x482 = INT16_MIN;
	int16_t x483 = -1;
	volatile uint8_t x484 = 9U;
	static volatile int32_t t94 = -32;

	t94 = ((x481/(x482&x483))-x484);

	if (t94 != 65527) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x489 = -1LL;
	volatile uint8_t x491 = 17U;
	volatile int8_t x492 = 6;
	int64_t t95 = 485639956897LL;

	t95 = ((x489/(x490&x491))-x492);

	if (t95 != -6LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x493 = -1;
	int8_t x494 = -1;
	static volatile int64_t x495 = -1LL;
	static volatile uint64_t t96 = 13775847347LLU;

	t96 = ((x493/(x494&x495))-x496);

	if (t96 != 18421955251757602572LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x497 = 52U;
	uint32_t x498 = 108U;
	int8_t x499 = -1;
	static int16_t x500 = INT16_MIN;

	t97 = ((x497/(x498&x499))-x500);

	if (t97 != 32768U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x502 = UINT64_MAX;
	static int32_t x503 = -13916099;
	static uint64_t x504 = 97884486647937LLU;
	uint64_t t98 = 60115206420LLU;

	t98 = ((x501/(x502&x503))-x504);

	if (t98 != 18446646189222903680LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x505 = -1;
	int64_t x507 = INT64_MAX;
	volatile int64_t t99 = 177387527098LL;

	t99 = ((x505/(x506&x507))-x508);

	if (t99 != -3250LL) { NG(); } else { ; }
	
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

