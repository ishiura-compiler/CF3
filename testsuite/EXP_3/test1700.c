#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x10 = -745;
uint16_t x22 = UINT16_MAX;
int32_t t7 = 177419703;
volatile uint16_t x51 = 978U;
volatile int32_t t9 = -19;
uint32_t x67 = 4656U;
int32_t t12 = 104973;
uint16_t x76 = UINT16_MAX;
static int32_t t14 = -2747;
volatile int32_t t15 = 19907876;
int16_t x90 = INT16_MIN;
volatile uint64_t x92 = 63LLU;
uint64_t x93 = 3LLU;
static int32_t x107 = -1;
volatile uint32_t x111 = 2748U;
volatile int8_t x112 = -2;
volatile int32_t t24 = -11616113;
uint8_t x133 = UINT8_MAX;
volatile uint32_t x136 = UINT32_MAX;
int32_t t27 = 3168509;
int16_t x140 = INT16_MAX;
int32_t x153 = 3799872;
uint32_t x159 = 208164U;
int32_t x164 = INT32_MAX;
int8_t x167 = -1;
volatile int32_t t34 = -882041;
int32_t x174 = INT32_MAX;
int32_t t35 = -3715172;
volatile uint64_t x178 = UINT64_MAX;
uint32_t x181 = 5532324U;
static int16_t x182 = INT16_MIN;
uint64_t x187 = 492LLU;
int32_t x188 = -122330760;
int16_t x191 = INT16_MIN;
uint16_t x193 = 3438U;
static uint8_t x198 = 0U;
int32_t x199 = -1;
volatile int32_t t42 = 4434863;
static uint32_t x209 = 12U;
int8_t x211 = INT8_MIN;
volatile uint16_t x212 = 1U;
int32_t x214 = -1;
static int16_t x222 = INT16_MIN;
uint64_t x224 = UINT64_MAX;
static volatile int32_t x225 = 4;
volatile int32_t x227 = INT32_MIN;
int32_t t48 = 1237;
int32_t t49 = 91;
static int8_t x246 = INT8_MIN;
volatile int32_t t51 = 23409;
volatile int8_t x255 = INT8_MAX;
int16_t x258 = -1;
static uint8_t x293 = 16U;
static int8_t x294 = -5;
int32_t x300 = INT32_MIN;
uint8_t x305 = 0U;
static int32_t t64 = -245515;
uint64_t x334 = 7696769636634LLU;
static uint16_t x335 = UINT16_MAX;
int32_t t66 = 3326;
int32_t x337 = 1507618;
int16_t x339 = -1;
int32_t x341 = -1;
int32_t x342 = -1220;
static int32_t x344 = -1;
volatile int32_t t69 = -2;
int32_t x353 = INT32_MIN;
int16_t x354 = INT16_MAX;
int8_t x358 = INT8_MAX;
static int8_t x361 = INT8_MIN;
int32_t x364 = INT32_MIN;
int8_t x371 = -1;
uint8_t x372 = 1U;
int32_t x377 = -1;
int16_t x378 = INT16_MAX;
int32_t x380 = 4830;
int8_t x381 = INT8_MAX;
uint8_t x382 = 126U;
int64_t x384 = 15675664296415741LL;
static uint64_t x391 = 0LLU;
volatile uint64_t x396 = 1715614067936LLU;
static int16_t x400 = -1;
int64_t x404 = 2LL;
static int32_t t83 = 0;
int64_t x411 = -3429404649019802LL;
static volatile uint16_t x439 = 0U;
static int8_t x446 = -1;
int32_t t91 = 1590455;
int32_t x460 = INT32_MIN;
static volatile int32_t t94 = -1235;
uint32_t x464 = 172112U;
int16_t x473 = INT16_MIN;
static int64_t x474 = 2622453876800253LL;
uint64_t x476 = UINT64_MAX;
int16_t x479 = 9;


void f0(void) {
	volatile uint64_t x5 = 5096678757086402114LLU;
	int16_t x6 = -1;
	static int32_t x7 = INT32_MAX;
	int32_t x8 = -1;
	int32_t t0 = -44100003;

	t0 = ((x5+x6)<=(x7&x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 7LLU;
	int32_t x11 = -394565;
	volatile int32_t x12 = INT32_MAX;
	int32_t t1 = 137;

	t1 = ((x9+x10)<=(x11&x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = 5;
	volatile int16_t x14 = INT16_MIN;
	uint32_t x15 = UINT32_MAX;
	volatile int16_t x16 = 39;
	static volatile int32_t t2 = -8;

	t2 = ((x13+x14)<=(x15&x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x21 = 27U;
	static int8_t x23 = INT8_MIN;
	uint32_t x24 = UINT32_MAX;
	static int32_t t3 = -28132588;

	t3 = ((x21+x22)<=(x23&x24));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MAX;
	volatile int16_t x26 = INT16_MAX;
	static volatile uint32_t x27 = 1063U;
	int16_t x28 = -132;
	volatile int32_t t4 = -3531;

	t4 = ((x25+x26)<=(x27&x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = -1;
	uint8_t x30 = 17U;
	static int64_t x31 = -1LL;
	uint32_t x32 = UINT32_MAX;
	int32_t t5 = 52391662;

	t5 = ((x29+x30)<=(x31&x32));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x37 = -715250488;
	static int8_t x38 = -2;
	static volatile int16_t x39 = INT16_MIN;
	uint64_t x40 = 2LLU;
	volatile int32_t t6 = 1;

	t6 = ((x37+x38)<=(x39&x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = -1LL;
	volatile int8_t x42 = -1;
	static uint16_t x43 = 10U;
	volatile int32_t x44 = -6108;

	t7 = ((x41+x42)<=(x43&x44));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x45 = 53240U;
	static int16_t x46 = -1;
	static int8_t x47 = INT8_MIN;
	int8_t x48 = INT8_MIN;
	int32_t t8 = -254238;

	t8 = ((x45+x46)<=(x47&x48));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x49 = 3U;
	volatile uint64_t x50 = UINT64_MAX;
	int16_t x52 = INT16_MIN;

	t9 = ((x49+x50)<=(x51&x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x53 = -15546560535LL;
	int8_t x54 = INT8_MIN;
	volatile uint8_t x55 = UINT8_MAX;
	volatile int8_t x56 = INT8_MIN;
	int32_t t10 = 13;

	t10 = ((x53+x54)<=(x55&x56));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x61 = 834U;
	static uint8_t x62 = 3U;
	static int8_t x63 = INT8_MAX;
	uint16_t x64 = 457U;
	volatile int32_t t11 = 41;

	t11 = ((x61+x62)<=(x63&x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x65 = -1;
	int8_t x66 = INT8_MAX;
	int64_t x68 = INT64_MAX;

	t12 = ((x65+x66)<=(x67&x68));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x69 = -1406;
	volatile int16_t x70 = INT16_MIN;
	static int16_t x71 = INT16_MAX;
	static int8_t x72 = INT8_MIN;
	volatile int32_t t13 = -1;

	t13 = ((x69+x70)<=(x71&x72));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x73 = INT8_MIN;
	int64_t x74 = -12335557170LL;
	int8_t x75 = INT8_MAX;

	t14 = ((x73+x74)<=(x75&x76));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x77 = UINT8_MAX;
	static int8_t x78 = INT8_MIN;
	static int8_t x79 = INT8_MIN;
	static uint32_t x80 = 642264861U;

	t15 = ((x77+x78)<=(x79&x80));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x81 = INT8_MAX;
	int32_t x82 = -1;
	int64_t x83 = INT64_MAX;
	static int16_t x84 = -1;
	volatile int32_t t16 = 25;

	t16 = ((x81+x82)<=(x83&x84));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x85 = UINT8_MAX;
	int8_t x86 = 11;
	volatile int16_t x87 = 0;
	volatile uint8_t x88 = 3U;
	int32_t t17 = 72387440;

	t17 = ((x85+x86)<=(x87&x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = 373951300373124146LL;
	int32_t x91 = INT32_MIN;
	int32_t t18 = 1;

	t18 = ((x89+x90)<=(x91&x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x94 = 249U;
	static int32_t x95 = INT32_MIN;
	uint8_t x96 = UINT8_MAX;
	int32_t t19 = -2;

	t19 = ((x93+x94)<=(x95&x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x105 = -1;
	volatile int16_t x106 = INT16_MIN;
	int8_t x108 = -1;
	static int32_t t20 = 1;

	t20 = ((x105+x106)<=(x107&x108));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x109 = INT64_MAX;
	int16_t x110 = -1060;
	static volatile int32_t t21 = 0;

	t21 = ((x109+x110)<=(x111&x112));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = -16;
	static int64_t x114 = INT64_MAX;
	int8_t x115 = -1;
	int8_t x116 = INT8_MAX;
	volatile int32_t t22 = -9;

	t22 = ((x113+x114)<=(x115&x116));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x117 = 3U;
	uint8_t x118 = 9U;
	int16_t x119 = INT16_MIN;
	int8_t x120 = INT8_MIN;
	volatile int32_t t23 = -866581865;

	t23 = ((x117+x118)<=(x119&x120));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x121 = INT32_MIN;
	volatile uint32_t x122 = UINT32_MAX;
	int8_t x123 = -48;
	static int64_t x124 = -40424959LL;

	t24 = ((x121+x122)<=(x123&x124));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x125 = 3U;
	int32_t x126 = -1;
	volatile int32_t x127 = INT32_MIN;
	volatile uint8_t x128 = 33U;
	volatile int32_t t25 = -2;

	t25 = ((x125+x126)<=(x127&x128));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x129 = 1697;
	volatile int16_t x130 = INT16_MIN;
	static uint32_t x131 = UINT32_MAX;
	int8_t x132 = INT8_MIN;
	static int32_t t26 = -191439;

	t26 = ((x129+x130)<=(x131&x132));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x134 = INT16_MIN;
	uint64_t x135 = UINT64_MAX;

	t27 = ((x133+x134)<=(x135&x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x137 = 1025U;
	int32_t x138 = INT32_MIN;
	uint8_t x139 = 2U;
	volatile int32_t t28 = 32075956;

	t28 = ((x137+x138)<=(x139&x140));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x145 = 14987198610LLU;
	volatile int32_t x146 = -6792;
	int64_t x147 = -1LL;
	uint64_t x148 = 295516098805491LLU;
	volatile int32_t t29 = -15322;

	t29 = ((x145+x146)<=(x147&x148));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x154 = 10349;
	int16_t x155 = -449;
	static int16_t x156 = -1;
	static int32_t t30 = 11;

	t30 = ((x153+x154)<=(x155&x156));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x157 = -1;
	static int32_t x158 = -1318;
	uint16_t x160 = 1095U;
	volatile int32_t t31 = 221270;

	t31 = ((x157+x158)<=(x159&x160));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x161 = -994099988786172406LL;
	int16_t x162 = INT16_MIN;
	uint32_t x163 = UINT32_MAX;
	volatile int32_t t32 = -171576064;

	t32 = ((x161+x162)<=(x163&x164));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x165 = -8;
	static int16_t x166 = -31;
	int16_t x168 = INT16_MAX;
	static int32_t t33 = -14;

	t33 = ((x165+x166)<=(x167&x168));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x169 = 1224U;
	int32_t x170 = -1764084;
	uint32_t x171 = 342224783U;
	uint8_t x172 = 8U;

	t34 = ((x169+x170)<=(x171&x172));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x173 = -1;
	volatile int8_t x175 = INT8_MIN;
	int8_t x176 = 10;

	t35 = ((x173+x174)<=(x175&x176));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x177 = -1LL;
	int16_t x179 = -575;
	int32_t x180 = INT32_MIN;
	volatile int32_t t36 = -9677301;

	t36 = ((x177+x178)<=(x179&x180));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x183 = 55U;
	int32_t x184 = -1;
	volatile int32_t t37 = 98079355;

	t37 = ((x181+x182)<=(x183&x184));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x185 = -1;
	int16_t x186 = INT16_MAX;
	int32_t t38 = 1052574;

	t38 = ((x185+x186)<=(x187&x188));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x189 = -1;
	static int8_t x190 = 1;
	int8_t x192 = -38;
	int32_t t39 = -139;

	t39 = ((x189+x190)<=(x191&x192));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x194 = INT16_MIN;
	int32_t x195 = INT32_MIN;
	uint8_t x196 = 14U;
	int32_t t40 = 1;

	t40 = ((x193+x194)<=(x195&x196));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x197 = 1960284050169755733LLU;
	int8_t x200 = INT8_MIN;
	static volatile int32_t t41 = 20044725;

	t41 = ((x197+x198)<=(x199&x200));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x201 = 0;
	static int64_t x202 = -44543155155602LL;
	int32_t x203 = INT32_MIN;
	int64_t x204 = INT64_MIN;

	t42 = ((x201+x202)<=(x203&x204));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x210 = INT32_MIN;
	static int32_t t43 = 1;

	t43 = ((x209+x210)<=(x211&x212));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x213 = 254U;
	int16_t x215 = INT16_MIN;
	int32_t x216 = -9124784;
	static volatile int32_t t44 = -13299;

	t44 = ((x213+x214)<=(x215&x216));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x217 = UINT16_MAX;
	volatile int8_t x218 = -1;
	int16_t x219 = 44;
	volatile uint64_t x220 = 155112395522716LLU;
	static volatile int32_t t45 = -24;

	t45 = ((x217+x218)<=(x219&x220));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x221 = 25165378715839389LLU;
	int32_t x223 = 7;
	int32_t t46 = -49823479;

	t46 = ((x221+x222)<=(x223&x224));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x226 = UINT64_MAX;
	volatile int16_t x228 = 13975;
	volatile int32_t t47 = -55540730;

	t47 = ((x225+x226)<=(x227&x228));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x233 = INT16_MIN;
	uint32_t x234 = 292980349U;
	static int32_t x235 = 1140812;
	int8_t x236 = INT8_MIN;

	t48 = ((x233+x234)<=(x235&x236));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x237 = INT8_MIN;
	uint8_t x238 = 101U;
	int8_t x239 = INT8_MAX;
	int8_t x240 = INT8_MIN;

	t49 = ((x237+x238)<=(x239&x240));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x245 = UINT8_MAX;
	static uint16_t x247 = 5117U;
	int8_t x248 = INT8_MIN;
	int32_t t50 = -998109;

	t50 = ((x245+x246)<=(x247&x248));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x249 = INT64_MIN;
	static int32_t x250 = 2286;
	int64_t x251 = INT64_MIN;
	int16_t x252 = INT16_MIN;

	t51 = ((x249+x250)<=(x251&x252));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x253 = 14159213U;
	int8_t x254 = -1;
	static volatile uint8_t x256 = UINT8_MAX;
	volatile int32_t t52 = 338285;

	t52 = ((x253+x254)<=(x255&x256));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x257 = INT16_MIN;
	int8_t x259 = INT8_MIN;
	int16_t x260 = -1;
	static int32_t t53 = -7131024;

	t53 = ((x257+x258)<=(x259&x260));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x265 = INT32_MIN;
	static int64_t x266 = -1LL;
	int16_t x267 = INT16_MIN;
	static int64_t x268 = -691LL;
	int32_t t54 = -7129;

	t54 = ((x265+x266)<=(x267&x268));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x269 = -1LL;
	volatile uint32_t x270 = 0U;
	uint32_t x271 = 77236U;
	int8_t x272 = INT8_MIN;
	int32_t t55 = 11362;

	t55 = ((x269+x270)<=(x271&x272));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x273 = 2;
	int16_t x274 = INT16_MIN;
	uint16_t x275 = UINT16_MAX;
	volatile uint64_t x276 = 58950292165468LLU;
	int32_t t56 = -260535;

	t56 = ((x273+x274)<=(x275&x276));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x281 = INT16_MAX;
	int32_t x282 = -1;
	int8_t x283 = INT8_MIN;
	uint8_t x284 = 84U;
	volatile int32_t t57 = -1940950;

	t57 = ((x281+x282)<=(x283&x284));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x295 = 0U;
	static int64_t x296 = INT64_MIN;
	int32_t t58 = 8925791;

	t58 = ((x293+x294)<=(x295&x296));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x297 = 57623648136235729LLU;
	uint8_t x298 = 92U;
	int64_t x299 = INT64_MAX;
	volatile int32_t t59 = 16;

	t59 = ((x297+x298)<=(x299&x300));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x306 = INT64_MIN;
	int32_t x307 = -3701558;
	int8_t x308 = INT8_MAX;
	static int32_t t60 = 930;

	t60 = ((x305+x306)<=(x307&x308));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x309 = 1U;
	int32_t x310 = -1;
	int16_t x311 = INT16_MIN;
	int32_t x312 = INT32_MIN;
	volatile int32_t t61 = 4883;

	t61 = ((x309+x310)<=(x311&x312));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x313 = UINT64_MAX;
	volatile int32_t x314 = -1;
	int8_t x315 = INT8_MAX;
	int16_t x316 = -1;
	int32_t t62 = 3;

	t62 = ((x313+x314)<=(x315&x316));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x321 = 474394658;
	int16_t x322 = -1;
	static uint64_t x323 = 151503294375736LLU;
	int8_t x324 = INT8_MAX;
	volatile int32_t t63 = -1290546;

	t63 = ((x321+x322)<=(x323&x324));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x325 = 762U;
	uint64_t x326 = 296760968877LLU;
	volatile int8_t x327 = INT8_MIN;
	int16_t x328 = -25;

	t64 = ((x325+x326)<=(x327&x328));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x329 = UINT8_MAX;
	uint64_t x330 = UINT64_MAX;
	int64_t x331 = -1LL;
	uint8_t x332 = 88U;
	volatile int32_t t65 = -8;

	t65 = ((x329+x330)<=(x331&x332));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x333 = INT32_MIN;
	int8_t x336 = INT8_MIN;

	t66 = ((x333+x334)<=(x335&x336));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x338 = INT8_MIN;
	int8_t x340 = INT8_MAX;
	volatile int32_t t67 = 51;

	t67 = ((x337+x338)<=(x339&x340));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x343 = -1LL;
	static volatile int32_t t68 = 379278316;

	t68 = ((x341+x342)<=(x343&x344));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x349 = 4U;
	volatile int16_t x350 = 4;
	int16_t x351 = -1;
	int16_t x352 = -1;

	t69 = ((x349+x350)<=(x351&x352));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x355 = -6;
	int64_t x356 = INT64_MIN;
	int32_t t70 = -243;

	t70 = ((x353+x354)<=(x355&x356));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x357 = -1;
	static int8_t x359 = -1;
	volatile int32_t x360 = 381;
	volatile int32_t t71 = -5153919;

	t71 = ((x357+x358)<=(x359&x360));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x362 = 8LLU;
	volatile uint32_t x363 = 41760396U;
	int32_t t72 = 0;

	t72 = ((x361+x362)<=(x363&x364));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x365 = 1213147155009859287LLU;
	int32_t x366 = INT32_MIN;
	int8_t x367 = -1;
	int32_t x368 = INT32_MIN;
	static int32_t t73 = 410;

	t73 = ((x365+x366)<=(x367&x368));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x369 = INT16_MIN;
	uint8_t x370 = UINT8_MAX;
	static int32_t t74 = -7;

	t74 = ((x369+x370)<=(x371&x372));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x373 = INT64_MIN;
	volatile uint16_t x374 = UINT16_MAX;
	int32_t x375 = -1;
	int16_t x376 = INT16_MIN;
	int32_t t75 = -1;

	t75 = ((x373+x374)<=(x375&x376));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x379 = INT32_MIN;
	volatile int32_t t76 = 1028747;

	t76 = ((x377+x378)<=(x379&x380));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x383 = INT16_MIN;
	volatile int32_t t77 = 0;

	t77 = ((x381+x382)<=(x383&x384));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x385 = INT64_MIN;
	volatile uint16_t x386 = 12175U;
	int16_t x387 = -12;
	int32_t x388 = INT32_MIN;
	volatile int32_t t78 = -79;

	t78 = ((x385+x386)<=(x387&x388));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x389 = UINT64_MAX;
	int32_t x390 = INT32_MIN;
	volatile int8_t x392 = 0;
	int32_t t79 = 242097;

	t79 = ((x389+x390)<=(x391&x392));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x393 = -1LL;
	uint32_t x394 = UINT32_MAX;
	int16_t x395 = INT16_MIN;
	static int32_t t80 = -6939648;

	t80 = ((x393+x394)<=(x395&x396));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x397 = 3;
	volatile uint64_t x398 = UINT64_MAX;
	uint8_t x399 = UINT8_MAX;
	volatile int32_t t81 = 1128;

	t81 = ((x397+x398)<=(x399&x400));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x401 = 1U;
	static int16_t x402 = -1;
	uint16_t x403 = UINT16_MAX;
	int32_t t82 = 648;

	t82 = ((x401+x402)<=(x403&x404));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x405 = -126;
	volatile int8_t x406 = -1;
	static uint16_t x407 = 9061U;
	static volatile int16_t x408 = 84;

	t83 = ((x405+x406)<=(x407&x408));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x409 = INT16_MAX;
	int16_t x410 = 1;
	static uint16_t x412 = 37U;
	int32_t t84 = 1;

	t84 = ((x409+x410)<=(x411&x412));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x413 = INT16_MAX;
	volatile int16_t x414 = INT16_MAX;
	int32_t x415 = -1286703;
	int32_t x416 = -1;
	volatile int32_t t85 = -83720905;

	t85 = ((x413+x414)<=(x415&x416));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x417 = INT16_MAX;
	uint32_t x418 = 2U;
	uint32_t x419 = UINT32_MAX;
	uint8_t x420 = 0U;
	volatile int32_t t86 = -268747830;

	t86 = ((x417+x418)<=(x419&x420));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x421 = 1623480U;
	int16_t x422 = INT16_MIN;
	volatile int64_t x423 = INT64_MIN;
	int8_t x424 = INT8_MAX;
	volatile int32_t t87 = 219711;

	t87 = ((x421+x422)<=(x423&x424));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x425 = INT16_MIN;
	static uint16_t x426 = UINT16_MAX;
	uint8_t x427 = UINT8_MAX;
	int32_t x428 = INT32_MAX;
	int32_t t88 = 4090339;

	t88 = ((x425+x426)<=(x427&x428));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x437 = UINT64_MAX;
	int8_t x438 = -37;
	int64_t x440 = INT64_MIN;
	int32_t t89 = -6;

	t89 = ((x437+x438)<=(x439&x440));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x441 = 3262916;
	uint64_t x442 = 5370483141909813408LLU;
	static uint8_t x443 = 115U;
	int64_t x444 = -786LL;
	volatile int32_t t90 = -1190772;

	t90 = ((x441+x442)<=(x443&x444));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x445 = INT64_MAX;
	int64_t x447 = -1LL;
	uint8_t x448 = 1U;

	t91 = ((x445+x446)<=(x447&x448));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x449 = 51LL;
	volatile int64_t x450 = -1LL;
	int16_t x451 = 5;
	int16_t x452 = INT16_MAX;
	int32_t t92 = -14;

	t92 = ((x449+x450)<=(x451&x452));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x453 = -1;
	uint16_t x454 = UINT16_MAX;
	static volatile uint16_t x455 = UINT16_MAX;
	uint64_t x456 = UINT64_MAX;
	static int32_t t93 = -1424;

	t93 = ((x453+x454)<=(x455&x456));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x457 = 1706;
	static int8_t x458 = -28;
	static int8_t x459 = INT8_MIN;

	t94 = ((x457+x458)<=(x459&x460));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x461 = INT16_MAX;
	volatile uint8_t x462 = UINT8_MAX;
	int8_t x463 = INT8_MAX;
	int32_t t95 = 4;

	t95 = ((x461+x462)<=(x463&x464));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x465 = INT8_MIN;
	uint64_t x466 = 431984983346068532LLU;
	int32_t x467 = INT32_MAX;
	uint16_t x468 = 37U;
	int32_t t96 = 5;

	t96 = ((x465+x466)<=(x467&x468));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x469 = UINT8_MAX;
	static int64_t x470 = INT64_MIN;
	int32_t x471 = INT32_MIN;
	uint8_t x472 = 1U;
	int32_t t97 = 71063943;

	t97 = ((x469+x470)<=(x471&x472));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x475 = 91662979LLU;
	volatile int32_t t98 = -107239;

	t98 = ((x473+x474)<=(x475&x476));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x477 = INT32_MAX;
	volatile int8_t x478 = INT8_MIN;
	static int64_t x480 = -1LL;
	int32_t t99 = 1;

	t99 = ((x477+x478)<=(x479&x480));

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

